// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIcalibrationdIG__R3BNeulandCalibrationDict

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
#include "R3BNeulandMappedHist.h"
#include "R3BNeulandMapped2Cal.h"
#include "R3BNeulandMapped2CalPar.h"
#include "R3BNeulandTacquilaMapped2Cal.h"
#include "R3BNeulandTacquilaMapped2CalPar.h"
#include "R3BNeulandTacquilaMapped2QCalPar.h"
#include "R3BNeulandHitHist.h"
#include "R3BNeulandHitPar.h"
#include "R3BNeulandCosmicTracker.h"
#include "R3BNeulandHitCalibrationEngine.h"
#include "R3BNeulandHitCalibrationBar.h"
#include "R3BNeulandTSyncer.h"
#include "LSQR.h"
#include "R3BNeulandCal2HitPar.h"
#include "R3BNeulandParFact.h"
#include "R3BNeulandCal2Hit.h"
#include "R3BNeulandHitModulePar.h"
#include "R3BNeulandQCalPar.h"
#include "R3BNeulandQCalFiller.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeulandMappedHist(void *p = 0);
   static void *newArray_R3BNeulandMappedHist(Long_t size, void *p);
   static void delete_R3BNeulandMappedHist(void *p);
   static void deleteArray_R3BNeulandMappedHist(void *p);
   static void destruct_R3BNeulandMappedHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMappedHist*)
   {
      ::R3BNeulandMappedHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMappedHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMappedHist", ::R3BNeulandMappedHist::Class_Version(), "", 29,
                  typeid(::R3BNeulandMappedHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMappedHist::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMappedHist) );
      instance.SetNew(&new_R3BNeulandMappedHist);
      instance.SetNewArray(&newArray_R3BNeulandMappedHist);
      instance.SetDelete(&delete_R3BNeulandMappedHist);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMappedHist);
      instance.SetDestructor(&destruct_R3BNeulandMappedHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMappedHist*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMappedHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMappedHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMapped2Cal(void *p = 0);
   static void *newArray_R3BNeulandMapped2Cal(Long_t size, void *p);
   static void delete_R3BNeulandMapped2Cal(void *p);
   static void deleteArray_R3BNeulandMapped2Cal(void *p);
   static void destruct_R3BNeulandMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMapped2Cal*)
   {
      ::R3BNeulandMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMapped2Cal", ::R3BNeulandMapped2Cal::Class_Version(), "", 118,
                  typeid(::R3BNeulandMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMapped2Cal) );
      instance.SetNew(&new_R3BNeulandMapped2Cal);
      instance.SetNewArray(&newArray_R3BNeulandMapped2Cal);
      instance.SetDelete(&delete_R3BNeulandMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMapped2Cal);
      instance.SetDestructor(&destruct_R3BNeulandMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMapped2CalPar(void *p = 0);
   static void *newArray_R3BNeulandMapped2CalPar(Long_t size, void *p);
   static void delete_R3BNeulandMapped2CalPar(void *p);
   static void deleteArray_R3BNeulandMapped2CalPar(void *p);
   static void destruct_R3BNeulandMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMapped2CalPar*)
   {
      ::R3BNeulandMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMapped2CalPar", ::R3BNeulandMapped2CalPar::Class_Version(), "", 282,
                  typeid(::R3BNeulandMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMapped2CalPar) );
      instance.SetNew(&new_R3BNeulandMapped2CalPar);
      instance.SetNewArray(&newArray_R3BNeulandMapped2CalPar);
      instance.SetDelete(&delete_R3BNeulandMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMapped2CalPar);
      instance.SetDestructor(&destruct_R3BNeulandMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandTacquilaMapped2Cal(void *p = 0);
   static void *newArray_R3BNeulandTacquilaMapped2Cal(Long_t size, void *p);
   static void delete_R3BNeulandTacquilaMapped2Cal(void *p);
   static void deleteArray_R3BNeulandTacquilaMapped2Cal(void *p);
   static void destruct_R3BNeulandTacquilaMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTacquilaMapped2Cal*)
   {
      ::R3BNeulandTacquilaMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTacquilaMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTacquilaMapped2Cal", ::R3BNeulandTacquilaMapped2Cal::Class_Version(), "", 418,
                  typeid(::R3BNeulandTacquilaMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTacquilaMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTacquilaMapped2Cal) );
      instance.SetNew(&new_R3BNeulandTacquilaMapped2Cal);
      instance.SetNewArray(&newArray_R3BNeulandTacquilaMapped2Cal);
      instance.SetDelete(&delete_R3BNeulandTacquilaMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTacquilaMapped2Cal);
      instance.SetDestructor(&destruct_R3BNeulandTacquilaMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTacquilaMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTacquilaMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandTacquilaMapped2CalPar(void *p = 0);
   static void *newArray_R3BNeulandTacquilaMapped2CalPar(Long_t size, void *p);
   static void delete_R3BNeulandTacquilaMapped2CalPar(void *p);
   static void deleteArray_R3BNeulandTacquilaMapped2CalPar(void *p);
   static void destruct_R3BNeulandTacquilaMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTacquilaMapped2CalPar*)
   {
      ::R3BNeulandTacquilaMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTacquilaMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTacquilaMapped2CalPar", ::R3BNeulandTacquilaMapped2CalPar::Class_Version(), "", 567,
                  typeid(::R3BNeulandTacquilaMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTacquilaMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTacquilaMapped2CalPar) );
      instance.SetNew(&new_R3BNeulandTacquilaMapped2CalPar);
      instance.SetNewArray(&newArray_R3BNeulandTacquilaMapped2CalPar);
      instance.SetDelete(&delete_R3BNeulandTacquilaMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTacquilaMapped2CalPar);
      instance.SetDestructor(&destruct_R3BNeulandTacquilaMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTacquilaMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTacquilaMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandTacquilaMapped2QCalPar(void *p = 0);
   static void *newArray_R3BNeulandTacquilaMapped2QCalPar(Long_t size, void *p);
   static void delete_R3BNeulandTacquilaMapped2QCalPar(void *p);
   static void deleteArray_R3BNeulandTacquilaMapped2QCalPar(void *p);
   static void destruct_R3BNeulandTacquilaMapped2QCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTacquilaMapped2QCalPar*)
   {
      ::R3BNeulandTacquilaMapped2QCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTacquilaMapped2QCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTacquilaMapped2QCalPar", ::R3BNeulandTacquilaMapped2QCalPar::Class_Version(), "", 689,
                  typeid(::R3BNeulandTacquilaMapped2QCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTacquilaMapped2QCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTacquilaMapped2QCalPar) );
      instance.SetNew(&new_R3BNeulandTacquilaMapped2QCalPar);
      instance.SetNewArray(&newArray_R3BNeulandTacquilaMapped2QCalPar);
      instance.SetDelete(&delete_R3BNeulandTacquilaMapped2QCalPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTacquilaMapped2QCalPar);
      instance.SetDestructor(&destruct_R3BNeulandTacquilaMapped2QCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTacquilaMapped2QCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTacquilaMapped2QCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2QCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandHitHist(void *p = 0);
   static void *newArray_R3BNeulandHitHist(Long_t size, void *p);
   static void delete_R3BNeulandHitHist(void *p);
   static void deleteArray_R3BNeulandHitHist(void *p);
   static void destruct_R3BNeulandHitHist(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandHitHist*)
   {
      ::R3BNeulandHitHist *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandHitHist >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandHitHist", ::R3BNeulandHitHist::Class_Version(), "", 751,
                  typeid(::R3BNeulandHitHist), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandHitHist::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandHitHist) );
      instance.SetNew(&new_R3BNeulandHitHist);
      instance.SetNewArray(&newArray_R3BNeulandHitHist);
      instance.SetDelete(&delete_R3BNeulandHitHist);
      instance.SetDeleteArray(&deleteArray_R3BNeulandHitHist);
      instance.SetDestructor(&destruct_R3BNeulandHitHist);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandHitHist*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandHitHist*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandHitHist*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandHitModulePar(void *p = 0);
   static void *newArray_R3BNeulandHitModulePar(Long_t size, void *p);
   static void delete_R3BNeulandHitModulePar(void *p);
   static void deleteArray_R3BNeulandHitModulePar(void *p);
   static void destruct_R3BNeulandHitModulePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandHitModulePar*)
   {
      ::R3BNeulandHitModulePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandHitModulePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandHitModulePar", ::R3BNeulandHitModulePar::Class_Version(), "R3BNeulandHitModulePar.h", 28,
                  typeid(::R3BNeulandHitModulePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandHitModulePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandHitModulePar) );
      instance.SetNew(&new_R3BNeulandHitModulePar);
      instance.SetNewArray(&newArray_R3BNeulandHitModulePar);
      instance.SetDelete(&delete_R3BNeulandHitModulePar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandHitModulePar);
      instance.SetDestructor(&destruct_R3BNeulandHitModulePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandHitModulePar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandHitModulePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandHitModulePar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandHitPar(void *p = 0);
   static void *newArray_R3BNeulandHitPar(Long_t size, void *p);
   static void delete_R3BNeulandHitPar(void *p);
   static void deleteArray_R3BNeulandHitPar(void *p);
   static void destruct_R3BNeulandHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandHitPar*)
   {
      ::R3BNeulandHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandHitPar", ::R3BNeulandHitPar::Class_Version(), "", 841,
                  typeid(::R3BNeulandHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandHitPar) );
      instance.SetNew(&new_R3BNeulandHitPar);
      instance.SetNewArray(&newArray_R3BNeulandHitPar);
      instance.SetDelete(&delete_R3BNeulandHitPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandHitPar);
      instance.SetDestructor(&destruct_R3BNeulandHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLCalibrationcLcLCosmicTracker_Dictionary();
   static void NeulandcLcLCalibrationcLcLCosmicTracker_TClassManip(TClass*);
   static void *new_NeulandcLcLCalibrationcLcLCosmicTracker(void *p = 0);
   static void *newArray_NeulandcLcLCalibrationcLcLCosmicTracker(Long_t size, void *p);
   static void delete_NeulandcLcLCalibrationcLcLCosmicTracker(void *p);
   static void deleteArray_NeulandcLcLCalibrationcLcLCosmicTracker(void *p);
   static void destruct_NeulandcLcLCalibrationcLcLCosmicTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Calibration::CosmicTracker*)
   {
      ::Neuland::Calibration::CosmicTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Calibration::CosmicTracker));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Calibration::CosmicTracker", "", 982,
                  typeid(::Neuland::Calibration::CosmicTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLCalibrationcLcLCosmicTracker_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Calibration::CosmicTracker) );
      instance.SetNew(&new_NeulandcLcLCalibrationcLcLCosmicTracker);
      instance.SetNewArray(&newArray_NeulandcLcLCalibrationcLcLCosmicTracker);
      instance.SetDelete(&delete_NeulandcLcLCalibrationcLcLCosmicTracker);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLCalibrationcLcLCosmicTracker);
      instance.SetDestructor(&destruct_NeulandcLcLCalibrationcLcLCosmicTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Calibration::CosmicTracker*)
   {
      return GenerateInitInstanceLocal((::Neuland::Calibration::CosmicTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Calibration::CosmicTracker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLCalibrationcLcLCosmicTracker_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Calibration::CosmicTracker*)0x0)->GetClass();
      NeulandcLcLCalibrationcLcLCosmicTracker_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLCalibrationcLcLCosmicTracker_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLCalibrationcLcLHitCalibrationBar_Dictionary();
   static void NeulandcLcLCalibrationcLcLHitCalibrationBar_TClassManip(TClass*);
   static void *new_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p = 0);
   static void *newArray_NeulandcLcLCalibrationcLcLHitCalibrationBar(Long_t size, void *p);
   static void delete_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p);
   static void deleteArray_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p);
   static void destruct_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Calibration::HitCalibrationBar*)
   {
      ::Neuland::Calibration::HitCalibrationBar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Calibration::HitCalibrationBar));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Calibration::HitCalibrationBar", "R3BNeulandHitCalibrationBar.h", 37,
                  typeid(::Neuland::Calibration::HitCalibrationBar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLCalibrationcLcLHitCalibrationBar_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Calibration::HitCalibrationBar) );
      instance.SetNew(&new_NeulandcLcLCalibrationcLcLHitCalibrationBar);
      instance.SetNewArray(&newArray_NeulandcLcLCalibrationcLcLHitCalibrationBar);
      instance.SetDelete(&delete_NeulandcLcLCalibrationcLcLHitCalibrationBar);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLCalibrationcLcLHitCalibrationBar);
      instance.SetDestructor(&destruct_NeulandcLcLCalibrationcLcLHitCalibrationBar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Calibration::HitCalibrationBar*)
   {
      return GenerateInitInstanceLocal((::Neuland::Calibration::HitCalibrationBar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Calibration::HitCalibrationBar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLCalibrationcLcLHitCalibrationBar_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Calibration::HitCalibrationBar*)0x0)->GetClass();
      NeulandcLcLCalibrationcLcLHitCalibrationBar_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLCalibrationcLcLHitCalibrationBar_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLCalibrationcLcLTSyncer_Dictionary();
   static void NeulandcLcLCalibrationcLcLTSyncer_TClassManip(TClass*);
   static void *new_NeulandcLcLCalibrationcLcLTSyncer(void *p = 0);
   static void *newArray_NeulandcLcLCalibrationcLcLTSyncer(Long_t size, void *p);
   static void delete_NeulandcLcLCalibrationcLcLTSyncer(void *p);
   static void deleteArray_NeulandcLcLCalibrationcLcLTSyncer(void *p);
   static void destruct_NeulandcLcLCalibrationcLcLTSyncer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Calibration::TSyncer*)
   {
      ::Neuland::Calibration::TSyncer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Calibration::TSyncer));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Calibration::TSyncer", "R3BNeulandTSyncer.h", 30,
                  typeid(::Neuland::Calibration::TSyncer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLCalibrationcLcLTSyncer_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Calibration::TSyncer) );
      instance.SetNew(&new_NeulandcLcLCalibrationcLcLTSyncer);
      instance.SetNewArray(&newArray_NeulandcLcLCalibrationcLcLTSyncer);
      instance.SetDelete(&delete_NeulandcLcLCalibrationcLcLTSyncer);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLCalibrationcLcLTSyncer);
      instance.SetDestructor(&destruct_NeulandcLcLCalibrationcLcLTSyncer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Calibration::TSyncer*)
   {
      return GenerateInitInstanceLocal((::Neuland::Calibration::TSyncer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Calibration::TSyncer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLCalibrationcLcLTSyncer_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Calibration::TSyncer*)0x0)->GetClass();
      NeulandcLcLCalibrationcLcLTSyncer_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLCalibrationcLcLTSyncer_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandCal2HitPar(void *p = 0);
   static void *newArray_R3BNeulandCal2HitPar(Long_t size, void *p);
   static void delete_R3BNeulandCal2HitPar(void *p);
   static void deleteArray_R3BNeulandCal2HitPar(void *p);
   static void destruct_R3BNeulandCal2HitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandCal2HitPar*)
   {
      ::R3BNeulandCal2HitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandCal2HitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandCal2HitPar", ::R3BNeulandCal2HitPar::Class_Version(), "", 1758,
                  typeid(::R3BNeulandCal2HitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandCal2HitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandCal2HitPar) );
      instance.SetNew(&new_R3BNeulandCal2HitPar);
      instance.SetNewArray(&newArray_R3BNeulandCal2HitPar);
      instance.SetDelete(&delete_R3BNeulandCal2HitPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandCal2HitPar);
      instance.SetDestructor(&destruct_R3BNeulandCal2HitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandCal2HitPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandCal2HitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandCal2HitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandParFact(void *p = 0);
   static void *newArray_R3BNeulandParFact(Long_t size, void *p);
   static void delete_R3BNeulandParFact(void *p);
   static void deleteArray_R3BNeulandParFact(void *p);
   static void destruct_R3BNeulandParFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandParFact*)
   {
      ::R3BNeulandParFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandParFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandParFact", ::R3BNeulandParFact::Class_Version(), "", 1825,
                  typeid(::R3BNeulandParFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandParFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandParFact) );
      instance.SetNew(&new_R3BNeulandParFact);
      instance.SetNewArray(&newArray_R3BNeulandParFact);
      instance.SetDelete(&delete_R3BNeulandParFact);
      instance.SetDeleteArray(&deleteArray_R3BNeulandParFact);
      instance.SetDestructor(&destruct_R3BNeulandParFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandParFact*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandParFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandParFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandCal2Hit(void *p = 0);
   static void *newArray_R3BNeulandCal2Hit(Long_t size, void *p);
   static void delete_R3BNeulandCal2Hit(void *p);
   static void deleteArray_R3BNeulandCal2Hit(void *p);
   static void destruct_R3BNeulandCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandCal2Hit*)
   {
      ::R3BNeulandCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandCal2Hit", ::R3BNeulandCal2Hit::Class_Version(), "", 1885,
                  typeid(::R3BNeulandCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandCal2Hit) );
      instance.SetNew(&new_R3BNeulandCal2Hit);
      instance.SetNewArray(&newArray_R3BNeulandCal2Hit);
      instance.SetDelete(&delete_R3BNeulandCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BNeulandCal2Hit);
      instance.SetDestructor(&destruct_R3BNeulandCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandQCalPar(void *p = 0);
   static void *newArray_R3BNeulandQCalPar(Long_t size, void *p);
   static void delete_R3BNeulandQCalPar(void *p);
   static void deleteArray_R3BNeulandQCalPar(void *p);
   static void destruct_R3BNeulandQCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandQCalPar*)
   {
      ::R3BNeulandQCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandQCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandQCalPar", ::R3BNeulandQCalPar::Class_Version(), "", 2105,
                  typeid(::R3BNeulandQCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandQCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandQCalPar) );
      instance.SetNew(&new_R3BNeulandQCalPar);
      instance.SetNewArray(&newArray_R3BNeulandQCalPar);
      instance.SetDelete(&delete_R3BNeulandQCalPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandQCalPar);
      instance.SetDestructor(&destruct_R3BNeulandQCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandQCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandQCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandQCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandQCalFiller(void *p = 0);
   static void *newArray_R3BNeulandQCalFiller(Long_t size, void *p);
   static void delete_R3BNeulandQCalFiller(void *p);
   static void deleteArray_R3BNeulandQCalFiller(void *p);
   static void destruct_R3BNeulandQCalFiller(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandQCalFiller*)
   {
      ::R3BNeulandQCalFiller *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandQCalFiller >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandQCalFiller", ::R3BNeulandQCalFiller::Class_Version(), "", 2203,
                  typeid(::R3BNeulandQCalFiller), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandQCalFiller::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandQCalFiller) );
      instance.SetNew(&new_R3BNeulandQCalFiller);
      instance.SetNewArray(&newArray_R3BNeulandQCalFiller);
      instance.SetDelete(&delete_R3BNeulandQCalFiller);
      instance.SetDeleteArray(&deleteArray_R3BNeulandQCalFiller);
      instance.SetDestructor(&destruct_R3BNeulandQCalFiller);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandQCalFiller*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandQCalFiller*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandQCalFiller*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMappedHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMappedHist::Class_Name()
{
   return "R3BNeulandMappedHist";
}

//______________________________________________________________________________
const char *R3BNeulandMappedHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMappedHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMappedHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMappedHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMappedHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMapped2Cal::Class_Name()
{
   return "R3BNeulandMapped2Cal";
}

//______________________________________________________________________________
const char *R3BNeulandMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMapped2CalPar::Class_Name()
{
   return "R3BNeulandMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BNeulandMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTacquilaMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2Cal::Class_Name()
{
   return "R3BNeulandTacquilaMapped2Cal";
}

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTacquilaMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTacquilaMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2CalPar::Class_Name()
{
   return "R3BNeulandTacquilaMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTacquilaMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTacquilaMapped2QCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2QCalPar::Class_Name()
{
   return "R3BNeulandTacquilaMapped2QCalPar";
}

//______________________________________________________________________________
const char *R3BNeulandTacquilaMapped2QCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2QCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTacquilaMapped2QCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2QCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2QCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2QCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMapped2QCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMapped2QCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandHitHist::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandHitHist::Class_Name()
{
   return "R3BNeulandHitHist";
}

//______________________________________________________________________________
const char *R3BNeulandHitHist::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitHist*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandHitHist::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitHist*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandHitHist::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitHist*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandHitHist::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitHist*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandHitModulePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandHitModulePar::Class_Name()
{
   return "R3BNeulandHitModulePar";
}

//______________________________________________________________________________
const char *R3BNeulandHitModulePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitModulePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandHitModulePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitModulePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandHitModulePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitModulePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandHitModulePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitModulePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandHitPar::Class_Name()
{
   return "R3BNeulandHitPar";
}

//______________________________________________________________________________
const char *R3BNeulandHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandCal2HitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandCal2HitPar::Class_Name()
{
   return "R3BNeulandCal2HitPar";
}

//______________________________________________________________________________
const char *R3BNeulandCal2HitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2HitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandCal2HitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2HitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandCal2HitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2HitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandCal2HitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2HitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandParFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandParFact::Class_Name()
{
   return "R3BNeulandParFact";
}

//______________________________________________________________________________
const char *R3BNeulandParFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandParFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandParFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandParFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandParFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandParFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandParFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandParFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandCal2Hit::Class_Name()
{
   return "R3BNeulandCal2Hit";
}

//______________________________________________________________________________
const char *R3BNeulandCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandQCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandQCalPar::Class_Name()
{
   return "R3BNeulandQCalPar";
}

//______________________________________________________________________________
const char *R3BNeulandQCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandQCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandQCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandQCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandQCalFiller::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandQCalFiller::Class_Name()
{
   return "R3BNeulandQCalFiller";
}

//______________________________________________________________________________
const char *R3BNeulandQCalFiller::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalFiller*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandQCalFiller::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalFiller*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandQCalFiller::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalFiller*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandQCalFiller::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandQCalFiller*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeulandMappedHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMappedHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMappedHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMappedHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMappedHist(void *p) {
      return  p ? new(p) ::R3BNeulandMappedHist : new ::R3BNeulandMappedHist;
   }
   static void *newArray_R3BNeulandMappedHist(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMappedHist[nElements] : new ::R3BNeulandMappedHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMappedHist(void *p) {
      delete ((::R3BNeulandMappedHist*)p);
   }
   static void deleteArray_R3BNeulandMappedHist(void *p) {
      delete [] ((::R3BNeulandMappedHist*)p);
   }
   static void destruct_R3BNeulandMappedHist(void *p) {
      typedef ::R3BNeulandMappedHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMappedHist

//______________________________________________________________________________
void R3BNeulandMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMapped2Cal(void *p) {
      return  p ? new(p) ::R3BNeulandMapped2Cal : new ::R3BNeulandMapped2Cal;
   }
   static void *newArray_R3BNeulandMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMapped2Cal[nElements] : new ::R3BNeulandMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMapped2Cal(void *p) {
      delete ((::R3BNeulandMapped2Cal*)p);
   }
   static void deleteArray_R3BNeulandMapped2Cal(void *p) {
      delete [] ((::R3BNeulandMapped2Cal*)p);
   }
   static void destruct_R3BNeulandMapped2Cal(void *p) {
      typedef ::R3BNeulandMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMapped2Cal

//______________________________________________________________________________
void R3BNeulandMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BNeulandMapped2CalPar : new ::R3BNeulandMapped2CalPar;
   }
   static void *newArray_R3BNeulandMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMapped2CalPar[nElements] : new ::R3BNeulandMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMapped2CalPar(void *p) {
      delete ((::R3BNeulandMapped2CalPar*)p);
   }
   static void deleteArray_R3BNeulandMapped2CalPar(void *p) {
      delete [] ((::R3BNeulandMapped2CalPar*)p);
   }
   static void destruct_R3BNeulandMapped2CalPar(void *p) {
      typedef ::R3BNeulandMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMapped2CalPar

//______________________________________________________________________________
void R3BNeulandTacquilaMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTacquilaMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTacquilaMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTacquilaMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTacquilaMapped2Cal(void *p) {
      return  p ? new(p) ::R3BNeulandTacquilaMapped2Cal : new ::R3BNeulandTacquilaMapped2Cal;
   }
   static void *newArray_R3BNeulandTacquilaMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTacquilaMapped2Cal[nElements] : new ::R3BNeulandTacquilaMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTacquilaMapped2Cal(void *p) {
      delete ((::R3BNeulandTacquilaMapped2Cal*)p);
   }
   static void deleteArray_R3BNeulandTacquilaMapped2Cal(void *p) {
      delete [] ((::R3BNeulandTacquilaMapped2Cal*)p);
   }
   static void destruct_R3BNeulandTacquilaMapped2Cal(void *p) {
      typedef ::R3BNeulandTacquilaMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTacquilaMapped2Cal

//______________________________________________________________________________
void R3BNeulandTacquilaMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTacquilaMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTacquilaMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTacquilaMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTacquilaMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BNeulandTacquilaMapped2CalPar : new ::R3BNeulandTacquilaMapped2CalPar;
   }
   static void *newArray_R3BNeulandTacquilaMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTacquilaMapped2CalPar[nElements] : new ::R3BNeulandTacquilaMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTacquilaMapped2CalPar(void *p) {
      delete ((::R3BNeulandTacquilaMapped2CalPar*)p);
   }
   static void deleteArray_R3BNeulandTacquilaMapped2CalPar(void *p) {
      delete [] ((::R3BNeulandTacquilaMapped2CalPar*)p);
   }
   static void destruct_R3BNeulandTacquilaMapped2CalPar(void *p) {
      typedef ::R3BNeulandTacquilaMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTacquilaMapped2CalPar

//______________________________________________________________________________
void R3BNeulandTacquilaMapped2QCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTacquilaMapped2QCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTacquilaMapped2QCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTacquilaMapped2QCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTacquilaMapped2QCalPar(void *p) {
      return  p ? new(p) ::R3BNeulandTacquilaMapped2QCalPar : new ::R3BNeulandTacquilaMapped2QCalPar;
   }
   static void *newArray_R3BNeulandTacquilaMapped2QCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTacquilaMapped2QCalPar[nElements] : new ::R3BNeulandTacquilaMapped2QCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTacquilaMapped2QCalPar(void *p) {
      delete ((::R3BNeulandTacquilaMapped2QCalPar*)p);
   }
   static void deleteArray_R3BNeulandTacquilaMapped2QCalPar(void *p) {
      delete [] ((::R3BNeulandTacquilaMapped2QCalPar*)p);
   }
   static void destruct_R3BNeulandTacquilaMapped2QCalPar(void *p) {
      typedef ::R3BNeulandTacquilaMapped2QCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTacquilaMapped2QCalPar

//______________________________________________________________________________
void R3BNeulandHitHist::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandHitHist.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandHitHist::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandHitHist::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandHitHist(void *p) {
      return  p ? new(p) ::R3BNeulandHitHist : new ::R3BNeulandHitHist;
   }
   static void *newArray_R3BNeulandHitHist(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandHitHist[nElements] : new ::R3BNeulandHitHist[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandHitHist(void *p) {
      delete ((::R3BNeulandHitHist*)p);
   }
   static void deleteArray_R3BNeulandHitHist(void *p) {
      delete [] ((::R3BNeulandHitHist*)p);
   }
   static void destruct_R3BNeulandHitHist(void *p) {
      typedef ::R3BNeulandHitHist current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandHitHist

//______________________________________________________________________________
void R3BNeulandHitModulePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandHitModulePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandHitModulePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandHitModulePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandHitModulePar(void *p) {
      return  p ? new(p) ::R3BNeulandHitModulePar : new ::R3BNeulandHitModulePar;
   }
   static void *newArray_R3BNeulandHitModulePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandHitModulePar[nElements] : new ::R3BNeulandHitModulePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandHitModulePar(void *p) {
      delete ((::R3BNeulandHitModulePar*)p);
   }
   static void deleteArray_R3BNeulandHitModulePar(void *p) {
      delete [] ((::R3BNeulandHitModulePar*)p);
   }
   static void destruct_R3BNeulandHitModulePar(void *p) {
      typedef ::R3BNeulandHitModulePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandHitModulePar

//______________________________________________________________________________
void R3BNeulandHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandHitPar(void *p) {
      return  p ? new(p) ::R3BNeulandHitPar : new ::R3BNeulandHitPar;
   }
   static void *newArray_R3BNeulandHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandHitPar[nElements] : new ::R3BNeulandHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandHitPar(void *p) {
      delete ((::R3BNeulandHitPar*)p);
   }
   static void deleteArray_R3BNeulandHitPar(void *p) {
      delete [] ((::R3BNeulandHitPar*)p);
   }
   static void destruct_R3BNeulandHitPar(void *p) {
      typedef ::R3BNeulandHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandHitPar

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLCalibrationcLcLCosmicTracker(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::CosmicTracker : new ::Neuland::Calibration::CosmicTracker;
   }
   static void *newArray_NeulandcLcLCalibrationcLcLCosmicTracker(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::CosmicTracker[nElements] : new ::Neuland::Calibration::CosmicTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLCalibrationcLcLCosmicTracker(void *p) {
      delete ((::Neuland::Calibration::CosmicTracker*)p);
   }
   static void deleteArray_NeulandcLcLCalibrationcLcLCosmicTracker(void *p) {
      delete [] ((::Neuland::Calibration::CosmicTracker*)p);
   }
   static void destruct_NeulandcLcLCalibrationcLcLCosmicTracker(void *p) {
      typedef ::Neuland::Calibration::CosmicTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Calibration::CosmicTracker

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::HitCalibrationBar : new ::Neuland::Calibration::HitCalibrationBar;
   }
   static void *newArray_NeulandcLcLCalibrationcLcLHitCalibrationBar(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::HitCalibrationBar[nElements] : new ::Neuland::Calibration::HitCalibrationBar[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p) {
      delete ((::Neuland::Calibration::HitCalibrationBar*)p);
   }
   static void deleteArray_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p) {
      delete [] ((::Neuland::Calibration::HitCalibrationBar*)p);
   }
   static void destruct_NeulandcLcLCalibrationcLcLHitCalibrationBar(void *p) {
      typedef ::Neuland::Calibration::HitCalibrationBar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Calibration::HitCalibrationBar

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLCalibrationcLcLTSyncer(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::TSyncer : new ::Neuland::Calibration::TSyncer;
   }
   static void *newArray_NeulandcLcLCalibrationcLcLTSyncer(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Calibration::TSyncer[nElements] : new ::Neuland::Calibration::TSyncer[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLCalibrationcLcLTSyncer(void *p) {
      delete ((::Neuland::Calibration::TSyncer*)p);
   }
   static void deleteArray_NeulandcLcLCalibrationcLcLTSyncer(void *p) {
      delete [] ((::Neuland::Calibration::TSyncer*)p);
   }
   static void destruct_NeulandcLcLCalibrationcLcLTSyncer(void *p) {
      typedef ::Neuland::Calibration::TSyncer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Calibration::TSyncer

//______________________________________________________________________________
void R3BNeulandCal2HitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandCal2HitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandCal2HitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandCal2HitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandCal2HitPar(void *p) {
      return  p ? new(p) ::R3BNeulandCal2HitPar : new ::R3BNeulandCal2HitPar;
   }
   static void *newArray_R3BNeulandCal2HitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandCal2HitPar[nElements] : new ::R3BNeulandCal2HitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandCal2HitPar(void *p) {
      delete ((::R3BNeulandCal2HitPar*)p);
   }
   static void deleteArray_R3BNeulandCal2HitPar(void *p) {
      delete [] ((::R3BNeulandCal2HitPar*)p);
   }
   static void destruct_R3BNeulandCal2HitPar(void *p) {
      typedef ::R3BNeulandCal2HitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandCal2HitPar

//______________________________________________________________________________
void R3BNeulandParFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandParFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandParFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandParFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandParFact(void *p) {
      return  p ? new(p) ::R3BNeulandParFact : new ::R3BNeulandParFact;
   }
   static void *newArray_R3BNeulandParFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandParFact[nElements] : new ::R3BNeulandParFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandParFact(void *p) {
      delete ((::R3BNeulandParFact*)p);
   }
   static void deleteArray_R3BNeulandParFact(void *p) {
      delete [] ((::R3BNeulandParFact*)p);
   }
   static void destruct_R3BNeulandParFact(void *p) {
      typedef ::R3BNeulandParFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandParFact

//______________________________________________________________________________
void R3BNeulandCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandCal2Hit(void *p) {
      return  p ? new(p) ::R3BNeulandCal2Hit : new ::R3BNeulandCal2Hit;
   }
   static void *newArray_R3BNeulandCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandCal2Hit[nElements] : new ::R3BNeulandCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandCal2Hit(void *p) {
      delete ((::R3BNeulandCal2Hit*)p);
   }
   static void deleteArray_R3BNeulandCal2Hit(void *p) {
      delete [] ((::R3BNeulandCal2Hit*)p);
   }
   static void destruct_R3BNeulandCal2Hit(void *p) {
      typedef ::R3BNeulandCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandCal2Hit

//______________________________________________________________________________
void R3BNeulandQCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandQCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandQCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandQCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandQCalPar(void *p) {
      return  p ? new(p) ::R3BNeulandQCalPar : new ::R3BNeulandQCalPar;
   }
   static void *newArray_R3BNeulandQCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandQCalPar[nElements] : new ::R3BNeulandQCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandQCalPar(void *p) {
      delete ((::R3BNeulandQCalPar*)p);
   }
   static void deleteArray_R3BNeulandQCalPar(void *p) {
      delete [] ((::R3BNeulandQCalPar*)p);
   }
   static void destruct_R3BNeulandQCalPar(void *p) {
      typedef ::R3BNeulandQCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandQCalPar

//______________________________________________________________________________
void R3BNeulandQCalFiller::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandQCalFiller.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandQCalFiller::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandQCalFiller::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandQCalFiller(void *p) {
      return  p ? new(p) ::R3BNeulandQCalFiller : new ::R3BNeulandQCalFiller;
   }
   static void *newArray_R3BNeulandQCalFiller(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandQCalFiller[nElements] : new ::R3BNeulandQCalFiller[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandQCalFiller(void *p) {
      delete ((::R3BNeulandQCalFiller*)p);
   }
   static void deleteArray_R3BNeulandQCalFiller(void *p) {
      delete [] ((::R3BNeulandQCalFiller*)p);
   }
   static void destruct_R3BNeulandQCalFiller(void *p) {
      typedef ::R3BNeulandQCalFiller current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandQCalFiller

namespace ROOT {
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary();
   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<vector<TH1F*> > >*)
   {
      vector<vector<vector<TH1F*> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<vector<TH1F*> > >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<vector<TH1F*> > >", -2, "vector", 214,
                  typeid(vector<vector<vector<TH1F*> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<vector<TH1F*> > >) );
      instance.SetNew(&new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<vector<TH1F*> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<vector<TH1F*> > >*)0x0)->GetClass();
      vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > > : new vector<vector<vector<TH1F*> > >;
   }
   static void *newArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<vector<TH1F*> > >[nElements] : new vector<vector<vector<TH1F*> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void deleteArray_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      delete [] ((vector<vector<vector<TH1F*> > >*)p);
   }
   static void destruct_vectorlEvectorlEvectorlETH1FmUgRsPgRsPgR(void *p) {
      typedef vector<vector<vector<TH1F*> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<vector<TH1F*> > >

namespace ROOT {
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary();
   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p);
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<TH1F*> >*)
   {
      vector<vector<TH1F*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<TH1F*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<TH1F*> >", -2, "vector", 214,
                  typeid(vector<vector<TH1F*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlETH1FmUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<TH1F*> >) );
      instance.SetNew(&new_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlETH1FmUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlETH1FmUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<TH1F*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlETH1FmUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<TH1F*> >*)0x0)->GetClass();
      vectorlEvectorlETH1FmUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlETH1FmUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> > : new vector<vector<TH1F*> >;
   }
   static void *newArray_vectorlEvectorlETH1FmUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<TH1F*> >[nElements] : new vector<vector<TH1F*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete ((vector<vector<TH1F*> >*)p);
   }
   static void deleteArray_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      delete [] ((vector<vector<TH1F*> >*)p);
   }
   static void destruct_vectorlEvectorlETH1FmUgRsPgR(void *p) {
      typedef vector<vector<TH1F*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<TH1F*> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = 0);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 214,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)0x0)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 96,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 96,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace ROOT {
   static TClass *maplEintcOboolgR_Dictionary();
   static void maplEintcOboolgR_TClassManip(TClass*);
   static void *new_maplEintcOboolgR(void *p = 0);
   static void *newArray_maplEintcOboolgR(Long_t size, void *p);
   static void delete_maplEintcOboolgR(void *p);
   static void deleteArray_maplEintcOboolgR(void *p);
   static void destruct_maplEintcOboolgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,bool>*)
   {
      map<int,bool> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,bool>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,bool>", -2, "map", 96,
                  typeid(map<int,bool>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOboolgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,bool>) );
      instance.SetNew(&new_maplEintcOboolgR);
      instance.SetNewArray(&newArray_maplEintcOboolgR);
      instance.SetDelete(&delete_maplEintcOboolgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOboolgR);
      instance.SetDestructor(&destruct_maplEintcOboolgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,bool> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,bool>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOboolgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,bool>*)0x0)->GetClass();
      maplEintcOboolgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOboolgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOboolgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,bool> : new map<int,bool>;
   }
   static void *newArray_maplEintcOboolgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,bool>[nElements] : new map<int,bool>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOboolgR(void *p) {
      delete ((map<int,bool>*)p);
   }
   static void deleteArray_maplEintcOboolgR(void *p) {
      delete [] ((map<int,bool>*)p);
   }
   static void destruct_maplEintcOboolgR(void *p) {
      typedef map<int,bool> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,bool>

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandCalibrationDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/calibration",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/calibration/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandCalibrationDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BNeulandMappedHist;
class R3BNeulandMapped2Cal;
class R3BNeulandMapped2CalPar;
class R3BNeulandTacquilaMapped2Cal;
class R3BNeulandTacquilaMapped2CalPar;
class R3BNeulandTacquilaMapped2QCalPar;
class R3BNeulandHitHist;
class __attribute__((annotate("$clingAutoload$R3BNeulandHitModulePar.h")))  R3BNeulandHitModulePar;
class R3BNeulandHitPar;
namespace Neuland{namespace Calibration{class CosmicTracker;}}
namespace Neuland{namespace Calibration{class __attribute__((annotate("$clingAutoload$R3BNeulandHitCalibrationBar.h")))  HitCalibrationBar;}}
namespace Neuland{namespace Calibration{class __attribute__((annotate("$clingAutoload$R3BNeulandTSyncer.h")))  TSyncer;}}
class R3BNeulandCal2HitPar;
class R3BNeulandParFact;
class R3BNeulandCal2Hit;
class R3BNeulandQCalPar;
class R3BNeulandQCalFiller;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandCalibrationDict dictionary payload"

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

#ifndef R3BNEULANDMAPPEDHIST_H
#define R3BNEULANDMAPPEDHIST_H

#include "FairTask.h"

class R3BEventHeader;
class TClonesArray;
class TH1F;
class TH2F;

class R3BNeulandMappedHist : public FairTask
{
  public:
    R3BNeulandMappedHist();
    R3BNeulandMappedHist(const char* name, Int_t iVerbose);
    virtual ~R3BNeulandMappedHist();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    inline Int_t GetNItemsTotal() { return fNItemsTotal; }

  private:
    Int_t fnEvents;
    Int_t fNItemsTotal;

    R3BEventHeader* fHeader;
    TClonesArray* fLandMappedData;
    TClonesArray* fNeulandTamexHitMapped;
    TClonesArray* fLosMappedData;

    TH1F* fh_trigger;

    TH1F* fh_land_mapped_barid;
    TH1F* fh_land_mapped_side;
    TH1F* fh_land_mapped_clock;
    TH1F* fh_land_mapped_tac;
    TH1F* fh_land_mapped_qdc;

    TH1F* fh_neuland_mapped_is17;
    TH1F* fh_neuland_mapped_planeid;
    TH1F* fh_neuland_mapped_barid;
    TH1F* fh_neuland_mapped_side;
    TH1F* fh_neuland_mapped_cle;
    TH1F* fh_neuland_mapped_cte;
    TH1F* fh_neuland_mapped_fle;
    TH1F* fh_neuland_mapped_fte;

    TH1F* fh_los_det;
    TH1F* fh_los_ch;
    TH1F* fh_los_tcoarse;
    TH1F* fh_los_tfine;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BNeulandMappedHist, 0)
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

#ifndef R3BNEULANDMAPPED2CAL_H
#define R3BNEULANDMAPPED2CAL_H

#include "FairTask.h"
#include "TH2F.h"

class TClonesArray;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND raw items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BNeulandMapped2CalPar task.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BNeulandMapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandMapped2Cal();

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
     * @param nPlanes a number of planes.
     * @param nBars a number of bars per plane.
     */
    inline void SetNofModules(Int_t nPlanes, Int_t nBars)
    {
        fNofPlanes = nPlanes;
        fNofBarsPerPlane = nBars;
        fNofPMTs = nPlanes * nBars * 2;
    }

    /**
     * Method to set running mode for pulser data analysis.
     * @param mode a boolean flag - if TRUE events with all PMT's fired will be taken.
     */
    inline void SetPulserMode(Bool_t mode = kTRUE) { fPulserMode = mode; }

    /**
     * Method to enable / disable walk corrections.
     * @param walk a boolean flag - if TRUE, walk corrections will be applied.
     */
    inline void EnableWalk(Bool_t walk = kTRUE) { fWalkEnabled = walk; }

    inline void SetNhitmin(Int_t nhitmin = 1) { fNhitmin = nhitmin; }

  private:
    Int_t fNEvents;      /**< Event counter. */
    Bool_t fPulserMode;  /**< Running with pulser data. */
    Bool_t fWalkEnabled; /**< Enable / Disable walk correction. */

    TClonesArray* fMapped; /**< Array with raw items - input data. */
    TClonesArray* fPmt;    /**< Array with time items - output data. */
    Int_t fNPmt;           /**< Number of produced time items per event. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    Int_t fNofPlanes;       /**< Number of photomultipliers. */
    Int_t fNofBarsPerPlane; /**< Number of photomultipliers. */
    Int_t fNofPMTs;         /**< Number of photomultipliers. */

    Double_t fClockFreq; /**< Clock cycle in [ns]. */

    void MakeCal();

    Double_t WalkCorrection(Double_t);

    TH2F* htcal1;
    TH2F* htcal2;
    TH2F* htcal3;
    TH2F* htcal4;

    Int_t fNhitmin;

  public:
    ClassDef(R3BNeulandMapped2Cal, 1)
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

#ifndef R3BNEULANDMAPPED2CALPAR_H
#define R3BNEULANDMAPPED2CALPAR_H

#include "FairTask.h"

class R3BTCalPar;
class R3BEventHeader;
class R3BTCalEngine;

/**
 * An analysis task for TCAL calibration of NeuLAND data.
 * This class fills TDC distribution for each Photomultiplier
 * of the NeuLAND detector and calculates the calibration
 * parameters using the R3BTCalEngine.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BNeulandMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandMapped2CalPar();

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
     * @param nPMTs a number of photomultipliers.
     */
    inline void SetNofModules(Int_t nPlanes, Int_t nBars)
    {
        fNofPlanes = nPlanes;
        fNofBarsPerPlane = nBars;
        fNofPMTs = nPlanes * nBars * 4;
    }

  private:
    Int_t fMinStats; /**< Minimum statistics required per module. */
    Int_t fTrigger;  /**< Trigger value. */

    Int_t fNofPlanes;       /**< Number of photomultipliers. */
    Int_t fNofBarsPerPlane; /**< Number of photomultipliers. */
    Int_t fNofPMTs;         /**< Number of NeuLAND modules. */

    Int_t checkcounts;
    Int_t counts[60][50][4];

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fHits;    /**< Array with NeuLAND hits - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BNeulandMapped2CalPar, 1)
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

#ifndef R3BNEULANDTACQUILAMAPPED2CAL_H
#define R3BNEULANDTACQUILAMAPPED2CAL_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;
class R3BNeulandQCalPar;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND raw items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BNeulandTacquilaMapped2CalPar task.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BNeulandTacquilaMapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandTacquilaMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandTacquilaMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandTacquilaMapped2Cal();

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
     */
    inline void SetNofModules(Int_t nPMTs) { fNofPMTs = nPMTs; }

    /**
     * Method to set running mode for pulser data analysis.
     * @param mode a boolean flag - if TRUE events with all PMT's fired will be taken.
     */
    inline void SetPulserMode(Bool_t mode = kTRUE) { fPulserMode = mode; }

    /**
     * Method to enable / disable walk corrections.
     * @param walk a boolean flag - if TRUE, walk corrections will be applied.
     */
    inline void EnableWalk(Bool_t walk = kTRUE) { fWalkEnabled = walk; }

  private:
    void SetParameter();

    Int_t fNEvents;                          /**< Event counter. */
    Bool_t fPulserMode;                      /**< Running with pulser data. */
    Bool_t fWalkEnabled;                     /**< Enable / Disable walk correction. */
    R3BEventHeader* header;                  /**< Event header. */
    TClonesArray* fRawHit;                   /**< Array with raw items - input data. */
    TClonesArray* fPmt;                      /**< Array with time items - output data. */
    Int_t fNPmt;                             /**< Number of produced time items per event. */
    R3BTCalPar* fTcalPar;                    /**< TCAL parameter container. */
    R3BNeulandQCalPar* fQCalPar;             /**< QCAL parameter container. */
    Int_t fTrigger;                          /**< Trigger value. */
    Int_t fNofPMTs;                          /**< Number of photomultipliers. */
    std::map<Int_t, Bool_t> fMap17Seen;      /**< Map with flag of observed stop signal. */
    std::map<Int_t, Double_t> fMapStopTime;  /**< Map with value of stop time. */
    std::map<Int_t, Int_t> fMapStopClock;    /**< Map with value of stop clock. */
    std::map<Int_t, Double_t> fMapQdcOffset; /**< Map with value of qdc offset. */
    Double_t fClockFreq;                     /**< Clock cycle in [ns]. */
    TH1F* fh_pulser_5_2;                     /**< Resolution of one PMT. */
    TH1F* fh_pulser_105_2;                   /**< Resolution of one PMT. */

    void MakeCal();

  public:
    ClassDef(R3BNeulandTacquilaMapped2Cal, 1)
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

#ifndef R3BNEULANDTACQUILAMAPPED2CALPAR_H
#define R3BNEULANDTACQUILAMAPPED2CALPAR_H

#include "FairTask.h"

class R3BTCalPar;
class TClonesArray;
class R3BEventHeader;
class R3BTCalEngine;

/**
 * An analysis task for TCAL calibration of NeuLAND data.
 * This class fills TDC distribution for each Photomultiplier
 * of the NeuLAND detector and calculates the calibration
 * parameters using the R3BTCalEngine.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BNeulandTacquilaMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BNeulandTacquilaMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BNeulandTacquilaMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BNeulandTacquilaMapped2CalPar();

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
     * @param nPMTs a number of photomultipliers.
     */
    inline void SetNofModules(Int_t nPMTs) { fNofPMTs = nPMTs; }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    Int_t fNofPMTs; /**< Number of NeuLAND modules. */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fHits;    /**< Array with NeuLAND hits - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BNeulandTacquilaMapped2CalPar, 1)
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

#ifndef R3BNEULANDTACQUILAMAPPED2QCALPAR_H
#define R3BNEULANDTACQUILAMAPPED2QCALPAR_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class R3BEventHeader;
class R3BNeulandQCalPar;

class R3BNeulandTacquilaMapped2QCalPar : public FairTask
{

  public:
    R3BNeulandTacquilaMapped2QCalPar();
    R3BNeulandTacquilaMapped2QCalPar(const char* name, Int_t iVerbose = 1);
    virtual ~R3BNeulandTacquilaMapped2QCalPar();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    void SetPlanes(Int_t planes) { fPlanes = planes; }

  private:
    Int_t fPlanes = 60;
    Int_t fPaddles = 50;

    TClonesArray* fHits;
    R3BNeulandQCalPar* fPar;

    Int_t fEventNumber = 0;

    R3BEventHeader* header;

    std::vector<std::vector<std::vector<TH1F*>>> fData;

  public:
    ClassDef(R3BNeulandTacquilaMapped2QCalPar, 1)
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

// -----------------------------------------------------------------------------
// -----                            R3BNeulandHitHist                      -----
// -----                     Created 22-04-2014 by D.Kresan                -----
// -----------------------------------------------------------------------------

#ifndef R3BNEULANDHITHIST_H
#define R3BNEULANDHITHIST_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BNeulandHitHist : public FairTask
{
  public:
    R3BNeulandHitHist();
    R3BNeulandHitHist(const char* name, Int_t iVerbose);
    virtual ~R3BNeulandHitHist();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    inline void SetNofBars(Int_t nofBars) { fNofBars = nofBars; }

    inline void SetFirstPlaneHorisontal() { fFirstPlaneHorisontal = kTRUE; }

    inline void SetTimeOffset(Double_t t) { fTimeOffset = t; }

    inline void SetDistance(Double_t t) { fDistance = t; }

  private:
    Int_t fNofBars;
    Double_t fTimeOffset;
    Bool_t fFirstPlaneHorisontal;

    Int_t fnEvents;
    Double_t fDistance;

    TClonesArray* fLandDigi;
    TClonesArray* fLosHit;

    TH1F* fh_land_barid;
    TH2F* fh_land_qdcbarid;
    TH1F* fh_land_tof;
    TH2F* fh_land_qdctof;
    TH2F* fh_land_qdctof_norm;
    TH2F* fh_land_timebarid;
    TH2F* fh_land_tofbarid;
    TH2F* fh_land_betabarid;
    TH2F* fh_land_yx;
    TH2F* fh_land_yx1;
    TH2F* fh_land_yx2;
    TH2F* fh_land_lbarid;
    TH2F* fh_land_ltime;

    TH1F* fh_land_beta;
    TH1F* fh_land_qdc;
    TH1F* fh_land_qdc_cut;

    TH1F* fh_los_time;

    TH2F* fh_los_corr;

    TH1F* fh_land_norm_tof;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BNeulandHitHist, 0)
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

#ifndef R3BNEULANDHITPAR_H
#define R3BNEULANDHITPAR_H

#include "FairParGenericSet.h" // for FairParGenericSet
#include "R3BNeulandHitModulePar.h"
#include "TObjArray.h"

#include <array>

class FairParamList;

class R3BNeulandHitPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BNeulandHitPar(const char* name = "NeulandHitPar",
                     const char* title = "Calibration",
                     const char* context = "TestDefaultContext",
                     Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BNeulandHitPar(void);

    /**
     * Method to reset the values of parameters.
     */
    void clear(void);

    /**
     * Method to store parameters using FairRuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

    /**
     * Method to retrieve parameters using FairRuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successful, else kFALSE.
     */
    Bool_t getParams(FairParamList* list);

    /**
     * Method to print value of parameters to the standard output.
     * Calls printParams() for every module container.
     */
    void printParams();

    /**
     * Method to add parameter container for a module.
     * Extends the array.
     * @param tch a parameter container for a detector module.
     */
    void AddModulePar(R3BNeulandHitModulePar* tch) { fParams->Add(tch); }

    /**
     * Method to retrieve the arrray with module containers.
     * @return an array with parameter containers of type R3BNeulandHitModulePar.
     */
    TObjArray* GetListOfModulePar() const { return fParams; }

    /**
     * Method to get number of modules storred in array.
     * @return size of array.
     */
    Int_t GetNumModulePar() const { return fParams->GetEntriesFast(); }

    /**
     * Method to get single parameter container for a specific module.
     * @param idx an index of a module.
     * @return parameter container of this module.
     */
    R3BNeulandHitModulePar* GetModuleParAt(Int_t idx) const { return (R3BNeulandHitModulePar*)fParams->At(idx); }

    // Global time offset in ns
    inline Double_t GetGlobalTimeOffset() const { return fGlobalTimeOffset; }
    inline void SetGlobalTimeOffset(Double_t t0_ns) { fGlobalTimeOffset = t0_ns; }

    // Distance to Target in cm
    inline Double_t GetDistanceToTarget(Int_t plane = 0) const
    {
        return fDistanceToTarget + fDistancesToFirstPlane.at(plane);
    }
    inline void SetDistanceToTarget(Double_t distance_cm) { fDistanceToTarget = distance_cm; }

    // Energy Cutoff for all Hits in MeV
    inline Double_t GetEnergyCutoff() const { return fEnergyCut; }
    inline void SetEnergyCutoff(Double_t energy_MeV) { fEnergyCut = energy_MeV; }

    // Number of Planes
    inline Int_t GetNumberOfPlanes() const { return fDistancesToFirstPlane.size(); }
    inline void SetNumberOfPlanes(const Int_t nPlanes) { fDistancesToFirstPlane.resize(nPlanes); }

    // Distance to first Plane in cm
    inline Double_t GetDistanceToFirstPlane(Int_t plane) const { return fDistancesToFirstPlane.at(plane); }
    inline void SetDistanceToFirstPlane(Int_t plane, Double_t distance_cm)
    {
        fDistancesToFirstPlane.at(plane) = distance_cm;
    }

    inline std::vector<Double_t> GetDistancesToFirstPlane() const { return fDistancesToFirstPlane; }

  private:
    TObjArray* fParams; /**< an array with parameter containers of all modules */

    Double_t fGlobalTimeOffset;
    Double_t fDistanceToTarget;
    Double_t fEnergyCut;
    std::vector<Double_t> fDistancesToFirstPlane;

    ClassDef(R3BNeulandHitPar, 3);
};

#endif /* !R3BNEULANDHITPAR_H*/
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

#ifndef R3BNEULANDCOSMICTRACKER_H
#define R3BNEULANDCOSMICTRACKER_H

#include <array>
#include <vector>

#include "TF1.h"
#include "TGraphErrors.h"
#include "TVector3.h"

#include "R3BNeulandCommon.h"
#include "R3BNeulandCosmicTrack.h"

namespace Neuland
{
    namespace Calibration
    {
        class CosmicTracker
        {
            using DPair = std::array<Double_t, 2>;

          public:
            CosmicTracker();

            void SetDistances(const std::vector<Double_t>& distances) { fDistances = distances; }
            void AddPoint(const Int_t barID, const Double_t pos = NaN);
            const R3BNeulandCosmicTrack& GetTrack();
            void Reset();

          private:
            void filter(TGraphErrors& graph) const;
            DPair fit(TGraphErrors& graph);
            DPair linearRegression(const Double_t* x, const Double_t* y, const Int_t points) const;
            void fillInteractions(R3BNeulandCosmicTrack& track) const;
            Double_t getCrossPointTime(const TVector3& point,
                                       const TVector3& direction,
                                       const TVector3& invDirection,
                                       const DPair& xBounds,
                                       const DPair& yBounds,
                                       const DPair& zBounds) const;

            std::vector<Double_t> fDistances;
            std::vector<Int_t> fBarIDs;

            R3BNeulandCosmicTrack fTrack;

            TF1 fFit;
            TGraphErrors fXZ; // i.e. Vertical Bars
            TGraphErrors fYZ; // i.e. Horizontal Bars
        };
    } // namespace Calibration
} // namespace Neuland
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

#ifndef R3BNEULANDHITCALIBRATIONENGINE_H
#define R3BNEULANDHITCALIBRATIONENGINE_H

#include <vector>

#include "TH1F.h"
#include "TH2F.h"
#include "TH3F.h"

#include "R3BNeulandCosmicTrack.h"
#include "R3BNeulandHitCalibrationBar.h"
#include "R3BNeulandHitModulePar.h"
#include "R3BNeulandTSyncer.h"

class R3BNeulandHitPar;
class TDirectory;

namespace Neuland
{
    namespace Calibration
    {
        class HitCalibrationEngine
        {
          public:
            HitCalibrationEngine();

            void Init(const R3BNeulandHitPar* hitpar);
            void Set(const Int_t id, const Int_t side, const Double_t time, const Int_t qdc);
            inline Bool_t IsValid(const Int_t id) { return fBars[id].IsValid(); }
            inline Double_t GetPosition(const Int_t id) { return fBars[id].GetPosition(); }
            void Add(const R3BNeulandCosmicTrack& track, const UInt_t eventNumber);
            void Reset();
            std::vector<R3BNeulandHitModulePar> Calibrate(TDirectory* histoDir = nullptr);

          private:
            void draw() const;

            TSyncer fTSyncer;
            std::vector<HitCalibrationBar> fBars;
            std::vector<ULong64_t> fHitMask;

            TH1F fBarDistribution;
            TH1F fStoppedDistribution;
            TH1F fInteractionsDistribution;
            TH1F fStoppedInteractionsDistribution;
            TH1F fTrackLengthDistribution;
            TH1F fTotalTrackLengthDistribution;
            TH1F fTotalStoppedTrackLengthDistribution;
            TH2F fCorrelationMatrix;
            TH3F fTrackEntryPointDistribution; // Z X Y
            TH3F fTrackDirectionDistribution;  // Z X Y
        };
    } // namespace Calibration
} // namespace Neuland
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

#ifndef R3BNEULANDHITCALIBRATIONBAR_H
#define R3BNEULANDHITCALIBRATIONBAR_H

#include <array>
#include <vector>

#include "TF1.h"
#include "TGraphErrors.h"
#include "TH1F.h"
#include "TH2F.h"

#include "R3BNeulandHitModulePar.h"

class TGraph;
class R3BNeulandHitPar;
class TDirectory;

namespace Neuland
{
    namespace Calibration
    {
        class TSyncer;

        class HitCalibrationBar
        {
            using DPair = std::array<Double_t, 2>;
            using IPair = std::array<Int_t, 2>;

          public:
            enum class CalibrationStatus
            {
                noData = 0,
                completeFail = 1,
                success = 2,
                energyGainFail = 3,
                timeSyncFail = 4,
                timeSyncError = 5,
                strangeParameters = 6,
                timeJump = 7
            };

            HitCalibrationBar(const Int_t id = 0);
            ~HitCalibrationBar();

            void Update(const R3BNeulandHitModulePar* par);

            void Set(const Int_t side, const Double_t time, const Int_t qdc);
            Bool_t Add(const Double_t timeOffset,
                       const Double_t entryPosition,
                       const Double_t exitPosition,
                       const Double_t energy,
                       const UInt_t eventNumber);
            void Reset();
            void Calibrate(TDirectory* histogramDir = nullptr);
            R3BNeulandHitModulePar GetParameters();
            CalibrationStatus GetCalibrationStatus() const;
            Bool_t IsValid() const;
            inline Double_t GetTime() const { return 0.5 * (CurrentHit.Time[0] + CurrentHit.Time[1]); }
            inline Double_t GetPosition() const { return CurrentHit.EntryPosition; }

            void SetGlobalTSync(const Double_t value, const Double_t error);

            inline static const char* const GetCalibrationStatusDescription(const CalibrationStatus status)
            {
                return CalibrationStatusDescription[static_cast<int>(status)];
            }
            inline static const char* const GetCalibrationStatusAbbreviation(const CalibrationStatus status)
            {
                return CalibrationStatusAbbreviation[static_cast<int>(status)];
            }

          private:
            static const char* CalibrationStatusDescription[];
            static const char* CalibrationStatusAbbreviation[];

            Int_t ID;
            Int_t Validity;
            UInt_t FailCounter;
            UInt_t LastEventNumber;

            struct Hit
            {
                DPair Time;
                IPair QDC;
                Double_t EntryPosition;
                Double_t ExitPosition;
                Double_t Energy;
            } CurrentHit;
            std::vector<Hit> LastHits; //!

            Double_t TimeDifference;
            Double_t EffectiveSpeed;
            DPair Gain;
            Double_t InvLightAttenuationLength;
            IPair Pedestal;
            DPair Saturation;
            DPair Threshold;
            DPair TimeSync;

            struct
            {
                TGraphErrors TimeDifference;
                TGraphErrors EffectiveSpeed;
                std::array<TGraphErrors, 2> Gain;
                TGraphErrors LightAttenuationLength;
                std::array<TH1F, 2> TotalHits;
                std::array<TH1F, 2> MissedHits;
                std::array<TGraph, 2> MissRatio;
                std::array<TH1F, 2> Energy;
                std::array<TH2F, 2> Saturation;
                std::array<TH1F, 2> Pedestal;
            } Log; //!

            // Some members so we do not have to create and delete them all the time
            TGraphErrors FitGraph;

            void positionCalibration(int firstHit, int nHits);
            void energyCalibration(int firstHit, int nHits);
            void pedestalCalibration();
            void thresholdCalibration();

            Int_t cleanupFit(TGraph& graph, TF1& fit, Double_t maxDifference) const;

            /**
             * @brief removes points from a graph in an efficient way
             *
             * @param points pointer to the array containing the point indexes
             * @param nPoints number of points which will be removed
             * @param graph the graph
             */
            void removePoints(Int_t* points, Int_t nPoints, TGraph& graph) const;

            /**
             * @brief created and writes histograms to the directory
             *
             * @param histogramDir pointer to the directory. If nullptr nothing is created or stored.
             */
            void createHistograms(TDirectory* histogramDir);

            Double_t getMean(const TGraphErrors& graph, Double_t expectedValue = 0.);
        };
    } // namespace Calibration
} // namespace Neuland
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

#ifndef R3BNEULANDTSYNCER_H
#define R3BNEULANDTSYNCER_H

#include <array>
#include <vector>

#include "TH1F.h"

#include "R3BNeulandCommon.h"

struct LSQR_DOUBLE_VECTOR;

namespace Neuland
{
    namespace Calibration
    {
        class TSyncer
        {
          public:
            struct ValueErrorPair
            {
                Double_t Value;
                Double_t Error;
            };

            TSyncer();

            void AddBarData(const Int_t barID, const Double_t time);
            void ClearBarData(const Int_t barID);
            void DoEvent();

            std::vector<ValueErrorPair> GetTSync(UInt_t nPlanes = Neuland::MaxNumberOfPlanes);

          private:
            void calcTSyncs();

            struct Bar
            {
                ValueErrorPair TSyncNextBar;
                std::array<ValueErrorPair, BarsPerPlane> TSyncNextPlane;

                TH1F NextBar;
                std::array<TH1F, BarsPerPlane> NextPlane;

                std::vector<Double_t> NextBarLog;
                std::array<std::vector<Double_t>, BarsPerPlane> NextPlaneLog;
            };

            std::array<ULong64_t, Neuland::MaxNumberOfPlanes> HitMask;
            std::array<Double_t, Neuland::MaxNumberOfBars> EventData;
            std::array<Bar, Neuland::MaxNumberOfBars> Data;

            TH1F SamplingHistogram;
        };
    } // namespace Calibration
} // namespace Neuland

#endif
#ifndef LSQR_H
#define LSQR_H
/*
 * lsqr.h
 * Contains auxiliary functions, data type definitions, and function
 * prototypes for the iterative linear solver LSQR.
 *
 * 08 Sep 1999: First version from James W. Howse <jhowse@lanl.gov>
 * 02 Sep 2007: Dima Sorkin <dima.sorkin@gmail.com> advises that
 *              in C++ the use of macros is strongly deprecated.
 *              Originally, sqr, max, min, round, TRUE, FALSE, PI
 *              were defined here.  Now,
 *                 min, round, TRUE, FALSE are gone (never used);
 *                 PI is defined explicitly in test_lstp.c;
 *                 max is changed to lsqr_max in test_lsqr.c;
 */

/*
 *------------------------------------------------------------------------------
 *
 *     LSQR  finds a solution x to the following problems:
 *
 *     1. Unsymmetric equations --    solve  A*x = b
 *
 *     2. Linear least squares  --    solve  A*x = b
 *                                    in the least-squares sense
 *
 *     3. Damped least squares  --    solve  (   A    )*x = ( b )
 *                                           ( damp*I )     ( 0 )
 *                                    in the least-squares sense
 *
 *     where 'A' is a matrix with 'm' rows and 'n' columns, 'b' is an
 *     'm'-vector, and 'damp' is a scalar.  (All quantities are real.)
 *     The matrix 'A' is intended to be large and sparse.
 *
 *
 *     Notation
 *     --------
 *
 *     The following quantities are used in discussing the subroutine
 *     parameters:
 *
 *     'Abar'   =  (   A    ),          'bbar'  =  ( b )
 *                 ( damp*I )                      ( 0 )
 *
 *     'r'      =  b  -  A*x,           'rbar'  =  bbar  -  Abar*x
 *
 *     'rnorm'  =  sqrt( norm(r)**2  +  damp**2 * norm(x)**2 )
 *              =  norm( rbar )
 *
 *     'rel_prec'  =  the relative precision of floating-point arithmetic
 *                    on the machine being used.  For example, on the IBM 370,
 *                    'rel_prec' is about 1.0E-6 and 1.0D-16 in single and double
 *                    precision respectively.
 *
 *     LSQR  minimizes the function 'rnorm' with respect to 'x'.
 *
 *------------------------------------------------------------------------------
 */

/*---------------*/
/* Include files */
/*---------------*/

#include <float.h>
#include <functional>
#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

/* 02 Sep 2007: The following 7 macros
                   sqr, max, min, round, TRUE, FALSE, PI
                are no longer defined here.
                (min, round, TRUE, FALSE were never used anyway.)
                "sqr" has been changed to lsqr_sqr.
*/

/*------------------------*/
/* User-defined functions */
/*------------------------*/

#define lsqr_sqr(a) ((a) * (a))
/*
#define max(a,b)	( (a) < (b) ? (b) : (a) )
#define min(a,b)	( (a) < (b) ? (a) : (b) )
#define round(a)        ( (a) > 0.0 ? (int)((a) + 0.5) : (int)((a) - 0.5) )
*/

/*----------------------*/
/* Default declarations */
/*----------------------*/

/*
#define TRUE	(1)
#define FALSE	(0)
#define PI      (4.0 * atan(1.0))
*/

/*------------------*/
/* Type definitions */
/*------------------*/

typedef struct LSQR_LONG_VECTOR
{
    long length;
    long* elements;
} lvec;

typedef struct LSQR_DOUBLE_VECTOR
{
    long length;
    double* elements;
} dvec;

/*
 *------------------------------------------------------------------------------
 *
 *     Input Quantities
 *     ----------------
 *
 *     num_rows     input  The number of rows (e.g., 'm') in the matrix A.
 *
 *     num_cols     input  The number of columns (e.g., 'n') in the matrix A.
 *
 *     damp_val     input  The damping parameter for problem 3 above.
 *                         ('damp_val' should be 0.0 for problems 1 and 2.)
 *                         If the system A*x = b is incompatible, values
 *                         of 'damp_val' in the range
 *                            0 to sqrt('rel_prec')*norm(A)
 *                         will probably have a negligible effect.
 *                         Larger values of 'damp_val' will tend to decrease
 *                         the norm of x and reduce the number of
 *                         iterations required by LSQR.
 *
 *                         The work per iteration and the storage needed
 *                         by LSQR are the same for all values of 'damp_val'.
 *
 *     rel_mat_err  input  An estimate of the relative error in the data
 *                         defining the matrix 'A'.  For example,
 *                         if 'A' is accurate to about 6 digits, set
 *                         rel_mat_err = 1.0e-6 .
 *
 *     rel_rhs_err  input  An extimate of the relative error in the data
 *                         defining the right hand side (rhs) vector 'b'.  For
 *                         example, if 'b' is accurate to about 6 digits, set
 *                         rel_rhs_err = 1.0e-6 .
 *
 *     cond_lim     input  An upper limit on cond('Abar'), the apparent
 *                         condition number of the matrix 'Abar'.
 *                         Iterations will be terminated if a computed
 *                         estimate of cond('Abar') exceeds 'cond_lim'.
 *                         This is intended to prevent certain small or
 *                         zero singular values of 'A' or 'Abar' from
 *                         coming into effect and causing unwanted growth
 *                         in the computed solution.
 *
 *                         'cond_lim' and 'damp_val' may be used separately or
 *                         together to regularize ill-conditioned systems.
 *
 *                         Normally, 'cond_lim' should be in the range
 *                         1000 to 1/rel_prec.
 *                         Suggested value:
 *                         cond_lim = 1/(100*rel_prec)  for compatible systems,
 *                         cond_lim = 1/(10*sqrt(rel_prec)) for least squares.
 *
 *             Note:  If the user is not concerned about the parameters
 *             'rel_mat_err', 'rel_rhs_err' and 'cond_lim', any or all of them
 *             may be set to zero.  The effect will be the same as the values
 *             'rel_prec', 'rel_prec' and 1/rel_prec respectively.
 *
 *     max_iter     input  An upper limit on the number of iterations.
 *                         Suggested value:
 *                         max_iter = n/2   for well-conditioned systems
 *                                          with clustered singular values,
 *                         max_iter = 4*n   otherwise.
 *
 *     lsqr_fp_out  input  Pointer to the file for sending printed output.  If
 *                         not NULL, a summary will be printed to the file that
 *                         'lsqr_fp_out' points to.
 *
 *     rhs_vec      input  The right hand side (rhs) vector 'b'.  This vector
 *                         has a length of 'm' (i.e., 'num_rows').  The routine
 *                         LSQR is designed to over-write 'rhs_vec'.
 *
 *     sol_vec      input  The initial guess for the solution vector 'x'.  This
 *                         vector has a length of 'n' (i.e., 'num_cols').  The
 *                         routine LSQR is designed to over-write 'sol_vec'.
 *
 *------------------------------------------------------------------------------
 */

typedef struct LSQR_INPUTS
{
    long num_rows;
    long num_cols;
    double damp_val;
    double rel_mat_err;
    double rel_rhs_err;
    double cond_lim;
    long max_iter;
    FILE* lsqr_fp_out;
    dvec* rhs_vec;
    dvec* sol_vec;
} lsqr_input;

/*
 *------------------------------------------------------------------------------
 *
 *     Output Quantities
 *     -----------------
 *
 *     term_flag       output  An integer giving the reason for termination:
 *
 *                     0       x = x0  is the exact solution.
 *                             No iterations were performed.
 *
 *                     1       The equations A*x = b are probably compatible.
 *                             Norm(A*x - b) is sufficiently small, given the
 *                             values of 'rel_mat_err' and 'rel_rhs_err'.
 *
 *                     2       The system A*x = b is probably not
 *                             compatible.  A least-squares solution has
 *                             been obtained that is sufficiently accurate,
 *                             given the value of 'rel_mat_err'.
 *
 *                     3       An estimate of cond('Abar') has exceeded
 *                             'cond_lim'.  The system A*x = b appears to be
 *                             ill-conditioned.  Otherwise, there could be an
 *                             error in subroutine APROD.
 *
 *                     4       The equations A*x = b are probably
 *                             compatible.  Norm(A*x - b) is as small as
 *                             seems reasonable on this machine.
 *
 *                     5       The system A*x = b is probably not
 *                             compatible.  A least-squares solution has
 *                             been obtained that is as accurate as seems
 *                             reasonable on this machine.
 *
 *                     6       Cond('Abar') seems to be so large that there is
 *                             no point in doing further iterations,
 *                             given the precision of this machine.
 *                             There could be an error in subroutine APROD.
 *
 *                     7       The iteration limit 'max_iter' was reached.
 *
 *     num_iters       output  The number of iterations performed.
 *
 *     frob_mat_norm   output  An estimate of the Frobenius norm of 'Abar'.
 *                             This is the square-root of the sum of squares
 *                             of the elements of 'Abar'.
 *                             If 'damp_val' is small and if the columns of 'A'
 *                             have all been scaled to have length 1.0,
 *                             'frob_mat_norm' should increase to roughly
 *                             sqrt('n').
 *                             A radically different value for 'frob_mat_norm'
 *                             may indicate an error in subroutine APROD (there
 *                             may be an inconsistency between modes 1 and 2).
 *
 *     mat_cond_num    output  An estimate of cond('Abar'), the condition
 *                             number of 'Abar'.  A very high value of
 *                             'mat_cond_num'
 *                             may again indicate an error in APROD.
 *
 *     resid_norm      output  An estimate of the final value of norm('rbar'),
 *                             the function being minimized (see notation
 *                             above).  This will be small if A*x = b has
 *                             a solution.
 *
 *     mat_resid_norm  output  An estimate of the final value of
 *                             norm( Abar(transpose)*rbar ), the norm of
 *                             the residual for the usual normal equations.
 *                             This should be small in all cases.
 *                             ('mat_resid_norm'
 *                             will often be smaller than the true value
 *                             computed from the output vector 'x'.)
 *
 *     sol_norm        output  An estimate of the norm of the final
 *                             solution vector 'x'.
 *
 *     sol_vec         output  The vector which returns the computed solution
 *                             'x'.
 *                             This vector has a length of 'n' (i.e.,
 *                             'num_cols').
 *
 *     std_err_vec     output  The vector which returns the standard error
 *                             estimates  for the components of 'x'.
 *                             This vector has a length of 'n'
 *                             (i.e., 'num_cols').  For each i, std_err_vec(i)
 *                             is set to the value
 *                             'resid_norm' * sqrt( sigma(i,i) / T ),
 *                             where sigma(i,i) is an estimate of the i-th
 *                             diagonal of the inverse of Abar(transpose)*Abar
 *                             and  T = 1      if  m <= n,
 *                                  T = m - n  if  m > n  and  damp_val = 0,
 *                                  T = m      if  damp_val != 0.
 *
 *------------------------------------------------------------------------------
 */

typedef struct LSQR_OUTPUTS
{
    long term_flag;
    long num_iters;
    double frob_mat_norm;
    double mat_cond_num;
    double resid_norm;
    double mat_resid_norm;
    double sol_norm;
    dvec* sol_vec;
    dvec* std_err_vec;
} lsqr_output;

/*
 *------------------------------------------------------------------------------
 *
 *     Workspace Quantities
 *     --------------------
 *
 *     bidiag_wrk_vec  workspace  This float vector is a workspace for the
 *                                current iteration of the
 *                                Lanczos bidiagonalization.
 *                                This vector has length 'n' (i.e., 'num_cols').
 *
 *     srch_dir_vec    workspace  This float vector contains the search direction
 *                                at the current iteration.  This vector has a
 *                                length of 'n' (i.e., 'num_cols').
 *
 *------------------------------------------------------------------------------
 */

typedef struct LSQR_WORK
{
    dvec* bidiag_wrk_vec;
    dvec* srch_dir_vec;
} lsqr_work;

/*
 *------------------------------------------------------------------------------
 *
 *     Functions Called
 *     ----------------
 *
 *     mat_vec_prod       functions  A pointer to a function that performs the
 *                                   matrix-vector multiplication.  The function
 *                                   has the calling parameters:
 *
 *                                       APROD ( mode, x, y, prod_data ),
 *
 *                                   and it must perform the following functions:
 *
 *                                       If MODE = 0, compute  y = y + A*x,
 *                                       If MODE = 1, compute  x = x + A^T*y.
 *
 *                                   The vectors x and y are input parameters in
 *                                   both cases.
 *                                   If mode = 0, y should be altered without
 *                                   changing x.
 *                                   If mode = 2, x should be altered without
 *                                   changing y.
 *                                   The argument prod_data is a pointer to a
 *                                   user-defined structure that contains
 *                                   any data need by the function APROD that is
 *                                   not used by LSQR.  If no additional data is
 *                                   needed by APROD, then prod_data should be
 *                                   the NULL pointer.
 *------------------------------------------------------------------------------
 */

/*---------------------*/
/* Function prototypes */
/*---------------------*/
void lsqr_error(const char*, int);

lvec* alloc_lvec(long);
void free_lvec(lvec*);

dvec* alloc_dvec(long);
void free_dvec(dvec*);

void alloc_lsqr_mem(lsqr_input**, lsqr_output**, lsqr_work**, long, long);
void free_lsqr_mem(lsqr_input*, lsqr_output*, lsqr_work*);

lsqr_input* alloc_lsqr_in(long, long);
void free_lsqr_in(lsqr_input*);

lsqr_output* alloc_lsqr_out(long, long);
void free_lsqr_out(lsqr_output*);

lsqr_work* alloc_lsqr_wrk(long, long);
void free_lsqr_wrk(lsqr_work*);

void lsqr(lsqr_input*, lsqr_output*, lsqr_work*, std::function<void(long, dvec*, dvec*, void*)>, void*);

double dvec_norm2(dvec*);
void dvec_scale(double, dvec*);
void dvec_copy(dvec*, dvec*);

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

#ifndef R3BNEULANDCAL2HITPAR_H
#define R3BNEULANDCAL2HITPAR_H

#include <memory>

#include "TGraph.h"

#include "FairTask.h"

#include "R3BNeulandCommon.h"

class TClonesArray;

class R3BEventHeader;
class R3BNeulandHitPar;
class R3BNeulandHitModulePar;

namespace Neuland
{
    namespace Calibration
    {
        class HitCalibrationEngine;
        class CosmicTracker;
    } // namespace Calibration
} // namespace Neuland

class R3BNeulandCal2HitPar : public FairTask
{
  public:
    R3BNeulandCal2HitPar()
        : R3BNeulandCal2HitPar("R3BNeulandCal2HitPar", 1){};
    R3BNeulandCal2HitPar(const char* name, const Int_t iVerbose = 1);
    virtual ~R3BNeulandCal2HitPar();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

    void SetTpat(UInt_t CosmicTpat = 0) { fCosmicTpat = CosmicTpat; }

    void SavePlots(Bool_t savePlots = true) { fSavePlots = savePlots; }

  private:
    bool IsCosmicEvent() const;

    std::unique_ptr<Neuland::Calibration::HitCalibrationEngine> fHitCalEngine; //!
    std::unique_ptr<Neuland::Calibration::CosmicTracker> fCosmicTracker;       //!

    TClonesArray* fCalNeuland;        //!
    TClonesArray* fMappedLos;         //!
    R3BEventHeader* fEventHeader;     //!
    R3BNeulandHitPar* fNeulandHitPar; //!

    UInt_t fEventNumber = 0;
    UInt_t fAcceptedEventNumber = 0;

    UInt_t fIgorcnt0 = 0;
    UInt_t fIgorcnt1 = 0;
    UInt_t fIgorcnt2 = 0;

    UInt_t fCosmicTpat = 0;

    Bool_t fSavePlots;

  public:
    ClassDef(R3BNeulandCal2HitPar, 1)
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

#ifndef R3BNEULANDPARFACT_H
#define R3BNEULANDPARFACT_H

#include "FairContFact.h"
#include "Rtypes.h"

class FairParSet;

class R3BNeulandParFact : public FairContFact
{
  public:
    /**
     * Default constructor.
     */
    R3BNeulandParFact();

    /**
     * Destructor.
     */
    ~R3BNeulandParFact() {}

    /**
     * Method to create a parameter container.
     * Called by FairRuntimeDB singleton class.
     * @param c a parameter container.
     * @return an instance of created parameter set.
     */
    FairParSet* createContainer(FairContainer* c);

  private:
    /**
     * Method to specify a list of parameter containers managed by this factory.
     * Support for additional detrectors has to be implemented in this function.
     */
    void setAllContainers();

    ClassDef(R3BNeulandParFact, 0);
};

#endif /* !R3BNEULANDPARFACT_H */
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

#ifndef R3BNEULANDCAL2HIT_H
#define R3BNEULANDCAL2HIT_H

#include "FairTask.h"
#include "R3BNeulandCalData.h"
#include "R3BNeulandHit.h"
#include "R3BNeulandHitModulePar.h"
#include "TCAConnector.h"
#include <map>
#include <vector>

class R3BNeulandHitPar;
class R3BEventHeader;

class R3BNeulandCal2Hit : public FairTask
{
  public:
    R3BNeulandCal2Hit(const char* name = "R3BNeulandCal2Hit", const Int_t iVerbose = 0);
    ~R3BNeulandCal2Hit() override = default;

    InitStatus Init() override;
    InitStatus ReInit() override;
    void SetParContainers() override;
    void Exec(Option_t*) override;
    void FinishTask() override;

    inline void SetFirstPlaneHorizontal() { fFirstPlaneHorizontal = kTRUE; }

    // Distance to target in cm
    inline void SetDistanceToTarget(Double_t d) { fDistanceToTarget = d; }

    // Global time offset in ns
    inline void SetGlobalTimeOffset(Double_t t0) { fGlobalTimeOffset = t0; }

  private:
    void SetParameter();
    Double_t GetUnsaturatedEnergy(const Int_t qdc, const Double_t gain, const Double_t saturation) const;

    R3BEventHeader* fEventHeader;

    TCAInputConnector<R3BNeulandCalData> fCalData;
    TCAOutputConnector<R3BNeulandHit> fHits;

    R3BNeulandHitPar* fPar;

    Bool_t fFirstPlaneHorizontal;
    Int_t fNumberOfPlanes;
    Double_t fDistanceToTarget;
    std::vector<Double_t> fDistancesToFirstPlane;
    std::vector<Double_t> fAttenuationValues;
    Double_t fGlobalTimeOffset;
    Double_t fEnergyCutoff;

    std::map<Int_t, R3BNeulandHitModulePar> fParMap;

    std::map<Int_t, R3BNeulandCalData*> fHitMap;

    UInt_t fEventNumber = 0;

  public:
    ClassDefOverride(R3BNeulandCal2Hit, 0)
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

#ifndef R3BNEULANDHITMODULEPAR_H
#define R3BNEULANDHITMODULEPAR_H

#include "FairParGenericSet.h"

#include "R3BNeulandCommon.h"

#include "assert.h"

// FIXME Do we need this???
//#define NCHMAX 5000

class FairParamList;

class R3BNeulandHitModulePar : public FairParGenericSet
{
  public:
    /**
     * Standard constructor.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BNeulandHitModulePar(const char* name = "NeulandHitModulePar",
                           const char* title = "Calibration of a NeuLAND module",
                           const char* context = "TestDefaultContext",
                           Bool_t own = kTRUE);

    /**
     * Destructor.
     * Frees the memory allocated by the object.
     */
    virtual ~R3BNeulandHitModulePar(void);

    /**
     * A method to reset the parameter values. Sets all parameters to 0.
     */
    void clear(void);

    /**
     * A method to write parameters using RuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

    /**
     * A method to read parameters using RuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successfull, else kFALSE.
     */
    Bool_t getParams(FairParamList* list);

    /**
     * A method to print value of parameters to the standard
     * output using FairLogger.
     */
    void printParams();

    /** Accessor functions **/
    Int_t GetModuleId() const { return fModuleId; }
    Double_t GetTDiff() const { return fTDiff; }
    Double_t GetTSync() const { return fTSync; }
    Double_t GetTimeOffset(const Int_t side) const
    {
        assert(side == 1 || side == 2);
        return fTSync + (1.5 - side) * fTDiff;
    }
    Double_t GetEffectiveSpeed() const { return fEffectiveSpeed; }
    Int_t GetPedestal(const Int_t side) const
    {
        assert(side == 1 || side == 2);
        return fPedestal[side - 1];
    }
    Double_t GetEnergyGain(const Int_t side) const
    {
        assert(side == 1 || side == 2);
        return fEnergyGain[side - 1];
    }
    Double_t GetLightAttenuationLength() const { return fLightAttenuationLength; }
    Double_t GetPMTSaturation(const Int_t side) const
    {
        assert(side == 1 || side == 2);
        return fPMTSaturation[side - 1];
    }
    Double_t GetPMTThreshold(const Int_t side) const
    {
        assert(side == 1 || side == 2);
        return fPMTThreshold[side - 1];
    }

    void SetModuleId(const Int_t i) { fModuleId = i; }
    void SetTDiff(const Double_t val) { fTDiff = val; }
    void SetTSync(const Double_t val) { fTSync = val; }
    void SetEffectiveSpeed(const Double_t val) { fEffectiveSpeed = val; }
    void SetPedestal(const Int_t val, const Int_t side)
    {
        assert(side == 1 || side == 2);
        fPedestal[side - 1] = val;
    }
    void SetEnergyGain(const Double_t val, const Int_t side)
    {
        assert(side == 1 || side == 2);
        fEnergyGain[side - 1] = val;
    }
    void SetLightAttenuationLength(const Double_t val) { fLightAttenuationLength = val; }
    void SetPMTSaturation(const Double_t val, const Int_t side)
    {
        assert(side == 1 || side == 2);
        fPMTSaturation[side - 1] = val;
    }
    void SetPMTThreshold(const Double_t val, const Int_t side)
    {
        assert(side == 1 || side == 2);
        fPMTThreshold[side - 1] = val;
    }

  private:
    Int_t fModuleId; /**< Index of a detector module. */
    Double_t fTDiff;
    Double_t fTSync;
    Double_t fEffectiveSpeed;
    Int_t fPedestal[2];      // R/B, L/T
    Double_t fEnergyGain[2]; // R/B, L/T
    Double_t fLightAttenuationLength;
    Double_t fPMTSaturation[2]; // R/B, L/T
    Double_t fPMTThreshold[2];  // R/B, L/T
    ClassDef(R3BNeulandHitModulePar, 3);
};

#endif /* !R3BNEULANDHITMODULEPAR_H*/
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

#ifndef R3BNEULANDQCALPAR_H
#define R3BNEULANDQCALPAR_H

#include "FairParGenericSet.h" // for FairParGenericSet
#include "TArrayI.h"
#include "TObjArray.h"

#define NMODULEMAX 6000

class FairParamList;

class R3BNeulandQCalPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BNeulandQCalPar(const char* name = "NeulandQCalPar",
                      const char* title = "Calibration",
                      const char* context = "TestDefaultContext",
                      Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BNeulandQCalPar(void);

    /**
     * Method to set the size of the array of parameters.
     * @param size the array size
     */
    void SetSize(Int_t size);

    /**
     * Method to store parameters using FairRuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

    /**
     * Method to retrieve parameters using FairRuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successful, else kFALSE.
     */
    Bool_t getParams(FairParamList* list);

    /**
     * Method to print value of parameters to the standard output.
     * Calls printParams() for every module container.
     */
    void printParams();

    /**
     * Method to set the pedestal offset of a PMT
     * @param plane an index of detector plane [0, nPlanes-1]
     * @param bar a bar index within the plane [0,49]
     * @param side a side of a paddle {1,2}
     * @param offset the pedestal offset
     */
    void SetParAt(Int_t plane, Int_t bar, Int_t side, Int_t offset)
    {
        fParams[((plane - 1) * 50 + (bar - 1)) * 2 + side - 1] = offset;
    }

    /**
     * Method to get the pedestal offset of a PMT
     * @param plane an index of detector plane [0, nPlanes-1]
     * @param bar a bar index within the plane [0,49]
     * @param side a side of a paddle {1,2}
     * @param offset the pedestal offset
     */
    Int_t GetParAt(Int_t plane, Int_t bar, Int_t side)
    {
        return fParams[((plane - 1) * 50 + (bar - 1)) * 2 + side - 1];
    }

  private:
    TArrayI fParams; /**< an array with parameters of all modules */

    ClassDef(R3BNeulandQCalPar, 2);
};

#endif /* !R3BNEULANDQCALPAR_H*/
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

#ifndef R3BNEULANDQCALFILLER_H
#define R3BNEULANDQCALFILLER_H

#include "FairTask.h"

class TClonesArray;
class R3BEventHeader;

class R3BNeulandQCalFiller : public FairTask
{
  public:
    R3BNeulandQCalFiller();
    ~R3BNeulandQCalFiller();

    virtual InitStatus Init();
    virtual void Exec(Option_t* option);

  private:
    TClonesArray* data;
    R3BEventHeader* header;
    Int_t i = 0;

  public:
    ClassDef(R3BNeulandQCalFiller, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Neuland::Calibration::CosmicTracker", payloadCode, "@",
"Neuland::Calibration::HitCalibrationBar", payloadCode, "@",
"Neuland::Calibration::TSyncer", payloadCode, "@",
"R3BNeulandCal2Hit", payloadCode, "@",
"R3BNeulandCal2HitPar", payloadCode, "@",
"R3BNeulandHitHist", payloadCode, "@",
"R3BNeulandHitModulePar", payloadCode, "@",
"R3BNeulandHitPar", payloadCode, "@",
"R3BNeulandMapped2Cal", payloadCode, "@",
"R3BNeulandMapped2CalPar", payloadCode, "@",
"R3BNeulandMappedHist", payloadCode, "@",
"R3BNeulandParFact", payloadCode, "@",
"R3BNeulandQCalFiller", payloadCode, "@",
"R3BNeulandQCalPar", payloadCode, "@",
"R3BNeulandTacquilaMapped2Cal", payloadCode, "@",
"R3BNeulandTacquilaMapped2CalPar", payloadCode, "@",
"R3BNeulandTacquilaMapped2QCalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandCalibrationDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandCalibrationDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandCalibrationDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandCalibrationDict() {
  TriggerDictionaryInitialization_G__R3BNeulandCalibrationDict_Impl();
}
