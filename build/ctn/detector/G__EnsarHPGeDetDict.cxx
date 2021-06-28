// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIctndIdetectordIG__EnsarHPGeDetDict

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Since CINT ignores the std namespace, we need to do so in this file.
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "EnsarHPGeDet.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_EnsarHPGeDet(void *p = 0);
   static void *newArray_EnsarHPGeDet(Long_t size, void *p);
   static void delete_EnsarHPGeDet(void *p);
   static void deleteArray_EnsarHPGeDet(void *p);
   static void destruct_EnsarHPGeDet(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EnsarHPGeDet*)
   {
      ::EnsarHPGeDet *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EnsarHPGeDet >(0);
      static ::ROOT::TGenericClassInfo 
         instance("EnsarHPGeDet", ::EnsarHPGeDet::Class_Version(), "", 29,
                  typeid(::EnsarHPGeDet), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EnsarHPGeDet::Dictionary, isa_proxy, 4,
                  sizeof(::EnsarHPGeDet) );
      instance.SetNew(&new_EnsarHPGeDet);
      instance.SetNewArray(&newArray_EnsarHPGeDet);
      instance.SetDelete(&delete_EnsarHPGeDet);
      instance.SetDeleteArray(&deleteArray_EnsarHPGeDet);
      instance.SetDestructor(&destruct_EnsarHPGeDet);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EnsarHPGeDet*)
   {
      return GenerateInitInstanceLocal((::EnsarHPGeDet*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EnsarHPGeDet*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EnsarHPGeDet::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EnsarHPGeDet::Class_Name()
{
   return "EnsarHPGeDet";
}

//______________________________________________________________________________
const char *EnsarHPGeDet::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDet*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EnsarHPGeDet::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDet*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EnsarHPGeDet::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDet*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EnsarHPGeDet::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDet*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EnsarHPGeDet::Streamer(TBuffer &R__b)
{
   // Stream an object of class EnsarHPGeDet.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EnsarHPGeDet::Class(),this);
   } else {
      R__b.WriteClassBuffer(EnsarHPGeDet::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EnsarHPGeDet(void *p) {
      return  p ? new(p) ::EnsarHPGeDet : new ::EnsarHPGeDet;
   }
   static void *newArray_EnsarHPGeDet(Long_t nElements, void *p) {
      return p ? new(p) ::EnsarHPGeDet[nElements] : new ::EnsarHPGeDet[nElements];
   }
   // Wrapper around operator delete
   static void delete_EnsarHPGeDet(void *p) {
      delete ((::EnsarHPGeDet*)p);
   }
   static void deleteArray_EnsarHPGeDet(void *p) {
      delete [] ((::EnsarHPGeDet*)p);
   }
   static void destruct_EnsarHPGeDet(void *p) {
      typedef ::EnsarHPGeDet current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EnsarHPGeDet

namespace {
  void TriggerDictionaryInitialization_G__EnsarHPGeDetDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairsoft/include/root6",
"/work/R3BRoot/ctn/data",
"/work/R3BRoot/ctn/geometry",
"/work/R3BRoot/ctn/detector",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/r3bdata",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/ctn/detector/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EnsarHPGeDetDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class EnsarHPGeDet;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EnsarHPGeDetDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                     EnsarHPGeDet header file                    -----
// -----                 Created 11/09/12  by P.Cabanelas              -----
// -------------------------------------------------------------------------

/**  EnsarHPGeDet.h
 **/


#ifndef ENSARHPGEDET_H
#define ENSARHPGEDET_H

#include "R3BDetector.h"//Changed class from "EnsarDetector.h" to "R3BDetector.h"
#include "TF1.h"
#include "TLorentzVector.h"

class TClonesArray;
class EnsarHPGeDetPoint;
class EnsarHPGeDetHit;
class FairVolume;
class TGeoRotation;


class EnsarHPGeDet : public R3BDetector //Changed class from "public EnsarDetector" to "public R3BDetector"
{

 public:

  /** Default constructor **/
  EnsarHPGeDet();


  /** Standard constructor.
   *@param name    detector name
   *@param active  sensitivity flag
   **/
  EnsarHPGeDet(const TString& geoFile, Bool_t active);


  /** Destructor **/
  virtual ~EnsarHPGeDet();


  /** Virtual method ProcessHits
   **
   ** Defines the action to be taken when a step is inside the
   ** active volume. Creates a EnsarHPGeDetPoint and adds it to the
   ** collection.
   *@param vol  Pointer to the active volume
   **/
  virtual Bool_t ProcessHits(FairVolume* vol = 0);


  /** Virtual method BeginEvent
   **
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/
  virtual void BeginEvent();

	
  /** Virtual method EndOfEvent
   **
   ** Added support for EnsarHPGeDetCrystalHit
   ** If verbosity level is set, print hit collection at the
   ** end of the event and resets it afterwards.
   **/
  virtual void EndOfEvent();


  /** Virtual method Register
   **
   ** Registers the hit collection in the ROOT manager.
   **/
  virtual void Register();


  /** Accessor to the hit collection **/
  virtual TClonesArray* GetCollection(Int_t iColl) const;


  /** Virtual method Print
   **
   ** Screen output of hit collection.
   **/
  virtual void Print(Option_t* option="") const;


  /** Virtual method Reset
   **
   ** Clears the hit collection
   **/
  virtual void Reset();


  /** Virtual method CopyClones
   **
   ** Copies the hit collection with a given track index offset
   *@param cl1     Origin
   *@param cl2     Target
   *@param offset  Index offset
   **/
  virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2,
			  Int_t offset);


  /** Virtual method Construct geometry
   **
   ** Constructs the STS geometry
   **/
  virtual void ConstructGeometry();
  
  virtual Bool_t CheckIfSensitive(std::string name);

  /** Select the version of the geometry
   **
   *@param version
   **/
  void SelectGeometryVersion(Int_t version);

	
  virtual void Initialize();
  virtual void SetSpecialPhysicsCuts(){};
 

  private:

    /** Track information to be stored until the track leaves the
	active volume. **/
    Int_t          fTrackID;           //!  track index
    Int_t          fTrackPID;          //!  particle identification
    Int_t          fVolumeID;          //!  volume id
    Int_t          fParentTrackID;     //!  parent track index
    Int_t          fUniqueID;          //!  particle unique id (e.g. if Delta electron, fUniqueID=9)
    TLorentzVector fPosIn, fPosOut;    //!  position
    TLorentzVector fMomIn, fMomOut;    //!  momentum
    Double32_t     fTime;              //!  time
    Double32_t     fLength;            //!  length
    Double32_t     fELoss;             //!  energy loss
    Int_t          fPosIndex;          //!
    Int_t          fNSteps;            //!  number of steps in the active volume
    Double32_t     fEinc;              //!  total incident energy
    Bool_t         kGeoSaved;          //!

    TClonesArray*  fPointCollection;         //!  The point collection
    TClonesArray*  fHitCollection;           //!  The hit collection

	
	
   // Selecting the geometry
    Int_t fGeometryVersion;


 /** Private method AddPoint
     **
     ** Adds a EnsarHPGeDetPoint to the PointCollection
     **/
    EnsarHPGeDetPoint* AddPoint(Int_t trackID, Int_t detID, Int_t volid,
			 TVector3 posIn, TVector3 pos_out, TVector3 momIn,
			 TVector3 momOut, Double_t time, Double_t length, Double_t eLoss);
	
	
  /** Private method AddHit
     **
     ** Adds a EnsarHPGeDetHit to the HitCollection
     **/
    EnsarHPGeDetHit* AddHit(Double_t energy, Double_t tof,
					Int_t steps, Double_t einc,
					Int_t trackid, Int_t volid, Int_t partrackid,
					Int_t pdgid, Int_t uniqueid);


  /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(EnsarHPGeDet,1);
};


inline void EnsarHPGeDet::ResetParameters() {
  fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
  fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
  fTime = fLength = fELoss = fEinc = 0;
  fPosIndex = 0;
  fNSteps = 0;
};

#endif 

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EnsarHPGeDet", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EnsarHPGeDetDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EnsarHPGeDetDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EnsarHPGeDetDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EnsarHPGeDetDict() {
  TriggerDictionaryInitialization_G__EnsarHPGeDetDict_Impl();
}
