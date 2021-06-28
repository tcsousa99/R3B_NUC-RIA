// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIsfidIG__R3BsfiDict

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
#include "R3Bsfi.h"
#include "R3BsfiDigitizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3Bsfi(void *p = 0);
   static void *newArray_R3Bsfi(Long_t size, void *p);
   static void delete_R3Bsfi(void *p);
   static void deleteArray_R3Bsfi(void *p);
   static void destruct_R3Bsfi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3Bsfi*)
   {
      ::R3Bsfi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3Bsfi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3Bsfi", ::R3Bsfi::Class_Version(), "", 29,
                  typeid(::R3Bsfi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3Bsfi::Dictionary, isa_proxy, 4,
                  sizeof(::R3Bsfi) );
      instance.SetNew(&new_R3Bsfi);
      instance.SetNewArray(&newArray_R3Bsfi);
      instance.SetDelete(&delete_R3Bsfi);
      instance.SetDeleteArray(&deleteArray_R3Bsfi);
      instance.SetDestructor(&destruct_R3Bsfi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3Bsfi*)
   {
      return GenerateInitInstanceLocal((::R3Bsfi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3Bsfi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BsfiDigitizer(void *p = 0);
   static void *newArray_R3BsfiDigitizer(Long_t size, void *p);
   static void delete_R3BsfiDigitizer(void *p);
   static void deleteArray_R3BsfiDigitizer(void *p);
   static void destruct_R3BsfiDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BsfiDigitizer*)
   {
      ::R3BsfiDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BsfiDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BsfiDigitizer", ::R3BsfiDigitizer::Class_Version(), "", 197,
                  typeid(::R3BsfiDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BsfiDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BsfiDigitizer) );
      instance.SetNew(&new_R3BsfiDigitizer);
      instance.SetNewArray(&newArray_R3BsfiDigitizer);
      instance.SetDelete(&delete_R3BsfiDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BsfiDigitizer);
      instance.SetDestructor(&destruct_R3BsfiDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BsfiDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BsfiDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BsfiDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3Bsfi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3Bsfi::Class_Name()
{
   return "R3Bsfi";
}

//______________________________________________________________________________
const char *R3Bsfi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bsfi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3Bsfi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bsfi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3Bsfi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bsfi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3Bsfi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bsfi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BsfiDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BsfiDigitizer::Class_Name()
{
   return "R3BsfiDigitizer";
}

//______________________________________________________________________________
const char *R3BsfiDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BsfiDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BsfiDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BsfiDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BsfiDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BsfiDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BsfiDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BsfiDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3Bsfi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3Bsfi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3Bsfi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3Bsfi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3Bsfi(void *p) {
      return  p ? new(p) ::R3Bsfi : new ::R3Bsfi;
   }
   static void *newArray_R3Bsfi(Long_t nElements, void *p) {
      return p ? new(p) ::R3Bsfi[nElements] : new ::R3Bsfi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3Bsfi(void *p) {
      delete ((::R3Bsfi*)p);
   }
   static void deleteArray_R3Bsfi(void *p) {
      delete [] ((::R3Bsfi*)p);
   }
   static void destruct_R3Bsfi(void *p) {
      typedef ::R3Bsfi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3Bsfi

//______________________________________________________________________________
void R3BsfiDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BsfiDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BsfiDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BsfiDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BsfiDigitizer(void *p) {
      return  p ? new(p) ::R3BsfiDigitizer : new ::R3BsfiDigitizer;
   }
   static void *newArray_R3BsfiDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BsfiDigitizer[nElements] : new ::R3BsfiDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BsfiDigitizer(void *p) {
      delete ((::R3BsfiDigitizer*)p);
   }
   static void deleteArray_R3BsfiDigitizer(void *p) {
      delete [] ((::R3BsfiDigitizer*)p);
   }
   static void destruct_R3BsfiDigitizer(void *p) {
      typedef ::R3BsfiDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BsfiDigitizer

namespace {
  void TriggerDictionaryInitialization_G__R3BsfiDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/psp",
"/work/R3BRoot/fi4",
"/work/R3BRoot/fi6",
"/work/R3BRoot/fi5",
"/work/R3BRoot/sfi",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/trackerData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/sfi/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BsfiDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3Bsfi;
class R3BsfiDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BsfiDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
/******************************************************************************
 *   Copyright (C) 2019 GSI Helmholtzzentrum für Schwerionenforschung GmbH    *
 *   Copyright (C) 2019 Members of R3B Collaboration                          *
 *                                                                            *
 *             This software is distributed under the terms of the            *
 *                 GNU General Public Licence (GPL) version 3,                *
 *                    copied verbatim in the file "LICENSE".                  *
 *                                                                            *
 * In applying this license GSI does not waive the privileges and immunities  *
 * granted to it by virtue of its status as an Intergovernmental Organization *
 * or submit itself to any jurisdiction.                                      *
 ******************************************************************************/

#ifndef R3Bsfi_H
#define R3Bsfi_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BFi4Point;
class FairVolume;

class R3Bsfi : public R3BDetector
{
  public:
    /** Default constructor **/
    R3Bsfi();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3Bsfi(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3Bsfi(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3Bsfi();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BsfiPoint and adds it to the
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
    virtual void Print(Option_t* option = "") const;

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
    virtual void CopyClones(TClonesArray* cl1, TClonesArray* cl2, Int_t offset);

    virtual Bool_t CheckIfSensitive(std::string name);
    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts();

    //  void SaveGeoParams();

  private:
    /** Track information to be stored until the track leaves the
    active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fVolumeID;                //!  volume id
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime_in;            //!  time when entering active volume
    Double32_t fTime_out;           //!  time when exiting active volume
    Double32_t fTime;               //!  time
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    TClonesArray* fsfiCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    /** Private method AddHit
     **
     ** Adds a Fi4Point to the HitCollection
     **/
    R3BFi4Point* AddHit(Int_t trackID,
                        Int_t detID,
                        Int_t plane,
                        TVector3 posIn,
                        TVector3 pos_out,
                        TVector3 momIn,
                        TVector3 momOut,
                        Double_t time,
                        Double_t length,
                        Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3Bsfi, 2);
};

inline void R3Bsfi::ResetParameters()
{
    fTrackID = fVolumeID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = 0;
    fPosIndex = 0;
};

#endif
/******************************************************************************
 *   Copyright (C) 2019 GSI Helmholtzzentrum für Schwerionenforschung GmbH    *
 *   Copyright (C) 2019 Members of R3B Collaboration                          *
 *                                                                            *
 *             This software is distributed under the terms of the            *
 *                 GNU General Public Licence (GPL) version 3,                *
 *                    copied verbatim in the file "LICENSE".                  *
 *                                                                            *
 * In applying this license GSI does not waive the privileges and immunities  *
 * granted to it by virtue of its status as an Intergovernmental Organization *
 * or submit itself to any jurisdiction.                                      *
 ******************************************************************************/

// R3BsfiDigitizer.h 25. 08. 2017.
// Created by: Aron Kripko

#ifndef R3BSFIDIGITISER_H
#define R3BSFIDIGITISER_H 1

#include "FairTask.h"
#include "R3BFi4HitItem.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BsfiDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BsfiDigitizer();

    R3BsfiDigitizer(Double_t esigma, Double_t tsigma);

    /** Destructor **/
    ~R3BsfiDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    void SetEnergyResolution(Double_t e);
    void SetTimeResolution(Double_t t);

  protected:
    TClonesArray* fPoints;

    TClonesArray* fMCTrack;

    TClonesArray* Hits;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Int_t NumOfFibers;

    ClassDef(R3BsfiDigitizer, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3Bsfi", payloadCode, "@",
"R3BsfiDigitizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BsfiDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BsfiDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BsfiDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BsfiDict() {
  TriggerDictionaryInitialization_G__R3BsfiDict_Impl();
}