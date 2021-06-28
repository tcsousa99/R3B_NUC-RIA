// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIanalysisdIG__R3BAnalysisDict

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
#include "R3BAnalysisIncomingFrs.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BAnalysisIncomingFrs(void *p = 0);
   static void *newArray_R3BAnalysisIncomingFrs(Long_t size, void *p);
   static void delete_R3BAnalysisIncomingFrs(void *p);
   static void deleteArray_R3BAnalysisIncomingFrs(void *p);
   static void destruct_R3BAnalysisIncomingFrs(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAnalysisIncomingFrs*)
   {
      ::R3BAnalysisIncomingFrs *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAnalysisIncomingFrs >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAnalysisIncomingFrs", ::R3BAnalysisIncomingFrs::Class_Version(), "", 41,
                  typeid(::R3BAnalysisIncomingFrs), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAnalysisIncomingFrs::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAnalysisIncomingFrs) );
      instance.SetNew(&new_R3BAnalysisIncomingFrs);
      instance.SetNewArray(&newArray_R3BAnalysisIncomingFrs);
      instance.SetDelete(&delete_R3BAnalysisIncomingFrs);
      instance.SetDeleteArray(&deleteArray_R3BAnalysisIncomingFrs);
      instance.SetDestructor(&destruct_R3BAnalysisIncomingFrs);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAnalysisIncomingFrs*)
   {
      return GenerateInitInstanceLocal((::R3BAnalysisIncomingFrs*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAnalysisIncomingFrs*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BAnalysisIncomingFrs::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAnalysisIncomingFrs::Class_Name()
{
   return "R3BAnalysisIncomingFrs";
}

//______________________________________________________________________________
const char *R3BAnalysisIncomingFrs::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAnalysisIncomingFrs*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAnalysisIncomingFrs::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAnalysisIncomingFrs*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAnalysisIncomingFrs::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAnalysisIncomingFrs*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAnalysisIncomingFrs::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAnalysisIncomingFrs*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BAnalysisIncomingFrs::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAnalysisIncomingFrs.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAnalysisIncomingFrs::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAnalysisIncomingFrs::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAnalysisIncomingFrs(void *p) {
      return  p ? new(p) ::R3BAnalysisIncomingFrs : new ::R3BAnalysisIncomingFrs;
   }
   static void *newArray_R3BAnalysisIncomingFrs(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAnalysisIncomingFrs[nElements] : new ::R3BAnalysisIncomingFrs[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAnalysisIncomingFrs(void *p) {
      delete ((::R3BAnalysisIncomingFrs*)p);
   }
   static void deleteArray_R3BAnalysisIncomingFrs(void *p) {
      delete [] ((::R3BAnalysisIncomingFrs*)p);
   }
   static void destruct_R3BAnalysisIncomingFrs(void *p) {
      typedef ::R3BAnalysisIncomingFrs current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAnalysisIncomingFrs

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = 0);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 214,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0)->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete ((vector<ULong64_t>*)p);
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] ((vector<ULong64_t>*)p);
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

namespace ROOT {
   static TClass *vectorlETClonesArraymUgR_Dictionary();
   static void vectorlETClonesArraymUgR_TClassManip(TClass*);
   static void *new_vectorlETClonesArraymUgR(void *p = 0);
   static void *newArray_vectorlETClonesArraymUgR(Long_t size, void *p);
   static void delete_vectorlETClonesArraymUgR(void *p);
   static void deleteArray_vectorlETClonesArraymUgR(void *p);
   static void destruct_vectorlETClonesArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TClonesArray*>*)
   {
      vector<TClonesArray*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TClonesArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TClonesArray*>", -2, "vector", 214,
                  typeid(vector<TClonesArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TClonesArray*>) );
      instance.SetNew(&new_vectorlETClonesArraymUgR);
      instance.SetNewArray(&newArray_vectorlETClonesArraymUgR);
      instance.SetDelete(&delete_vectorlETClonesArraymUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETClonesArraymUgR);
      instance.SetDestructor(&destruct_vectorlETClonesArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TClonesArray*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETClonesArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0)->GetClass();
      vectorlETClonesArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETClonesArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETClonesArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*> : new vector<TClonesArray*>;
   }
   static void *newArray_vectorlETClonesArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*>[nElements] : new vector<TClonesArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETClonesArraymUgR(void *p) {
      delete ((vector<TClonesArray*>*)p);
   }
   static void deleteArray_vectorlETClonesArraymUgR(void *p) {
      delete [] ((vector<TClonesArray*>*)p);
   }
   static void destruct_vectorlETClonesArraymUgR(void *p) {
      typedef vector<TClonesArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TClonesArray*>

namespace {
  void TriggerDictionaryInitialization_G__R3BAnalysisDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/analysis",
"/work/R3BRoot/los",
"/work/R3BRoot/rolu",
"/work/R3BRoot/sci2",
"/work/R3BRoot/sci8",
"/work/R3BRoot/tof",
"/work/R3BRoot/tcal",
"/work/R3BRoot/fiber",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/beammonitorData",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata/startrackData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/roluData",
"/work/R3BRoot/r3bdata/sci2Data",
"/work/R3BRoot/r3bdata/sci8Data",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/pdcData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/r3bdata/ptofData",
"/work/R3BRoot/r3bdata/sampData",
"/work/R3BRoot/r3bdata/sfibData",
"/work/R3BRoot/r3bdata/musicData",
"/work/R3BRoot/r3bdata/frsData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/analysis/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BAnalysisDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BAnalysisIncomingFrs;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BAnalysisDict dictionary payload"

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

#ifndef R3BAnalysisIncomingFrs_H
#define R3BAnalysisIncomingFrs_H

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "R3BFrsData.h"
#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BAnalysisIncomingFrs : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BAnalysisIncomingFrs();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BAnalysisIncomingFrs(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BAnalysisIncomingFrs();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    virtual void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

    /**
     * Methods for setting position offset and effective velocity of light
     */
    void SetLosXYMCFD(Double_t offsetX1,
                      Double_t offsetY1,
                      Double_t veffX1,
                      Double_t veffY1,
                      Double_t offsetX2,
                      Double_t offsetY2,
                      Double_t veffX2,
                      Double_t veffY2)
    {
        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    void SetLosXYTAMEX(Double_t offsetXT1,
                       Double_t offsetYT1,
                       Double_t veffXT1,
                       Double_t veffYT1,
                       Double_t offsetXT2,
                       Double_t offsetYT2,
                       Double_t veffXT2,
                       Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    void SetLosXYToT(Double_t offsetXQ1,
                     Double_t offsetYQ1,
                     Double_t veffXQ1,
                     Double_t veffYQ1,
                     Double_t offsetXQ2,
                     Double_t offsetYQ2,
                     Double_t veffXQ2,
                     Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }
    /* Method for pile-up */
    void SetEpileup(Double_t Epileup) { fEpileup = Epileup; }

    void SetZcut(Double_t zcut, Double_t zcutw)
    {
        ZMUSIC_cut = zcut;
        ZMUSIC_wcut = zcutw;
    }
    void SetAcut(Double_t acut, Double_t acutw)
    {
        AoQ_cut = acut;
        AoQ_wcut = acutw;
    }

    /* Method for setting number of LOS detectors */
    void SetNofLosModules(Int_t nDets)
    {
        fNofLosDetectors = nDets;

        time_prev.resize(nDets);
    }

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    void SetTpat(Int_t tpat) { fTpat = tpat; }

    // --- hard coded calibration
    void SetToFoffset(Double_t offset) { fToFoffset = offset; }
    void SetToFmin(Double_t t) { fToFmin = t; }
    void SetToFmax(Double_t t) { fToFmax = t; }
    void SetTof2InvV_p0(Double_t p) { fTof2InvV_p0 = p; }
    void SetTof2InvV_p1(Double_t p) { fTof2InvV_p1 = p; }
    void SetFlightLength(Double_t L) { fL2 = L; }
    void SetPos_p0(Double_t p) { fPos_p0 = p; }
    void SetPos_p1(Double_t p) { fPos_p1 = p; }
    void SetDispersionS2(Double_t DS2) { fDispersionS2 = DS2; }
    void SetBrho0_S2toCC(Double_t Brho0) { fBrho0_S2toCC = Brho0; }
    void SetBetaCorrectionForZ(Double_t p0, Double_t p1, Double_t p2, Double_t Zprimary, Double_t Zoffset)
    {
        fP0 = p0;
        fP1 = p1;
        fP2 = p2;
        fZprimary = Zprimary;
        fZoffset = Zoffset;
    }

    void SetPosS2_limits(Double_t min, Double_t max)
    {
        fPos2min = min;
        fPos2max = max;
    }

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    TClonesArray* fHitItemsMus;
    TClonesArray* fFrsDataCA; /**< Array with FRS-output data. >*/

    Double_t fPos2min, fPos2max;

    TClonesArray* fTcalSci2; /**< Array with Tcal items. */

    enum DetectorInstances
    {
        DET_LOS,
        DET_SAMPLER,
        DET_MAX
    };

    const char* fDetectorNames[DET_MAX + 1] = { "Los", "Sampler", NULL };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    Int_t nLosEvents = 0;
    // Adjust the offset when a DAQ subsystem restarts
    Double_t fToFoffset;
    Bool_t fOnline; // Don't store data for online

    //   TClonesArray *fbmonMappedItems;
    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;
    Double_t fP0, fP1, fP2, fZprimary, fZoffset;

    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    std::vector<unsigned long long> time_prev;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0;
    unsigned long long time_previous_event = 0;

    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Double_t fEpileup;

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    // --- 1/ select the good hit from the ToF from S2 to Cave C:
    Double_t fToFmin;
    Double_t fToFmax;

    // --- 2/ calibration in beta and ToF
    Double_t fTof2InvV_p0;
    Double_t fTof2InvV_p1;
    Double_t fL2;

    // --- 3/ calibration in position
    Double_t fPos_p0;
    Double_t fPos_p1;

    // --- 4/ AoQ calculation
    Double_t fDispersionS2;
    Double_t fBrho0_S2toCC;

    Double_t ZMUSIC_cut;
    Double_t ZMUSIC_wcut;

    Double_t AoQ_cut;
    Double_t AoQ_wcut;

    /** Private method FrsData **/
    //** Adds a FrsData to the analysis
    R3BFrsData* AddData(Int_t StaId,
                        Int_t StoId,
                        Double_t z,
                        Double_t aq,
                        Double_t betaval,
                        Double_t brhoval,
                        Double_t xs2,
                        Double_t xc);

  public:
    ClassDef(R3BAnalysisIncomingFrs, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BAnalysisIncomingFrs", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BAnalysisDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BAnalysisDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BAnalysisDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BAnalysisDict() {
  TriggerDictionaryInitialization_G__R3BAnalysisDict_Impl();
}
