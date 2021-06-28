// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIunpackdIG__R3BNeulandUnpackDict

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
#include "R3BNeulandTcalFill.h"
#include "R3BNeulandTcal.h"
#include "R3BNeulandPmt.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeulandTcalFill(void *p = 0);
   static void *newArray_R3BNeulandTcalFill(Long_t size, void *p);
   static void delete_R3BNeulandTcalFill(void *p);
   static void deleteArray_R3BNeulandTcalFill(void *p);
   static void destruct_R3BNeulandTcalFill(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTcalFill*)
   {
      ::R3BNeulandTcalFill *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTcalFill >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTcalFill", ::R3BNeulandTcalFill::Class_Version(), "", 42,
                  typeid(::R3BNeulandTcalFill), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTcalFill::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTcalFill) );
      instance.SetNew(&new_R3BNeulandTcalFill);
      instance.SetNewArray(&newArray_R3BNeulandTcalFill);
      instance.SetDelete(&delete_R3BNeulandTcalFill);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTcalFill);
      instance.SetDestructor(&destruct_R3BNeulandTcalFill);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTcalFill*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTcalFill*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTcalFill*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandTcal(void *p = 0);
   static void *newArray_R3BNeulandTcal(Long_t size, void *p);
   static void delete_R3BNeulandTcal(void *p);
   static void deleteArray_R3BNeulandTcal(void *p);
   static void destruct_R3BNeulandTcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTcal*)
   {
      ::R3BNeulandTcal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTcal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTcal", ::R3BNeulandTcal::Class_Version(), "", 185,
                  typeid(::R3BNeulandTcal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTcal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTcal) );
      instance.SetNew(&new_R3BNeulandTcal);
      instance.SetNewArray(&newArray_R3BNeulandTcal);
      instance.SetDelete(&delete_R3BNeulandTcal);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTcal);
      instance.SetDestructor(&destruct_R3BNeulandTcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTcal*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTcal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTcal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandPmt(void *p = 0);
   static void *newArray_R3BNeulandPmt(Long_t size, void *p);
   static void delete_R3BNeulandPmt(void *p);
   static void deleteArray_R3BNeulandPmt(void *p);
   static void destruct_R3BNeulandPmt(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandPmt*)
   {
      ::R3BNeulandPmt *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandPmt >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandPmt", ::R3BNeulandPmt::Class_Version(), "", 312,
                  typeid(::R3BNeulandPmt), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandPmt::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandPmt) );
      instance.SetNew(&new_R3BNeulandPmt);
      instance.SetNewArray(&newArray_R3BNeulandPmt);
      instance.SetDelete(&delete_R3BNeulandPmt);
      instance.SetDeleteArray(&deleteArray_R3BNeulandPmt);
      instance.SetDestructor(&destruct_R3BNeulandPmt);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandPmt*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandPmt*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandPmt*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTcalFill::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTcalFill::Class_Name()
{
   return "R3BNeulandTcalFill";
}

//______________________________________________________________________________
const char *R3BNeulandTcalFill::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcalFill*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTcalFill::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcalFill*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTcalFill::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcalFill*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTcalFill::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcalFill*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTcal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTcal::Class_Name()
{
   return "R3BNeulandTcal";
}

//______________________________________________________________________________
const char *R3BNeulandTcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTcal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandPmt::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandPmt::Class_Name()
{
   return "R3BNeulandPmt";
}

//______________________________________________________________________________
const char *R3BNeulandPmt::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPmt*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandPmt::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPmt*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandPmt::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPmt*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandPmt::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPmt*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeulandTcalFill::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTcalFill.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTcalFill::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTcalFill::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTcalFill(void *p) {
      return  p ? new(p) ::R3BNeulandTcalFill : new ::R3BNeulandTcalFill;
   }
   static void *newArray_R3BNeulandTcalFill(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTcalFill[nElements] : new ::R3BNeulandTcalFill[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTcalFill(void *p) {
      delete ((::R3BNeulandTcalFill*)p);
   }
   static void deleteArray_R3BNeulandTcalFill(void *p) {
      delete [] ((::R3BNeulandTcalFill*)p);
   }
   static void destruct_R3BNeulandTcalFill(void *p) {
      typedef ::R3BNeulandTcalFill current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTcalFill

//______________________________________________________________________________
void R3BNeulandTcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTcal(void *p) {
      return  p ? new(p) ::R3BNeulandTcal : new ::R3BNeulandTcal;
   }
   static void *newArray_R3BNeulandTcal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTcal[nElements] : new ::R3BNeulandTcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTcal(void *p) {
      delete ((::R3BNeulandTcal*)p);
   }
   static void deleteArray_R3BNeulandTcal(void *p) {
      delete [] ((::R3BNeulandTcal*)p);
   }
   static void destruct_R3BNeulandTcal(void *p) {
      typedef ::R3BNeulandTcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTcal

//______________________________________________________________________________
void R3BNeulandPmt::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandPmt.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandPmt::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandPmt::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandPmt(void *p) {
      return  p ? new(p) ::R3BNeulandPmt : new ::R3BNeulandPmt;
   }
   static void *newArray_R3BNeulandPmt(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandPmt[nElements] : new ::R3BNeulandPmt[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandPmt(void *p) {
      delete ((::R3BNeulandPmt*)p);
   }
   static void deleteArray_R3BNeulandPmt(void *p) {
      delete [] ((::R3BNeulandPmt*)p);
   }
   static void destruct_R3BNeulandPmt(void *p) {
      typedef ::R3BNeulandPmt current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandPmt

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandUnpackDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/neuland/unpack",
"/work/R3BRoot/r3bbase/",
"/work/R3BRoot/r3bdata/",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/unpack/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandUnpackDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeulandTcalFill;
class R3BNeulandTcal;
class R3BNeulandPmt;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandUnpackDict dictionary payload"

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

// ----------------------------------------------------------------
// -----                  R3BNeulandTcalFill                  -----
// -----             Created 27-01-2015 by M.Heil             -----
// ----------------------------------------------------------------

#ifndef R3BNEULANDTCALFILL_H
#define R3BNEULANDTCALFILL_H

#include "FairTask.h"

class R3BTCalPar;
class TClonesArray;
class R3BEventHeader;
class R3BTCalEngine;

/**
 * An analysis task for TCAL calibration of NeuLAND Tamex data.
 * This class fills TDC distribution for each Photomultiplier
 * of the NeuLAND detector and calculates the calibration
 * parameters using the R3BTCalEngine.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BNeulandTcalFill : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandTcalFill();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandTcalFill(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandTcalFill();

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
     * Method for setting the update rate.
     * @param rate an update rate value (events).
     */
    inline void SetUpdateRate(Int_t rate) { fUpdateRate = rate; }

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries in TDC
     * distribution greater than minimum statistics will be
     * calibrated.
     * @param minStats a value of minimum statistics required.
     */
    inline void SetMinStats(Int_t minStats) { fMinStats = minStats; }

    /**
     * Method for selecting events with certain trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }

    /**
     * Method for setting number of modules in NeuLAND setup.
     * @param nPlanes number planes.
     * @param nBars number of bars per plane.
     * @param n17 a number of channels with stop signal (17-th channel).
     */
    inline void SetNofModules(Int_t nPlanes, Int_t nBars, Int_t n17)
    {
        fNofPlanes = nPlanes;
        fNofBars = nBars;
        fNof17 = n17;
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    Int_t fNofPlanes; /**< Number of NeuLAND planes. */
    Int_t fNofBars;   /**< Number of NeuLAND bars per plane. */
    Int_t fNof17;     /**< Number of channels with stop signal. */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fHits;    /**< Array with NeuLAND hits - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BNeulandTcalFill, 1)
};

#endif // Test 1
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

// ------------------------------------------------------------
// -----                  R3BNeuLandTcal                  -----
// -----            Created 27-01-2015 by M.Heil          -----
// ------------------------------------------------------------

#ifndef R3BNEULANDTCAL
#define R3BNEULANDTCAL

#include "FairTask.h"

class TClonesArray;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BNeulandTcalFill task.
 */
class R3BNeulandTcal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandTcal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandTcal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandTcal();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for initialization of the parameter containers.
     * Called by the framework prior to Init() method.
     */
    virtual void SetParContainers();

    /**
     * Method for re-initialization of parameter containers
     * in case the Run ID has changed.
     */
    virtual InitStatus ReInit();

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
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }

    /**
     * Method for setting the number of NeuLAND modules.
     * @param nPMTs a number of photomultipliers.
     * @param n17 a number of channels with stop signal (17-th channel).
     */
    inline void SetNofModules(Int_t nPlanes, Int_t nBars, Int_t n17)
    {
        fNofPlanes = nPlanes;
        fNofBars = nBars;
        fNof17 = n17;
    }

  private:
    Int_t fNEvents;           /**< Event counter. */
    R3BEventHeader* header;   /**< Event header. */
    TClonesArray* fMappedHit; /**< Array with raw items - input data. */
    TClonesArray* fPmt;       /**< Array with time items - output data. */
    Int_t fNPmt;              /**< Number of produced time items per event. */
    R3BTCalPar* fTcalPar;     /**< TCAL parameter container. */
    Int_t fTrigger;           /**< Trigger value. */
    Int_t fNofPlanes;         /**< Number of planes. */
    Int_t fNofBars;           /**< Number of bars per plane. */
    Int_t fNof17;             /**< Number of channels with stop signal. */
    //    std::map<Int_t, Bool_t> fMap17Seen;         /**< Map with flag of observed stop signal. */
    //    std::map<Int_t, Double_t> fMapStopTime;     /**< Map with value of stop time. */
    //    std::map<Int_t, Int_t> fMapStopClock;       /**< Map with value of stop clock. */
    Double_t fClockFreq; /**< Clock cycle in [ns]. */

  public:
    ClassDef(R3BNeulandTcal, 1)
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

// -----------------------------------------------------------------------
// -----                         R3BNeulandPmt                       -----
// -----                Created 27-01-2016 by M.Heil                 -----
// -----------------------------------------------------------------------

#ifndef R3BNEULANDPMT
#define R3BNEULANDPMT

#include "TObject.h"

class R3BNeulandPmt : public TObject
{
  public:
    R3BNeulandPmt();
    R3BNeulandPmt(Int_t planeId, Int_t barId, Int_t side, Double_t time, Double_t charge);
    virtual ~R3BNeulandPmt();

    inline const Int_t& GetPlaneId() const { return fPlaneId; }
    inline const Int_t& GetBarId() const { return fBarId; }
    inline const Int_t& GetSide() const { return fSide; }
    inline const Double_t& GetTime() const { return fTime; }
    inline const Double_t& GetCharge() const { return fCharge; }

  private:
    Int_t fPlaneId;
    Int_t fBarId;
    Int_t fSide;
    Double_t fTime;
    Double_t fCharge;

  public:
    ClassDef(R3BNeulandPmt, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BNeulandPmt", payloadCode, "@",
"R3BNeulandTcal", payloadCode, "@",
"R3BNeulandTcalFill", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandUnpackDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandUnpackDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandUnpackDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandUnpackDict() {
  TriggerDictionaryInitialization_G__R3BNeulandUnpackDict_Impl();
}
