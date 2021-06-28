// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIcalifadIG__R3BCalifaDict

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
#include "./sim/R3BCalifa.h"
#include "./sim/R3BCalifaDigitizer.h"
#include "./pars/R3BCalifaContFact.h"
#include "./pars/R3BCalifaGeometry.h"
#include "./pars/R3BCalifaMappingPar.h"
#include "./pars/R3BCalifaCrystalCalPar.h"
#include "./pars/R3BCalifaTotCalPar.h"
#include "./pars/R3BCalifaHitPar.h"
#include "./pars/R3BCalifaCrystalPars4Sim.h"
#include "./calibration/R3BCalifaMapped2CrystalCalPar.h"
#include "./calibration/R3BCalifaCrystalCal2TotCalPar.h"
#include "./calibration/R3BCalifaMapped2CrystalCal.h"
#include "./calibration/R3BCalifaCrystalCal2Hit.h"
#include "./calibration/R3BCalifaCrystalCal2CrystalCalPID.h"
#include "./online/R3BCalifaOnlineSpectra.h"
#include "./online/R3BCalifaDemoOnlineSpectra.h"
#include "./ana/R3BCalifaCrystalCalDataAnalysis.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BCalifa(void *p = 0);
   static void *newArray_R3BCalifa(Long_t size, void *p);
   static void delete_R3BCalifa(void *p);
   static void deleteArray_R3BCalifa(void *p);
   static void destruct_R3BCalifa(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifa*)
   {
      ::R3BCalifa *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifa >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifa", ::R3BCalifa::Class_Version(), "", 33,
                  typeid(::R3BCalifa), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifa::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifa) );
      instance.SetNew(&new_R3BCalifa);
      instance.SetNewArray(&newArray_R3BCalifa);
      instance.SetDelete(&delete_R3BCalifa);
      instance.SetDeleteArray(&deleteArray_R3BCalifa);
      instance.SetDestructor(&destruct_R3BCalifa);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifa*)
   {
      return GenerateInitInstanceLocal((::R3BCalifa*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifa*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalPars4Sim(void *p = 0);
   static void *newArray_R3BCalifaCrystalPars4Sim(Long_t size, void *p);
   static void delete_R3BCalifaCrystalPars4Sim(void *p);
   static void deleteArray_R3BCalifaCrystalPars4Sim(void *p);
   static void destruct_R3BCalifaCrystalPars4Sim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalPars4Sim*)
   {
      ::R3BCalifaCrystalPars4Sim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalPars4Sim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalPars4Sim", ::R3BCalifaCrystalPars4Sim::Class_Version(), "R3BCalifaCrystalPars4Sim.h", 16,
                  typeid(::R3BCalifaCrystalPars4Sim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalPars4Sim::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalPars4Sim) );
      instance.SetNew(&new_R3BCalifaCrystalPars4Sim);
      instance.SetNewArray(&newArray_R3BCalifaCrystalPars4Sim);
      instance.SetDelete(&delete_R3BCalifaCrystalPars4Sim);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalPars4Sim);
      instance.SetDestructor(&destruct_R3BCalifaCrystalPars4Sim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalPars4Sim*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalPars4Sim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalPars4Sim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaDigitizer(void *p = 0);
   static void *newArray_R3BCalifaDigitizer(Long_t size, void *p);
   static void delete_R3BCalifaDigitizer(void *p);
   static void deleteArray_R3BCalifaDigitizer(void *p);
   static void destruct_R3BCalifaDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaDigitizer*)
   {
      ::R3BCalifaDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaDigitizer", ::R3BCalifaDigitizer::Class_Version(), "", 211,
                  typeid(::R3BCalifaDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaDigitizer) );
      instance.SetNew(&new_R3BCalifaDigitizer);
      instance.SetNewArray(&newArray_R3BCalifaDigitizer);
      instance.SetDelete(&delete_R3BCalifaDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BCalifaDigitizer);
      instance.SetDestructor(&destruct_R3BCalifaDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaContFact(void *p = 0);
   static void *newArray_R3BCalifaContFact(Long_t size, void *p);
   static void delete_R3BCalifaContFact(void *p);
   static void deleteArray_R3BCalifaContFact(void *p);
   static void destruct_R3BCalifaContFact(void *p);
   static void streamer_R3BCalifaContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaContFact*)
   {
      ::R3BCalifaContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaContFact", ::R3BCalifaContFact::Class_Version(), "", 359,
                  typeid(::R3BCalifaContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BCalifaContFact) );
      instance.SetNew(&new_R3BCalifaContFact);
      instance.SetNewArray(&newArray_R3BCalifaContFact);
      instance.SetDelete(&delete_R3BCalifaContFact);
      instance.SetDeleteArray(&deleteArray_R3BCalifaContFact);
      instance.SetDestructor(&destruct_R3BCalifaContFact);
      instance.SetStreamerFunc(&streamer_R3BCalifaContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaContFact*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaGeometry(void *p = 0);
   static void *newArray_R3BCalifaGeometry(Long_t size, void *p);
   static void delete_R3BCalifaGeometry(void *p);
   static void deleteArray_R3BCalifaGeometry(void *p);
   static void destruct_R3BCalifaGeometry(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaGeometry*)
   {
      ::R3BCalifaGeometry *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaGeometry >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaGeometry", ::R3BCalifaGeometry::Class_Version(), "", 399,
                  typeid(::R3BCalifaGeometry), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaGeometry::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaGeometry) );
      instance.SetNew(&new_R3BCalifaGeometry);
      instance.SetNewArray(&newArray_R3BCalifaGeometry);
      instance.SetDelete(&delete_R3BCalifaGeometry);
      instance.SetDeleteArray(&deleteArray_R3BCalifaGeometry);
      instance.SetDestructor(&destruct_R3BCalifaGeometry);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaGeometry*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaGeometry*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaGeometry*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaMappingPar(void *p = 0);
   static void *newArray_R3BCalifaMappingPar(Long_t size, void *p);
   static void delete_R3BCalifaMappingPar(void *p);
   static void deleteArray_R3BCalifaMappingPar(void *p);
   static void destruct_R3BCalifaMappingPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaMappingPar*)
   {
      ::R3BCalifaMappingPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaMappingPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaMappingPar", ::R3BCalifaMappingPar::Class_Version(), "", 530,
                  typeid(::R3BCalifaMappingPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaMappingPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaMappingPar) );
      instance.SetNew(&new_R3BCalifaMappingPar);
      instance.SetNewArray(&newArray_R3BCalifaMappingPar);
      instance.SetDelete(&delete_R3BCalifaMappingPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaMappingPar);
      instance.SetDestructor(&destruct_R3BCalifaMappingPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaMappingPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaMappingPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaMappingPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCalPar(void *p = 0);
   static void *newArray_R3BCalifaCrystalCalPar(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCalPar(void *p);
   static void deleteArray_R3BCalifaCrystalCalPar(void *p);
   static void destruct_R3BCalifaCrystalCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCalPar*)
   {
      ::R3BCalifaCrystalCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCalPar", ::R3BCalifaCrystalCalPar::Class_Version(), "", 641,
                  typeid(::R3BCalifaCrystalCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCalPar) );
      instance.SetNew(&new_R3BCalifaCrystalCalPar);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCalPar);
      instance.SetDelete(&delete_R3BCalifaCrystalCalPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCalPar);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaTotCalPar(void *p = 0);
   static void *newArray_R3BCalifaTotCalPar(Long_t size, void *p);
   static void delete_R3BCalifaTotCalPar(void *p);
   static void deleteArray_R3BCalifaTotCalPar(void *p);
   static void destruct_R3BCalifaTotCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaTotCalPar*)
   {
      ::R3BCalifaTotCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaTotCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaTotCalPar", ::R3BCalifaTotCalPar::Class_Version(), "", 719,
                  typeid(::R3BCalifaTotCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaTotCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaTotCalPar) );
      instance.SetNew(&new_R3BCalifaTotCalPar);
      instance.SetNewArray(&newArray_R3BCalifaTotCalPar);
      instance.SetDelete(&delete_R3BCalifaTotCalPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaTotCalPar);
      instance.SetDestructor(&destruct_R3BCalifaTotCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaTotCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaTotCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaTotCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaHitPar(void *p = 0);
   static void *newArray_R3BCalifaHitPar(Long_t size, void *p);
   static void delete_R3BCalifaHitPar(void *p);
   static void deleteArray_R3BCalifaHitPar(void *p);
   static void destruct_R3BCalifaHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaHitPar*)
   {
      ::R3BCalifaHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaHitPar", ::R3BCalifaHitPar::Class_Version(), "", 792,
                  typeid(::R3BCalifaHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaHitPar) );
      instance.SetNew(&new_R3BCalifaHitPar);
      instance.SetNewArray(&newArray_R3BCalifaHitPar);
      instance.SetDelete(&delete_R3BCalifaHitPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaHitPar);
      instance.SetDestructor(&destruct_R3BCalifaHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaMapped2CrystalCalPar(void *p = 0);
   static void *newArray_R3BCalifaMapped2CrystalCalPar(Long_t size, void *p);
   static void delete_R3BCalifaMapped2CrystalCalPar(void *p);
   static void deleteArray_R3BCalifaMapped2CrystalCalPar(void *p);
   static void destruct_R3BCalifaMapped2CrystalCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaMapped2CrystalCalPar*)
   {
      ::R3BCalifaMapped2CrystalCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaMapped2CrystalCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaMapped2CrystalCalPar", ::R3BCalifaMapped2CrystalCalPar::Class_Version(), "", 943,
                  typeid(::R3BCalifaMapped2CrystalCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaMapped2CrystalCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaMapped2CrystalCalPar) );
      instance.SetNew(&new_R3BCalifaMapped2CrystalCalPar);
      instance.SetNewArray(&newArray_R3BCalifaMapped2CrystalCalPar);
      instance.SetDelete(&delete_R3BCalifaMapped2CrystalCalPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaMapped2CrystalCalPar);
      instance.SetDestructor(&destruct_R3BCalifaMapped2CrystalCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaMapped2CrystalCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaMapped2CrystalCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCal2TotCalPar(void *p = 0);
   static void *newArray_R3BCalifaCrystalCal2TotCalPar(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCal2TotCalPar(void *p);
   static void deleteArray_R3BCalifaCrystalCal2TotCalPar(void *p);
   static void destruct_R3BCalifaCrystalCal2TotCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCal2TotCalPar*)
   {
      ::R3BCalifaCrystalCal2TotCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCal2TotCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCal2TotCalPar", ::R3BCalifaCrystalCal2TotCalPar::Class_Version(), "", 1072,
                  typeid(::R3BCalifaCrystalCal2TotCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCal2TotCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCal2TotCalPar) );
      instance.SetNew(&new_R3BCalifaCrystalCal2TotCalPar);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCal2TotCalPar);
      instance.SetDelete(&delete_R3BCalifaCrystalCal2TotCalPar);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCal2TotCalPar);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCal2TotCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCal2TotCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCal2TotCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2TotCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaMapped2CrystalCal(void *p = 0);
   static void *newArray_R3BCalifaMapped2CrystalCal(Long_t size, void *p);
   static void delete_R3BCalifaMapped2CrystalCal(void *p);
   static void deleteArray_R3BCalifaMapped2CrystalCal(void *p);
   static void destruct_R3BCalifaMapped2CrystalCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaMapped2CrystalCal*)
   {
      ::R3BCalifaMapped2CrystalCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaMapped2CrystalCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaMapped2CrystalCal", ::R3BCalifaMapped2CrystalCal::Class_Version(), "", 1178,
                  typeid(::R3BCalifaMapped2CrystalCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaMapped2CrystalCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaMapped2CrystalCal) );
      instance.SetNew(&new_R3BCalifaMapped2CrystalCal);
      instance.SetNewArray(&newArray_R3BCalifaMapped2CrystalCal);
      instance.SetDelete(&delete_R3BCalifaMapped2CrystalCal);
      instance.SetDeleteArray(&deleteArray_R3BCalifaMapped2CrystalCal);
      instance.SetDestructor(&destruct_R3BCalifaMapped2CrystalCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaMapped2CrystalCal*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaMapped2CrystalCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCal2Hit(void *p = 0);
   static void *newArray_R3BCalifaCrystalCal2Hit(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCal2Hit(void *p);
   static void deleteArray_R3BCalifaCrystalCal2Hit(void *p);
   static void destruct_R3BCalifaCrystalCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCal2Hit*)
   {
      ::R3BCalifaCrystalCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCal2Hit", ::R3BCalifaCrystalCal2Hit::Class_Version(), "", 1267,
                  typeid(::R3BCalifaCrystalCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCal2Hit) );
      instance.SetNew(&new_R3BCalifaCrystalCal2Hit);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCal2Hit);
      instance.SetDelete(&delete_R3BCalifaCrystalCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCal2Hit);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCal2CrystalCalPID(void *p = 0);
   static void *newArray_R3BCalifaCrystalCal2CrystalCalPID(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCal2CrystalCalPID(void *p);
   static void deleteArray_R3BCalifaCrystalCal2CrystalCalPID(void *p);
   static void destruct_R3BCalifaCrystalCal2CrystalCalPID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCal2CrystalCalPID*)
   {
      ::R3BCalifaCrystalCal2CrystalCalPID *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCal2CrystalCalPID >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCal2CrystalCalPID", ::R3BCalifaCrystalCal2CrystalCalPID::Class_Version(), "", 1499,
                  typeid(::R3BCalifaCrystalCal2CrystalCalPID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCal2CrystalCalPID::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCal2CrystalCalPID) );
      instance.SetNew(&new_R3BCalifaCrystalCal2CrystalCalPID);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCal2CrystalCalPID);
      instance.SetDelete(&delete_R3BCalifaCrystalCal2CrystalCalPID);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCal2CrystalCalPID);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCal2CrystalCalPID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCal2CrystalCalPID*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCal2CrystalCalPID*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2CrystalCalPID*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaOnlineSpectra(void *p = 0);
   static void *newArray_R3BCalifaOnlineSpectra(Long_t size, void *p);
   static void delete_R3BCalifaOnlineSpectra(void *p);
   static void deleteArray_R3BCalifaOnlineSpectra(void *p);
   static void destruct_R3BCalifaOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaOnlineSpectra*)
   {
      ::R3BCalifaOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaOnlineSpectra", ::R3BCalifaOnlineSpectra::Class_Version(), "", 1586,
                  typeid(::R3BCalifaOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaOnlineSpectra) );
      instance.SetNew(&new_R3BCalifaOnlineSpectra);
      instance.SetNewArray(&newArray_R3BCalifaOnlineSpectra);
      instance.SetDelete(&delete_R3BCalifaOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BCalifaOnlineSpectra);
      instance.SetDestructor(&destruct_R3BCalifaOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaDemoOnlineSpectra(void *p = 0);
   static void *newArray_R3BCalifaDemoOnlineSpectra(Long_t size, void *p);
   static void delete_R3BCalifaDemoOnlineSpectra(void *p);
   static void deleteArray_R3BCalifaDemoOnlineSpectra(void *p);
   static void destruct_R3BCalifaDemoOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaDemoOnlineSpectra*)
   {
      ::R3BCalifaDemoOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaDemoOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaDemoOnlineSpectra", ::R3BCalifaDemoOnlineSpectra::Class_Version(), "", 1836,
                  typeid(::R3BCalifaDemoOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaDemoOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaDemoOnlineSpectra) );
      instance.SetNew(&new_R3BCalifaDemoOnlineSpectra);
      instance.SetNewArray(&newArray_R3BCalifaDemoOnlineSpectra);
      instance.SetDelete(&delete_R3BCalifaDemoOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BCalifaDemoOnlineSpectra);
      instance.SetDestructor(&destruct_R3BCalifaDemoOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaDemoOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaDemoOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaDemoOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCalDataAnalysis(void *p = 0);
   static void *newArray_R3BCalifaCrystalCalDataAnalysis(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCalDataAnalysis(void *p);
   static void deleteArray_R3BCalifaCrystalCalDataAnalysis(void *p);
   static void destruct_R3BCalifaCrystalCalDataAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCalDataAnalysis*)
   {
      ::R3BCalifaCrystalCalDataAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCalDataAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCalDataAnalysis", ::R3BCalifaCrystalCalDataAnalysis::Class_Version(), "", 2023,
                  typeid(::R3BCalifaCrystalCalDataAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCalDataAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCalDataAnalysis) );
      instance.SetNew(&new_R3BCalifaCrystalCalDataAnalysis);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCalDataAnalysis);
      instance.SetDelete(&delete_R3BCalifaCrystalCalDataAnalysis);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCalDataAnalysis);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCalDataAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCalDataAnalysis*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCalDataAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalDataAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifa::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifa::Class_Name()
{
   return "R3BCalifa";
}

//______________________________________________________________________________
const char *R3BCalifa::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifa*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifa::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifa*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifa::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifa*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifa::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifa*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalPars4Sim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalPars4Sim::Class_Name()
{
   return "R3BCalifaCrystalPars4Sim";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalPars4Sim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalPars4Sim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalPars4Sim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalPars4Sim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalPars4Sim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalPars4Sim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalPars4Sim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalPars4Sim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaDigitizer::Class_Name()
{
   return "R3BCalifaDigitizer";
}

//______________________________________________________________________________
const char *R3BCalifaDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaContFact::Class_Name()
{
   return "R3BCalifaContFact";
}

//______________________________________________________________________________
const char *R3BCalifaContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaGeometry::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaGeometry::Class_Name()
{
   return "R3BCalifaGeometry";
}

//______________________________________________________________________________
const char *R3BCalifaGeometry::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaGeometry*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaGeometry::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaGeometry*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaGeometry::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaGeometry*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaGeometry::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaGeometry*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaMappingPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaMappingPar::Class_Name()
{
   return "R3BCalifaMappingPar";
}

//______________________________________________________________________________
const char *R3BCalifaMappingPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappingPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaMappingPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappingPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaMappingPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappingPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaMappingPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappingPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCalPar::Class_Name()
{
   return "R3BCalifaCrystalCalPar";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaTotCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaTotCalPar::Class_Name()
{
   return "R3BCalifaTotCalPar";
}

//______________________________________________________________________________
const char *R3BCalifaTotCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaTotCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaTotCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaTotCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaTotCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaTotCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaTotCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaTotCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaHitPar::Class_Name()
{
   return "R3BCalifaHitPar";
}

//______________________________________________________________________________
const char *R3BCalifaHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaMapped2CrystalCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaMapped2CrystalCalPar::Class_Name()
{
   return "R3BCalifaMapped2CrystalCalPar";
}

//______________________________________________________________________________
const char *R3BCalifaMapped2CrystalCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaMapped2CrystalCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaMapped2CrystalCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaMapped2CrystalCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCal2TotCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2TotCalPar::Class_Name()
{
   return "R3BCalifaCrystalCal2TotCalPar";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2TotCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2TotCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCal2TotCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2TotCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2TotCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2TotCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2TotCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2TotCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaMapped2CrystalCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaMapped2CrystalCal::Class_Name()
{
   return "R3BCalifaMapped2CrystalCal";
}

//______________________________________________________________________________
const char *R3BCalifaMapped2CrystalCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaMapped2CrystalCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaMapped2CrystalCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaMapped2CrystalCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMapped2CrystalCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2Hit::Class_Name()
{
   return "R3BCalifaCrystalCal2Hit";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCal2CrystalCalPID::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2CrystalCalPID::Class_Name()
{
   return "R3BCalifaCrystalCal2CrystalCalPID";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCal2CrystalCalPID::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2CrystalCalPID*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCal2CrystalCalPID::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2CrystalCalPID*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2CrystalCalPID::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2CrystalCalPID*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCal2CrystalCalPID::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCal2CrystalCalPID*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaOnlineSpectra::Class_Name()
{
   return "R3BCalifaOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BCalifaOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaDemoOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaDemoOnlineSpectra::Class_Name()
{
   return "R3BCalifaDemoOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BCalifaDemoOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDemoOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaDemoOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDemoOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaDemoOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDemoOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaDemoOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaDemoOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCalDataAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCalDataAnalysis::Class_Name()
{
   return "R3BCalifaCrystalCalDataAnalysis";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCalDataAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalDataAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCalDataAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalDataAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalDataAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalDataAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalDataAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalDataAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BCalifa::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifa.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifa::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifa::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifa(void *p) {
      return  p ? new(p) ::R3BCalifa : new ::R3BCalifa;
   }
   static void *newArray_R3BCalifa(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifa[nElements] : new ::R3BCalifa[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifa(void *p) {
      delete ((::R3BCalifa*)p);
   }
   static void deleteArray_R3BCalifa(void *p) {
      delete [] ((::R3BCalifa*)p);
   }
   static void destruct_R3BCalifa(void *p) {
      typedef ::R3BCalifa current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifa

//______________________________________________________________________________
void R3BCalifaCrystalPars4Sim::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalPars4Sim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalPars4Sim::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalPars4Sim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalPars4Sim(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalPars4Sim : new ::R3BCalifaCrystalPars4Sim;
   }
   static void *newArray_R3BCalifaCrystalPars4Sim(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalPars4Sim[nElements] : new ::R3BCalifaCrystalPars4Sim[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalPars4Sim(void *p) {
      delete ((::R3BCalifaCrystalPars4Sim*)p);
   }
   static void deleteArray_R3BCalifaCrystalPars4Sim(void *p) {
      delete [] ((::R3BCalifaCrystalPars4Sim*)p);
   }
   static void destruct_R3BCalifaCrystalPars4Sim(void *p) {
      typedef ::R3BCalifaCrystalPars4Sim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalPars4Sim

//______________________________________________________________________________
void R3BCalifaDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaDigitizer(void *p) {
      return  p ? new(p) ::R3BCalifaDigitizer : new ::R3BCalifaDigitizer;
   }
   static void *newArray_R3BCalifaDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaDigitizer[nElements] : new ::R3BCalifaDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaDigitizer(void *p) {
      delete ((::R3BCalifaDigitizer*)p);
   }
   static void deleteArray_R3BCalifaDigitizer(void *p) {
      delete [] ((::R3BCalifaDigitizer*)p);
   }
   static void destruct_R3BCalifaDigitizer(void *p) {
      typedef ::R3BCalifaDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaDigitizer

//______________________________________________________________________________
void R3BCalifaContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaContFact(void *p) {
      return  p ? new(p) ::R3BCalifaContFact : new ::R3BCalifaContFact;
   }
   static void *newArray_R3BCalifaContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaContFact[nElements] : new ::R3BCalifaContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaContFact(void *p) {
      delete ((::R3BCalifaContFact*)p);
   }
   static void deleteArray_R3BCalifaContFact(void *p) {
      delete [] ((::R3BCalifaContFact*)p);
   }
   static void destruct_R3BCalifaContFact(void *p) {
      typedef ::R3BCalifaContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BCalifaContFact(TBuffer &buf, void *obj) {
      ((::R3BCalifaContFact*)obj)->::R3BCalifaContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BCalifaContFact

//______________________________________________________________________________
void R3BCalifaGeometry::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaGeometry.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaGeometry::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaGeometry::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaGeometry(void *p) {
      return  p ? new(p) ::R3BCalifaGeometry : new ::R3BCalifaGeometry;
   }
   static void *newArray_R3BCalifaGeometry(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaGeometry[nElements] : new ::R3BCalifaGeometry[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaGeometry(void *p) {
      delete ((::R3BCalifaGeometry*)p);
   }
   static void deleteArray_R3BCalifaGeometry(void *p) {
      delete [] ((::R3BCalifaGeometry*)p);
   }
   static void destruct_R3BCalifaGeometry(void *p) {
      typedef ::R3BCalifaGeometry current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaGeometry

//______________________________________________________________________________
void R3BCalifaMappingPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaMappingPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaMappingPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaMappingPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaMappingPar(void *p) {
      return  p ? new(p) ::R3BCalifaMappingPar : new ::R3BCalifaMappingPar;
   }
   static void *newArray_R3BCalifaMappingPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaMappingPar[nElements] : new ::R3BCalifaMappingPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaMappingPar(void *p) {
      delete ((::R3BCalifaMappingPar*)p);
   }
   static void deleteArray_R3BCalifaMappingPar(void *p) {
      delete [] ((::R3BCalifaMappingPar*)p);
   }
   static void destruct_R3BCalifaMappingPar(void *p) {
      typedef ::R3BCalifaMappingPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaMappingPar

//______________________________________________________________________________
void R3BCalifaCrystalCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCalPar(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCalPar : new ::R3BCalifaCrystalCalPar;
   }
   static void *newArray_R3BCalifaCrystalCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCalPar[nElements] : new ::R3BCalifaCrystalCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCalPar(void *p) {
      delete ((::R3BCalifaCrystalCalPar*)p);
   }
   static void deleteArray_R3BCalifaCrystalCalPar(void *p) {
      delete [] ((::R3BCalifaCrystalCalPar*)p);
   }
   static void destruct_R3BCalifaCrystalCalPar(void *p) {
      typedef ::R3BCalifaCrystalCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCalPar

//______________________________________________________________________________
void R3BCalifaTotCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaTotCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaTotCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaTotCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaTotCalPar(void *p) {
      return  p ? new(p) ::R3BCalifaTotCalPar : new ::R3BCalifaTotCalPar;
   }
   static void *newArray_R3BCalifaTotCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaTotCalPar[nElements] : new ::R3BCalifaTotCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaTotCalPar(void *p) {
      delete ((::R3BCalifaTotCalPar*)p);
   }
   static void deleteArray_R3BCalifaTotCalPar(void *p) {
      delete [] ((::R3BCalifaTotCalPar*)p);
   }
   static void destruct_R3BCalifaTotCalPar(void *p) {
      typedef ::R3BCalifaTotCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaTotCalPar

//______________________________________________________________________________
void R3BCalifaHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaHitPar(void *p) {
      return  p ? new(p) ::R3BCalifaHitPar : new ::R3BCalifaHitPar;
   }
   static void *newArray_R3BCalifaHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaHitPar[nElements] : new ::R3BCalifaHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaHitPar(void *p) {
      delete ((::R3BCalifaHitPar*)p);
   }
   static void deleteArray_R3BCalifaHitPar(void *p) {
      delete [] ((::R3BCalifaHitPar*)p);
   }
   static void destruct_R3BCalifaHitPar(void *p) {
      typedef ::R3BCalifaHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaHitPar

//______________________________________________________________________________
void R3BCalifaMapped2CrystalCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaMapped2CrystalCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaMapped2CrystalCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaMapped2CrystalCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaMapped2CrystalCalPar(void *p) {
      return  p ? new(p) ::R3BCalifaMapped2CrystalCalPar : new ::R3BCalifaMapped2CrystalCalPar;
   }
   static void *newArray_R3BCalifaMapped2CrystalCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaMapped2CrystalCalPar[nElements] : new ::R3BCalifaMapped2CrystalCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaMapped2CrystalCalPar(void *p) {
      delete ((::R3BCalifaMapped2CrystalCalPar*)p);
   }
   static void deleteArray_R3BCalifaMapped2CrystalCalPar(void *p) {
      delete [] ((::R3BCalifaMapped2CrystalCalPar*)p);
   }
   static void destruct_R3BCalifaMapped2CrystalCalPar(void *p) {
      typedef ::R3BCalifaMapped2CrystalCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaMapped2CrystalCalPar

//______________________________________________________________________________
void R3BCalifaCrystalCal2TotCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCal2TotCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCal2TotCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCal2TotCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCal2TotCalPar(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCal2TotCalPar : new ::R3BCalifaCrystalCal2TotCalPar;
   }
   static void *newArray_R3BCalifaCrystalCal2TotCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCal2TotCalPar[nElements] : new ::R3BCalifaCrystalCal2TotCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCal2TotCalPar(void *p) {
      delete ((::R3BCalifaCrystalCal2TotCalPar*)p);
   }
   static void deleteArray_R3BCalifaCrystalCal2TotCalPar(void *p) {
      delete [] ((::R3BCalifaCrystalCal2TotCalPar*)p);
   }
   static void destruct_R3BCalifaCrystalCal2TotCalPar(void *p) {
      typedef ::R3BCalifaCrystalCal2TotCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCal2TotCalPar

//______________________________________________________________________________
void R3BCalifaMapped2CrystalCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaMapped2CrystalCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaMapped2CrystalCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaMapped2CrystalCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaMapped2CrystalCal(void *p) {
      return  p ? new(p) ::R3BCalifaMapped2CrystalCal : new ::R3BCalifaMapped2CrystalCal;
   }
   static void *newArray_R3BCalifaMapped2CrystalCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaMapped2CrystalCal[nElements] : new ::R3BCalifaMapped2CrystalCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaMapped2CrystalCal(void *p) {
      delete ((::R3BCalifaMapped2CrystalCal*)p);
   }
   static void deleteArray_R3BCalifaMapped2CrystalCal(void *p) {
      delete [] ((::R3BCalifaMapped2CrystalCal*)p);
   }
   static void destruct_R3BCalifaMapped2CrystalCal(void *p) {
      typedef ::R3BCalifaMapped2CrystalCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaMapped2CrystalCal

//______________________________________________________________________________
void R3BCalifaCrystalCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCal2Hit(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCal2Hit : new ::R3BCalifaCrystalCal2Hit;
   }
   static void *newArray_R3BCalifaCrystalCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCal2Hit[nElements] : new ::R3BCalifaCrystalCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCal2Hit(void *p) {
      delete ((::R3BCalifaCrystalCal2Hit*)p);
   }
   static void deleteArray_R3BCalifaCrystalCal2Hit(void *p) {
      delete [] ((::R3BCalifaCrystalCal2Hit*)p);
   }
   static void destruct_R3BCalifaCrystalCal2Hit(void *p) {
      typedef ::R3BCalifaCrystalCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCal2Hit

//______________________________________________________________________________
void R3BCalifaCrystalCal2CrystalCalPID::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCal2CrystalCalPID.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCal2CrystalCalPID::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCal2CrystalCalPID::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCal2CrystalCalPID(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCal2CrystalCalPID : new ::R3BCalifaCrystalCal2CrystalCalPID;
   }
   static void *newArray_R3BCalifaCrystalCal2CrystalCalPID(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCal2CrystalCalPID[nElements] : new ::R3BCalifaCrystalCal2CrystalCalPID[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCal2CrystalCalPID(void *p) {
      delete ((::R3BCalifaCrystalCal2CrystalCalPID*)p);
   }
   static void deleteArray_R3BCalifaCrystalCal2CrystalCalPID(void *p) {
      delete [] ((::R3BCalifaCrystalCal2CrystalCalPID*)p);
   }
   static void destruct_R3BCalifaCrystalCal2CrystalCalPID(void *p) {
      typedef ::R3BCalifaCrystalCal2CrystalCalPID current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCal2CrystalCalPID

//______________________________________________________________________________
void R3BCalifaOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BCalifaOnlineSpectra : new ::R3BCalifaOnlineSpectra;
   }
   static void *newArray_R3BCalifaOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaOnlineSpectra[nElements] : new ::R3BCalifaOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaOnlineSpectra(void *p) {
      delete ((::R3BCalifaOnlineSpectra*)p);
   }
   static void deleteArray_R3BCalifaOnlineSpectra(void *p) {
      delete [] ((::R3BCalifaOnlineSpectra*)p);
   }
   static void destruct_R3BCalifaOnlineSpectra(void *p) {
      typedef ::R3BCalifaOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaOnlineSpectra

//______________________________________________________________________________
void R3BCalifaDemoOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaDemoOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaDemoOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaDemoOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaDemoOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BCalifaDemoOnlineSpectra : new ::R3BCalifaDemoOnlineSpectra;
   }
   static void *newArray_R3BCalifaDemoOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaDemoOnlineSpectra[nElements] : new ::R3BCalifaDemoOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaDemoOnlineSpectra(void *p) {
      delete ((::R3BCalifaDemoOnlineSpectra*)p);
   }
   static void deleteArray_R3BCalifaDemoOnlineSpectra(void *p) {
      delete [] ((::R3BCalifaDemoOnlineSpectra*)p);
   }
   static void destruct_R3BCalifaDemoOnlineSpectra(void *p) {
      typedef ::R3BCalifaDemoOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaDemoOnlineSpectra

//______________________________________________________________________________
void R3BCalifaCrystalCalDataAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCalDataAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCalDataAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCalDataAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCalDataAnalysis(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCalDataAnalysis : new ::R3BCalifaCrystalCalDataAnalysis;
   }
   static void *newArray_R3BCalifaCrystalCalDataAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCalDataAnalysis[nElements] : new ::R3BCalifaCrystalCalDataAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCalDataAnalysis(void *p) {
      delete ((::R3BCalifaCrystalCalDataAnalysis*)p);
   }
   static void deleteArray_R3BCalifaCrystalCalDataAnalysis(void *p) {
      delete [] ((::R3BCalifaCrystalCalDataAnalysis*)p);
   }
   static void destruct_R3BCalifaCrystalCalDataAnalysis(void *p) {
      typedef ::R3BCalifaCrystalCalDataAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCalDataAnalysis

namespace {
  void TriggerDictionaryInitialization_G__R3BCalifaDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/califa",
"/work/R3BRoot/tracking",
"/work/R3BRoot/califa/online",
"/work/R3BRoot/califa/calibration",
"/work/R3BRoot/califa/ana",
"/work/R3BRoot/califa/pars",
"/work/R3BRoot/califa/sim",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/wrData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/califa/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BCalifaDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BCalifa;
class __attribute__((annotate("$clingAutoload$R3BCalifaCrystalPars4Sim.h")))  R3BCalifaCrystalPars4Sim;
class R3BCalifaDigitizer;
class __attribute__((annotate(R"ATTRDUMP(Factory for all CALIFA parameter containers)ATTRDUMP"))) R3BCalifaContFact;
class R3BCalifaGeometry;
class R3BCalifaMappingPar;
class R3BCalifaCrystalCalPar;
class R3BCalifaTotCalPar;
class R3BCalifaHitPar;
class R3BCalifaMapped2CrystalCalPar;
class R3BCalifaCrystalCal2TotCalPar;
class R3BCalifaMapped2CrystalCal;
class R3BCalifaCrystalCal2Hit;
class R3BCalifaCrystalCal2CrystalCalPID;
class R3BCalifaOnlineSpectra;
class R3BCalifaDemoOnlineSpectra;
class R3BCalifaCrystalCalDataAnalysis;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BCalifaDict dictionary payload"

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

#ifndef R3BCALIFA_H
#define R3BCALIFA_H

#include "R3BDetector.h"
#include "TF1.h"
#include "TLorentzVector.h"
#include <map>

class TClonesArray;
class R3BCalifaPoint;
class FairVolume;
class TGeoRotation;
class R3BCalifaGeometry;

class R3BCalifa : public R3BDetector
{

  public:
    /** Default constructor */
    R3BCalifa();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BCalifa(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BCalifa(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BCalifa();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the active
     ** volume. Creates a R3BCalifaPoint and adds it to the collection.
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

    /** Select the version of the CALIFA geometry
     **
     *@param version Geometry version (final BARREL+iPhos: 2020)
     **/
    void SelectGeometryVersion(Int_t version);

    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts() {}

  private:
    /** Track information to be stored until the track leaves the
    active volume. **/
    Int_t fTrackID;        //!  track index
    Int_t fTrackPID;       //!  particle identification
    Int_t fVolumeID;       //!  volume id
    Int_t fParentTrackID;  //!  parent track index
    Int_t fUniqueID;       //!  particle unique id (e.g. if Delta electron, fUniqueID=9)
    TLorentzVector fPosIn; //!  position
    TLorentzVector fMomIn; //!  momentum
    Double32_t fTime;      //!  time
    Double32_t fLength;    //!  length
    Double32_t fELoss;     //!  energy loss
    Double32_t fNf;        //!  fast CsI(Tl) amplitude
    Double32_t fNs;        //!  slow CsI(Tl) amplitude
    Int_t fPosIndex;       //!
    Int_t fNSteps;         //!  Number of steps in the active volume
    Double32_t fEinc;      //!  Total incident energy
    TList* flGeoPar;       //!

    TClonesArray* fCalifaCollection; //!  The point collection

    // Selecting the geometry of the CALIFA calorimeter (final BARREL+iPhos: 2020)
    Int_t fGeometryVersion;

    Double_t fCsIDensity;

    R3BCalifaGeometry* fCalifaGeo;

    /** Private method AddPoint
     **
     ** Adds a CalifaPoint to the HitCollection
     **/
    R3BCalifaPoint* AddPoint(Int_t trackID,
                             Int_t detID,
                             Int_t ident,
                             TVector3 posIn,
                             TVector3 momIn,
                             Double_t time,
                             Double_t length,
                             Double_t eLoss,
                             Double_t Nf,
                             Double_t Ns,
                             UInt_t EventId);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    TGeoRotation* createMatrix(Double_t phi, Double_t theta, Double_t psi);

    ClassDef(R3BCalifa, 7);
};

inline void R3BCalifa::ResetParameters()
{
    fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = fNf = fNs = fEinc = 0;
    fPosIndex = 0;
    fNSteps = 0;
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

#ifndef R3BCALIFADIGITIZER_H
#define R3BCALIFADIGITIZER_H

#include "FairTask.h"
#include "R3BCalifa.h"
#include "R3BCalifaCrystalCalData.h"
#include "R3BCalifaCrystalPars4Sim.h"
#include "R3BCalifaPoint.h"
#include "TClonesArray.h"
#include "string"

class R3BCalifaDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BCalifaDigitizer();

    /** Standard contructor **/
    R3BCalifaDigitizer(const TString& geoFile);

    /** Destructor **/
    ~R3BCalifaDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method EndOffEvent **/
    virtual void EndOfEvent();

    /** Virtual method Register **/
    virtual void Register();

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    virtual void SetParContainers();

    /** Public method SetRealConfig
     **
     ** Defines the REAL experimental resolution and Thresholds of the CsI(Tl)
     *Crystals
     *@param isRealSet  Bool parameter used to set the experimental Resolution and
     *Thresholds
     **/
    void SetRealConfig(Bool_t isRealSet);

    /** Public method SetExpEnergyRes
     **
     ** Sets the experimental energy resolution of the CsI crystals
     **/
    void SetExpEnergyRes(Double_t crystalRes);

    /** Public method SetComponentRes
     **
     ** Defines the experimental resolution of the CsI(Tl) components.
     *@param componentRes  Double parameter used to set the experimental
     *resolution in MeV
     **/
    void SetComponentRes(Double_t componentRes);

    /** Public method SetDetectionThreshold
     **
     ** Defines the minimum energy requested in a crystal to be included as a
     *CrystalCal
     *@param thresholdEne  Double parameter used to set the threshold (in GeV)
     **/
    void SetDetectionThreshold(Double_t thresholdEne);

    /** Public method SetNonUniformity
     **
     ** Defines the fNonUniformity parameter in % deviation from the central value
     *@param nonU  Double parameter setting the maximum non-uniformity allowed
     **/
    void SetNonUniformity(Double_t nonU);

    inline void ResetParameters(){};

    /** Private method AddCrystalCal
     **
     ** Adds a CalifaCrystalCal data
     **/
    R3BCalifaCrystalCalData* AddCrystalCal(Int_t ident,
                                           Double_t energy,
                                           Double_t Nf,
                                           Double_t Ns,
                                           ULong64_t time,
                                           Double_t tot_energy = 0.);

  private:
    void SetParameter();

    TClonesArray* fCalifaPointDataCA;  //!  The crystal hit collection
    TClonesArray* fCalifaCryCalDataCA; /**< Array with CALIFA Cal- output data. >*/

    Double_t fNonUniformity; // Experimental non-uniformity parameter
    Double_t fResolution;    // Experimental resolution @ 1 MeV
    Double_t fComponentRes;  // Experimental resolution for Nf and Ns
    Double_t fThreshold;     // Minimum energy requested to create a Cal
    Bool_t fRealConfig;      // Real Configuration in CALIFA
    Int_t fNumberOfParams = 0;
    Int_t fNumCrystals = 0;

    R3BCalifaCrystalPars4Sim* fSim_Par; // Parameter Container for a Realistic Simulation

    /** Private method NUSmearing
     **
     ** Smears the energy according to some non-uniformity distribution
     ** Very simple scheme where the NU is introduced as a flat random
     ** distribution with limits fNonUniformity (%) of the energy value.
     **/
    Double_t NUSmearing(Double_t inputEnergy);

    /** Private method ExpResSmearing
     **
     ** Smears the energy according to some Experimental Resolution distribution
     ** Very simple scheme where the Experimental Resolution
     ** is introduced as a gaus random distribution with a width given by the
     ** parameter fCrystalResolution(in % @ MeV). Scales according to 1/sqrt(E)
     **/
    Double_t ExpResSmearing(Double_t inputEnergy);

    /** Private method CompSmearing
     **
     ** Smears the CsI(Tl) components Ns and Nf
     **/
    Double_t CompSmearing(Double_t inputComponent);

    ClassDef(R3BCalifaDigitizer, 1);
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

#ifndef R3BCALIFACONTFACT_H
#define R3BCALIFACONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BCalifaContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BCalifaContFact();
    ~R3BCalifaContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BCalifaContFact, 0) // Factory for all CALIFA parameter containers
};

#endif /* !R3BCALIFACONTFACT_H */
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

#ifndef R3BCALIFAGEOMETRY_H
#define R3BCALIFAGEOMETRY_H

#include <TFile.h>
#include <TObject.h>

class TVector3;
class TGeoNavigator;

/**
 * Geometrical queries to CALIFA
 */
class R3BCalifaGeometry : public TObject
{
  public:
    /** Default constructor */
    R3BCalifaGeometry();

    /** Standard constructor.
     *@param version geometry version
     */
    R3BCalifaGeometry(Int_t version);

    /** Destructor **/
    ~R3BCalifaGeometry();

    /**
     * Gets position in polar coordinates of crystal with given ID.
     * On error, the x,y and z component of the TVector3 are set to NAN.
     * @param iD crystal ID (depending on geometry version)
     */
    const TVector3& GetAngles(Int_t iD);

    /**
     * Legacy: Gets position in polar coordinates of crystal with given ID.
     *
     * Before this comment, the last three parameters were untouched on error.
     * Now, they should be set to NAN;
     *
     * @param iD crystal ID (depending on geometry version)
     * @param polar [out] Will be filled with polar angle (radians) of crystal center
     * @param azimuthal [out] Will be filled with azimuthal angle (radians) of crystal center
     * @param rho [out] Will be filled with distance (cm) of crystal center to target position (0,0,0)
     */
    void GetAngles(Int_t iD, Double_t* polar, Double_t* azimuthal, Double_t* rho);

    /**
     * Gets volume path of crystal with given ID.
     *
     * @param iD crystal ID (depending on geometry version)
     * @return Volume path
     */
    const char* GetCrystalVolumePath(Int_t iD);

    /**
     * Gets crystal ID for given volume path.
     *
     * @param volumePath Volume path
     * @return Crystal ID
     */
    int GetCrystalId(const char* volumePath);

    /**
     * Calculate the distance of a given straight track through the active detector volume (crystal(s)). Usefull for
     * iPhos.
     *
     * @param startVertex Start position of track (e.g. (0,0,0) for center of target)
     * @param direction Direction of the track (does not need to be normalized)
     * @param hitPos [out] (optional) If given, this TVector3 will be filled with the position of the first contact
     * between the track and the first crystal along the path.
     * @param numCrystals [in,out]
     * \parblock
     *  (optional) If given together with crystalIDs,
     *  this function will fill numCrystals with the number of crystals along the straight
     *  and the array crystalIds with the IDs of the crystals along the straight.
     *  The array crystalIds MUST be allocated by the caller.
     *  The maximum size of the array has to be given with the content of numCrystals.
     *  The function will stop filling the array after reaching the specified, maximum capacity.
     * \endparblock
     * @param crystalIds [out] (optional, array) See numCrystals.
     * @return Distance (cm) through crystal(s)
     */
    double GetDistanceThroughCrystals(TVector3& startVertex,
                                      TVector3& direction,
                                      TVector3* hitPos = NULL,
                                      Int_t* numCrystals = NULL,
                                      Int_t* crystalIds = NULL);

    /**
     * @return if we are running the simulation or data analysis
     */
    const bool IsSimulation() { return fIsSimulation; }

    /**
     * Returns singleton instance of R3BCalifaGeometry for given geometry version.
     * Warning: Switching the geometry version at run time will lead to undefined beheaviour!
     *
     * @param version Geometry version to use. If in doubt, use 2020.
     * @return Instance of R3BCalifaGeometry
     */
    static R3BCalifaGeometry* Instance(Int_t version);

  private:
    Int_t fGeometryVersion;
    Int_t fNumCrystals;
    Bool_t fIsSimulation;
    TFile* f;

    static R3BCalifaGeometry* inst;

    ClassDef(R3BCalifaGeometry, 8);
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

#ifndef R3BCALIFAMAPPINGPAR_H
#define R3BCALIFAMAPPINGPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BCalifaMappingPar : public FairParGenericSet
{
  public:
    /** Standard constructor **/
    R3BCalifaMappingPar(const char* name = "califaMappingPar",
                        const char* title = "Califa Mapping Parameters",
                        const char* context = "CalifaMappingContext");

    /** Destructor **/
    virtual ~R3BCalifaMappingPar();

    /** Reset all parameters **/
    virtual void clear();

    /** Store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Int_t GetNumCrystals() { return fNumCrystals; }
    const Int_t GetHalf(Int_t crystal) { return fHalf->GetAt(crystal - 1); }
    const Int_t GetRing(Int_t crystal) { return fRing->GetAt(crystal - 1); }
    const Int_t GetPreamp(Int_t crystal) { return fPreamp->GetAt(crystal - 1); }
    const Int_t GetChannel(Int_t crystal) { return fChannel->GetAt(crystal - 1); }
    const Int_t GetCrystalType(Int_t crystal) { return fCrystal_type->GetAt(crystal - 1); }
    const Int_t GetApdNumber(Int_t crystal) { return fApd_number->GetAt(crystal - 1); }
    const Float_t GetVoltage(Int_t crystal) { return fVoltage->GetAt(crystal - 1); }
    const Int_t GetFebexSlot(Int_t crystal) { return fFebex_slot->GetAt(crystal - 1); }
    const Int_t GetFebexMod(Int_t crystal) { return fFebex_mod->GetAt(crystal - 1); }
    const Int_t GetFebexChannel(Int_t crystal) { return fFebex_channel->GetAt(crystal - 1); }
    const Int_t GetLab(Int_t crystal) { return fLab->GetAt(crystal - 1); }
    const Int_t GetMrccModule(Int_t crystal) { return fMrcc_module->GetAt(crystal - 1); }
    const Int_t GetMrccBus(Int_t crystal) { return fMrcc_bus->GetAt(crystal - 1); }
    const Int_t GetMrccPreamp(Int_t crystal) { return fMrcc_preamp->GetAt(crystal - 1); }
    const Int_t GetInUse(Int_t crystal) { return fIn_use->GetAt(crystal - 1); }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetHalf(Int_t value, Int_t crystal) { fHalf->AddAt(value, crystal - 1); }
    void SetRing(Int_t value, Int_t crystal) { fRing->AddAt(value, crystal - 1); }
    void SetPreamp(Int_t value, Int_t crystal) { fPreamp->AddAt(value, crystal - 1); }
    void SetChannel(Int_t value, Int_t crystal) { fChannel->AddAt(value, crystal - 1); }
    void SetCrystalType(Int_t value, Int_t crystal) { fCrystal_type->AddAt(value, crystal - 1); }
    void SetApdNumber(Int_t value, Int_t crystal) { fApd_number->AddAt(value, crystal - 1); }
    void SetVoltage(Float_t value, Int_t crystal) { fVoltage->AddAt(value, crystal - 1); }
    void SetFebexSlot(Int_t value, Int_t crystal) { fFebex_slot->AddAt(value, crystal - 1); }
    void SetFebexMod(Int_t value, Int_t crystal) { fFebex_mod->AddAt(value, crystal - 1); }
    void SetFebexChannel(Int_t value, Int_t crystal) { fFebex_channel->AddAt(value, crystal - 1); }
    void SetLab(Int_t value, Int_t crystal) { fLab->AddAt(value, crystal - 1); }
    void SetMrccModule(Int_t value, Int_t crystal) { fMrcc_module->AddAt(value, crystal - 1); }
    void SetMrccBus(Int_t value, Int_t crystal) { fMrcc_bus->AddAt(value, crystal - 1); }
    void SetMrccPreamp(Int_t value, Int_t crystal) { fMrcc_preamp->AddAt(value, crystal - 1); }
    void SetInUse(Int_t value, Int_t crystal) { fIn_use->AddAt(value, crystal - 1); }

  private:
    Int_t fNumCrystals;      // number of crystals
    TArrayI* fHalf;          // half (1 Wixhausen side or RIGHT side, 2 Messel side or LEFT side)
    TArrayI* fRing;          // ring from 1 to 5 (5 is iPhos)
    TArrayI* fPreamp;        // preamp from 1 to 16
    TArrayI* fChannel;       // preamp channel from 1 to 16
    TArrayI* fCrystal_type;  // crystal type (crystal engineering model)
    TArrayI* fApd_number;    // APD number attached to the crystal
    TArrayF* fVoltage;       // nominal voltage for gain=50 (volts)
    TArrayI* fFebex_slot;    // FEBEX spf from 0 to 3
    TArrayI* fFebex_mod;     // FEBEX module from 0 to 15 (0 to f)
    TArrayI* fFebex_channel; // FEBEX channel from 0 to 15
    TArrayI* fLab;           // 1:LUND 2:TUD 3:USC
    TArrayI* fMrcc_module;   // Slow Control MRCC module 0 to 1
    TArrayI* fMrcc_bus;      // Slow Control MRCC bus  (0 or 1)
    TArrayI* fMrcc_preamp;   // Slow Control MRCC bus from 0 to 15 (0 to f)
    TArrayI* fIn_use;        // 1: crystal installed and ready  0:otherwise

    const R3BCalifaMappingPar& operator=(const R3BCalifaMappingPar&); /*< an assignment operator>*/
    R3BCalifaMappingPar(const R3BCalifaMappingPar&);                  /*< a copy constructor >*/

    ClassDef(R3BCalifaMappingPar, 1); //
};

#endif /* !R3BCALIFAMAPPINGPAR_H*/
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

#ifndef R3BCALIFACRYSTALCALPAR_H
#define R3BCALIFACRYSTALCALPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BCalifaCrystalCalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BCalifaCrystalCalPar(const char* name = "califaCrystalCalPar",
                           const char* title = "Califa CrystalCal Parameters",
                           const char* context = "CalifaCalParContext");

    /** Destructor **/
    virtual ~R3BCalifaCrystalCalPar();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Double_t GetNumCrystals() { return fNumCrystals; }
    const Double_t GetNumParametersFit() { return fNumParamsFit; }
    TArrayF* GetCryCalParams() { return fCryCalParams; }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetNumParametersFit(Int_t numberParams) { fNumParamsFit = numberParams; }
    void SetCryCalParams(Float_t cc, Int_t ii) { fCryCalParams->AddAt(cc, ii); }

    /** Create more Methods if you need them! **/

  private:
    TArrayF* fCryCalParams; /*< Calibration Parameters of Crystals>*/
    Int_t fNumCrystals;     /*< number of crystals>*/
    Int_t fNumParamsFit;    /*< number of cal parameters in the fit
                  pol1: A_fit & B_fit
                  pol2: A_fit, B_fit & C_fit>*/

    const R3BCalifaCrystalCalPar& operator=(const R3BCalifaCrystalCalPar&); /*< an assignment operator>*/

    R3BCalifaCrystalCalPar(const R3BCalifaCrystalCalPar&); /*< a copy constructor >*/

    ClassDef(R3BCalifaCrystalCalPar, 1);
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

#ifndef R3BCalifaTotCalPar_H
#define R3BCalifaTotCalPar_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BCalifaTotCalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BCalifaTotCalPar(const char* name = "califaTotCalPar",
                       const char* title = "Califa_TotCal_Parameters",
                       const char* context = "CalifaTotCalParContext");

    /** Destructor **/
    virtual ~R3BCalifaTotCalPar();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Double_t GetNumCrystals() { return fNumCrystals; }
    const Double_t GetNumParametersFit() { return fNumParamsFit; }
    TArrayF* GetCryCalParams() { return fCryCalParams; }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetNumParametersFit(Int_t numberParams) { fNumParamsFit = numberParams; }
    void SetCryCalParams(Float_t cc, Int_t ii) { fCryCalParams->AddAt(cc, ii); }

    /** Create more Methods if you need them! **/

  private:
    TArrayF* fCryCalParams; /*< Calibration Parameters of Crystals>*/
    Int_t fNumCrystals;     /*< number of crystals>*/
    Int_t fNumParamsFit;    /*< number of cal parameters in the fit
                  pol1: A_fit & B_fit
                  pol2: A_fit, B_fit & C_fit>*/

    const R3BCalifaTotCalPar& operator=(const R3BCalifaTotCalPar&); /*< an assignment operator>*/

    R3BCalifaTotCalPar(const R3BCalifaTotCalPar&); /*< a copy constructor >*/

    ClassDef(R3BCalifaTotCalPar, 1);
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

#ifndef R3BCALIFAHITPAR_H
#define R3BCALIFAHITPAR_H

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BCalifaHitPar : public FairParGenericSet
{
  public:
    R3BCalifaHitPar(const char* name = "R3BCalifaHitPar",
                    const char* title = "The Hit Finder Parameters",
                    const char* context = "TestDefaultContext");
    ~R3BCalifaHitPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    void Print(Option_t* option = "") const;
    /** Accessor functions **/
    const Double_t GetThreshold() { return fThreshold; }
    const Double_t GetDRThreshold() { return fDRThreshold; }
    const Double_t GetDeltaPolar() { return fDeltaPolar; }
    const Double_t GetDeltaAzimuthal() { return fDeltaAzimuthal; }
    const Double_t GetDeltaAngleClust() { return fDeltaAngleClust; }
    const Int_t GetClusteringAlgorithmSelector() { return fClusterAlgorithmSelector; }
    const Double_t GetParCluster1() { return fParCluster1; }

    void SetThreshold(Double_t value) { fThreshold = value; }
    void SetDRThreshold(Double_t value) { fDRThreshold = value; }
    void SetDeltaPolar(Double_t value) { fDeltaPolar = value; }
    void SetDeltaAzimuthal(Double_t value) { fDeltaAzimuthal = value; }
    void SetDeltaAngleClust(Double_t value) { fDeltaAngleClust = value; }
    void SetClusteringAlgorithmSelector(Int_t value) { fClusterAlgorithmSelector = value; }
    void SetParCluster1(Double_t value) { fParCluster1 = value; }

  private:
    // Minimum energy requested in a crystal to be considered in a calorimeter Hit
    Double_t fThreshold;
    // Threshold for selecting gamma or proton branch in double reading channels
    Double_t fDRThreshold;
    // Angular window (polar)
    Double_t fDeltaPolar;
    // Angular window (azimuthal)
    Double_t fDeltaAzimuthal;
    // Angular opening used for the clustering condition
    Double_t fDeltaAngleClust;
    // Clustering algorithm selector
    Int_t fClusterAlgorithmSelector;
    // Clustering parameter 1
    Double_t fParCluster1;

    ClassDef(R3BCalifaHitPar, 2); //
};

#endif /* !R3BCALIFAHITPAR_H*/
#ifndef R3BCALIFACRYSTALPARS4SIM_H
#define R3BCALIFACRYSTALPARS4SIM_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BCalifaCrystalPars4Sim : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BCalifaCrystalPars4Sim(const char* name = "califaCrystalPars4Sim",
                             const char* title = "Califa Crystal Parameters for Sim",
                             const char* context = "CalifaSimParContext");

    /** Destructor **/
    virtual ~R3BCalifaCrystalPars4Sim();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /* ----- Accessor functions ---- */
    const Int_t GetNumCrystals() { return fNumCrystals; }
    const Int_t GetNumParameters4Sim() { return fNumParams4Sim; }

    const Float_t GetResolution(Int_t crystal) { return fResolutionArray->GetAt(crystal - 1); }
    const Int_t GetThreshold(Int_t crystal) { return fThresholdArray->GetAt(crystal - 1); }

    const Bool_t GetInUse(Int_t crystal)
    {

        if (fCrystalIDArray->GetAt(crystal - 1) == 0)
            return kFALSE;

        else
            return kTRUE;
    }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetNmbOfSimParameters(Int_t nPar) { fNumParams4Sim = nPar; }

  private:
    /* Simulation Parameters of Crystals */
    TArrayI* fCrystalIDArray;
    TArrayI* fThresholdArray;
    TArrayF* fResolutionArray;

    Int_t fNumCrystals;   /* Number of crystals */
    Int_t fNumParams4Sim; /* Number of Simulation parameters in the Sim (CrystalID, Resolution, Threshold, NonUni...) */

    const R3BCalifaCrystalPars4Sim& operator=(const R3BCalifaCrystalPars4Sim&); /*< an assignment operator>*/

    R3BCalifaCrystalPars4Sim(const R3BCalifaCrystalPars4Sim&); /*  a copy constructor  */

    ClassDef(R3BCalifaCrystalPars4Sim, 1);
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

#ifndef R3BCALIFAMAPPED2CRYSTALCALPAR_H
#define R3BCALIFAMAPPED2CRYSTALCALPAR_H

#include "FairTask.h"
#include "TH1F.h"

class TClonesArray;
class R3BCalifaMappingPar;
class R3BCalifaCrystalCalPar;
class R3BEventHeader;

class R3BCalifaMapped2CrystalCalPar : public FairTask
{

  public:
    /** Default constructor **/
    R3BCalifaMapped2CrystalCalPar();

    /** Standard constructor **/
    R3BCalifaMapped2CrystalCalPar(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BCalifaMapped2CrystalCalPar();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Search peaks and calibrate **/
    virtual void SearchPeaks();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Accessor functions **/
    const Int_t GetNumCrystals() { return fNumCrystals; }
    const Int_t GetCalRange_left() { return fMapHistos_left; }
    const Int_t GetCalRange_right() { return fMapHistos_right; }
    const Int_t GetCalRange_bins() { return fMapHistos_bins; }
    const Int_t GetNumPeaks() { return fNumPeaks; }
    const Double_t GetSigma() { return fSigma; }
    const Double_t GetThreshold() { return fThreshold; }
    const Int_t GetNumParameterFit() { return fNumParam; }
    const Int_t GetMinStadistics() { return fMinStadistics; }

    TArrayF* GetEnergyPeaks() { return fEnergyPeaks; }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetCalRange_left(Int_t Histos_left) { fMapHistos_left = Histos_left; }
    void SetCalRange_right(Int_t Histos_right) { fMapHistos_right = Histos_right; }
    void SetCalRange_bins(Int_t Histos_bins) { fMapHistos_bins = Histos_bins; }
    void SetCalRangeP_left(Int_t Histos_left) { fMapHistos_leftp = Histos_left; }
    void SetCalRangeP_right(Int_t Histos_right) { fMapHistos_rightp = Histos_right; }
    void SetCalRangeP_bins(Int_t Histos_bins) { fMapHistos_binsp = Histos_bins; }
    void SetNumPeaks(Int_t numberpeaks) { fNumPeaks = numberpeaks; }
    void SetSigma(Double_t sigma) { fSigma = sigma; }
    void SetThreshold(Double_t threshold) { fThreshold = threshold; }
    void SetNumParameterFit(Int_t numberParFit) { fNumParam = numberParFit; }
    void SetMinStadistics(Int_t minstad) { fMinStadistics = minstad; }

    void SetDebugMode(Int_t debug) { fDebugMode = debug; }

    void SetEnergyPeaks(TArrayF* thePeaks)
    {
        fEnergyPeaks = thePeaks;
        fNumPeaks = thePeaks->GetSize();
    }

  protected:
    void SetParameter();
    Int_t fDebugMode;
    Int_t fNumCrystals;
    Int_t fMapHistos_left; // gamma range
    Int_t fMapHistos_right;
    Int_t fMapHistos_bins;
    Int_t fMapHistos_leftp; // particle range
    Int_t fMapHistos_rightp;
    Int_t fMapHistos_binsp;

    Int_t fNumParam;
    Int_t fMinStadistics;

    Int_t fNumPeaks;
    Double_t fSigma;
    Double_t fThreshold;

    TArrayF* fEnergyPeaks;
    Double_t* fChannelPeaks;

    R3BCalifaMappingPar* fMap_Par;     /**< Parameter container with mapping. >*/
    R3BCalifaCrystalCalPar* fCal_Par;  /**< Container for Cal parameters. >*/
    TClonesArray* fCalifaMappedDataCA; /**< Array with CALIFA Mapped-input data. >*/

    TH1F** fh_Map_energy_crystal;

  public:
    ClassDef(R3BCalifaMapped2CrystalCalPar, 2);
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

#ifndef R3BCalifaCrystalCal2TotCalPar_H
#define R3BCalifaCrystalCal2TotCalPar_H

#include "FairTask.h"
#include "TGraph.h"
#include "TH1F.h"

class TClonesArray;
class R3BCalifaMappingPar;
class R3BCalifaTotCalPar;
class R3BEventHeader;

class R3BCalifaCrystalCal2TotCalPar : public FairTask
{

  public:
    /** Default constructor **/
    R3BCalifaCrystalCal2TotCalPar();

    /** Standard constructor **/
    R3BCalifaCrystalCal2TotCalPar(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BCalifaCrystalCal2TotCalPar();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    virtual void Search_TotParams();

    /** Accessor functions **/
    const Int_t GetNumCrystals() { return fNumCrystals; }
    const Double_t GetThreshold() { return fThreshold; }
    const Int_t GetNumParameterFit() { return fNumParam; }
    const Int_t GetMinStadistics() { return fMinStadistics; }

    void SetNumCrystals(Int_t numberCry) { fNumCrystals = numberCry; }
    void SetThreshold(Double_t threshold) { fThreshold = threshold; }
    void SetNumParameterFit(Int_t numberParFit) { fNumParam = numberParFit; }
    void SetMinStadistics(Int_t minstad) { fMinStadistics = minstad; }

  protected:
    void SetParameter();
    Int_t fNumCrystals;
    Int_t fNumParam;
    Int_t fMinStadistics;
    Int_t* idx;

    Double_t fThreshold;

    R3BCalifaMappingPar* fMap_Par;   /**< Parameter container with mapping. >*/
    R3BCalifaTotCalPar* fTotCal_Par; /**< Container for Tot-Cal parameters. >*/
    TClonesArray* fCrystalCalDataCA; /**< Array with CALIFA energy calibrated - input data. >*/

    TGraph** energy_vs_tot_crystal;

  public:
    ClassDef(R3BCalifaCrystalCal2TotCalPar, 1);
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
// -----                                                                   -----
// -----                     R3BCalifaMapped2CrystalCal                    -----
// -----                Created 18/07/2014 by H. Alvarez-Pol               -----
// -----                 Modified 20/03/2017 by P. Cabanelas               -----
// -----                 Modified 15/12/2017 by E. Galiana                 -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BCALIFAMAPPED2CRYSTALCAL_H
#define R3BCALIFAMAPPED2CRYSTALCAL_H

#include "FairTask.h"
#include "R3BCalifa.h"
#include "R3BCalifaCrystalCalData.h"
#include "R3BCalifaMapped2CrystalCalPar.h"
#include "R3BCalifaMappedData.h"
#include "TH1F.h"
//#include "R3BCalifaCrystalCalPar.h"
#include "R3BCalifaTotCalPar.h"
#include <TRandom.h>

class TClonesArray;
class R3BCalifaCrystalCalPar;

class R3BCalifaMapped2CrystalCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BCalifaMapped2CrystalCal();

    /** Destructor **/
    virtual ~R3BCalifaMapped2CrystalCal();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method Reset **/
    virtual void Reset();

    virtual void SetParContainers();

    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Finish **/
    virtual void Finish();

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    void SetParameter();

    Int_t NumCrystals = 0;
    Int_t NumParams = 0;
    Int_t NumTotParams = 0;
    TArrayF* fCalParams;
    TArrayF* fCalTotParams;
    // Don't store data for online
    Bool_t fOnline;

    R3BCalifaCrystalCalPar* fCal_Par;  /**< Parameter container. >*/
    R3BCalifaTotCalPar* fTotCal_Par;   /**< Tot Parameter container. >*/
    TClonesArray* fCalifaMappedDataCA; /**< Array with CALIFA Mapped- input data. >*/
    TClonesArray* fCalifaCryCalDataCA; /**< Array with CALIFA Cal- output data. >*/

    /** Private method AddCalData **/
    //** Adds a CalifaCryCalData to the CryCalCollection

    R3BCalifaCrystalCalData* AddCalData(Int_t id,
                                        Double_t energy,
                                        Double_t Nf,
                                        Double_t Ns,
                                        ULong64_t time,
                                        Double_t tot_energy);

  public:
    // Class definition
    ClassDef(R3BCalifaMapped2CrystalCal, 1)
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

#ifndef R3BCALIFACRYSTALCAL2HIT_H
#define R3BCALIFACRYSTALCAL2HIT_H

#include "FairTask.h"
#include "R3BCalifaGeometry.h"
#include "R3BCalifaHitData.h"

#include <TVector3.h>

class TClonesArray;
class R3BTGeoPar;

class R3BCalifaCrystalCal2Hit : public FairTask
{

  public:
    /** Default constructor
     **/
    R3BCalifaCrystalCal2Hit();

    /** Destructor **/
    ~R3BCalifaCrystalCal2Hit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Public method SelectGeometryVersion
     **
     ** Defines the geometry
     *@param version  Integer parameter used to select the geometry:
     ** (see documentation /r3broot/cal/perlScripts/README))
     **/
    void SelectGeometryVersion(Int_t version);

    /** Public method SetSquareWindowAlg
     **
     ** Select the square window clustering algorithm
     *@param xDeltaPolar Polar aperture
     *@param xDeltaAzimuthal Azimuthal aperture
     **/
    virtual void SetSquareWindowAlg(double xDeltaPolar = 0.25, double xDeltaAzimuthal = 0.25)
    {
        fClusterAlgorithmSelector = RECT;
        fDeltaPolar = xDeltaPolar;
        fDeltaAzimuthal = xDeltaAzimuthal;
    }

    /** Public method SetRoundWindowAlg
     **
     ** Select the round window clustering algorithm
     *@param xDeltaAngleClust  Angular aperture
     **/
    virtual void SetRoundWindowAlg(double xDeltaAngleClust = 0.25)
    {
        fClusterAlgorithmSelector = ROUND;
        fDeltaAngleClust = xDeltaAngleClust;
    }

    /** Public method SetRoundEnergyScaledAlg
     **
     ** Select the round window clustering algorithm
     *@param xDeltaAngleClust Angular aperture
     *@param xenergyFactor Energy factor
     **/
    virtual void SetRoundEnergyScaledAlg(double xDeltaAngleClust = 0.25, double xenergyFactor = 0)
    {
        fClusterAlgorithmSelector = ROUND_SCALED;
        fDeltaAngleClust = xDeltaAngleClust;
        energyFactor = xenergyFactor;
    }

    /** Public method SetConeAlg
     **
     ** Select the angular cone clustering algorithm
     *@param xDeltaAngleClust Angular aperture
     **/
    virtual void SetConeAlg(double xDeltaAngleClust = 0.25)
    {
        fClusterAlgorithmSelector = CONE;
        fDeltaAngleClust = xDeltaAngleClust;
    }

    /** Public method SetPetalAlg
     **
     ** Select the petal clustering algorithm (2018 experiments)
     **/
    virtual void SetPetalAlg() { fClusterAlgorithmSelector = PETAL; }

    /** Public method SetCrystalThreshold
     **
     ** Defines the minimum energy requested in a crystal to be considered in a calorimeter Hit
     *@param thresholdEne  Double parameter used to set the threshold
     **/
    void SetCrystalThreshold(Double_t thresholdEne);

    /** Public method SetDRThreshold (for double reading)
     **
     ** Defines the minimum energy requested in a crystal to be considered in a calorimeter Hit
     *@param thresholdEne  Double parameter used to set the threshold
     **/
    void SetDRThreshold(Double_t DRthresholdEne);

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Virtual method Finish **/
    // virtual void Finish();

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

    static int AngleToPetalId(TVector3& vec)
    {
        // internal [double] petal number, not corresponding to anything real
        // only relevant for 2019 beam times
        auto a = vec.Phi();
        if (a < 0)
        {
            if (a < -2)
                return 0;
            else
                return 1;
        }
        else
        {
            if (a < 2)
            {
                if (a < 0.2)
                    return 2;
                else
                    return 3;
            }
            else
                return 4;
        }
    }

  protected:
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Method GetAnglesVector (calls R3BCalifaGeometry::GetAngles(id)) **/
    TVector3 GetAnglesVector(int id);
    TVector3 fTargetPos;
    TVector3 fCalifaPos;
    TVector3 fCalifatoTargetPos;

    TClonesArray* fCrystalHitCA;
    TClonesArray* fCalifaHitCA;

    R3BTGeoPar* fTargetGeoPar;
    R3BTGeoPar* fCalifaGeoPar;

    Bool_t fOnline;              // Selector for online data storage
    Int_t fGeometryVersion;      // Selecting the geometry of the CALIFA calorimeter
    Int_t fNbCrystalsGammaRange; // Define max. number of crystals with gamma range
    Double_t fDeltaPolar;        // Angular window (polar angle)
    Double_t fDeltaAzimuthal;    // Angular window (azimuthal angle)
    Double_t fDeltaAngleClust;   // Angular opening used for the cluster condition
    Double_t fParCluster1;       // Clustering parameter 1
    Double_t fThreshold;         // Minimum energy requested in a crystal to be included in a Cal
    Double_t fDRThreshold;       // Threshold for selecting gamma or proton branch in double reading channels
    Double_t energyFactor;

    // Clustering algorithm selector
    enum
    {
        INVALID = 0,
        RECT = 1,
        ROUND = 2,
        ROUND_SCALED = 3,
        CONE = 4,
        ALL = 5,
        NONE = 6,
        PETAL = 7
    } fClusterAlgorithmSelector; // Clustering algorithm selector

    // Parameter class
    // R3BCalifaHitPar* fCalifaHitPar;

    R3BCalifaGeometry* fCalifaGeo;

  private:
    /** Private method AddHit
     **
     ** Adds a CalifaHit to the HitCollection
     **/
    R3BCalifaHitData* AddHit(UInt_t Nbcrystals,
                             Double_t ene,
                             Double_t Nf,
                             Double_t Ns,
                             Double_t pAngle,
                             Double_t aAngle,
                             ULong64_t time);

    /** Private method Match
     **
     ** Decides if hit is in the cluster started by ref
     **/
    virtual bool Match(R3BCalifaCrystalCalData* ref, R3BCalifaCrystalCalData* hit);

    ClassDef(R3BCalifaCrystalCal2Hit, 2);
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

#ifndef R3BCalifaCrystalCal2CrystalCalPID_H
#define R3BCalifaCrystalCal2CrystalCalPID_H

#include "FairTask.h"
#include "R3BCalifaCrystalCalData.h"

class TClonesArray;

/**
 * Calibrate/Normalize PID information to energy (such that E = Nf + Ns)
 *
 * @remark Needs a file called qpidscale.txt with structure
 *  channel_nr slope delta
 * with E[channel_nr] = slope*(Nf[channel_nr] + Ns[channel_nr]) + delta
 *
 * @warning Currently only 128 channels (s438b demonstrator) supported.
 *
 * @todo Support full CALIFA
 */
class R3BCalifaCrystalCal2CrystalCalPID : public FairTask
{

  public:
    /** Default constructor **/
    R3BCalifaCrystalCal2CrystalCalPID();

    /** Destructor **/
    virtual ~R3BCalifaCrystalCal2CrystalCalPID();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method Reset **/
    virtual void Reset();

  protected:
    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Virtual method Finish **/
    virtual void Finish();

    virtual void Register();

    Long64_t nEvents;

    double scale[128];
    double delta[128];

  private:
    TClonesArray* fCrystalCalDataCA;

  public:
    // Class definition
    ClassDef(R3BCalifaCrystalCal2CrystalCalPID, 0)
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

#ifndef R3BCALIFAONLINESPECTRA
#define R3BCALIFAONLINESPECTRA

#include "FairTask.h"
#include "TCanvas.h"
#include "THStack.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

#define Nb_Sides 2
#define Nb_Rings 5
#define Nb_Preamps 16
#define Nb_PreampCh 16

class TClonesArray;
class R3BCalifaMappingPar;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads CALIFA data and plots online histograms
 */
class R3BCalifaOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BCalifaOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BCalifaOnlineSpectra(const TString& name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BCalifaOnlineSpectra();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /** Virtual method ReInit **/
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
     * Method for setting number of rings
     */
    inline void SetRings(Int_t rings) { fNumRings = rings; }

    /**
     * Method for setting max. energy per crystal in MeV for Barrel histograms at CAL level
     */
    inline void SetMaxEnergyperCrystalBarrel(Int_t maxenergy) { fMaxEnergyBarrel = maxenergy; }

    /**
     * Method for setting max. energy per crystal in MeV for Iphos histograms at CAL level
     */
    inline void SetMaxEnergyperCrystalIphos(Int_t maxenergy) { fMaxEnergyIphos = maxenergy; }

    /**
     * Method for setting the configuration parameters file
     */
    inline void SetCalifaConfigFile(TString file) { fCalifaFile = file; }

    /**
     * Method to select binning and max range
     */
    inline void SetRange_bins(Int_t Histos_bins) { fMapHistos_bins = Histos_bins; }
    inline void SetRange_max(Int_t Histos_max) { fMapHistos_max = Histos_max; }

    /**
     * Method for setting the number of bins of Febex histograms
     */
    inline void SetBinChannelFebex(Int_t bin) { fBinsChannelFebex = bin; }

    /**
     * Method for setting max range of Febex histograms
     */
    inline void SetMaxBinFebex(Int_t max) { fMaxBinChannelFebex = max; }

    /**
     * Method for setting min proton energy (in keV) for opening angle histogram
     */
    inline void SetMinProtonEnergyForOpening(Float_t min) { fMinProtonE = min; }

    /**
     * Method for setting Tot histograms
     */
    inline void SetTotHist(Bool_t opt) { fTotHist = opt; }

    /**
     * Method to reset histograms
     */
    void Reset_CALIFA_Histo();

    /**
     * Method to change histogram scales
     */
    void Log_CALIFA_Histo();

    /**
     * Method for setting histogram sequence (Febex or Preamp. channels)
     */
    void Febex2Preamp_CALIFA_Histo();

  private:
    void SetParameter();

    Int_t fMapHistos_max;
    Int_t fMapHistos_bins;

    R3BCalifaMappingPar* fMap_Par;    /**< Container with mapping parameters. >*/
    TClonesArray* fMappedItemsCalifa; /**< Array with mapped items.    */
    TClonesArray* fCalItemsCalifa;    /**< Array with cal items.       */
    TClonesArray* fHitItemsCalifa;    /**< Array with hit items.       */
    TClonesArray* fWRItemsCalifa;     /**< Array with WR-Califa items. */
    TClonesArray* fWRItemsMaster;     /**< Array with WR-Master items. */

    // Check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header.  */
    Int_t fNEvents;         /**< Event counter. */

    Int_t fNbCalifaCrystals;              /**< Number of Crystals in Califa. */
    Int_t fNumSides;                      /**< Number of Sides, left and right.   */
    Int_t fNumRings;                      /**< Number of Rings.   */
    Int_t fNumPreamps;                    /**< Number of Preamps per ring.   */
    Int_t fNumCrystalPreamp;              /**< Number of Crystals/Channels per Preamp. */
    Int_t fBinsChannelFebex;              /**< Number of Bins per Febex channel. */
    Int_t fMaxBinChannelFebex;            /**< Maximum bin for Febex histograms. */
    Int_t fOrderFebexPreamp[Nb_PreampCh]; /**< Selector for febex or preamp sequence. */
    Float_t fMinProtonE;                  /**< Min proton energy (in keV) to calculate the opening angle */

    TString fCalifaFile;    /**< Config file name. */
    Int_t fMaxEnergyBarrel; /**< Max. energy for Barrel histograms at CAL level. */
    Int_t fMaxEnergyIphos;  /**< Max. energy for Iphos histograms at CAL level. */
    Bool_t fLogScale;       /**< Selecting scale. */
    Bool_t fRaw2Cal;        /**< Mapped or Cal selector. */
    Bool_t fFebex2Preamp;   /**< Febex or Preamp selector. */
    Bool_t fTotHist;        /**< Tot histograms selector. */
    Int_t fFebexInfo[Nb_Sides][Nb_Rings][Nb_Preamps]
                    [4]; /**< Febex slot and module info: 0 slot and 1 module, (PR) 2 slot and 3 module. */

    // Canvas
    TCanvas* cCalifaMult;
    TCanvas* cCalifa_cry_energy;
    TCanvas* cCalifa_cry_energy_cal;
    TCanvas* cMap_RingR[Nb_Rings];
    TCanvas* cMap_RingL[Nb_Rings];
    TCanvas* cMapCry[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cMapCryTot[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cMapCryCal[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cMapCryP[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cMapCryPTot[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cMapCryPCal[Nb_Sides][Nb_Rings][Nb_Preamps];
    TCanvas* cCalifaCoinE;
    TCanvas* cCalifaCoinPhi;
    TCanvas* cCalifaCoinTheta;
    TCanvas* cCalifa_angles;
    TCanvas* cCalifa_theta_energy;
    TCanvas* cCalifa_hitenergy;
    TCanvas* cCalifa_opening;
    TCanvas* cCalifa_NsNf;

    // WR data
    TCanvas* cCalifa_wr;
    TH1F* fh1_Califa_wr;
    TCanvas* cWrs;
    TH1F* fh1_wrs[2];
    THStack* stack_wrs;
    TCanvas* cCalifa_wr_energy;

    // Histograms
    TH1F* fh1_Califa_Mult;
    TH1F* fh1_Califa_MultHit;
    TH2F* fh2_Califa_cryId_energy;
    TH2F* fh2_Preamp_vs_ch_R[Nb_Rings];
    TH2F* fh2_Preamp_vs_ch_L[Nb_Rings];
    TH1F* fh1_crystals[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH2F* fh2_crystalsETot[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH1F* fh1_crystals_p[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH2F* fh2_crystalsETot_p[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH2F* fh2_Califa_cryId_energy_cal;
    TH1F* fh1_crystals_cal[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH1F* fh1_crystals_p_cal[Nb_Sides][Nb_Rings][Nb_Preamps][Nb_PreampCh];
    TH2F* fh2_Califa_coinE;
    TH2F* fh2_Califa_coinTheta;
    TH2F* fh2_Califa_coinPhi;
    TH2F* fh2_Califa_theta_phi;
    TH2F* fh2_Califa_theta_energy;
    TH1F* fh1_Califa_total_energy;
    TH1F* fh1_openangle;
    TH2F* fh2_Cal_wr_energy_l;
    TH2F* fh2_Cal_wr_energy_r;
    TH2F* fh2_Califa_NsNf;

  public:
    ClassDef(R3BCalifaOnlineSpectra, 1)
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

#ifndef R3BCALIFADEMOONLINESPECTRA
#define R3BCALIFADEMOONLINESPECTRA
#define N_MAX_CRY 64
#define N_MAX_PETALS 8

#include "FairTask.h"
#include "TCanvas.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads CALIFA data and plots online histograms
 */
class R3BCalifaDemoOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BCalifaDemoOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BCalifaDemoOnlineSpectra(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BCalifaDemoOnlineSpectra();

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
     * Method for setting number of petals
     */
    inline void SetPetals(Int_t petals) { fCalifaNumPetals = petals; }

    /**
     * Method for setting the configuration parameters file
     */
    inline void SetCalifaConfigFile(TString file) { fCalifaFile = file; }

    /**
     * Method to select binning and max range
     */
    void SetRange_bins(Int_t Histos_bins) { fMapHistos_bins = Histos_bins; }
    void SetRange_max(Int_t Histos_max) { fMapHistos_max = Histos_max; }

    /**
     * Method to reset histograms
     */
    void Reset_CALIFA_DEMO_Histo();

  private:
    /**
     * Method to change histogram scales
     */
    void Log_CALIFA_Histo();

    /**
     * Method for setting the Data Level (Mapped or Cal)
     */
    void Map2Cal_CALIFA_Histo();

    /**
     * Method for setting histogram sequence (Febex or Preamp. channels)
     */
    void Febex2Preamp_CALIFA_Histo();

    /**
     * Mapping s444 crystals
     */
    Int_t Map_For_s444(Int_t val);

    Int_t fMapHistos_max;
    Int_t fMapHistos_bins;

    TClonesArray* fMappedItemsCalifa; /**< Array with mapped items.    */
    TClonesArray* fCalItemsCalifa;    /**< Array with cal items.       */
    TClonesArray* fHitItemsCalifa;    /**< Array with hit items.       */
    TClonesArray* fWRItemsCalifa;     /**< Array with WR-Califa items. */
    TClonesArray* fWRItemsMaster;     /**< Array with WR-Master items. */

    // Check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header.  */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fNEvents;         /**< Event counter. */

    Int_t fCalifaNumPetals;      /**< Number of Petals.   */
    Int_t fNumCrystalPetal;      /**< Crystals per Petal. */
    Int_t fOrderFebexPreamp[16]; /**< Selector for febex or preamp sequence. */

    // Multiplicities
    TH1F* fh_Califa_Mult[N_MAX_PETALS + 1];
    TH1F* fh_Califa_MultHit[N_MAX_PETALS + 1];

    // WR data
    TH1F* fh_Califa_wr;

    // Raw data
    TH2F* fh_Califa_cryId_petal;
    TH1F* fh_Califa_energy_per_petal[N_MAX_PETALS + 1]; //+1 for proton range:s444
    TH1F* fh_Califa_crystals[N_MAX_PETALS][N_MAX_CRY];
    TH2F* fh_Califa_cryId_energy;
    TH2F* fh_Califa_coinc_petal1;
    TH2F* fh_Califa_coinc_petal2;
    TH2F* fh_Califa_coinc_petal3;

    // Cal data
    TH2F* fh_Califa_cryId_energy_cal;
    TH1F* fh_Califa_energy_per_petal_cal[N_MAX_PETALS + 1]; //+1 for proton range:s444
    TH1F* fh_Califa_crystals_cal[N_MAX_PETALS][N_MAX_CRY];

    // Hit data
    TH2F* fh_Califa_theta_phi;
    TH2F* fh_Califa_theta_energy[N_MAX_PETALS];
    TH1F* fh_Califa_total_energy;

    TString fCalifaFile;  /**< Config file name. */
    Bool_t fCalON;        /**< Cal selector. */
    Bool_t fLogScale;     /**< Selecting scale. */
    Bool_t fRaw2Cal;      /**< Mapped or Cal selector. */
    Bool_t fFebex2Preamp; /**< Febex or Preamp selector. */

    TCanvas* cMap;
    TCanvas* cCalifa_wr;
    TCanvas* cCalifa1;
    TCanvas* cCalifa2;
    TCanvas* cCalifa3;
    TCanvas* cCalifa3b; // proton range
    TCanvas* cCalifa4[N_MAX_PETALS][4];
    TCanvas* cCalifa5;
    TCanvas* cCalifa6;
    TCanvas* cCalifa7;
    TCanvas* cCalifa8;
    TCanvas* cCalifa_hitpetal[N_MAX_PETALS];
    TCanvas* cCalifa10;
    TCanvas* cCalifa_hitenergy;

  public:
    ClassDef(R3BCalifaDemoOnlineSpectra, 1)
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

#ifndef R3BCALIFACRYSTALCALDATAANALYSIS_H
#define R3BCALIFACRYSTALCALDATAANALYSIS_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BCalifaCrystalCalDataAnalysis : public FairTask
{
  public:
    R3BCalifaCrystalCalDataAnalysis();
    virtual ~R3BCalifaCrystalCalDataAnalysis();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:
    Int_t fnEvents;

    TClonesArray* fCrystalData;

    TH1F* thCrystalID;
    TH1F* thEnergy;
    TH1F* thNf;
    TH1F* thNs;
    TH1F* thTime;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BCalifaCrystalCalDataAnalysis, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BCalifa", payloadCode, "@",
"R3BCalifaContFact", payloadCode, "@",
"R3BCalifaCrystalCal2CrystalCalPID", payloadCode, "@",
"R3BCalifaCrystalCal2Hit", payloadCode, "@",
"R3BCalifaCrystalCal2TotCalPar", payloadCode, "@",
"R3BCalifaCrystalCalDataAnalysis", payloadCode, "@",
"R3BCalifaCrystalCalPar", payloadCode, "@",
"R3BCalifaCrystalPars4Sim", payloadCode, "@",
"R3BCalifaDemoOnlineSpectra", payloadCode, "@",
"R3BCalifaDigitizer", payloadCode, "@",
"R3BCalifaGeometry", payloadCode, "@",
"R3BCalifaHitPar", payloadCode, "@",
"R3BCalifaMapped2CrystalCal", payloadCode, "@",
"R3BCalifaMapped2CrystalCalPar", payloadCode, "@",
"R3BCalifaMappingPar", payloadCode, "@",
"R3BCalifaOnlineSpectra", payloadCode, "@",
"R3BCalifaTotCalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BCalifaDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BCalifaDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BCalifaDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BCalifaDict() {
  TriggerDictionaryInitialization_G__R3BCalifaDict_Impl();
}
