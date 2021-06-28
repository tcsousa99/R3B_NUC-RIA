// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIclusteringdIG__R3BNeulandClusteringDict

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
#include "R3BNeulandClusterMon.h"
#include "R3BNeulandClusterFinder.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeulandClusterMon(void *p = 0);
   static void *newArray_R3BNeulandClusterMon(Long_t size, void *p);
   static void delete_R3BNeulandClusterMon(void *p);
   static void deleteArray_R3BNeulandClusterMon(void *p);
   static void destruct_R3BNeulandClusterMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandClusterMon*)
   {
      ::R3BNeulandClusterMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandClusterMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandClusterMon", ::R3BNeulandClusterMon::Class_Version(), "", 42,
                  typeid(::R3BNeulandClusterMon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandClusterMon::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandClusterMon) );
      instance.SetNew(&new_R3BNeulandClusterMon);
      instance.SetNewArray(&newArray_R3BNeulandClusterMon);
      instance.SetDelete(&delete_R3BNeulandClusterMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandClusterMon);
      instance.SetDestructor(&destruct_R3BNeulandClusterMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandClusterMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandClusterMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandClusterMon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandClusterFinder(void *p = 0);
   static void *newArray_R3BNeulandClusterFinder(Long_t size, void *p);
   static void delete_R3BNeulandClusterFinder(void *p);
   static void deleteArray_R3BNeulandClusterFinder(void *p);
   static void destruct_R3BNeulandClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandClusterFinder*)
   {
      ::R3BNeulandClusterFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandClusterFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandClusterFinder", ::R3BNeulandClusterFinder::Class_Version(), "", 168,
                  typeid(::R3BNeulandClusterFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandClusterFinder) );
      instance.SetNew(&new_R3BNeulandClusterFinder);
      instance.SetNewArray(&newArray_R3BNeulandClusterFinder);
      instance.SetDelete(&delete_R3BNeulandClusterFinder);
      instance.SetDeleteArray(&deleteArray_R3BNeulandClusterFinder);
      instance.SetDestructor(&destruct_R3BNeulandClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandClusterFinder*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandClusterFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandClusterFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandClusterMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandClusterMon::Class_Name()
{
   return "R3BNeulandClusterMon";
}

//______________________________________________________________________________
const char *R3BNeulandClusterMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandClusterMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandClusterMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandClusterMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandClusterFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandClusterFinder::Class_Name()
{
   return "R3BNeulandClusterFinder";
}

//______________________________________________________________________________
const char *R3BNeulandClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandClusterFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeulandClusterMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandClusterMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandClusterMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandClusterMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandClusterMon(void *p) {
      return  p ? new(p) ::R3BNeulandClusterMon : new ::R3BNeulandClusterMon;
   }
   static void *newArray_R3BNeulandClusterMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandClusterMon[nElements] : new ::R3BNeulandClusterMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandClusterMon(void *p) {
      delete ((::R3BNeulandClusterMon*)p);
   }
   static void deleteArray_R3BNeulandClusterMon(void *p) {
      delete [] ((::R3BNeulandClusterMon*)p);
   }
   static void destruct_R3BNeulandClusterMon(void *p) {
      typedef ::R3BNeulandClusterMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandClusterMon

//______________________________________________________________________________
void R3BNeulandClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandClusterFinder(void *p) {
      return  p ? new(p) ::R3BNeulandClusterFinder : new ::R3BNeulandClusterFinder;
   }
   static void *newArray_R3BNeulandClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandClusterFinder[nElements] : new ::R3BNeulandClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandClusterFinder(void *p) {
      delete ((::R3BNeulandClusterFinder*)p);
   }
   static void deleteArray_R3BNeulandClusterFinder(void *p) {
      delete [] ((::R3BNeulandClusterFinder*)p);
   }
   static void destruct_R3BNeulandClusterFinder(void *p) {
      typedef ::R3BNeulandClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandClusterFinder

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandClusteringDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/clustering",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/clustering/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandClusteringDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeulandClusterMon;
class R3BNeulandClusterFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandClusteringDict dictionary payload"

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

#ifndef R3BNEULANDCLUSTERMON_H
#define R3BNEULANDCLUSTERMON_H

/** Neuland Cluster Monitor
 * @author Jan Mayer
 * @since  10.06.2015
 *
 *  Input:  Clusters. Should work both on Clusters from Monte Carlo simulations
 *          as well as experimental data on digi level.
 *  Output: Soon: Various diagrams.
 *          Currently: A 3D scatter plot for each event.
 */

#include "FairTask.h"
#include "Filterable.h"
#include "R3BNeulandCluster.h"
#include "TCAConnector.h"
#include <vector>

class TH1D;
class TH2D;
class TH3D;

class R3BNeulandClusterMon : public FairTask
{
  public:
    R3BNeulandClusterMon(TString input = "NeulandClusters",
                         TString output = "NeulandClusterMon",
                         const Option_t* option = "");

    ~R3BNeulandClusterMon() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandClusterMon(const R3BNeulandClusterMon&) = delete;            // copy constructor
    R3BNeulandClusterMon(R3BNeulandClusterMon&&) = delete;                 // move constructor
    R3BNeulandClusterMon& operator=(const R3BNeulandClusterMon&) = delete; // copy assignment
    R3BNeulandClusterMon& operator=(R3BNeulandClusterMon&&) = delete;      // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;
    void SetBeta(double b) { fBeta = b; }
    void AddFilter(const Filterable<R3BNeulandCluster*>::Filter& f) { fClusterFilters.Add(f); }

  private:
    TCAInputConnector<R3BNeulandCluster> fNeulandClusters;
    TString fOutput;

    double fBeta; // just for ClusterRValue

    Bool_t fIs3DTrackEnabled;
    TH3D* fh3;

    TH1D* fhClusters;
    TH1D* fhClusterSize;
    TH1D* fhClusterEnergy;
    TH1D* fhClusterRValue;
    TH2D* fhClusterEnergyVSSize;
    TH1D* fhClusterEToF;
    TH1D* fhClusterTime;
    TH2D* fhClusterNumberVSEnergy;
    TH2D* fhClusterEToFVSEnergy;
    TH2D* fhClusterEToFVSTime;
    TH2D* fhClusterEVSTime;

    TH2D* fhClusterEnergyVSEToF;
    TH2D* fhClusterSizeVSEToF;
    TH3D* fhClusterEnergyVSSizeVSEToF;

    TH2D* fhElasticTargetMass;

    TH2D* fhClusterForemostMinusCentroidVSEnergy;
    TH2D* fhClusterForemostMinusMaxEnergyDigiPosVSEnergy;

    TH2D* fhClusterCentroidMinusFirstDigiPosVSEnergy;
    TH2D* fhClusterMaxEnergyDigiMinusFirstDigiPosVSEnergy;
    TH2D* fhClusterMaxEnergyDigiMinusCentroidVSEnergy;
    TH2D* fhClusterEnergyMomentVSEnergy;
    TH2D* fhClusterEnergyMomentVSClusterSize;
    TH1D* fhClusterEnergyMoment;
    TH1D* fhClusterMaxEnergyDigiMinusFirstDigiMag;
    TH2D* fhClusterLastMinusFirstDigiMagVSEnergy;

    TH2D* fhENFromScatterVSEToF;

    TH2D* fhEToFVSEelastic;
    TH2D* fhScatteredNEnergyVSAngle;
    TH2D* fhScatteredNEnergyVSEdep;
    TH2D* fhScatterAngleVSRecoilAngle;
    TH2D* fhSumAngleVSRatioErecoEtof;
    TH2D* fhClusterEnergyVSScatteredRecoilAngle;
    TH2D* fhClusterEnergyVSScatteredNeutronAngle;

    TH1D* fhZ;
    TH2D* fhZVSEToF;
    TH1D* fhDistFromCenter;
    TH2D* fhDistFromCenterVSEToF;
    TH1D* fhDeltaT;
    TH1D* fhForemostMinusFirstDigiTime;

    TH2D* fhThetaEDigi;
    TH2D* fhThetaEDigiCosTheta;

    TH1D* hT;
    TH1D* hTNeigh;

    Filterable<R3BNeulandCluster*> fClusterFilters;

  public:
    ClassDefOverride(R3BNeulandClusterMon, 0);
};

#endif // R3BNEULANDCLUSTERMON_H
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

#ifndef R3BNEULANDCLUSTERFINDER_H_NEW
#define R3BNEULANDCLUSTERFINDER_H_NEW

/**
 * NeuLAND cluster finder task
 * @author Jan Mayer
 *
 * For each event, get the R3BNeulandHits and group them into R3BNeulandClusters using the Neuland Clustering Engine.
 *   Input:  Branch NeulandHits    = TClonesArray("R3BNeulandDigi")
 *   Output: Branch NeulandClusters = TClonesArray("R3BNeulandCluster")
 *
 */

#include "ClusteringEngine.h"
#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandHit.h"
#include "TCAConnector.h"

class R3BNeulandClusterFinder : public FairTask
{
  public:
    R3BNeulandClusterFinder(Double_t dx = 1. * 7.5,
                            Double_t dy = 1. * 7.5,
                            Double_t dz = 2. * 7.5,
                            Double_t dt = 1.,
                            TString input = "NeulandHits",
                            TString output = "NeulandClusters");

    ~R3BNeulandClusterFinder() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandClusterFinder(const R3BNeulandClusterFinder&) = delete;            // copy constructor
    R3BNeulandClusterFinder(R3BNeulandClusterFinder&&) = delete;                 // move constructor
    R3BNeulandClusterFinder& operator=(const R3BNeulandClusterFinder&) = delete; // copy assignment
    R3BNeulandClusterFinder& operator=(R3BNeulandClusterFinder&&) = delete;      // move assignment

  protected:
    InitStatus Init() override;

  public:
    void Exec(Option_t*) override;

  private:
    Neuland::ClusteringEngine<R3BNeulandHit> fClusteringEngine;
    TCAInputConnector<R3BNeulandHit> fDigis;
    TCAOutputConnector<R3BNeulandCluster> fClusters;

    ClassDefOverride(R3BNeulandClusterFinder, 0);
};

#endif // R3BNEULANDCLUSTERFINDER_H_NEW

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BNeulandClusterFinder", payloadCode, "@",
"R3BNeulandClusterMon", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandClusteringDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandClusteringDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandClusteringDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandClusteringDict() {
  TriggerDictionaryInitialization_G__R3BNeulandClusteringDict_Impl();
}
