// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIsimulationdIG__R3BNeulandSimulationDict

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
#include "R3BNeuland.h"
#include "R3BNeulandMCMon.h"
#include "R3BNeulandPrimaryClusterFinder.h"
#include "R3BNeulandPrimaryInteractionFinder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeuland(void *p = 0);
   static void *newArray_R3BNeuland(Long_t size, void *p);
   static void delete_R3BNeuland(void *p);
   static void deleteArray_R3BNeuland(void *p);
   static void destruct_R3BNeuland(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuland*)
   {
      ::R3BNeuland *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuland >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuland", ::R3BNeuland::Class_Version(), "", 40,
                  typeid(::R3BNeuland), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeuland::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeuland) );
      instance.SetNew(&new_R3BNeuland);
      instance.SetNewArray(&newArray_R3BNeuland);
      instance.SetDelete(&delete_R3BNeuland);
      instance.SetDeleteArray(&deleteArray_R3BNeuland);
      instance.SetDestructor(&destruct_R3BNeuland);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuland*)
   {
      return GenerateInitInstanceLocal((::R3BNeuland*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeuland*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMCMon(void *p = 0);
   static void *newArray_R3BNeulandMCMon(Long_t size, void *p);
   static void delete_R3BNeulandMCMon(void *p);
   static void deleteArray_R3BNeulandMCMon(void *p);
   static void destruct_R3BNeulandMCMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMCMon*)
   {
      ::R3BNeulandMCMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMCMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMCMon", ::R3BNeulandMCMon::Class_Version(), "", 165,
                  typeid(::R3BNeulandMCMon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMCMon::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMCMon) );
      instance.SetNew(&new_R3BNeulandMCMon);
      instance.SetNewArray(&newArray_R3BNeulandMCMon);
      instance.SetDelete(&delete_R3BNeulandMCMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMCMon);
      instance.SetDestructor(&destruct_R3BNeulandMCMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMCMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMCMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandPrimaryClusterFinder(void *p = 0);
   static void *newArray_R3BNeulandPrimaryClusterFinder(Long_t size, void *p);
   static void delete_R3BNeulandPrimaryClusterFinder(void *p);
   static void deleteArray_R3BNeulandPrimaryClusterFinder(void *p);
   static void destruct_R3BNeulandPrimaryClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandPrimaryClusterFinder*)
   {
      ::R3BNeulandPrimaryClusterFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandPrimaryClusterFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandPrimaryClusterFinder", ::R3BNeulandPrimaryClusterFinder::Class_Version(), "", 260,
                  typeid(::R3BNeulandPrimaryClusterFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandPrimaryClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandPrimaryClusterFinder) );
      instance.SetNew(&new_R3BNeulandPrimaryClusterFinder);
      instance.SetNewArray(&newArray_R3BNeulandPrimaryClusterFinder);
      instance.SetDelete(&delete_R3BNeulandPrimaryClusterFinder);
      instance.SetDeleteArray(&deleteArray_R3BNeulandPrimaryClusterFinder);
      instance.SetDestructor(&destruct_R3BNeulandPrimaryClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandPrimaryClusterFinder*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandPrimaryClusterFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandPrimaryClusterFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandPrimaryInteractionFinder(void *p = 0);
   static void *newArray_R3BNeulandPrimaryInteractionFinder(Long_t size, void *p);
   static void delete_R3BNeulandPrimaryInteractionFinder(void *p);
   static void deleteArray_R3BNeulandPrimaryInteractionFinder(void *p);
   static void destruct_R3BNeulandPrimaryInteractionFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandPrimaryInteractionFinder*)
   {
      ::R3BNeulandPrimaryInteractionFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandPrimaryInteractionFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandPrimaryInteractionFinder", ::R3BNeulandPrimaryInteractionFinder::Class_Version(), "", 318,
                  typeid(::R3BNeulandPrimaryInteractionFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandPrimaryInteractionFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandPrimaryInteractionFinder) );
      instance.SetNew(&new_R3BNeulandPrimaryInteractionFinder);
      instance.SetNewArray(&newArray_R3BNeulandPrimaryInteractionFinder);
      instance.SetDelete(&delete_R3BNeulandPrimaryInteractionFinder);
      instance.SetDeleteArray(&deleteArray_R3BNeulandPrimaryInteractionFinder);
      instance.SetDestructor(&destruct_R3BNeulandPrimaryInteractionFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandPrimaryInteractionFinder*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandPrimaryInteractionFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandPrimaryInteractionFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuland::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuland::Class_Name()
{
   return "R3BNeuland";
}

//______________________________________________________________________________
const char *R3BNeuland::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuland::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuland::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuland::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuland*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMCMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMCMon::Class_Name()
{
   return "R3BNeulandMCMon";
}

//______________________________________________________________________________
const char *R3BNeulandMCMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMCMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMCMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMCMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMCMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandPrimaryClusterFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandPrimaryClusterFinder::Class_Name()
{
   return "R3BNeulandPrimaryClusterFinder";
}

//______________________________________________________________________________
const char *R3BNeulandPrimaryClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryClusterFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandPrimaryClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryClusterFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandPrimaryClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryClusterFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandPrimaryClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryClusterFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandPrimaryInteractionFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandPrimaryInteractionFinder::Class_Name()
{
   return "R3BNeulandPrimaryInteractionFinder";
}

//______________________________________________________________________________
const char *R3BNeulandPrimaryInteractionFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryInteractionFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandPrimaryInteractionFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryInteractionFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandPrimaryInteractionFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryInteractionFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandPrimaryInteractionFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPrimaryInteractionFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeuland::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuland.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeuland::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeuland::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuland(void *p) {
      return  p ? new(p) ::R3BNeuland : new ::R3BNeuland;
   }
   static void *newArray_R3BNeuland(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuland[nElements] : new ::R3BNeuland[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuland(void *p) {
      delete ((::R3BNeuland*)p);
   }
   static void deleteArray_R3BNeuland(void *p) {
      delete [] ((::R3BNeuland*)p);
   }
   static void destruct_R3BNeuland(void *p) {
      typedef ::R3BNeuland current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeuland

//______________________________________________________________________________
void R3BNeulandMCMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMCMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMCMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMCMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMCMon(void *p) {
      return  p ? new(p) ::R3BNeulandMCMon : new ::R3BNeulandMCMon;
   }
   static void *newArray_R3BNeulandMCMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMCMon[nElements] : new ::R3BNeulandMCMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMCMon(void *p) {
      delete ((::R3BNeulandMCMon*)p);
   }
   static void deleteArray_R3BNeulandMCMon(void *p) {
      delete [] ((::R3BNeulandMCMon*)p);
   }
   static void destruct_R3BNeulandMCMon(void *p) {
      typedef ::R3BNeulandMCMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMCMon

//______________________________________________________________________________
void R3BNeulandPrimaryClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandPrimaryClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandPrimaryClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandPrimaryClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandPrimaryClusterFinder(void *p) {
      return  p ? new(p) ::R3BNeulandPrimaryClusterFinder : new ::R3BNeulandPrimaryClusterFinder;
   }
   static void *newArray_R3BNeulandPrimaryClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandPrimaryClusterFinder[nElements] : new ::R3BNeulandPrimaryClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandPrimaryClusterFinder(void *p) {
      delete ((::R3BNeulandPrimaryClusterFinder*)p);
   }
   static void deleteArray_R3BNeulandPrimaryClusterFinder(void *p) {
      delete [] ((::R3BNeulandPrimaryClusterFinder*)p);
   }
   static void destruct_R3BNeulandPrimaryClusterFinder(void *p) {
      typedef ::R3BNeulandPrimaryClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandPrimaryClusterFinder

//______________________________________________________________________________
void R3BNeulandPrimaryInteractionFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandPrimaryInteractionFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandPrimaryInteractionFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandPrimaryInteractionFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandPrimaryInteractionFinder(void *p) {
      return  p ? new(p) ::R3BNeulandPrimaryInteractionFinder : new ::R3BNeulandPrimaryInteractionFinder;
   }
   static void *newArray_R3BNeulandPrimaryInteractionFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandPrimaryInteractionFinder[nElements] : new ::R3BNeulandPrimaryInteractionFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandPrimaryInteractionFinder(void *p) {
      delete ((::R3BNeulandPrimaryInteractionFinder*)p);
   }
   static void deleteArray_R3BNeulandPrimaryInteractionFinder(void *p) {
      delete [] ((::R3BNeulandPrimaryInteractionFinder*)p);
   }
   static void destruct_R3BNeulandPrimaryInteractionFinder(void *p) {
      typedef ::R3BNeulandPrimaryInteractionFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandPrimaryInteractionFinder

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandSimulationDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/simulation",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/simulation/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandSimulationDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeuland;
class R3BNeulandMCMon;
class R3BNeulandPrimaryClusterFinder;
class R3BNeulandPrimaryInteractionFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandSimulationDict dictionary payload"

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

#ifndef R3BNEULAND_H
#define R3BNEULAND_H

#include "R3BDetector.h"
#include "TLorentzVector.h"
#include <memory>
#include <string>

class FairVolume;
class TClonesArray;
class R3BNeulandGeoPar;

/**
 * NeuLAND detector simulation class
 * @author Jan Mayer
 * @since 12.01.2016
 * For each simulated event, TClonesArrays are filled:
 * - NeulandPoints (R3BNeulandPoint), each representing energy deposition and light yield of a track in a paddle
 * Suitable geometry files require proper naming of the active volume (see CheckIfSensitive) and copy numbers.
 */

class R3BNeuland : public R3BDetector
{
  public:
    /** Default constructor */
    R3BNeuland();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation */
    R3BNeuland(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation */
    explicit R3BNeuland(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Standard constructor.
     *@param nDP     number of double planes
     *@param trans   position
     *@param rot     rotation */
    R3BNeuland(Int_t nDP, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param nDP     number of double planes
     *@param combi   position + rotation */
    explicit R3BNeuland(Int_t nDP, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Default Destructor */
    ~R3BNeuland() override;

    void Initialize() override;

    Bool_t ProcessHits(FairVolume* = nullptr) override;

    void EndOfEvent() override;

    void Register() override;

    TClonesArray* GetCollection(Int_t iColl) const override;

    void Print(Option_t* = "") const override;

    void Reset() override;

    Bool_t CheckIfSensitive(std::string name) override;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeuland(const R3BNeuland&) = delete;            // copy constructor
    R3BNeuland(R3BNeuland&&) = delete;                 // move constructor
    R3BNeuland& operator=(const R3BNeuland&) = delete; // copy assignment
    R3BNeuland& operator=(R3BNeuland&&) = delete;      // move assignment

  private:
    TClonesArray* fNeulandPoints;     //!
    R3BNeulandGeoPar* fNeulandGeoPar; //!

    /** Track information to be stored until the track leaves the active volume. */
    Int_t fTrackID;
    Int_t fPaddleID;
    TLorentzVector fPosIn, fPosOut;
    TLorentzVector fMomIn, fMomOut;
    Double_t fTime;
    Double_t fLength;
    Double_t fELoss;
    Double_t fLightYield;
    Bool_t fLastHitDone;

    void ResetValues();

    void WriteParameterFile();

    ClassDefOverride(R3BNeuland, 3);
};

#endif // R3BNEULAND_H
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

#ifndef R3BNEULANDMCMON_H
#define R3BNEULANDMCMON_H

/** Neuland Monte Carlo Monitor
 * @author Jan Mayer
 * @since  07.07.2015
 *
 *  Input:  Monte Carlo Tracks "MCTrack".
 *  Output: Several histograms:
 *          - Energy of primary neutrons
 *          - Number of particles by PDG code created by the first neutron interaction
 *          - Energy of non-neutron tracks in kLAND created by primary neutron interaction(s), by PID
 *          - Energy of neutron tracks created by primary neutron interaction
 *          - Total energy of non-neutron tracks in kLAND created by primary neutron interaction(s)
 *          - Total energy of non-neutron tracks in kLAND created by primary neutron interaction(s), by PID
 *          - IDs of tracks with a primary mother
 *          - Distribution of track mother IDs
 *          - ...
 *          - Option FULLSIMANA: Create histograms for reactions products of primary neutron interactions
 *            Grouped by Pdg, Reaction and Reaction&Pdg (several 1000 histograms)
 *          - Option 3DTRACK: Prepare 3D Histogram for each event.
 *  Usage:  run->AddTask(new R3BNeulandMCMon("FULLSIMANA"));
 *          Requires MCTracks, NeulandPoints and NPNIPS from R3BNeuland simulation.
 */

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BNeulandPoint.h"
#include "TCAConnector.h"
#include <map>

class TH1D;
class TH2D;
class TH3D;

class R3BNeulandMCMon : public FairTask
{
  public:
    R3BNeulandMCMon(const Option_t* option = "");

    ~R3BNeulandMCMon() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandMCMon(const R3BNeulandMCMon&) = delete;            // copy constructor
    R3BNeulandMCMon(R3BNeulandMCMon&&) = delete;                 // move constructor
    R3BNeulandMCMon& operator=(const R3BNeulandMCMon&) = delete; // copy assignment
    R3BNeulandMCMon& operator=(R3BNeulandMCMon&&) = delete;      // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;

  private:
    Bool_t fIs3DTrackEnabled;
    Bool_t fIsFullSimAnaEnabled;

    TCAInputConnector<R3BNeulandPoint> fPrimaryNeutronInteractionPoints;
    TCAInputConnector<R3BMCTrack> fMCTracks;
    TCAInputConnector<R3BNeulandPoint> fNeulandPoints;

    int nEvents;

    TH1D* fhPDG;
    TH1D* fhEPrimarys;
    TH1D* fhEPrimarys2;
    TH1D* fhEPrimaryNeutrons;
    TH1D* fhErelMC;
    TH1D* fhEtot;
    TH1D* fhEtotPrim;
    TH1D* fhESecondaryNeutrons;
    TH1D* fhMotherIDs;
    TH1D* fhPrimaryDaughterIDs;
    TH1D* fhMCToF;
    TH1D* fhnNPNIPs;
    TH2D* fhNPNIPsEToFVSTime;
    TH2D* fhNPNIPSrvsz;
    TH2D* fhNPNIPSxy;
    TH2D* fhThetaLight;
    TH2D* fhElossVSLight;
    TH2D* fhElossVSLightLog;
    std::map<Int_t, TH1D*> fhmEPdg;
    std::map<Int_t, TH1D*> fhmEtotPdg;
    std::map<Int_t, TH1D*> fhmEtotPdgRel;

    std::map<Int_t, TH1D*> fhmEnergyByProductPdg;
    std::map<Int_t, TH1D*> fhmCountByProductPdg;
    std::map<std::string, TH1D*> fhmEnergyByProductPdgReduced;
    std::map<std::string, TH1D*> fhmCountByProductPdgReduced;
    std::map<Int_t, TH2D*> fhmElossVSLightLogPdg;
    std::map<TString, TH1D*> fhmEnergyByReaction;
    std::map<TString, std::map<Int_t, TH1D*>> fhmmEnergyByReactionByProductPdg;
    TH1D* fhnProducts;
    TH1D* fhnProductsCharged;
    TH1D* fhSumProductEnergy;
    TH1D* fhnSecondaryProtons;
    TH1D* fhnSecondaryNeutrons;

    TH3D* fh3;
    TH3D* fh3PNIP;

    ClassDefOverride(R3BNeulandMCMon, 0)
};

#endif // R3BNEULANDMCMON_H
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

#ifndef R3BROOT_R3BNEULANDPRIMARYCLUSTERFINDER_H
#define R3BROOT_R3BNEULANDPRIMARYCLUSTERFINDER_H

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandHit.h"
#include "TCAConnector.h"

class R3BNeulandPrimaryClusterFinder : public FairTask
{
  public:
    explicit R3BNeulandPrimaryClusterFinder(TString primaryHits = "NeulandPrimaryHits",
                                            TString clusters = "NeulandClusters",
                                            TString primaryClusters = "NeulandPrimaryClusters",
                                            TString secondaryClusters = "NeulandSecondaryClusters");

    ~R3BNeulandPrimaryClusterFinder() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandPrimaryClusterFinder(const R3BNeulandPrimaryClusterFinder&) = delete;
    R3BNeulandPrimaryClusterFinder(R3BNeulandPrimaryClusterFinder&&) = delete;
    R3BNeulandPrimaryClusterFinder& operator=(const R3BNeulandPrimaryClusterFinder&) = delete;
    R3BNeulandPrimaryClusterFinder& operator=(R3BNeulandPrimaryClusterFinder&&) = delete;

  protected:
    InitStatus Init() override;

  public:
    void Exec(Option_t*) override;

  private:
    TCAInputConnector<R3BNeulandHit> fPrimaryHits;
    TCAInputConnector<R3BNeulandCluster> fClusters;

    TCAOutputConnector<R3BNeulandCluster> fPrimaryClusters;
    TCAOutputConnector<R3BNeulandCluster> fSecondaryClusters;

    ClassDefOverride(R3BNeulandPrimaryClusterFinder, 0);
};

#endif // R3BROOT_R3BNEULANDPRIMARYCLUSTERFINDER_H
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

#ifndef R3BROOT_R3BNEULANDPRIMARYINTERACTIONFINDER_H
#define R3BROOT_R3BNEULANDPRIMARYINTERACTIONFINDER_H

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BNeulandHit.h"
#include "R3BNeulandPoint.h"
#include "TCAConnector.h"
#include "TH1D.h"
#include "TH2D.h"

class R3BNeulandPrimaryInteractionFinder : public FairTask
{
  public:
    explicit R3BNeulandPrimaryInteractionFinder(TString pointsIn = "NeulandPoints",
                                                TString hitsIn = "NeulandHits",
                                                TString pointsOut = "NeulandPrimaryPoints",
                                                TString hitsOut = "NeulandPrimaryHits",
                                                TString tracksOut = "NeulandPrimaryTracks");

    ~R3BNeulandPrimaryInteractionFinder() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandPrimaryInteractionFinder(const R3BNeulandPrimaryInteractionFinder&) = delete;
    R3BNeulandPrimaryInteractionFinder(R3BNeulandPrimaryInteractionFinder&&) = delete;
    R3BNeulandPrimaryInteractionFinder& operator=(const R3BNeulandPrimaryInteractionFinder&) = delete;
    R3BNeulandPrimaryInteractionFinder& operator=(R3BNeulandPrimaryInteractionFinder&&) = delete;

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;

  private:
    TCAInputConnector<R3BMCTrack> fTracksIn;
    TCAInputConnector<R3BNeulandPoint> fPointsIn;
    TCAInputConnector<R3BNeulandHit> fHitsIn;

    TCAOutputConnector<R3BMCTrack> fTracksOut;
    TCAOutputConnector<R3BNeulandPoint> fPointsOut;
    TCAOutputConnector<R3BNeulandHit> fHitsOut;

    TH1D* fhDistance;
    TH2D* fhPointsVsHits;
    TH2D* fhPointVsHitPaddle;

    ClassDefOverride(R3BNeulandPrimaryInteractionFinder, 0);
};

#endif // R3BROOT_R3BNEULANDPRIMARYINTERACTIONFINDER_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BNeuland", payloadCode, "@",
"R3BNeulandMCMon", payloadCode, "@",
"R3BNeulandPrimaryClusterFinder", payloadCode, "@",
"R3BNeulandPrimaryInteractionFinder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandSimulationDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandSimulationDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandSimulationDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandSimulationDict() {
  TriggerDictionaryInitialization_G__R3BNeulandSimulationDict_Impl();
}
