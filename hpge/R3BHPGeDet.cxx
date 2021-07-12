// -----------------------------------------------------------------------
// -----                   EnsarHPGeDet source file                    -----
// -----               Created 11/09/12  by P.Cabanelas              -----
// -----------------------------------------------------------------------
#include <iostream>
#include <stdlib.h>

#include "R3BHPGeDet.h"

//#include "R3BHPGeDetPoint.h"
//#include "R3BHPGeDetHit.h"
#include "R3BMCStack.h" //changed from "EnsarMCStack"

#include "FairGeoInterface.h"
#include "FairGeoLoader.h"
#include "FairGeoNode.h"
#include "FairGeoRootBuilder.h"
#include "FairRootManager.h"
#include "FairRuntimeDb.h"
#include "FairRun.h"
#include "FairVolume.h"

#include "TClonesArray.h"
#include "TGeoMCGeometry.h"
#include "TParticle.h"
#include "TVirtualMC.h"
#include "TObjArray.h"
#include "TMCProcess.h"

// includes for modeling
#include "TGeoManager.h"
#include "TParticle.h"
#include "TVirtualMC.h"
#include "TVirtualMCStack.h"
#include "TGeoMatrix.h"
#include "TGeoMaterial.h"
#include "TGeoMedium.h"
#include "TGeoBBox.h"
#include "TGeoPgon.h"
#include "TGeoSphere.h"
#include "TGeoArb8.h"
#include "TGeoBoolNode.h"
#include "TGeoCompositeShape.h"

// -----   Default constructor   -------------------------------------------
R3BHPGeDet::R3BHPGeDet()
    : R3BDetector("R3BHPGeDet", kTRUE, kHPGE) //changed from "EnsarDetector" to R3BDetector
{
  ResetParameters();
  fPointCollection = new TClonesArray("R3BHPGeDetPoint");
  fHitCollection   = new TClonesArray("R3BHPGeDetHit");
  fPosIndex = 0;
  kGeoSaved = kFALSE;
  fVerboseLevel = 1;
  fGeometryVersion = 1;
}
// -------------------------------------------------------------------------



// -----   Standard constructor   ------------------------------------------
R3BHPGeDet::R3BHPGeDet(const TString& geoFile, Bool_t active)
    : R3BDetector(geoFile, active, kHPGE) //changed from "R3BDetector" to R3BDetector
{
  ResetParameters();
  fPointCollection = new TClonesArray("R3BHPGeDetPoint");
  fHitCollection = new TClonesArray("R3BHPGeDetHit");
  fPosIndex = 0;
  kGeoSaved = kFALSE;
  fVerboseLevel = 1;
  fGeometryVersion = 1;
}
// -------------------------------------------------------------------------



// -----   Destructor   ----------------------------------------------------
R3BHPGeDet::~R3BHPGeDet()
{
  if (fPointCollection) {
    fPointCollection->Delete();
    delete fPointCollection;
  }
  if (fHitCollection) {
    fHitCollection->Delete();
    delete fHitCollection;
  }
}
// -------------------------------------------------------------------------
void R3BHPGeDet::Initialize()
{
  FairDetector::Initialize();

  LOG(INFO) << "HPGeDetector: initialisation";
  LOG(DEBUG) << "-I- HPGeDetector: Vol (McId) def";

  TGeoVolume *vol = gGeoManager->GetVolume("CtnWorld");
  vol->SetVisibility(kFALSE);
}
//-------------------------------------------------------------------------



// -----   Public method ProcessHits  --------------------------------------
Bool_t R3BHPGeDet::ProcessHits(FairVolume* vol)
{

  if ( gMC->IsTrackEntering() ) {
    fELoss  = 0.;
    fNSteps  = 0;
    fTime   = gMC->TrackTime() * 1.0e09;
    fLength = gMC->TrackLength();
    gMC->TrackPosition(fPosIn);
    gMC->TrackMomentum(fMomIn);
    fEinc   = gMC->Etot();         //Relativistic mass!
  }

  // Sum energy loss for all steps in the active volume
  fELoss += gMC->Edep();
  fNSteps++;

  // Set additional parameters at exit of active volume. Create R3BHPGeDetPoint.
  if ( gMC->IsTrackExiting()    ||
       gMC->IsTrackStop()       ||
       gMC->IsTrackDisappeared()   ) {

    fTrackID        = gMC->GetStack()->GetCurrentTrackNumber();
    fParentTrackID  = gMC->GetStack()->GetCurrentParentTrackNumber();
    fVolumeID       = vol->getMCid();
    fTrackPID       = gMC->TrackPid();
    fUniqueID       = gMC->GetStack()->GetCurrentTrack()->GetUniqueID();

    gMC->TrackPosition(fPosOut);
    gMC->TrackMomentum(fMomOut);

    if (fELoss == 0. ) return kFALSE;

    if (gMC->IsTrackExiting()) {
      const Double_t* oldpos;
      const Double_t* olddirection;
      Double_t newpos[3];
      Double_t newdirection[3];
      Double_t safety;

      gGeoManager->FindNode(fPosOut.X(),fPosOut.Y(),fPosOut.Z());
      oldpos = gGeoManager->GetCurrentPoint();
      olddirection = gGeoManager->GetCurrentDirection();

      for (Int_t i=0; i<3; i++) {
        newdirection[i] = -1*olddirection[i];
      }

      gGeoManager->SetCurrentDirection(newdirection);
      safety = gGeoManager->GetSafeDistance();

      gGeoManager->SetCurrentDirection(-newdirection[0],-newdirection[1],-newdirection[2]);

      for (Int_t i=0; i<3; i++) {
        newpos[i] = oldpos[i] - (3*safety*olddirection[i]);
      }

      fPosOut.SetX(newpos[0]);
      fPosOut.SetY(newpos[1]);
      fPosOut.SetZ(newpos[2]);
    }

   AddPoint(fTrackID, fVolumeID, fVolumeID,
           TVector3(fPosIn.X(),   fPosIn.Y(),   fPosIn.Z()),
           TVector3(fPosOut.X(),  fPosOut.Y(),  fPosOut.Z()),
           TVector3(fMomIn.Px(),  fMomIn.Py(),  fMomIn.Pz()),
           TVector3(fMomOut.Px(), fMomOut.Py(), fMomOut.Pz()),
           fTime, fLength, fELoss);

    // Increment number of HPGeDetPoints for this track
    R3BStack* stack = (R3BStack*) gMC->GetStack(); //Changed from EnsarMCStack to R3BStack the class defined in R3BMCStack.h
    stack->AddPoint(kHPGE);

    //Adding Hit support
    Int_t nHits = fHitCollection->GetEntriesFast();
    Bool_t existHit = 0;

   if (nHits==0) AddHit(fELoss, fTime, fNSteps,
				       fEinc, fTrackID, fVolumeID,
				       fParentTrackID, fTrackPID, fUniqueID);
    else {
      for (Int_t i=0; i<nHits; i++) {
        ((R3BHPGeDetHit *)(fHitCollection->At(i)))->AddEnergy(fELoss);
        if ( ((R3BHPGeDetHit *)(fHitCollection->At(i)))->GetTime() > fTime ) {
          ((R3BHPGeDetHit *)(fHitCollection->At(i)))->SetTime(fTime);
        }
        existHit=1; //to avoid the creation of a new Hit
        break;
      }
      if (!existHit) AddHit(fELoss, fTime, fNSteps,
               fEinc, fTrackID, fVolumeID,
               fParentTrackID, fTrackPID, fUniqueID);
    }

    existHit=0;

    ResetParameters();
  }

  return kTRUE;
}
//-----------------------------------------------------------------------------



// -----   Public method EndOfEvent   -----------------------------------------
void R3BHPGeDet::BeginEvent()
{
}
//-----------------------------------------------------------------------------



// -----   Public method EndOfEvent   -----------------------------------------
void R3BHPGeDet::EndOfEvent()
{

  if (fVerboseLevel) Print();

  fPointCollection->Clear();
  fHitCollection->Clear();

  ResetParameters();

}
// ----------------------------------------------------------------------------



// -----   Public method Register   -------------------------------------------
void R3BHPGeDet::Register()
{

  //FairRootManager::Instance()->Register("HPGeDetPoint", GetName(), fPointCollection, kTRUE);
  FairRootManager::Instance()->Register("HPGeDetHit", GetName(), fHitCollection, kTRUE);

}
// ----------------------------------------------------------------------------



// -----   Public method GetCollection   --------------------------------------
TClonesArray* R3BHPGeDet::GetCollection(Int_t iColl) const
{

  if(iColl == 0) {
    return fPointCollection;
  } else if(iColl == 2) {
    return fHitCollection;
  }
  else return NULL;

}
// ----------------------------------------------------------------------------



// -----   Public method Print   ----------------------------------------------
void R3BHPGeDet::Print(Option_t* option) const
{
  Int_t nPoints = fPointCollection->GetEntriesFast();
  LOG(INFO) << "HPGe: " << nPoints << " points registered in this event";
  Int_t nHits = fHitCollection->GetEntriesFast();
  LOG(INFO) << "HPGe: " << nHits << " hits registered in this event.";
}
// ----------------------------------------------------------------------------



// -----   Public method Reset   ----------------------------------------------
void R3BHPGeDet::Reset()
{

  fPointCollection->Clear();
  fHitCollection->Clear();
  ResetParameters();

}
// ----------------------------------------------------------------------------



// -----   Public method CopyClones   -----------------------------------------
void R3BHPGeDet::CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset)
{

  Int_t nEntries = cl1->GetEntriesFast();
  LOG(INFO) << "HPGe: " << nEntries << " entries to add";
  TClonesArray& clref = *cl2;
  R3BHPGeDetPoint* oldpoint = NULL;
  for (Int_t i=0; i<nEntries; i++) {
    oldpoint = (R3BHPGeDetPoint*) cl1->At(i);
    Int_t index = oldpoint->GetTrackID() + offset;
    oldpoint->SetTrackID(index);
    new (clref[fPosIndex]) R3BHPGeDetPoint(*oldpoint);
    fPosIndex++;
  }
  LOG(INFO) << "HPGe: " << cl2->GetEntriesFast() << " merged entries";
}
//-----------------------------------------------------------------------------



// -----   Private method AddPoint   --------------------------------------------
R3BHPGeDetPoint* R3BHPGeDet::AddPoint(Int_t trackID, Int_t detID, Int_t volid,
            TVector3 posIn, TVector3 posOut, TVector3 momIn, TVector3 momOut,
                              Double_t time, Double_t length, Double_t eLoss)
{
  TClonesArray& clref = *fPointCollection;
  Int_t size = clref.GetEntriesFast();
  if (fVerboseLevel>1)
    LOG(INFO) << "HPGe: Adding Point at (" << posIn.X() << ", " << posIn.Y()
	      << ", " << posIn.Z() << ") cm,  detector " << detID << ", track "
	      << trackID << ", energy loss " << eLoss*1e06 << " keV";
  return new(clref[size]) R3BHPGeDetPoint(trackID, detID, volid,
				       posIn, posOut, momIn, momOut, time, length, eLoss);
}
// ----------------------------------------------------------------------------



// -----   Private method AddHit   --------------------------------------------
R3BHPGeDetHit* R3BHPGeDet::AddHit(Double_t energy, Double_t time,
					     Int_t steps, Double_t einc,
					     Int_t trackid, Int_t volid,
					     Int_t partrackid, Int_t pdgtype,
					     Int_t uniqueid)
{
  TClonesArray& clref = *fHitCollection;
  Int_t size = clref.GetEntriesFast();
  if (fVerboseLevel>1){
   LOG(INFO) << "-I- HPGe: Adding Hit in detector entering with " << einc*1e06 << " keV, depositing " << energy*1e06
	      << " keV";
    LOG(INFO) << " -I- trackid: " << trackid << " volume id: " << volid
	      << " partrackid : " << partrackid << " type: " << pdgtype
	      << " unique id: " << uniqueid;
  }
  return new(clref[size]) R3BHPGeDetHit(energy, time);
}
//--------------------------------------------------------------------------------



// -----   Public method ConstructGeometry   ----------------------------------
void R3BHPGeDet::ConstructGeometry()
{
  TString fileName = GetGeometryFileName();
  if(fileName.EndsWith(".root")) {
    LOG(INFO) << "Constructing geometry from ROOT file " << fileName.Data();
    ConstructRootGeometry();
  } else {
    LOG(FATAL) << "Detector geometry file name is not specified";
    exit(1);
  }
}
// ----------------------------------------------------------------------------


Bool_t R3BHPGeDet::CheckIfSensitive(std::string name)
{
  if(TString(name).Contains("GE_TUB")) {
    return kTRUE;
  }
  return kFALSE;
}
// ----------------------------------------------------------------------------



ClassImp(R3BHPGeDet)
