// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIreconstructiondIG__R3BNeulandReconstructionDict

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
#include "multiplicity/R3BNeulandMultiplicityBayes.h"
#include "multiplicity/R3BNeulandMultiplicityBayesPar.h"
#include "multiplicity/R3BNeulandMultiplicityBayesTrain.h"
#include "multiplicity/R3BNeulandMultiplicityCalorimetric.h"
#include "multiplicity/R3BNeulandMultiplicityCalorimetricPar.h"
#include "multiplicity/R3BNeulandMultiplicityCalorimetricTrain.h"
#include "multiplicity/R3BNeulandMultiplicityCheat.h"
#include "multiplicity/R3BNeulandMultiplicityFixed.h"
#include "neutrons/R3BNeulandNeutronsCheat.h"
#include "neutrons/R3BNeulandNeutronsRValue.h"
#include "R3BNeulandReconstructionContFact.h"
#include "R3BNeulandNeutronReconstructionMon.h"
#include "R3BNeulandNeutronReconstructionStatistics.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BNeulandMultiplicityBayesPar(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityBayesPar(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityBayesPar(void *p);
   static void deleteArray_R3BNeulandMultiplicityBayesPar(void *p);
   static void destruct_R3BNeulandMultiplicityBayesPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityBayesPar*)
   {
      ::R3BNeulandMultiplicityBayesPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityBayesPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityBayesPar", ::R3BNeulandMultiplicityBayesPar::Class_Version(), "R3BNeulandMultiplicityBayesPar.h", 23,
                  typeid(::R3BNeulandMultiplicityBayesPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityBayesPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityBayesPar) );
      instance.SetNew(&new_R3BNeulandMultiplicityBayesPar);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityBayesPar);
      instance.SetDelete(&delete_R3BNeulandMultiplicityBayesPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityBayesPar);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityBayesPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityBayesPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityBayesPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityBayes(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityBayes(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityBayes(void *p);
   static void deleteArray_R3BNeulandMultiplicityBayes(void *p);
   static void destruct_R3BNeulandMultiplicityBayes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityBayes*)
   {
      ::R3BNeulandMultiplicityBayes *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityBayes >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityBayes", ::R3BNeulandMultiplicityBayes::Class_Version(), "", 15,
                  typeid(::R3BNeulandMultiplicityBayes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityBayes::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityBayes) );
      instance.SetNew(&new_R3BNeulandMultiplicityBayes);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityBayes);
      instance.SetDelete(&delete_R3BNeulandMultiplicityBayes);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityBayes);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityBayes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityBayes*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityBayes*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayes*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityBayesTrain(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityBayesTrain(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityBayesTrain(void *p);
   static void deleteArray_R3BNeulandMultiplicityBayesTrain(void *p);
   static void destruct_R3BNeulandMultiplicityBayesTrain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityBayesTrain*)
   {
      ::R3BNeulandMultiplicityBayesTrain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityBayesTrain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityBayesTrain", ::R3BNeulandMultiplicityBayesTrain::Class_Version(), "", 101,
                  typeid(::R3BNeulandMultiplicityBayesTrain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityBayesTrain::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityBayesTrain) );
      instance.SetNew(&new_R3BNeulandMultiplicityBayesTrain);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityBayesTrain);
      instance.SetDelete(&delete_R3BNeulandMultiplicityBayesTrain);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityBayesTrain);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityBayesTrain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityBayesTrain*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityBayesTrain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesTrain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityCalorimetricPar(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityCalorimetricPar(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityCalorimetricPar(void *p);
   static void deleteArray_R3BNeulandMultiplicityCalorimetricPar(void *p);
   static void destruct_R3BNeulandMultiplicityCalorimetricPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityCalorimetricPar*)
   {
      ::R3BNeulandMultiplicityCalorimetricPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityCalorimetricPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityCalorimetricPar", ::R3BNeulandMultiplicityCalorimetricPar::Class_Version(), "R3BNeulandMultiplicityCalorimetricPar.h", 30,
                  typeid(::R3BNeulandMultiplicityCalorimetricPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityCalorimetricPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityCalorimetricPar) );
      instance.SetNew(&new_R3BNeulandMultiplicityCalorimetricPar);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityCalorimetricPar);
      instance.SetDelete(&delete_R3BNeulandMultiplicityCalorimetricPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityCalorimetricPar);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityCalorimetricPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityCalorimetricPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityCalorimetricPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityCalorimetric(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityCalorimetric(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityCalorimetric(void *p);
   static void deleteArray_R3BNeulandMultiplicityCalorimetric(void *p);
   static void destruct_R3BNeulandMultiplicityCalorimetric(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityCalorimetric*)
   {
      ::R3BNeulandMultiplicityCalorimetric *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityCalorimetric >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityCalorimetric", ::R3BNeulandMultiplicityCalorimetric::Class_Version(), "", 134,
                  typeid(::R3BNeulandMultiplicityCalorimetric), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityCalorimetric::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityCalorimetric) );
      instance.SetNew(&new_R3BNeulandMultiplicityCalorimetric);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityCalorimetric);
      instance.SetDelete(&delete_R3BNeulandMultiplicityCalorimetric);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityCalorimetric);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityCalorimetric);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityCalorimetric*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityCalorimetric*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetric*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityCalorimetricTrain(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityCalorimetricTrain(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityCalorimetricTrain(void *p);
   static void deleteArray_R3BNeulandMultiplicityCalorimetricTrain(void *p);
   static void destruct_R3BNeulandMultiplicityCalorimetricTrain(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityCalorimetricTrain*)
   {
      ::R3BNeulandMultiplicityCalorimetricTrain *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityCalorimetricTrain >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityCalorimetricTrain", ::R3BNeulandMultiplicityCalorimetricTrain::Class_Version(), "", 228,
                  typeid(::R3BNeulandMultiplicityCalorimetricTrain), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityCalorimetricTrain::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityCalorimetricTrain) );
      instance.SetNew(&new_R3BNeulandMultiplicityCalorimetricTrain);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityCalorimetricTrain);
      instance.SetDelete(&delete_R3BNeulandMultiplicityCalorimetricTrain);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityCalorimetricTrain);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityCalorimetricTrain);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityCalorimetricTrain*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityCalorimetricTrain*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricTrain*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicityCheat(void *p = 0);
   static void *newArray_R3BNeulandMultiplicityCheat(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicityCheat(void *p);
   static void deleteArray_R3BNeulandMultiplicityCheat(void *p);
   static void destruct_R3BNeulandMultiplicityCheat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityCheat*)
   {
      ::R3BNeulandMultiplicityCheat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityCheat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityCheat", ::R3BNeulandMultiplicityCheat::Class_Version(), "", 278,
                  typeid(::R3BNeulandMultiplicityCheat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityCheat::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityCheat) );
      instance.SetNew(&new_R3BNeulandMultiplicityCheat);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicityCheat);
      instance.SetDelete(&delete_R3BNeulandMultiplicityCheat);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityCheat);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityCheat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityCheat*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityCheat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCheat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BNeulandMultiplicityFixed(void *p);
   static void deleteArray_R3BNeulandMultiplicityFixed(void *p);
   static void destruct_R3BNeulandMultiplicityFixed(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicityFixed*)
   {
      ::R3BNeulandMultiplicityFixed *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicityFixed >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicityFixed", ::R3BNeulandMultiplicityFixed::Class_Version(), "", 305,
                  typeid(::R3BNeulandMultiplicityFixed), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicityFixed::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicityFixed) );
      instance.SetDelete(&delete_R3BNeulandMultiplicityFixed);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicityFixed);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicityFixed);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicityFixed*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicityFixed*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityFixed*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandNeutronsCheat(void *p = 0);
   static void *newArray_R3BNeulandNeutronsCheat(Long_t size, void *p);
   static void delete_R3BNeulandNeutronsCheat(void *p);
   static void deleteArray_R3BNeulandNeutronsCheat(void *p);
   static void destruct_R3BNeulandNeutronsCheat(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandNeutronsCheat*)
   {
      ::R3BNeulandNeutronsCheat *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandNeutronsCheat >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandNeutronsCheat", ::R3BNeulandNeutronsCheat::Class_Version(), "", 335,
                  typeid(::R3BNeulandNeutronsCheat), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandNeutronsCheat::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandNeutronsCheat) );
      instance.SetNew(&new_R3BNeulandNeutronsCheat);
      instance.SetNewArray(&newArray_R3BNeulandNeutronsCheat);
      instance.SetDelete(&delete_R3BNeulandNeutronsCheat);
      instance.SetDeleteArray(&deleteArray_R3BNeulandNeutronsCheat);
      instance.SetDestructor(&destruct_R3BNeulandNeutronsCheat);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandNeutronsCheat*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandNeutronsCheat*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandNeutronsCheat*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BNeulandNeutronsRValue(void *p);
   static void deleteArray_R3BNeulandNeutronsRValue(void *p);
   static void destruct_R3BNeulandNeutronsRValue(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandNeutronsRValue*)
   {
      ::R3BNeulandNeutronsRValue *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandNeutronsRValue >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandNeutronsRValue", ::R3BNeulandNeutronsRValue::Class_Version(), "", 367,
                  typeid(::R3BNeulandNeutronsRValue), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandNeutronsRValue::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandNeutronsRValue) );
      instance.SetDelete(&delete_R3BNeulandNeutronsRValue);
      instance.SetDeleteArray(&deleteArray_R3BNeulandNeutronsRValue);
      instance.SetDestructor(&destruct_R3BNeulandNeutronsRValue);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandNeutronsRValue*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandNeutronsRValue*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandNeutronsRValue*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandReconstructionContFact(void *p = 0);
   static void *newArray_R3BNeulandReconstructionContFact(Long_t size, void *p);
   static void delete_R3BNeulandReconstructionContFact(void *p);
   static void deleteArray_R3BNeulandReconstructionContFact(void *p);
   static void destruct_R3BNeulandReconstructionContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandReconstructionContFact*)
   {
      ::R3BNeulandReconstructionContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandReconstructionContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandReconstructionContFact", ::R3BNeulandReconstructionContFact::Class_Version(), "", 426,
                  typeid(::R3BNeulandReconstructionContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandReconstructionContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandReconstructionContFact) );
      instance.SetNew(&new_R3BNeulandReconstructionContFact);
      instance.SetNewArray(&newArray_R3BNeulandReconstructionContFact);
      instance.SetDelete(&delete_R3BNeulandReconstructionContFact);
      instance.SetDeleteArray(&deleteArray_R3BNeulandReconstructionContFact);
      instance.SetDestructor(&destruct_R3BNeulandReconstructionContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandReconstructionContFact*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandReconstructionContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandReconstructionContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandNeutronReconstructionMon(void *p = 0);
   static void *newArray_R3BNeulandNeutronReconstructionMon(Long_t size, void *p);
   static void delete_R3BNeulandNeutronReconstructionMon(void *p);
   static void deleteArray_R3BNeulandNeutronReconstructionMon(void *p);
   static void destruct_R3BNeulandNeutronReconstructionMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandNeutronReconstructionMon*)
   {
      ::R3BNeulandNeutronReconstructionMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandNeutronReconstructionMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandNeutronReconstructionMon", ::R3BNeulandNeutronReconstructionMon::Class_Version(), "", 468,
                  typeid(::R3BNeulandNeutronReconstructionMon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandNeutronReconstructionMon::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandNeutronReconstructionMon) );
      instance.SetNew(&new_R3BNeulandNeutronReconstructionMon);
      instance.SetNewArray(&newArray_R3BNeulandNeutronReconstructionMon);
      instance.SetDelete(&delete_R3BNeulandNeutronReconstructionMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandNeutronReconstructionMon);
      instance.SetDestructor(&destruct_R3BNeulandNeutronReconstructionMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandNeutronReconstructionMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandNeutronReconstructionMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionMon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandNeutronReconstructionStatistics(void *p = 0);
   static void *newArray_R3BNeulandNeutronReconstructionStatistics(Long_t size, void *p);
   static void delete_R3BNeulandNeutronReconstructionStatistics(void *p);
   static void deleteArray_R3BNeulandNeutronReconstructionStatistics(void *p);
   static void destruct_R3BNeulandNeutronReconstructionStatistics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandNeutronReconstructionStatistics*)
   {
      ::R3BNeulandNeutronReconstructionStatistics *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandNeutronReconstructionStatistics >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandNeutronReconstructionStatistics", ::R3BNeulandNeutronReconstructionStatistics::Class_Version(), "", 537,
                  typeid(::R3BNeulandNeutronReconstructionStatistics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandNeutronReconstructionStatistics::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandNeutronReconstructionStatistics) );
      instance.SetNew(&new_R3BNeulandNeutronReconstructionStatistics);
      instance.SetNewArray(&newArray_R3BNeulandNeutronReconstructionStatistics);
      instance.SetDelete(&delete_R3BNeulandNeutronReconstructionStatistics);
      instance.SetDeleteArray(&deleteArray_R3BNeulandNeutronReconstructionStatistics);
      instance.SetDestructor(&destruct_R3BNeulandNeutronReconstructionStatistics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandNeutronReconstructionStatistics*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandNeutronReconstructionStatistics*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionStatistics*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityBayesPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayesPar::Class_Name()
{
   return "R3BNeulandMultiplicityBayesPar";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayesPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityBayesPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayesPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayesPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityBayes::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayes::Class_Name()
{
   return "R3BNeulandMultiplicityBayes";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayes::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayes*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityBayes::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayes*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayes::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayes*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayes::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayes*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityBayesTrain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayesTrain::Class_Name()
{
   return "R3BNeulandMultiplicityBayesTrain";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityBayesTrain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesTrain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityBayesTrain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesTrain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayesTrain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesTrain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityBayesTrain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityBayesTrain*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityCalorimetricPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetricPar::Class_Name()
{
   return "R3BNeulandMultiplicityCalorimetricPar";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetricPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityCalorimetricPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetricPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetricPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityCalorimetric::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetric::Class_Name()
{
   return "R3BNeulandMultiplicityCalorimetric";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetric::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetric*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityCalorimetric::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetric*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetric::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetric*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetric::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetric*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityCalorimetricTrain::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetricTrain::Class_Name()
{
   return "R3BNeulandMultiplicityCalorimetricTrain";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCalorimetricTrain::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricTrain*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityCalorimetricTrain::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricTrain*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetricTrain::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricTrain*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCalorimetricTrain::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCalorimetricTrain*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityCheat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCheat::Class_Name()
{
   return "R3BNeulandMultiplicityCheat";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityCheat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCheat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityCheat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCheat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCheat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCheat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityCheat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityCheat*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicityFixed::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicityFixed::Class_Name()
{
   return "R3BNeulandMultiplicityFixed";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicityFixed::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityFixed*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicityFixed::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityFixed*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityFixed::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityFixed*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicityFixed::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicityFixed*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandNeutronsCheat::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandNeutronsCheat::Class_Name()
{
   return "R3BNeulandNeutronsCheat";
}

//______________________________________________________________________________
const char *R3BNeulandNeutronsCheat::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsCheat*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandNeutronsCheat::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsCheat*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronsCheat::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsCheat*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronsCheat::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsCheat*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandNeutronsRValue::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandNeutronsRValue::Class_Name()
{
   return "R3BNeulandNeutronsRValue";
}

//______________________________________________________________________________
const char *R3BNeulandNeutronsRValue::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsRValue*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandNeutronsRValue::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsRValue*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronsRValue::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsRValue*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronsRValue::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronsRValue*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandReconstructionContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandReconstructionContFact::Class_Name()
{
   return "R3BNeulandReconstructionContFact";
}

//______________________________________________________________________________
const char *R3BNeulandReconstructionContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandReconstructionContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandReconstructionContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandReconstructionContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandReconstructionContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandReconstructionContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandReconstructionContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandReconstructionContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandNeutronReconstructionMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandNeutronReconstructionMon::Class_Name()
{
   return "R3BNeulandNeutronReconstructionMon";
}

//______________________________________________________________________________
const char *R3BNeulandNeutronReconstructionMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandNeutronReconstructionMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronReconstructionMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronReconstructionMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandNeutronReconstructionStatistics::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandNeutronReconstructionStatistics::Class_Name()
{
   return "R3BNeulandNeutronReconstructionStatistics";
}

//______________________________________________________________________________
const char *R3BNeulandNeutronReconstructionStatistics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionStatistics*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandNeutronReconstructionStatistics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionStatistics*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronReconstructionStatistics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionStatistics*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandNeutronReconstructionStatistics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutronReconstructionStatistics*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BNeulandMultiplicityBayesPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityBayesPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityBayesPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityBayesPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityBayesPar(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityBayesPar : new ::R3BNeulandMultiplicityBayesPar;
   }
   static void *newArray_R3BNeulandMultiplicityBayesPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityBayesPar[nElements] : new ::R3BNeulandMultiplicityBayesPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityBayesPar(void *p) {
      delete ((::R3BNeulandMultiplicityBayesPar*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityBayesPar(void *p) {
      delete [] ((::R3BNeulandMultiplicityBayesPar*)p);
   }
   static void destruct_R3BNeulandMultiplicityBayesPar(void *p) {
      typedef ::R3BNeulandMultiplicityBayesPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityBayesPar

//______________________________________________________________________________
void R3BNeulandMultiplicityBayes::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityBayes.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityBayes::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityBayes::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityBayes(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityBayes : new ::R3BNeulandMultiplicityBayes;
   }
   static void *newArray_R3BNeulandMultiplicityBayes(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityBayes[nElements] : new ::R3BNeulandMultiplicityBayes[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityBayes(void *p) {
      delete ((::R3BNeulandMultiplicityBayes*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityBayes(void *p) {
      delete [] ((::R3BNeulandMultiplicityBayes*)p);
   }
   static void destruct_R3BNeulandMultiplicityBayes(void *p) {
      typedef ::R3BNeulandMultiplicityBayes current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityBayes

//______________________________________________________________________________
void R3BNeulandMultiplicityBayesTrain::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityBayesTrain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityBayesTrain::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityBayesTrain::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityBayesTrain(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityBayesTrain : new ::R3BNeulandMultiplicityBayesTrain;
   }
   static void *newArray_R3BNeulandMultiplicityBayesTrain(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityBayesTrain[nElements] : new ::R3BNeulandMultiplicityBayesTrain[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityBayesTrain(void *p) {
      delete ((::R3BNeulandMultiplicityBayesTrain*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityBayesTrain(void *p) {
      delete [] ((::R3BNeulandMultiplicityBayesTrain*)p);
   }
   static void destruct_R3BNeulandMultiplicityBayesTrain(void *p) {
      typedef ::R3BNeulandMultiplicityBayesTrain current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityBayesTrain

//______________________________________________________________________________
void R3BNeulandMultiplicityCalorimetricPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityCalorimetricPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityCalorimetricPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityCalorimetricPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityCalorimetricPar(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityCalorimetricPar : new ::R3BNeulandMultiplicityCalorimetricPar;
   }
   static void *newArray_R3BNeulandMultiplicityCalorimetricPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityCalorimetricPar[nElements] : new ::R3BNeulandMultiplicityCalorimetricPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityCalorimetricPar(void *p) {
      delete ((::R3BNeulandMultiplicityCalorimetricPar*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityCalorimetricPar(void *p) {
      delete [] ((::R3BNeulandMultiplicityCalorimetricPar*)p);
   }
   static void destruct_R3BNeulandMultiplicityCalorimetricPar(void *p) {
      typedef ::R3BNeulandMultiplicityCalorimetricPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityCalorimetricPar

//______________________________________________________________________________
void R3BNeulandMultiplicityCalorimetric::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityCalorimetric.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityCalorimetric::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityCalorimetric::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityCalorimetric(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityCalorimetric : new ::R3BNeulandMultiplicityCalorimetric;
   }
   static void *newArray_R3BNeulandMultiplicityCalorimetric(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityCalorimetric[nElements] : new ::R3BNeulandMultiplicityCalorimetric[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityCalorimetric(void *p) {
      delete ((::R3BNeulandMultiplicityCalorimetric*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityCalorimetric(void *p) {
      delete [] ((::R3BNeulandMultiplicityCalorimetric*)p);
   }
   static void destruct_R3BNeulandMultiplicityCalorimetric(void *p) {
      typedef ::R3BNeulandMultiplicityCalorimetric current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityCalorimetric

//______________________________________________________________________________
void R3BNeulandMultiplicityCalorimetricTrain::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityCalorimetricTrain.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityCalorimetricTrain::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityCalorimetricTrain::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityCalorimetricTrain(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityCalorimetricTrain : new ::R3BNeulandMultiplicityCalorimetricTrain;
   }
   static void *newArray_R3BNeulandMultiplicityCalorimetricTrain(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityCalorimetricTrain[nElements] : new ::R3BNeulandMultiplicityCalorimetricTrain[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityCalorimetricTrain(void *p) {
      delete ((::R3BNeulandMultiplicityCalorimetricTrain*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityCalorimetricTrain(void *p) {
      delete [] ((::R3BNeulandMultiplicityCalorimetricTrain*)p);
   }
   static void destruct_R3BNeulandMultiplicityCalorimetricTrain(void *p) {
      typedef ::R3BNeulandMultiplicityCalorimetricTrain current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityCalorimetricTrain

//______________________________________________________________________________
void R3BNeulandMultiplicityCheat::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityCheat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityCheat::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityCheat::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicityCheat(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicityCheat : new ::R3BNeulandMultiplicityCheat;
   }
   static void *newArray_R3BNeulandMultiplicityCheat(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicityCheat[nElements] : new ::R3BNeulandMultiplicityCheat[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityCheat(void *p) {
      delete ((::R3BNeulandMultiplicityCheat*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityCheat(void *p) {
      delete [] ((::R3BNeulandMultiplicityCheat*)p);
   }
   static void destruct_R3BNeulandMultiplicityCheat(void *p) {
      typedef ::R3BNeulandMultiplicityCheat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityCheat

//______________________________________________________________________________
void R3BNeulandMultiplicityFixed::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicityFixed.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicityFixed::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicityFixed::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicityFixed(void *p) {
      delete ((::R3BNeulandMultiplicityFixed*)p);
   }
   static void deleteArray_R3BNeulandMultiplicityFixed(void *p) {
      delete [] ((::R3BNeulandMultiplicityFixed*)p);
   }
   static void destruct_R3BNeulandMultiplicityFixed(void *p) {
      typedef ::R3BNeulandMultiplicityFixed current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicityFixed

//______________________________________________________________________________
void R3BNeulandNeutronsCheat::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandNeutronsCheat.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandNeutronsCheat::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandNeutronsCheat::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandNeutronsCheat(void *p) {
      return  p ? new(p) ::R3BNeulandNeutronsCheat : new ::R3BNeulandNeutronsCheat;
   }
   static void *newArray_R3BNeulandNeutronsCheat(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandNeutronsCheat[nElements] : new ::R3BNeulandNeutronsCheat[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandNeutronsCheat(void *p) {
      delete ((::R3BNeulandNeutronsCheat*)p);
   }
   static void deleteArray_R3BNeulandNeutronsCheat(void *p) {
      delete [] ((::R3BNeulandNeutronsCheat*)p);
   }
   static void destruct_R3BNeulandNeutronsCheat(void *p) {
      typedef ::R3BNeulandNeutronsCheat current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandNeutronsCheat

//______________________________________________________________________________
void R3BNeulandNeutronsRValue::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandNeutronsRValue.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandNeutronsRValue::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandNeutronsRValue::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BNeulandNeutronsRValue(void *p) {
      delete ((::R3BNeulandNeutronsRValue*)p);
   }
   static void deleteArray_R3BNeulandNeutronsRValue(void *p) {
      delete [] ((::R3BNeulandNeutronsRValue*)p);
   }
   static void destruct_R3BNeulandNeutronsRValue(void *p) {
      typedef ::R3BNeulandNeutronsRValue current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandNeutronsRValue

//______________________________________________________________________________
void R3BNeulandReconstructionContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandReconstructionContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandReconstructionContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandReconstructionContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandReconstructionContFact(void *p) {
      return  p ? new(p) ::R3BNeulandReconstructionContFact : new ::R3BNeulandReconstructionContFact;
   }
   static void *newArray_R3BNeulandReconstructionContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandReconstructionContFact[nElements] : new ::R3BNeulandReconstructionContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandReconstructionContFact(void *p) {
      delete ((::R3BNeulandReconstructionContFact*)p);
   }
   static void deleteArray_R3BNeulandReconstructionContFact(void *p) {
      delete [] ((::R3BNeulandReconstructionContFact*)p);
   }
   static void destruct_R3BNeulandReconstructionContFact(void *p) {
      typedef ::R3BNeulandReconstructionContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandReconstructionContFact

//______________________________________________________________________________
void R3BNeulandNeutronReconstructionMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandNeutronReconstructionMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandNeutronReconstructionMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandNeutronReconstructionMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandNeutronReconstructionMon(void *p) {
      return  p ? new(p) ::R3BNeulandNeutronReconstructionMon : new ::R3BNeulandNeutronReconstructionMon;
   }
   static void *newArray_R3BNeulandNeutronReconstructionMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandNeutronReconstructionMon[nElements] : new ::R3BNeulandNeutronReconstructionMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandNeutronReconstructionMon(void *p) {
      delete ((::R3BNeulandNeutronReconstructionMon*)p);
   }
   static void deleteArray_R3BNeulandNeutronReconstructionMon(void *p) {
      delete [] ((::R3BNeulandNeutronReconstructionMon*)p);
   }
   static void destruct_R3BNeulandNeutronReconstructionMon(void *p) {
      typedef ::R3BNeulandNeutronReconstructionMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandNeutronReconstructionMon

//______________________________________________________________________________
void R3BNeulandNeutronReconstructionStatistics::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandNeutronReconstructionStatistics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandNeutronReconstructionStatistics::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandNeutronReconstructionStatistics::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandNeutronReconstructionStatistics(void *p) {
      return  p ? new(p) ::R3BNeulandNeutronReconstructionStatistics : new ::R3BNeulandNeutronReconstructionStatistics;
   }
   static void *newArray_R3BNeulandNeutronReconstructionStatistics(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandNeutronReconstructionStatistics[nElements] : new ::R3BNeulandNeutronReconstructionStatistics[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandNeutronReconstructionStatistics(void *p) {
      delete ((::R3BNeulandNeutronReconstructionStatistics*)p);
   }
   static void deleteArray_R3BNeulandNeutronReconstructionStatistics(void *p) {
      delete [] ((::R3BNeulandNeutronReconstructionStatistics*)p);
   }
   static void destruct_R3BNeulandNeutronReconstructionStatistics(void *p) {
      typedef ::R3BNeulandNeutronReconstructionStatistics current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandNeutronReconstructionStatistics

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandReconstructionDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/reconstruction",
"/work/R3BRoot/neuland/reconstruction/multiplicity",
"/work/R3BRoot/neuland/reconstruction/neutrons",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/reconstruction/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandReconstructionDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$R3BNeulandMultiplicityBayesPar.h")))  R3BNeulandMultiplicityBayesPar;
class R3BNeulandMultiplicityBayes;
class R3BNeulandMultiplicityBayesTrain;
class __attribute__((annotate("$clingAutoload$R3BNeulandMultiplicityCalorimetricPar.h")))  R3BNeulandMultiplicityCalorimetricPar;
class R3BNeulandMultiplicityCalorimetric;
class R3BNeulandMultiplicityCalorimetricTrain;
class R3BNeulandMultiplicityCheat;
class R3BNeulandMultiplicityFixed;
class R3BNeulandNeutronsCheat;
class R3BNeulandNeutronsRValue;
class R3BNeulandReconstructionContFact;
class R3BNeulandNeutronReconstructionMon;
class R3BNeulandNeutronReconstructionStatistics;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandReconstructionDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYBAYES_H
#define R3BROOT_R3BNEULANDMULTIPLICITYBAYES_H

#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandMultiplicity.h"
#include "R3BNeulandMultiplicityBayesPar.h"
#include "TCAConnector.h"

class R3BNeulandMultiplicityBayes : public FairTask
{
  public:
    R3BNeulandMultiplicityBayes(TString input = "NeulandClusters", TString output = "NeulandMultiplicity");
    ~R3BNeulandMultiplicityBayes() override;

    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;
    void SetParContainers() override;

  private:
    TCAInputConnector<R3BNeulandCluster> fClusters;
    R3BNeulandMultiplicity* fMultiplicity;
    TString fOutputName;

    R3BNeulandMultiplicityBayesPar* fPar;

    ClassDefOverride(R3BNeulandMultiplicityBayes, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYBAYES_H
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

#ifndef R3BNEULANDMULTIPLICITYBAYESPAR_H
#define R3BNEULANDMULTIPLICITYBAYESPAR_H

#include "FairParGenericSet.h"
#include "FairParamList.h"
#include "R3BNeulandMultiplicity.h"
#include "TArrayI.h"
#include <array>

class R3BNeulandMultiplicityBayesPar : public FairParGenericSet
{
  public:
    R3BNeulandMultiplicityBayesPar(const char* name = "R3BNeulandMultiplicityBayesPar",
                                   const char* title = "Neuland Multiplicity Bayes Parameters",
                                   const char* context = "TestDefaultContext");
    ~R3BNeulandMultiplicityBayesPar() override;

    void clear() override;
    void putParams(FairParamList*) override;
    Bool_t getParams(FairParamList*) override;
    // void printParams() override;

    void Fill(int n, int nHits, int nClusters, int Edep);
    bool CheckIfProperlyLoaded() const;
    R3BNeulandMultiplicity::MultiplicityProbabilities GetProbabilities(int nHits, int nClusters, int Edep) const;

  private:
    std::array<TArrayI, NEULAND_MAX_MULT> fHits;
    std::array<TArrayI, NEULAND_MAX_MULT> fClusters;
    std::array<TArrayI, NEULAND_MAX_MULT> fEdep;
    mutable bool fIsProperlyLoaded;

    R3BNeulandMultiplicityBayesPar(const R3BNeulandMultiplicityBayesPar&);
    R3BNeulandMultiplicityBayesPar& operator=(const R3BNeulandMultiplicityBayesPar&);

    ClassDefOverride(R3BNeulandMultiplicityBayesPar, 1)
};

#endif // R3BNEULANDMULTIPLICITYBAYESPAR_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYBAYESTRAIN_H
#define R3BROOT_R3BNEULANDMULTIPLICITYBAYESTRAIN_H

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandMultiplicityBayesPar.h"
#include "TCAConnector.h"

class R3BNeulandMultiplicityBayesTrain : public FairTask
{
  public:
    R3BNeulandMultiplicityBayesTrain(TString clusters = "NeulandClusters", TString tracks = "NeulandPrimaryTracks");
    ~R3BNeulandMultiplicityBayesTrain() override;

    void Exec(Option_t*) override;
    void FinishTask() override;

  protected:
    InitStatus Init() override;
    void SetParContainers() override;

  private:
    TCAInputConnector<R3BNeulandCluster> fClusters;
    TCAInputConnector<R3BMCTrack> fTracks;

    R3BNeulandMultiplicityBayesPar* fPar;

    ClassDefOverride(R3BNeulandMultiplicityBayesTrain, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYBAYESTRAIN_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRIC_H
#define R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRIC_H

#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandMultiplicity.h"
#include "R3BNeulandMultiplicityCalorimetricPar.h"
#include "TCAConnector.h"

class R3BNeulandMultiplicityCalorimetric : public FairTask
{
  public:
    R3BNeulandMultiplicityCalorimetric(TString input = "NeulandClusters", TString output = "NeulandMultiplicity");
    ~R3BNeulandMultiplicityCalorimetric() override;

    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;

  private:
    TCAInputConnector<R3BNeulandCluster> fClusters;
    R3BNeulandMultiplicity* fMultiplicity;
    TString fOutputName;

    R3BNeulandMultiplicityCalorimetricPar* fPar;

    ClassDefOverride(R3BNeulandMultiplicityCalorimetric, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRIC_H
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

#ifndef R3BNEULANDMULTIPLICITYCALORIMETRICPAR_H
#define R3BNEULANDMULTIPLICITYCALORIMETRICPAR_H

#include "FairParGenericSet.h"
#include "FairParamList.h"
#include "TCutG.h"
#include "TMap.h"
#include <map>

/**
 * NeuLAND number of clusters / energy - neutron multiplicity parameter storage
 * @author Jan Mayer
 *
 * Stores the cuts for the 2D Calibr method, can be asked about the neutron multiplicity
 */

class R3BNeulandMultiplicityCalorimetricPar : public FairParGenericSet
{
  public:
    // needs to be public?
    // Note: There MUST NOT be a //! after the variable
    TMap* fNeutronCuts;

    R3BNeulandMultiplicityCalorimetricPar(const char* name = "R3BNeulandMultiplicityCalorimetricPar",
                                          const char* title = "Neuland Neutron 2D Parameters",
                                          const char* context = "TestDefaultContext");
    ~R3BNeulandMultiplicityCalorimetricPar() override;

    void clear() override;
    void putParams(FairParamList*) override;
    Bool_t getParams(FairParamList*) override;
    void printParams() override;

    std::map<UInt_t, TCutG*> GetNeutronCuts() const;
    TCutG* GetNeutronCut(const Int_t n) const;
    void SetNeutronCuts(const std::map<UInt_t, TCutG*>& cuts);
    UInt_t GetNeutronMultiplicity(const Double_t energy, const Double_t nClusters) const;

  private:
    R3BNeulandMultiplicityCalorimetricPar(const R3BNeulandMultiplicityCalorimetricPar&);
    R3BNeulandMultiplicityCalorimetricPar& operator=(const R3BNeulandMultiplicityCalorimetricPar&);

    ClassDefOverride(R3BNeulandMultiplicityCalorimetricPar, 2)
};

#endif // R3BNEULANDMULTIPLICITYCALORIMETRICPAR_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRICTRAIN_H
#define R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRICTRAIN_H

#include "FairTask.h"
#include "R3BMCTrack.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandMultiplicityCalorimetricPar.h"
#include "TCAConnector.h"
#include "TCutG.h"
#include "TH2D.h"

class R3BNeulandMultiplicityCalorimetricTrain : public FairTask
{
  public:
    R3BNeulandMultiplicityCalorimetricTrain(TString clusters = "NeulandClusters",
                                            TString tracks = "NeulandPrimaryTracks");
    ~R3BNeulandMultiplicityCalorimetricTrain() override;

    void Exec(Option_t*) override;
    void FinishTask() override;
    void Print(Option_t* = "") const override;

    void SetEdepOpt(double init, double step, double low, double high) { fEdepOpt = { init, step, low, high }; }
    void SetNclusterOpt(double init, double step, double low, double high) { fNclusterOpt = { init, step, low, high }; }
    void SetWeight(double w) { fWeight = w; }

  protected:
    InitStatus Init() override;

  private:
    TCutG* GetCut(unsigned int nNeutrons, double edep, double ncluster);
    double WastedEfficiency(const double* d);
    void Optimize();

    TH2D* GetOrBuildHist(unsigned int i);

    TCAInputConnector<R3BNeulandCluster> fClusters;
    TCAInputConnector<R3BMCTrack> fTracks;

    R3BNeulandMultiplicityCalorimetricPar* fPar;

    std::array<double, 4> fEdepOpt;
    std::array<double, 4> fNclusterOpt;
    double fWeight;

    std::map<unsigned int, TH2D*> fHists;
    std::map<unsigned int, TCutG*> fCuts;

    ClassDefOverride(R3BNeulandMultiplicityCalorimetricTrain, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYCALORIMETRICTRAIN_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYCHEAT_H
#define R3BROOT_R3BNEULANDMULTIPLICITYCHEAT_H

#include "FairTask.h"
#include "R3BNeulandHit.h"
#include "R3BNeulandMultiplicity.h"
#include "TCAConnector.h"

class R3BNeulandMultiplicityCheat : public FairTask
{
  public:
    R3BNeulandMultiplicityCheat(TString input = "NeulandPrimaryHits", TString output = "NeulandMultiplicity");
    ~R3BNeulandMultiplicityCheat() override;

    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;

  private:
    TCAInputConnector<R3BNeulandHit> fPrimaryHits;
    R3BNeulandMultiplicity* fMultiplicity;
    TString fOutputName;

    ClassDefOverride(R3BNeulandMultiplicityCheat, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYCHEAT_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITYFIXED_H
#define R3BROOT_R3BNEULANDMULTIPLICITYFIXED_H

#include "FairTask.h"
#include "R3BNeulandMultiplicity.h"

class R3BNeulandMultiplicityFixed : public FairTask
{
  public:
    R3BNeulandMultiplicityFixed(const int mult, TString output = "NeulandMultiplicity");
    ~R3BNeulandMultiplicityFixed() override;

    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;

  private:
    const int fMult;
    R3BNeulandMultiplicity* fMultiplicity;
    TString fOutputName;

    ClassDefOverride(R3BNeulandMultiplicityFixed, 0)
};

#endif // R3BROOT_R3BNEULANDMULTIPLICITYFIXED_H
#ifndef R3BROOT_R3BNEULANDNEUTRONSCHEAT_H
#define R3BROOT_R3BNEULANDNEUTRONSCHEAT_H

#include "FairTask.h"
#include "R3BNeulandHit.h"
#include "R3BNeulandMultiplicity.h"
#include "R3BNeulandNeutron.h"
#include "TCAConnector.h"

class R3BNeulandNeutronsCheat : public FairTask
{
  public:
    R3BNeulandNeutronsCheat(TString inputMult = "NeulandMultiplicity",
                            TString inputHit = "NeulandPrimaryHits",
                            TString output = "NeulandNeutrons");
    ~R3BNeulandNeutronsCheat() override = default;
    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;

  private:
    const TString fInputMultName;
    const R3BNeulandMultiplicity* fMultiplicity;     //!
    TCAInputConnector<R3BNeulandHit> fHits;          //!
    TCAOutputConnector<R3BNeulandNeutron> fNeutrons; //!

    ClassDefOverride(R3BNeulandNeutronsCheat, 0)
};

#endif // R3BROOT_R3BNEULANDNEUTRONSCHEAT_H
#ifndef R3BROOT_R3BNEULANDNEUTRONSRVALUE_H
#define R3BROOT_R3BNEULANDNEUTRONSRVALUE_H

#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandMultiplicity.h"
#include "R3BNeulandNeutron.h"
#include "TCAConnector.h"

class R3BNeulandNeutronsRValue : public FairTask
{
  public:
    R3BNeulandNeutronsRValue(double EkinRefMeV,
                             TString inputMult = "NeulandMultiplicity",
                             TString inputCluster = "NeulandClusters",
                             TString output = "NeulandNeutrons");
    ~R3BNeulandNeutronsRValue() override = default;
    void Exec(Option_t*) override;

  protected:
    InitStatus Init() override;

  private:
    const double fEkinRefMeV;
    const TString fInputMultName;
    const R3BNeulandMultiplicity* fMultiplicity;     //!
    TCAInputConnector<R3BNeulandCluster> fClusters;  //!
    TCAOutputConnector<R3BNeulandNeutron> fNeutrons; //!

    void SortClustersByRValue(std::vector<R3BNeulandCluster*>&) const;
    void PrioritizeTimeWiseFirstCluster(std::vector<R3BNeulandCluster*>&) const;
    void FilterClustersByEnergyDeposit(std::vector<R3BNeulandCluster*>&) const;
    void FilterClustersByKineticEnergy(std::vector<R3BNeulandCluster*>&) const;
    void FilterClustersByElasticScattering(std::vector<R3BNeulandCluster*>&) const;

    ClassDefOverride(R3BNeulandNeutronsRValue, 0)
};

#endif // R3BROOT_R3BNEULANDNEUTRONSRVALUE_H
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

#ifndef R3BNEULANDRECONSTRUCTIONCONTFACT_H
#define R3BNEULANDRECONSTRUCTIONCONTFACT_H

#include "FairContFact.h"

class FairContainer;

/**
 * NeuLAND reconstruction parameter container factory
 * @author Jan Mayer
 *
 * Lots of super brittle boilerplate code that should really not be necessary
 * TODO: Make FairRoot better so all of this can be deleted.
 */

class R3BNeulandReconstructionContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BNeulandReconstructionContFact();
    FairParSet* createContainer(FairContainer*) override;
    ClassDefOverride(R3BNeulandReconstructionContFact, 0)
};

#endif // R3BNEULANDRECONSTRUCTIONCONTFACT_H
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

#ifndef R3BNEULANDNEUTRONRECONSTRUCTIONMON_H
#define R3BNEULANDNEUTRONRECONSTRUCTIONMON_H

/** Neuland Neutron Reconstruction Evaluation
 * @author Jan Mayer
 *
 * Work in progress
 */

#include "FairTask.h"
#include <map>

class TClonesArray;
class TH1D;
class TH2D;

class R3BNeulandNeutronReconstructionMon : public FairTask
{
  public:
    R3BNeulandNeutronReconstructionMon(const TString input = "NeulandNeutrons",
                                       const TString output = "NeulandNeutronReconstructionMon");
    ~R3BNeulandNeutronReconstructionMon();

  private:
    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandNeutronReconstructionMon(const R3BNeulandNeutronReconstructionMon&);            // copy constructor
    R3BNeulandNeutronReconstructionMon(R3BNeulandNeutronReconstructionMon&&);                 // move constructor
    R3BNeulandNeutronReconstructionMon& operator=(const R3BNeulandNeutronReconstructionMon&); // copy assignment
    R3BNeulandNeutronReconstructionMon& operator=(R3BNeulandNeutronReconstructionMon&&);      // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;

  private:
    TString fInput;
    TString fOutput;

    TH1D* fhCountN;
    TH1D* fhCountNdiff;
    TH1D* fhScore;
    TH1D* fhEdiff;
    TH1D* fhErel;
    TH1D* fhErelMC;
    TH2D* fhErelVSnNreco;
    TH2D* fhErelVSnNrecoNPNIPs;
    TH2D* fhNreacNreco;
    std::map<Int_t, TH1D*> fhmErelnReco;

    TClonesArray* fPrimaryNeutronInteractionPoints;
    TClonesArray* fReconstructedNeutrons;
    TClonesArray* fMCTracks;

  public:
    ClassDefOverride(R3BNeulandNeutronReconstructionMon, 0);
};

#endif // R3BNEULANDNEUTRONRECONSTRUCTIONMON_H
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

#ifndef R3BROOT_R3BNEULANDNEUTRONRECONSTRUCTIONSTATISTICS_H
#define R3BROOT_R3BNEULANDNEUTRONRECONSTRUCTIONSTATISTICS_H

#include "FairTask.h"
#include "R3BNeulandCluster.h"
#include "R3BNeulandNeutron.h"
#include "TCAConnector.h"
#include "TH1D.h"
#include <iostream>

class R3BNeulandNeutronReconstructionStatistics : public FairTask
{
  public:
    R3BNeulandNeutronReconstructionStatistics(const TString primary = "NeulandNeutronClusters",
                                              const TString secondary = "NeulandPrimaryClusters",
                                              const TString predicted = "NeulandSecondaryClusters",
                                              std::ostream& out = std::cout);
    ~R3BNeulandNeutronReconstructionStatistics() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandNeutronReconstructionStatistics(const R3BNeulandNeutronReconstructionStatistics&) =
        delete;                                                                                      // copy constructor
    R3BNeulandNeutronReconstructionStatistics(R3BNeulandNeutronReconstructionStatistics&&) = delete; // move constructor
    R3BNeulandNeutronReconstructionStatistics& operator=(const R3BNeulandNeutronReconstructionStatistics&) =
        delete; // copy assignment
    R3BNeulandNeutronReconstructionStatistics& operator=(R3BNeulandNeutronReconstructionStatistics&&) =
        delete; // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;

  private:
    TCAInputConnector<R3BNeulandCluster> fPrimaryClusters;
    TCAInputConnector<R3BNeulandCluster> fSecondaryClusters;
    TCAInputConnector<R3BNeulandNeutron> fPredictedNeutrons;
    TString fPredictedName;
    TH1D* fhTP;
    TH1D* fhFP;
    TH1D* fhFN;
    TH1D* fhTN;
    TH1D* fhF1;
    int fTP;
    int fFP;
    int fFN;
    int fTN;
    std::ostream& fOut;
    std::vector<int> fMult;

  public:
    ClassDefOverride(R3BNeulandNeutronReconstructionStatistics, 0);
};

#endif // R3BROOT_R3BNEULANDNEUTRONRECONSTRUCTIONSTATISTICS_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BNeulandMultiplicityBayes", payloadCode, "@",
"R3BNeulandMultiplicityBayesPar", payloadCode, "@",
"R3BNeulandMultiplicityBayesTrain", payloadCode, "@",
"R3BNeulandMultiplicityCalorimetric", payloadCode, "@",
"R3BNeulandMultiplicityCalorimetricPar", payloadCode, "@",
"R3BNeulandMultiplicityCalorimetricTrain", payloadCode, "@",
"R3BNeulandMultiplicityCheat", payloadCode, "@",
"R3BNeulandMultiplicityFixed", payloadCode, "@",
"R3BNeulandNeutronReconstructionMon", payloadCode, "@",
"R3BNeulandNeutronReconstructionStatistics", payloadCode, "@",
"R3BNeulandNeutronsCheat", payloadCode, "@",
"R3BNeulandNeutronsRValue", payloadCode, "@",
"R3BNeulandReconstructionContFact", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandReconstructionDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandReconstructionDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandReconstructionDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandReconstructionDict() {
  TriggerDictionaryInitialization_G__R3BNeulandReconstructionDict_Impl();
}
