// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIroludIG__R3BRoluDict

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
#include "R3BRoluMapped2Cal.h"
#include "R3BRoluMapped2CalPar.h"
#include "R3BRoluCal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BRoluMapped2Cal(void *p = 0);
   static void *newArray_R3BRoluMapped2Cal(Long_t size, void *p);
   static void delete_R3BRoluMapped2Cal(void *p);
   static void deleteArray_R3BRoluMapped2Cal(void *p);
   static void destruct_R3BRoluMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluMapped2Cal*)
   {
      ::R3BRoluMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluMapped2Cal", ::R3BRoluMapped2Cal::Class_Version(), "", 48,
                  typeid(::R3BRoluMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluMapped2Cal) );
      instance.SetNew(&new_R3BRoluMapped2Cal);
      instance.SetNewArray(&newArray_R3BRoluMapped2Cal);
      instance.SetDelete(&delete_R3BRoluMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BRoluMapped2Cal);
      instance.SetDestructor(&destruct_R3BRoluMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BRoluMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BRoluMapped2CalPar(void *p = 0);
   static void *newArray_R3BRoluMapped2CalPar(Long_t size, void *p);
   static void delete_R3BRoluMapped2CalPar(void *p);
   static void deleteArray_R3BRoluMapped2CalPar(void *p);
   static void destruct_R3BRoluMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluMapped2CalPar*)
   {
      ::R3BRoluMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluMapped2CalPar", ::R3BRoluMapped2CalPar::Class_Version(), "", 193,
                  typeid(::R3BRoluMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluMapped2CalPar) );
      instance.SetNew(&new_R3BRoluMapped2CalPar);
      instance.SetNewArray(&newArray_R3BRoluMapped2CalPar);
      instance.SetDelete(&delete_R3BRoluMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BRoluMapped2CalPar);
      instance.SetDestructor(&destruct_R3BRoluMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BRoluMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BRoluCal2Hit(void *p = 0);
   static void *newArray_R3BRoluCal2Hit(Long_t size, void *p);
   static void delete_R3BRoluCal2Hit(void *p);
   static void deleteArray_R3BRoluCal2Hit(void *p);
   static void destruct_R3BRoluCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluCal2Hit*)
   {
      ::R3BRoluCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluCal2Hit", ::R3BRoluCal2Hit::Class_Version(), "", 340,
                  typeid(::R3BRoluCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluCal2Hit) );
      instance.SetNew(&new_R3BRoluCal2Hit);
      instance.SetNewArray(&newArray_R3BRoluCal2Hit);
      instance.SetDelete(&delete_R3BRoluCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BRoluCal2Hit);
      instance.SetDestructor(&destruct_R3BRoluCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BRoluCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluMapped2Cal::Class_Name()
{
   return "R3BRoluMapped2Cal";
}

//______________________________________________________________________________
const char *R3BRoluMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluMapped2CalPar::Class_Name()
{
   return "R3BRoluMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BRoluMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluCal2Hit::Class_Name()
{
   return "R3BRoluCal2Hit";
}

//______________________________________________________________________________
const char *R3BRoluCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BRoluMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluMapped2Cal(void *p) {
      return  p ? new(p) ::R3BRoluMapped2Cal : new ::R3BRoluMapped2Cal;
   }
   static void *newArray_R3BRoluMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluMapped2Cal[nElements] : new ::R3BRoluMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluMapped2Cal(void *p) {
      delete ((::R3BRoluMapped2Cal*)p);
   }
   static void deleteArray_R3BRoluMapped2Cal(void *p) {
      delete [] ((::R3BRoluMapped2Cal*)p);
   }
   static void destruct_R3BRoluMapped2Cal(void *p) {
      typedef ::R3BRoluMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluMapped2Cal

//______________________________________________________________________________
void R3BRoluMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BRoluMapped2CalPar : new ::R3BRoluMapped2CalPar;
   }
   static void *newArray_R3BRoluMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluMapped2CalPar[nElements] : new ::R3BRoluMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluMapped2CalPar(void *p) {
      delete ((::R3BRoluMapped2CalPar*)p);
   }
   static void deleteArray_R3BRoluMapped2CalPar(void *p) {
      delete [] ((::R3BRoluMapped2CalPar*)p);
   }
   static void destruct_R3BRoluMapped2CalPar(void *p) {
      typedef ::R3BRoluMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluMapped2CalPar

//______________________________________________________________________________
void R3BRoluCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluCal2Hit(void *p) {
      return  p ? new(p) ::R3BRoluCal2Hit : new ::R3BRoluCal2Hit;
   }
   static void *newArray_R3BRoluCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluCal2Hit[nElements] : new ::R3BRoluCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluCal2Hit(void *p) {
      delete ((::R3BRoluCal2Hit*)p);
   }
   static void deleteArray_R3BRoluCal2Hit(void *p) {
      delete [] ((::R3BRoluCal2Hit*)p);
   }
   static void destruct_R3BRoluCal2Hit(void *p) {
      typedef ::R3BRoluCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluCal2Hit

namespace {
  void TriggerDictionaryInitialization_G__R3BRoluDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/rolu",
"/work/R3BRoot/r3bdata/",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/roluData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/rolu/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BRoluDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BRoluMapped2Cal;
class R3BRoluMapped2CalPar;
class R3BRoluCal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BRoluDict dictionary payload"

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

// ---------------------------------------------------------------
// -----                  R3BRoluMapped2Cal                  -----
// -----            Created July 2019 by A. Kelic-Heil       -----
// ----- Convert mapped data to time calibrated data         -----
// ----- Following R3BLosMapped2Cal                          -----
// ---------------------------------------------------------------

#ifndef R3BROLUMAPPED2CAL
#define R3BROLUMAPPED2CAL

#include <map>

#include "FairTask.h"
#include "R3BRoluCalData.h"

class TClonesArray;
class TH1F;
class TH2F;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BRoluMapped2CalFill task.
 */
class R3BRoluMapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BRoluMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BRoluMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BRoluMapped2Cal();

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
     * Method for setting the number of modules.
     * @param nPMTs a number of photomultipliers.
     */
    inline void SetNofModules(Int_t nDets, Int_t nChs)
    {
        fNofDetectors = nDets;
        fNofChannels = nChs; //=4
        fNofTypes = 2;       // leading, trailing
        fNofModules = nChs * nDets * 2;
    }

  private:
    // std::map<Int_t, R3BTCalModulePar*> fMapPar; /**< Map for matching mdoule ID with parameter container. */
    TClonesArray* fMappedItems; /**< Array with mapped items - input data. */
    TClonesArray* fCalItems;    /**< Array with cal items - output data. */
    Int_t fNofCalItems;         /**< Number of produced time items per event. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofTypes = 2;
    UInt_t fNofModules;  /**< Total number of channels. */
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNEvent;

  public:
    ClassDef(R3BRoluMapped2Cal, 1)
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

// ----------------------------------------------------------------
// -----     Create time calib parameters for Rolu via        -----
// ------          Created July 2019 by A. Kelic-Heil         -----
// -----           Following R3BLosMapped2CalPar              -----
// ----------------------------------------------------------------

#ifndef R3BROLUMAPPED2CALPAR_H
#define R3BROLUMAPPED2CALPAR_H

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
class R3BRoluMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BRoluMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BRoluMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BRoluMapped2CalPar();

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
     * Method for setting the update rate for control histograms
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
     * Method for setting number of Rolu detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    inline void SetNofModules(Int_t nDets, Int_t nCh)
    {
        fNofDetectors = nDets;
        fNofChannels = nCh; // = 4
        fNofTypes = 2;
        fNofModules = nDets * nCh * 2;
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofTypes = 2; /**< Number of time-types per channel ( TAMEX leading/trailing). */
    UInt_t fNofModules;   /**< Total number of modules (=edges) to calibrate */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fMapped;  /**< Array with mapped data - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BRoluMapped2CalPar, 1)
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

// ------------------------------------------------------------------
// -----                  R3BRoluCal2Hit                         -----
// -----            Created July 2019 by A. Kelic-Heil     -----
// ----- Convert time calibrated data to hit level (single time) ----
// ----- Following R3BLosCal2Hit
// ------------------------------------------------------------------

#ifndef R3BRoluCAL2HIT
#define R3BRoluCAL2HIT

#include <map>

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;
/*
 * TODO: This explanation is humbug.
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BRoluCal2HitFill task.
 */
class R3BRoluCal2Hit : public FairTask
{

  public:
    /*
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BRoluCal2Hit();

    /*
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BRoluCal2Hit(const char* name, Int_t iVerbose = 1);

    /*
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BRoluCal2Hit();

    /*
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /*
     * Method for re-initialization of parameter containers
     * in case the Run ID has changed.
     */
    virtual InitStatus ReInit();

    /*
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t* option);

    /*
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    virtual void FinishEvent();

    /*
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

  private:
    TClonesArray* fCalItems; /* < Array with Cal items - input data. */
    TClonesArray* fHitItems; /* < Array with Hit items - output data. */
    UInt_t fNofHitItems;     /* < Number of hit items for cur event. */
    Double_t fClockFreq;     /* < Clock cycle in [ns]. */

    TClonesArray* fMapped; /* < Array with mapped data - input data. */

    TH1F* fhQ_R;
    TH1F* fhQ_O;
    TH1F* fhQ_L;
    TH1F* fhQ_U;

    Int_t Icount = 0;

  public:
    ClassDef(R3BRoluCal2Hit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BRoluCal2Hit", payloadCode, "@",
"R3BRoluMapped2Cal", payloadCode, "@",
"R3BRoluMapped2CalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BRoluDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BRoluDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BRoluDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BRoluDict() {
  TriggerDictionaryInitialization_G__R3BRoluDict_Impl();
}
