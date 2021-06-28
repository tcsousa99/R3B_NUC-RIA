// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIsci2dIG__R3BSci2Dict

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
#include "R3BSci2Mapped2Tcal.h"
#include "R3BSci2Mapped2Cal.h"
#include "R3BSci2Mapped2CalPar.h"
#include "R3BSci2Cal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BSci2Mapped2Tcal(void *p = 0);
   static void *newArray_R3BSci2Mapped2Tcal(Long_t size, void *p);
   static void delete_R3BSci2Mapped2Tcal(void *p);
   static void deleteArray_R3BSci2Mapped2Tcal(void *p);
   static void destruct_R3BSci2Mapped2Tcal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2Mapped2Tcal*)
   {
      ::R3BSci2Mapped2Tcal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2Mapped2Tcal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2Mapped2Tcal", ::R3BSci2Mapped2Tcal::Class_Version(), "", 22,
                  typeid(::R3BSci2Mapped2Tcal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2Mapped2Tcal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2Mapped2Tcal) );
      instance.SetNew(&new_R3BSci2Mapped2Tcal);
      instance.SetNewArray(&newArray_R3BSci2Mapped2Tcal);
      instance.SetDelete(&delete_R3BSci2Mapped2Tcal);
      instance.SetDeleteArray(&deleteArray_R3BSci2Mapped2Tcal);
      instance.SetDestructor(&destruct_R3BSci2Mapped2Tcal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2Mapped2Tcal*)
   {
      return GenerateInitInstanceLocal((::R3BSci2Mapped2Tcal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2Mapped2Tcal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2Mapped2Cal(void *p = 0);
   static void *newArray_R3BSci2Mapped2Cal(Long_t size, void *p);
   static void delete_R3BSci2Mapped2Cal(void *p);
   static void deleteArray_R3BSci2Mapped2Cal(void *p);
   static void destruct_R3BSci2Mapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2Mapped2Cal*)
   {
      ::R3BSci2Mapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2Mapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2Mapped2Cal", ::R3BSci2Mapped2Cal::Class_Version(), "", 160,
                  typeid(::R3BSci2Mapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2Mapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2Mapped2Cal) );
      instance.SetNew(&new_R3BSci2Mapped2Cal);
      instance.SetNewArray(&newArray_R3BSci2Mapped2Cal);
      instance.SetDelete(&delete_R3BSci2Mapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BSci2Mapped2Cal);
      instance.SetDestructor(&destruct_R3BSci2Mapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2Mapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BSci2Mapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2Mapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2Mapped2CalPar(void *p = 0);
   static void *newArray_R3BSci2Mapped2CalPar(Long_t size, void *p);
   static void delete_R3BSci2Mapped2CalPar(void *p);
   static void deleteArray_R3BSci2Mapped2CalPar(void *p);
   static void destruct_R3BSci2Mapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2Mapped2CalPar*)
   {
      ::R3BSci2Mapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2Mapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2Mapped2CalPar", ::R3BSci2Mapped2CalPar::Class_Version(), "", 295,
                  typeid(::R3BSci2Mapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2Mapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2Mapped2CalPar) );
      instance.SetNew(&new_R3BSci2Mapped2CalPar);
      instance.SetNewArray(&newArray_R3BSci2Mapped2CalPar);
      instance.SetDelete(&delete_R3BSci2Mapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BSci2Mapped2CalPar);
      instance.SetDestructor(&destruct_R3BSci2Mapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2Mapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BSci2Mapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2Mapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2Cal2Hit(void *p = 0);
   static void *newArray_R3BSci2Cal2Hit(Long_t size, void *p);
   static void delete_R3BSci2Cal2Hit(void *p);
   static void deleteArray_R3BSci2Cal2Hit(void *p);
   static void destruct_R3BSci2Cal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2Cal2Hit*)
   {
      ::R3BSci2Cal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2Cal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2Cal2Hit", ::R3BSci2Cal2Hit::Class_Version(), "", 430,
                  typeid(::R3BSci2Cal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2Cal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2Cal2Hit) );
      instance.SetNew(&new_R3BSci2Cal2Hit);
      instance.SetNewArray(&newArray_R3BSci2Cal2Hit);
      instance.SetDelete(&delete_R3BSci2Cal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BSci2Cal2Hit);
      instance.SetDestructor(&destruct_R3BSci2Cal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2Cal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BSci2Cal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2Cal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2Mapped2Tcal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2Mapped2Tcal::Class_Name()
{
   return "R3BSci2Mapped2Tcal";
}

//______________________________________________________________________________
const char *R3BSci2Mapped2Tcal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Tcal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2Mapped2Tcal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Tcal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2Tcal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Tcal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2Tcal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Tcal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2Mapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2Mapped2Cal::Class_Name()
{
   return "R3BSci2Mapped2Cal";
}

//______________________________________________________________________________
const char *R3BSci2Mapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2Mapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2Mapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2Mapped2CalPar::Class_Name()
{
   return "R3BSci2Mapped2CalPar";
}

//______________________________________________________________________________
const char *R3BSci2Mapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2Mapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2Mapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Mapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2Cal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2Cal2Hit::Class_Name()
{
   return "R3BSci2Cal2Hit";
}

//______________________________________________________________________________
const char *R3BSci2Cal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Cal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2Cal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Cal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2Cal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Cal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2Cal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2Cal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BSci2Mapped2Tcal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2Mapped2Tcal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2Mapped2Tcal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2Mapped2Tcal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2Mapped2Tcal(void *p) {
      return  p ? new(p) ::R3BSci2Mapped2Tcal : new ::R3BSci2Mapped2Tcal;
   }
   static void *newArray_R3BSci2Mapped2Tcal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2Mapped2Tcal[nElements] : new ::R3BSci2Mapped2Tcal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2Mapped2Tcal(void *p) {
      delete ((::R3BSci2Mapped2Tcal*)p);
   }
   static void deleteArray_R3BSci2Mapped2Tcal(void *p) {
      delete [] ((::R3BSci2Mapped2Tcal*)p);
   }
   static void destruct_R3BSci2Mapped2Tcal(void *p) {
      typedef ::R3BSci2Mapped2Tcal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2Mapped2Tcal

//______________________________________________________________________________
void R3BSci2Mapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2Mapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2Mapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2Mapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2Mapped2Cal(void *p) {
      return  p ? new(p) ::R3BSci2Mapped2Cal : new ::R3BSci2Mapped2Cal;
   }
   static void *newArray_R3BSci2Mapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2Mapped2Cal[nElements] : new ::R3BSci2Mapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2Mapped2Cal(void *p) {
      delete ((::R3BSci2Mapped2Cal*)p);
   }
   static void deleteArray_R3BSci2Mapped2Cal(void *p) {
      delete [] ((::R3BSci2Mapped2Cal*)p);
   }
   static void destruct_R3BSci2Mapped2Cal(void *p) {
      typedef ::R3BSci2Mapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2Mapped2Cal

//______________________________________________________________________________
void R3BSci2Mapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2Mapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2Mapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2Mapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2Mapped2CalPar(void *p) {
      return  p ? new(p) ::R3BSci2Mapped2CalPar : new ::R3BSci2Mapped2CalPar;
   }
   static void *newArray_R3BSci2Mapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2Mapped2CalPar[nElements] : new ::R3BSci2Mapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2Mapped2CalPar(void *p) {
      delete ((::R3BSci2Mapped2CalPar*)p);
   }
   static void deleteArray_R3BSci2Mapped2CalPar(void *p) {
      delete [] ((::R3BSci2Mapped2CalPar*)p);
   }
   static void destruct_R3BSci2Mapped2CalPar(void *p) {
      typedef ::R3BSci2Mapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2Mapped2CalPar

//______________________________________________________________________________
void R3BSci2Cal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2Cal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2Cal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2Cal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2Cal2Hit(void *p) {
      return  p ? new(p) ::R3BSci2Cal2Hit : new ::R3BSci2Cal2Hit;
   }
   static void *newArray_R3BSci2Cal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2Cal2Hit[nElements] : new ::R3BSci2Cal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2Cal2Hit(void *p) {
      delete ((::R3BSci2Cal2Hit*)p);
   }
   static void deleteArray_R3BSci2Cal2Hit(void *p) {
      delete [] ((::R3BSci2Cal2Hit*)p);
   }
   static void destruct_R3BSci2Cal2Hit(void *p) {
      typedef ::R3BSci2Cal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2Cal2Hit

namespace {
  void TriggerDictionaryInitialization_G__R3BSci2Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/sci2",
"/work/R3BRoot/r3bdata/",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/sci2Data",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/sci2/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BSci2Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BSci2Mapped2Tcal;
class R3BSci2Mapped2Cal;
class R3BSci2Mapped2CalPar;
class R3BSci2Cal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BSci2Dict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BSCI2MAPPED2TCAL
#define R3BSCI2MAPPED2TCAL

#include <map>

#include "FairTask.h"

#include "R3BSci2TcalData.h"

class TClonesArray;
class TH1F;
class TH2F;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

class R3BSci2Mapped2Tcal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BSci2Mapped2Tcal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSci2Mapped2Tcal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSci2Mapped2Tcal();

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
     */
    inline void SetNofModules(Int_t nDets, Int_t nChs)
    {
        fNofDetectors = nDets;
        fNofChannels = nChs; //=3
        fNofModules = nChs * nDets * 3;
    }

  private:
    // std::map<Int_t, R3BTCalModulePar*> fMapPar; /**< Map for matching mdoule ID with parameter container. */
    TClonesArray* fMapped; /**< Array with mapped items - input data. */
    TClonesArray* fTcal;   /**< Array with cal items - output data. */
    Int_t fNofTcalItems;   /**< Number of produced time items per event. */
    Int_t Icounts_good = 0;
    Int_t Icounts_tot = 0;

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofModules;   /**< Total number of channels. */
    Double_t fClockFreq;  /**< Clock cycle in [ns]. */
    UInt_t fNEvent;

    // Private method to add TcalData
    R3BSci2TcalData* AddTcalData(Int_t det, Int_t ch, Double_t tns);

  public:
    ClassDef(R3BSci2Mapped2Tcal, 1)
};

#endif
// ---------------------------------------------------------------
// -----                  R3BSci2Mapped2Cal                   -----
// -----            Created August 6th 2019 by M. Heil -----
// ----- Convert mapped data to time calibrated data         -----
// ----- Following R3BLosMapped2Cal                          -----
// ---------------------------------------------------------------

#ifndef R3BSCI2MAPPED2CAL
#define R3BSCI2MAPPED2CAL

#include <map>

#include "FairTask.h"
#include "R3BSci2CalData.h"

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
 * analysis run containing R3BSci2Mapped2CalFill task.
 */
class R3BSci2Mapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BSci2Mapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSci2Mapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSci2Mapped2Cal();

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
    inline void SetNofModules(Int_t nDets, Int_t nChs)
    {
        fNofDetectors = nDets;
        fNofChannels = nChs; //=2
        fNofTypes = 3;
        fNofModules = nChs * nDets * 3;
    }

  private:
    // std::map<Int_t, R3BTCalModulePar*> fMapPar; /**< Map for matching mdoule ID with parameter container. */
    TClonesArray* fMappedItems; /**< Array with mapped items - input data. */
    TClonesArray* fCalItems;    /**< Array with cal items - output data. */
    Int_t fNofCalItems;         /**< Number of produced time items per event. */
    Int_t Icounts_good = 0;
    Int_t Icounts_tot = 0;

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofTypes = 3;
    UInt_t fNofModules;  /**< Total number of channels. */
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNEvent;

  public:
    ClassDef(R3BSci2Mapped2Cal, 1)
};

#endif
// ----------------------------------------------------------------
// -----     Create time calib parameters for Sci2 via VFTX    -----
// ------          Created December 6th by M. Heil        -----
// -----           Following R3BLosMapped2CalPar              -----
// ----------------------------------------------------------------

#ifndef R3BSCI2MAPPED2CALPAR_H
#define R3BSCI2MAPPED2CALPAR_H

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
class R3BSci2Mapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BSci2Mapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSci2Mapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSci2Mapped2CalPar();

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
     * Method for setting number of SCI2 detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    inline void SetNofModules(Int_t nDets, Int_t nCh)
    {
        fNofDetectors = nDets;
        fNofChannels = nCh; // = 3 with Tref
        fNofTypes = 3;
        fNofModules = nDets * nCh * 3;
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */
    Int_t Icount[3][3]{};

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofTypes = 3; /**< Number of time-types per channel (VFTX, TAMEX leading/trailing). */
    UInt_t fNofModules;   /**< Total number of modules (=edges) to calibrate */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fMapped;  /**< Array with mapped data - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BSci2Mapped2CalPar, 1)
};

#endif
// ------------------------------------------------------------------
// -----                  R3BSci2Cal2Hit                         -----
// -----            Created December 6th 2019 by M. Heil     -----
// ----- Convert time calibrated data to hit level (single time) ----
// ----- Following R3BLosCal2Hit
// ------------------------------------------------------------------

#ifndef R3BSCI2CAL2HIT
#define R3BSCI2CAL2HIT

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
 * analysis run containing R3BSci2Cal2HitFill task.
 */
class R3BSci2Cal2Hit : public FairTask
{

  public:
    /*
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BSci2Cal2Hit();

    /*
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BSci2Cal2Hit(const char* name, Int_t iVerbose = 1);

    /*
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BSci2Cal2Hit();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetSci2ParamMCFD(Double_t offsetX, Double_t veffX)
    {
        fsci2OffsetX = offsetX;
        fsci2VeffX = veffX;
    }

    inline void SetSci2ParamTAMEX(Double_t offsetXT, Double_t veffXT)
    {
        fsci2OffsetXT = offsetXT;
        fsci2VeffXT = veffXT;
    }

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
    Double_t fsci2VeffX;
    Double_t fsci2OffsetX;
    Double_t fsci2OffsetXT;
    Double_t fsci2VeffXT;

    TClonesArray* fMapped; /* < Array with mapped data - input data. */

    TH1F* fhTres_M;
    TH1F* fhTres_T;
    TH1F* fhQ;

    TH2F* fhQ_L;
    TH2F* fhQ_R;
    TH2F* fhQ_vs_X;
    TH2F* fhQ1_vs_Q2;

    Int_t Icount = 0;

  public:
    ClassDef(R3BSci2Cal2Hit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BSci2Cal2Hit", payloadCode, "@",
"R3BSci2Mapped2Cal", payloadCode, "@",
"R3BSci2Mapped2CalPar", payloadCode, "@",
"R3BSci2Mapped2Tcal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BSci2Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BSci2Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BSci2Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BSci2Dict() {
  TriggerDictionaryInitialization_G__R3BSci2Dict_Impl();
}
