// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIsfibdIG__R3BSfibDict

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
#include "R3BSfibMapped2Cal.h"
#include "R3BSfibMapped2CalPar.h"
#include "R3BSfibCal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BSfibMapped2Cal(void *p);
   static void deleteArray_R3BSfibMapped2Cal(void *p);
   static void destruct_R3BSfibMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibMapped2Cal*)
   {
      ::R3BSfibMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibMapped2Cal", ::R3BSfibMapped2Cal::Class_Version(), "", 40,
                  typeid(::R3BSfibMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibMapped2Cal) );
      instance.SetDelete(&delete_R3BSfibMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BSfibMapped2Cal);
      instance.SetDestructor(&destruct_R3BSfibMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BSfibMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BSfibMapped2CalPar(void *p);
   static void deleteArray_R3BSfibMapped2CalPar(void *p);
   static void destruct_R3BSfibMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibMapped2CalPar*)
   {
      ::R3BSfibMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibMapped2CalPar", ::R3BSfibMapped2CalPar::Class_Version(), "", 136,
                  typeid(::R3BSfibMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibMapped2CalPar) );
      instance.SetDelete(&delete_R3BSfibMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BSfibMapped2CalPar);
      instance.SetDestructor(&destruct_R3BSfibMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BSfibMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BSfibCal2Hit(void *p);
   static void deleteArray_R3BSfibCal2Hit(void *p);
   static void destruct_R3BSfibCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibCal2Hit*)
   {
      ::R3BSfibCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibCal2Hit", ::R3BSfibCal2Hit::Class_Version(), "", 256,
                  typeid(::R3BSfibCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibCal2Hit) );
      instance.SetDelete(&delete_R3BSfibCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BSfibCal2Hit);
      instance.SetDestructor(&destruct_R3BSfibCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BSfibCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibMapped2Cal::Class_Name()
{
   return "R3BSfibMapped2Cal";
}

//______________________________________________________________________________
const char *R3BSfibMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibMapped2CalPar::Class_Name()
{
   return "R3BSfibMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BSfibMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibCal2Hit::Class_Name()
{
   return "R3BSfibCal2Hit";
}

//______________________________________________________________________________
const char *R3BSfibCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BSfibMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BSfibMapped2Cal(void *p) {
      delete ((::R3BSfibMapped2Cal*)p);
   }
   static void deleteArray_R3BSfibMapped2Cal(void *p) {
      delete [] ((::R3BSfibMapped2Cal*)p);
   }
   static void destruct_R3BSfibMapped2Cal(void *p) {
      typedef ::R3BSfibMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibMapped2Cal

//______________________________________________________________________________
void R3BSfibMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BSfibMapped2CalPar(void *p) {
      delete ((::R3BSfibMapped2CalPar*)p);
   }
   static void deleteArray_R3BSfibMapped2CalPar(void *p) {
      delete [] ((::R3BSfibMapped2CalPar*)p);
   }
   static void destruct_R3BSfibMapped2CalPar(void *p) {
      typedef ::R3BSfibMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibMapped2CalPar

//______________________________________________________________________________
void R3BSfibCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BSfibCal2Hit(void *p) {
      delete ((::R3BSfibCal2Hit*)p);
   }
   static void deleteArray_R3BSfibCal2Hit(void *p) {
      delete [] ((::R3BSfibCal2Hit*)p);
   }
   static void destruct_R3BSfibCal2Hit(void *p) {
      typedef ::R3BSfibCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibCal2Hit

namespace ROOT {
   static TClass *vectorlER3BSfibCal2HitcLcLChannelgR_Dictionary();
   static void vectorlER3BSfibCal2HitcLcLChannelgR_TClassManip(TClass*);
   static void *new_vectorlER3BSfibCal2HitcLcLChannelgR(void *p = 0);
   static void *newArray_vectorlER3BSfibCal2HitcLcLChannelgR(Long_t size, void *p);
   static void delete_vectorlER3BSfibCal2HitcLcLChannelgR(void *p);
   static void deleteArray_vectorlER3BSfibCal2HitcLcLChannelgR(void *p);
   static void destruct_vectorlER3BSfibCal2HitcLcLChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BSfibCal2Hit::Channel>*)
   {
      vector<R3BSfibCal2Hit::Channel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BSfibCal2Hit::Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BSfibCal2Hit::Channel>", -2, "vector", 214,
                  typeid(vector<R3BSfibCal2Hit::Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BSfibCal2HitcLcLChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BSfibCal2Hit::Channel>) );
      instance.SetNew(&new_vectorlER3BSfibCal2HitcLcLChannelgR);
      instance.SetNewArray(&newArray_vectorlER3BSfibCal2HitcLcLChannelgR);
      instance.SetDelete(&delete_vectorlER3BSfibCal2HitcLcLChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BSfibCal2HitcLcLChannelgR);
      instance.SetDestructor(&destruct_vectorlER3BSfibCal2HitcLcLChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BSfibCal2Hit::Channel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BSfibCal2Hit::Channel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BSfibCal2HitcLcLChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BSfibCal2Hit::Channel>*)0x0)->GetClass();
      vectorlER3BSfibCal2HitcLcLChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BSfibCal2HitcLcLChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BSfibCal2HitcLcLChannelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BSfibCal2Hit::Channel> : new vector<R3BSfibCal2Hit::Channel>;
   }
   static void *newArray_vectorlER3BSfibCal2HitcLcLChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BSfibCal2Hit::Channel>[nElements] : new vector<R3BSfibCal2Hit::Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BSfibCal2HitcLcLChannelgR(void *p) {
      delete ((vector<R3BSfibCal2Hit::Channel>*)p);
   }
   static void deleteArray_vectorlER3BSfibCal2HitcLcLChannelgR(void *p) {
      delete [] ((vector<R3BSfibCal2Hit::Channel>*)p);
   }
   static void destruct_vectorlER3BSfibCal2HitcLcLChannelgR(void *p) {
      typedef vector<R3BSfibCal2Hit::Channel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BSfibCal2Hit::Channel>

namespace {
  void TriggerDictionaryInitialization_G__R3BSfibDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/sfib",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/sfibData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/sfib/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BSfibDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BSfibMapped2Cal;
class R3BSfibMapped2CalPar;
class R3BSfibCal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BSfibDict dictionary payload"

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

// ------------------------------------------------------------
// -----                R3BSfibMapped2Cal                -----
// -----            Created Jan 13th 2018 by M.Heil       -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BSFIBMAPPED2CAL
#define R3BSFIBMAPPED2CAL

#include "FairTask.h"
#include <R3BTCalEngine.h>

class R3BTCalPar;

/**
 * An analysis task to apply TCAL calibration.
 * This class reads mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BSfibMapped2CalPar task.
 */
class R3BSfibMapped2Cal : public FairTask
{
  public:
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSfibMapped2Cal(Int_t,
		    enum R3BTCalEngine::CTDCVariant = R3BTCalEngine::CTDC_8_12_FWD_250);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSfibMapped2Cal();

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

  private:
    R3BTCalPar* fTCalPar;
    TClonesArray* fMappedItems;
    TClonesArray* fCalItems;
    Double_t fClockFreq;

  public:
    ClassDef(R3BSfibMapped2Cal, 1)
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

//
// Creates time calib parameters for bunched fiber detector.
//

#ifndef R3BSFIBMAPPED2CALPAR_H
#define R3BSFIBMAPPED2CALPAR_H

#include "FairTask.h"
#include <R3BTCalEngine.h>

class TClonesArray;
class R3BTCalPar;
class R3BEventHeader;

class R3BSfibMapped2CalPar : public FairTask
{
  public:
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param a_name a name of the task.
     * @param a_verbose a FairTask verbosity level.
     * @param a_update_rate a update rate for online histograms.
     * @param a_min_stats a minimum statistics for calibration.
     */
    R3BSfibMapped2CalPar(Int_t,
                                 enum R3BTCalEngine::CTDCVariant = R3BTCalEngine::CTDC_8_12_FWD_250,
                                 Int_t = 1e6,
                                 Int_t = 1e5);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSfibMapped2CalPar();

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
    virtual void Exec(Option_t*);

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
    virtual void SetUpdateRate(Int_t);

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries in TDC
     * distribution greater than minimum statistics will be
     * calibrated.
     * @param minStats a value of minimum statistics required.
     */
    virtual void SetMinStats(Int_t);

  private:
    enum R3BTCalEngine::CTDCVariant fCTDCVariant;
    TClonesArray* fMapped;
    R3BTCalPar* fTCalPar;
    R3BTCalEngine* fEngine;
    Int_t fUpdateRate;
    Int_t fMinStats;

  public:
    ClassDef(R3BSfibMapped2CalPar, 1)
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

#ifndef R3BSFIBCAL2HIT
#define R3BSFIBCAL2HIT

#include "FairTask.h"

#include <R3BTCalEngine.h>

#include <list>

class TH1F;
class TH2F;

class R3BSfibCalData;
class R3BSfibHitPar;

/**
 * Transforms bunched fiber Cal level data to Hit level.
 *
 * A note about the UCESB unpacker:
 * All channels in a full plane of fibers should be mapped in sequence. For
 * example, Fib4 is built out of two "sub-detectors" (left and right side),
 * where each subdet has 256 CTDC/Top 2 TAMEX2/Bot channels, which should be
 * mapped as:
 *  FIB4_Top1 .. FIB4_Top512
 *  FIB4_Bot1 .. FIB4_Bot4
 * This class will then figure out how to map the actual fibers (except for
 * non-ambiguous sorting errors).
 */
class R3BSfibCal2Hit : public FairTask
{
  public:
    enum Direction
    {
        HORIZONTAL,
        VERTICAL
    };
    struct ToT
    {
        ToT(R3BSfibCalData const*, R3BSfibCalData const*, Double_t, Double_t, Double_t);
        R3BSfibCalData const* lead;
        R3BSfibCalData const* trail;
        Double_t lead_ns, tail_ns, tot_ns;
    };
    struct Channel
    {
        std::list<R3BSfibCalData const*> lead_list;
        std::list<ToT> tot_list;
    };

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSfibCal2Hit(Int_t, enum R3BTCalEngine::CTDCVariant = R3BTCalEngine::CTDCVariant::CTDC_8_12_FWD_250);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSfibCal2Hit();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for re-initialization of parameter containers
     * in case the Run ID has changed.
     */
    virtual InitStatus ReInit();


    virtual void SetParContainers();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    virtual void Exec(Option_t*);

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

  private:
    Int_t fnEvents;

    double fClockFreq;
    TClonesArray* fCalItems;
    TClonesArray* fTopCalTriggerItems;
    TClonesArray* fBotCalTriggerItems;
    TClonesArray* fHitItems;
    unsigned const *fTopTriggerMap;
    unsigned const *fBotTriggerMap;
    Int_t fNofHitItems;
    // [0=Bot,1=Top][Channel].
    std::vector<Channel> fChannelArray[2];

  public:
    ClassDef(R3BSfibCal2Hit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BSfibCal2Hit", payloadCode, "@",
"R3BSfibMapped2Cal", payloadCode, "@",
"R3BSfibMapped2CalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BSfibDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BSfibDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BSfibDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BSfibDict() {
  TriggerDictionaryInitialization_G__R3BSfibDict_Impl();
}
