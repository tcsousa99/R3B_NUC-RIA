// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIonlinedIG__R3BNeulandOnlineDict

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
#include "R3BNeulandOnlineReconstruction.h"
#include "R3BNeulandOnlineSpectra.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeulandOnlineReconstruction(void *p = 0);
   static void *newArray_R3BNeulandOnlineReconstruction(Long_t size, void *p);
   static void delete_R3BNeulandOnlineReconstruction(void *p);
   static void deleteArray_R3BNeulandOnlineReconstruction(void *p);
   static void destruct_R3BNeulandOnlineReconstruction(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandOnlineReconstruction*)
   {
      ::R3BNeulandOnlineReconstruction *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandOnlineReconstruction >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandOnlineReconstruction", ::R3BNeulandOnlineReconstruction::Class_Version(), "", 32,
                  typeid(::R3BNeulandOnlineReconstruction), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandOnlineReconstruction::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandOnlineReconstruction) );
      instance.SetNew(&new_R3BNeulandOnlineReconstruction);
      instance.SetNewArray(&newArray_R3BNeulandOnlineReconstruction);
      instance.SetDelete(&delete_R3BNeulandOnlineReconstruction);
      instance.SetDeleteArray(&deleteArray_R3BNeulandOnlineReconstruction);
      instance.SetDestructor(&destruct_R3BNeulandOnlineReconstruction);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandOnlineReconstruction*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandOnlineReconstruction*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandOnlineReconstruction*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandOnlineSpectra(void *p = 0);
   static void *newArray_R3BNeulandOnlineSpectra(Long_t size, void *p);
   static void delete_R3BNeulandOnlineSpectra(void *p);
   static void deleteArray_R3BNeulandOnlineSpectra(void *p);
   static void destruct_R3BNeulandOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandOnlineSpectra*)
   {
      ::R3BNeulandOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandOnlineSpectra", ::R3BNeulandOnlineSpectra::Class_Version(), "", 101,
                  typeid(::R3BNeulandOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandOnlineSpectra) );
      instance.SetNew(&new_R3BNeulandOnlineSpectra);
      instance.SetNewArray(&newArray_R3BNeulandOnlineSpectra);
      instance.SetDelete(&delete_R3BNeulandOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BNeulandOnlineSpectra);
      instance.SetDestructor(&destruct_R3BNeulandOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandOnlineReconstruction::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandOnlineReconstruction::Class_Name()
{
   return "R3BNeulandOnlineReconstruction";
}

//______________________________________________________________________________
const char *R3BNeulandOnlineReconstruction::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineReconstruction*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandOnlineReconstruction::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineReconstruction*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandOnlineReconstruction::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineReconstruction*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandOnlineReconstruction::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineReconstruction*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandOnlineSpectra::Class_Name()
{
   return "R3BNeulandOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BNeulandOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeulandOnlineReconstruction::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandOnlineReconstruction.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandOnlineReconstruction::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandOnlineReconstruction::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandOnlineReconstruction(void *p) {
      return  p ? new(p) ::R3BNeulandOnlineReconstruction : new ::R3BNeulandOnlineReconstruction;
   }
   static void *newArray_R3BNeulandOnlineReconstruction(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandOnlineReconstruction[nElements] : new ::R3BNeulandOnlineReconstruction[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandOnlineReconstruction(void *p) {
      delete ((::R3BNeulandOnlineReconstruction*)p);
   }
   static void deleteArray_R3BNeulandOnlineReconstruction(void *p) {
      delete [] ((::R3BNeulandOnlineReconstruction*)p);
   }
   static void destruct_R3BNeulandOnlineReconstruction(void *p) {
      typedef ::R3BNeulandOnlineReconstruction current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandOnlineReconstruction

//______________________________________________________________________________
void R3BNeulandOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BNeulandOnlineSpectra : new ::R3BNeulandOnlineSpectra;
   }
   static void *newArray_R3BNeulandOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandOnlineSpectra[nElements] : new ::R3BNeulandOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandOnlineSpectra(void *p) {
      delete ((::R3BNeulandOnlineSpectra*)p);
   }
   static void deleteArray_R3BNeulandOnlineSpectra(void *p) {
      delete [] ((::R3BNeulandOnlineSpectra*)p);
   }
   static void destruct_R3BNeulandOnlineSpectra(void *p) {
      typedef ::R3BNeulandOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandOnlineSpectra

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandOnlineDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/online",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/online/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandOnlineDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeulandOnlineReconstruction;
class R3BNeulandOnlineSpectra;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandOnlineDict dictionary payload"

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

#ifndef R3BROOT_R3BNEULANDONLINERECONSTRUCTION_H
#define R3BROOT_R3BNEULANDONLINERECONSTRUCTION_H

#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandHit.h"
#include "TCAConnector.h"

class TH1D;
class TH2D;
class TH3D;
class R3BEventHeader;

class R3BNeulandOnlineReconstruction : public FairTask
{
  public:
    R3BNeulandOnlineReconstruction();

    InitStatus Init() override;
    void Exec(Option_t*) override;
    void FinishTask() override;

    void ResetHistos();
    void SetDistanceToTarget(double x) { fDistanceToTarget = x; }

  private:
    R3BEventHeader* fEventHeader;

    TCAInputConnector<R3BNeulandHit> fNeulandHits;
    TCAInputConnector<R3BNeulandCluster> fNeulandClusters;

    TH1D* hHitX;
    TH1D* hHitY;
    TH1D* hHitZ;
    TH1D* hHitT;
    TH1D* hHitTadj;
    TH1D* hHitE;

    TH1D* hHitMult;
    TH1D* hClusterMult;
    TH1D* hClusterSize;
    TH3D* hHits3D;
    TH3D* hClusters3D;

    TH1D* hEtot;
    TH2D* hEtotVSNClusters;

    double fDistanceToTarget;

    ClassDefOverride(R3BNeulandOnlineReconstruction, 0)
};

#endif // R3BROOT_R3BNEULANDONLINERECONSTRUCTION_H
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

#ifndef R3BROOT_R3BNEULANDONLINESPECTRA_H
#define R3BROOT_R3BNEULANDONLINESPECTRA_H

#include "FairTask.h"
#include "R3BNeulandCalData.h"
#include "R3BNeulandHit.h"
#include "R3BPaddleTamexMappedData.h"
#include "TCAConnector.h"
#include <array>

class TCanvas;
class TH1D;
class TH2D;
class R3BEventHeader;

class R3BNeulandOnlineSpectra : public FairTask
{

  public:
    R3BNeulandOnlineSpectra();

    InitStatus Init() override;
    void Exec(Option_t*) override;
    void FinishTask() override;

    void ResetHistos();
    void ResetHistosMapped();
    void SetDistanceToTarget(double x) { fDistanceToTarget = x; }

  private:
    static const unsigned int fNPlanes = 24;
    static const unsigned int fNBars = fNPlanes * 50;

    R3BEventHeader* fEventHeader;

    TCAInputConnector<R3BPaddleTamexMappedData> fNeulandMappedData;
    TCAInputConnector<R3BNeulandCalData> fNeulandCalData;
    TCAInputConnector<R3BNeulandHit> fNeulandHits;

    TH1D* hTstart;
    TH1D* hNstart;

    TH2D* hTestJump;

    std::array<TH1D*, 4> ahMappedBar1;
    std::array<TH1D*, 4> ahMappedBar2;

    std::array<TH2D*, 2> ahCalTvsBar;
    std::array<TH2D*, 2> ahCalEvsBar;

    TH2D* hHitEvsBar;

    TH2D* hHitEvsBarCosmics;

    TH2D* hTdiffvsBar;
    TH2D* hToFvsBar;
    TH2D* hTofvsEhit;

    TH2D* hToFcvsBar;
    TH2D* hTofcvsEhit;

    TH2D* hTofvsX;
    TH2D* hTofcvsX;
    TH2D* hTofvsY;
    TH2D* hTofcvsY;
    TH2D* hTofvsZ;
    TH2D* hTofcvsZ;

    TH2D* hTdiffvsBarCosmics;
    TH2D* hDT575;
    TH2D* hDT625;

    std::array<TH2D*, fNPlanes> ahXYperPlane;

    TH1D* hSofiaTime;
    TH2D* hNeuLANDvsSOFIA;
    TH1D* hTOF;
    TH1D* hTOFc;

    double fDistanceToTarget;

    bool fIsOnline;

  private:
    bool IsBeam() const;

    ClassDefOverride(R3BNeulandOnlineSpectra, 0)
};

#endif // R3BROOT_R3BNEULANDONLINESPECTRA_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BNeulandOnlineReconstruction", payloadCode, "@",
"R3BNeulandOnlineSpectra", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandOnlineDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandOnlineDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandOnlineDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandOnlineDict() {
  TriggerDictionaryInitialization_G__R3BNeulandOnlineDict_Impl();
}
