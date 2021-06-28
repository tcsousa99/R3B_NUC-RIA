// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIdigitizingdIG__R3BNeulandDigitizingDict

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
#include "DigitizingEngine.h"
#include "DigitizingTacQuila.h"
#include "DigitizingTamex.h"
#include "R3BNeulandHitMon.h"
#include "R3BNeulandDigitizer.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *NeulandcLcLDigitizingcLcLPMTHit_Dictionary();
   static void NeulandcLcLDigitizingcLcLPMTHit_TClassManip(TClass*);
   static void *new_NeulandcLcLDigitizingcLcLPMTHit(void *p = 0);
   static void *newArray_NeulandcLcLDigitizingcLcLPMTHit(Long_t size, void *p);
   static void delete_NeulandcLcLDigitizingcLcLPMTHit(void *p);
   static void deleteArray_NeulandcLcLDigitizingcLcLPMTHit(void *p);
   static void destruct_NeulandcLcLDigitizingcLcLPMTHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Digitizing::PMTHit*)
   {
      ::Neuland::Digitizing::PMTHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Digitizing::PMTHit));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Digitizing::PMTHit", "", 31,
                  typeid(::Neuland::Digitizing::PMTHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingcLcLPMTHit_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Digitizing::PMTHit) );
      instance.SetNew(&new_NeulandcLcLDigitizingcLcLPMTHit);
      instance.SetNewArray(&newArray_NeulandcLcLDigitizingcLcLPMTHit);
      instance.SetDelete(&delete_NeulandcLcLDigitizingcLcLPMTHit);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingcLcLPMTHit);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingcLcLPMTHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Digitizing::PMTHit*)
   {
      return GenerateInitInstanceLocal((::Neuland::Digitizing::PMTHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Digitizing::PMTHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingcLcLPMTHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Digitizing::PMTHit*)0x0)->GetClass();
      NeulandcLcLDigitizingcLcLPMTHit_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingcLcLPMTHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingcLcLChannel_Dictionary();
   static void NeulandcLcLDigitizingcLcLChannel_TClassManip(TClass*);
   static void delete_NeulandcLcLDigitizingcLcLChannel(void *p);
   static void deleteArray_NeulandcLcLDigitizingcLcLChannel(void *p);
   static void destruct_NeulandcLcLDigitizingcLcLChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Digitizing::Channel*)
   {
      ::Neuland::Digitizing::Channel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Digitizing::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Digitizing::Channel", "", 42,
                  typeid(::Neuland::Digitizing::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingcLcLChannel_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Digitizing::Channel) );
      instance.SetDelete(&delete_NeulandcLcLDigitizingcLcLChannel);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingcLcLChannel);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingcLcLChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Digitizing::Channel*)
   {
      return GenerateInitInstanceLocal((::Neuland::Digitizing::Channel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Digitizing::Channel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingcLcLChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Digitizing::Channel*)0x0)->GetClass();
      NeulandcLcLDigitizingcLcLChannel_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingcLcLChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingcLcLPaddle_Dictionary();
   static void NeulandcLcLDigitizingcLcLPaddle_TClassManip(TClass*);
   static void delete_NeulandcLcLDigitizingcLcLPaddle(void *p);
   static void deleteArray_NeulandcLcLDigitizingcLcLPaddle(void *p);
   static void destruct_NeulandcLcLDigitizingcLcLPaddle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Digitizing::Paddle*)
   {
      ::Neuland::Digitizing::Paddle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Digitizing::Paddle));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Digitizing::Paddle", "", 56,
                  typeid(::Neuland::Digitizing::Paddle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingcLcLPaddle_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Digitizing::Paddle) );
      instance.SetDelete(&delete_NeulandcLcLDigitizingcLcLPaddle);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingcLcLPaddle);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingcLcLPaddle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Digitizing::Paddle*)
   {
      return GenerateInitInstanceLocal((::Neuland::Digitizing::Paddle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Digitizing::Paddle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingcLcLPaddle_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Digitizing::Paddle*)0x0)->GetClass();
      NeulandcLcLDigitizingcLcLPaddle_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingcLcLPaddle_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingEngine_Dictionary();
   static void NeulandcLcLDigitizingEngine_TClassManip(TClass*);
   static void delete_NeulandcLcLDigitizingEngine(void *p);
   static void deleteArray_NeulandcLcLDigitizingEngine(void *p);
   static void destruct_NeulandcLcLDigitizingEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::DigitizingEngine*)
   {
      ::Neuland::DigitizingEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::DigitizingEngine));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::DigitizingEngine", "", 84,
                  typeid(::Neuland::DigitizingEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingEngine_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::DigitizingEngine) );
      instance.SetDelete(&delete_NeulandcLcLDigitizingEngine);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingEngine);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::DigitizingEngine*)
   {
      return GenerateInitInstanceLocal((::Neuland::DigitizingEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::DigitizingEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingEngine_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::DigitizingEngine*)0x0)->GetClass();
      NeulandcLcLDigitizingEngine_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingEngine_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLTacQuilacLcLChannel_Dictionary();
   static void NeulandcLcLTacQuilacLcLChannel_TClassManip(TClass*);
   static void delete_NeulandcLcLTacQuilacLcLChannel(void *p);
   static void deleteArray_NeulandcLcLTacQuilacLcLChannel(void *p);
   static void destruct_NeulandcLcLTacQuilacLcLChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::TacQuila::Channel*)
   {
      ::Neuland::TacQuila::Channel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::TacQuila::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::TacQuila::Channel", "", 138,
                  typeid(::Neuland::TacQuila::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLTacQuilacLcLChannel_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::TacQuila::Channel) );
      instance.SetDelete(&delete_NeulandcLcLTacQuilacLcLChannel);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLTacQuilacLcLChannel);
      instance.SetDestructor(&destruct_NeulandcLcLTacQuilacLcLChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::TacQuila::Channel*)
   {
      return GenerateInitInstanceLocal((::Neuland::TacQuila::Channel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::TacQuila::Channel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLTacQuilacLcLChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::TacQuila::Channel*)0x0)->GetClass();
      NeulandcLcLTacQuilacLcLChannel_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLTacQuilacLcLChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingTacQuila_Dictionary();
   static void NeulandcLcLDigitizingTacQuila_TClassManip(TClass*);
   static void *new_NeulandcLcLDigitizingTacQuila(void *p = 0);
   static void *newArray_NeulandcLcLDigitizingTacQuila(Long_t size, void *p);
   static void delete_NeulandcLcLDigitizingTacQuila(void *p);
   static void deleteArray_NeulandcLcLDigitizingTacQuila(void *p);
   static void destruct_NeulandcLcLDigitizingTacQuila(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::DigitizingTacQuila*)
   {
      ::Neuland::DigitizingTacQuila *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::DigitizingTacQuila));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::DigitizingTacQuila", "", 169,
                  typeid(::Neuland::DigitizingTacQuila), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingTacQuila_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::DigitizingTacQuila) );
      instance.SetNew(&new_NeulandcLcLDigitizingTacQuila);
      instance.SetNewArray(&newArray_NeulandcLcLDigitizingTacQuila);
      instance.SetDelete(&delete_NeulandcLcLDigitizingTacQuila);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingTacQuila);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingTacQuila);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::DigitizingTacQuila*)
   {
      return GenerateInitInstanceLocal((::Neuland::DigitizingTacQuila*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::DigitizingTacQuila*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingTacQuila_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::DigitizingTacQuila*)0x0)->GetClass();
      NeulandcLcLDigitizingTacQuila_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingTacQuila_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLTamexcLcLChannel_Dictionary();
   static void NeulandcLcLTamexcLcLChannel_TClassManip(TClass*);
   static void *new_NeulandcLcLTamexcLcLChannel(void *p = 0);
   static void *newArray_NeulandcLcLTamexcLcLChannel(Long_t size, void *p);
   static void delete_NeulandcLcLTamexcLcLChannel(void *p);
   static void deleteArray_NeulandcLcLTamexcLcLChannel(void *p);
   static void destruct_NeulandcLcLTamexcLcLChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::Tamex::Channel*)
   {
      ::Neuland::Tamex::Channel *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::Tamex::Channel));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::Tamex::Channel", "", 215,
                  typeid(::Neuland::Tamex::Channel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLTamexcLcLChannel_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::Tamex::Channel) );
      instance.SetNew(&new_NeulandcLcLTamexcLcLChannel);
      instance.SetNewArray(&newArray_NeulandcLcLTamexcLcLChannel);
      instance.SetDelete(&delete_NeulandcLcLTamexcLcLChannel);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLTamexcLcLChannel);
      instance.SetDestructor(&destruct_NeulandcLcLTamexcLcLChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::Tamex::Channel*)
   {
      return GenerateInitInstanceLocal((::Neuland::Tamex::Channel*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::Tamex::Channel*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLTamexcLcLChannel_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::Tamex::Channel*)0x0)->GetClass();
      NeulandcLcLTamexcLcLChannel_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLTamexcLcLChannel_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NeulandcLcLDigitizingTamex_Dictionary();
   static void NeulandcLcLDigitizingTamex_TClassManip(TClass*);
   static void *new_NeulandcLcLDigitizingTamex(void *p = 0);
   static void *newArray_NeulandcLcLDigitizingTamex(Long_t size, void *p);
   static void delete_NeulandcLcLDigitizingTamex(void *p);
   static void deleteArray_NeulandcLcLDigitizingTamex(void *p);
   static void destruct_NeulandcLcLDigitizingTamex(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Neuland::DigitizingTamex*)
   {
      ::Neuland::DigitizingTamex *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Neuland::DigitizingTamex));
      static ::ROOT::TGenericClassInfo 
         instance("Neuland::DigitizingTamex", "", 229,
                  typeid(::Neuland::DigitizingTamex), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NeulandcLcLDigitizingTamex_Dictionary, isa_proxy, 4,
                  sizeof(::Neuland::DigitizingTamex) );
      instance.SetNew(&new_NeulandcLcLDigitizingTamex);
      instance.SetNewArray(&newArray_NeulandcLcLDigitizingTamex);
      instance.SetDelete(&delete_NeulandcLcLDigitizingTamex);
      instance.SetDeleteArray(&deleteArray_NeulandcLcLDigitizingTamex);
      instance.SetDestructor(&destruct_NeulandcLcLDigitizingTamex);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Neuland::DigitizingTamex*)
   {
      return GenerateInitInstanceLocal((::Neuland::DigitizingTamex*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Neuland::DigitizingTamex*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NeulandcLcLDigitizingTamex_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Neuland::DigitizingTamex*)0x0)->GetClass();
      NeulandcLcLDigitizingTamex_TClassManip(theClass);
   return theClass;
   }

   static void NeulandcLcLDigitizingTamex_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandHitMon(void *p = 0);
   static void *newArray_R3BNeulandHitMon(Long_t size, void *p);
   static void delete_R3BNeulandHitMon(void *p);
   static void deleteArray_R3BNeulandHitMon(void *p);
   static void destruct_R3BNeulandHitMon(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandHitMon*)
   {
      ::R3BNeulandHitMon *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandHitMon >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandHitMon", ::R3BNeulandHitMon::Class_Version(), "", 273,
                  typeid(::R3BNeulandHitMon), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandHitMon::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandHitMon) );
      instance.SetNew(&new_R3BNeulandHitMon);
      instance.SetNewArray(&newArray_R3BNeulandHitMon);
      instance.SetDelete(&delete_R3BNeulandHitMon);
      instance.SetDeleteArray(&deleteArray_R3BNeulandHitMon);
      instance.SetDestructor(&destruct_R3BNeulandHitMon);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandHitMon*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandHitMon*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandHitMon*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandDigitizer(void *p = 0);
   static void *newArray_R3BNeulandDigitizer(Long_t size, void *p);
   static void delete_R3BNeulandDigitizer(void *p);
   static void deleteArray_R3BNeulandDigitizer(void *p);
   static void destruct_R3BNeulandDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandDigitizer*)
   {
      ::R3BNeulandDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandDigitizer", ::R3BNeulandDigitizer::Class_Version(), "", 369,
                  typeid(::R3BNeulandDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandDigitizer) );
      instance.SetNew(&new_R3BNeulandDigitizer);
      instance.SetNewArray(&newArray_R3BNeulandDigitizer);
      instance.SetDelete(&delete_R3BNeulandDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BNeulandDigitizer);
      instance.SetDestructor(&destruct_R3BNeulandDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandHitMon::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandHitMon::Class_Name()
{
   return "R3BNeulandHitMon";
}

//______________________________________________________________________________
const char *R3BNeulandHitMon::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitMon*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandHitMon::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitMon*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandHitMon::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitMon*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandHitMon::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHitMon*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandDigitizer::Class_Name()
{
   return "R3BNeulandDigitizer";
}

//______________________________________________________________________________
const char *R3BNeulandDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLDigitizingcLcLPMTHit(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Digitizing::PMTHit : new ::Neuland::Digitizing::PMTHit;
   }
   static void *newArray_NeulandcLcLDigitizingcLcLPMTHit(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Digitizing::PMTHit[nElements] : new ::Neuland::Digitizing::PMTHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingcLcLPMTHit(void *p) {
      delete ((::Neuland::Digitizing::PMTHit*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingcLcLPMTHit(void *p) {
      delete [] ((::Neuland::Digitizing::PMTHit*)p);
   }
   static void destruct_NeulandcLcLDigitizingcLcLPMTHit(void *p) {
      typedef ::Neuland::Digitizing::PMTHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Digitizing::PMTHit

namespace ROOT {
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingcLcLChannel(void *p) {
      delete ((::Neuland::Digitizing::Channel*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingcLcLChannel(void *p) {
      delete [] ((::Neuland::Digitizing::Channel*)p);
   }
   static void destruct_NeulandcLcLDigitizingcLcLChannel(void *p) {
      typedef ::Neuland::Digitizing::Channel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Digitizing::Channel

namespace ROOT {
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingcLcLPaddle(void *p) {
      delete ((::Neuland::Digitizing::Paddle*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingcLcLPaddle(void *p) {
      delete [] ((::Neuland::Digitizing::Paddle*)p);
   }
   static void destruct_NeulandcLcLDigitizingcLcLPaddle(void *p) {
      typedef ::Neuland::Digitizing::Paddle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Digitizing::Paddle

namespace ROOT {
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingEngine(void *p) {
      delete ((::Neuland::DigitizingEngine*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingEngine(void *p) {
      delete [] ((::Neuland::DigitizingEngine*)p);
   }
   static void destruct_NeulandcLcLDigitizingEngine(void *p) {
      typedef ::Neuland::DigitizingEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::DigitizingEngine

namespace ROOT {
   // Wrapper around operator delete
   static void delete_NeulandcLcLTacQuilacLcLChannel(void *p) {
      delete ((::Neuland::TacQuila::Channel*)p);
   }
   static void deleteArray_NeulandcLcLTacQuilacLcLChannel(void *p) {
      delete [] ((::Neuland::TacQuila::Channel*)p);
   }
   static void destruct_NeulandcLcLTacQuilacLcLChannel(void *p) {
      typedef ::Neuland::TacQuila::Channel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::TacQuila::Channel

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLDigitizingTacQuila(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::DigitizingTacQuila : new ::Neuland::DigitizingTacQuila;
   }
   static void *newArray_NeulandcLcLDigitizingTacQuila(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::DigitizingTacQuila[nElements] : new ::Neuland::DigitizingTacQuila[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingTacQuila(void *p) {
      delete ((::Neuland::DigitizingTacQuila*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingTacQuila(void *p) {
      delete [] ((::Neuland::DigitizingTacQuila*)p);
   }
   static void destruct_NeulandcLcLDigitizingTacQuila(void *p) {
      typedef ::Neuland::DigitizingTacQuila current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::DigitizingTacQuila

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLTamexcLcLChannel(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Tamex::Channel : new ::Neuland::Tamex::Channel;
   }
   static void *newArray_NeulandcLcLTamexcLcLChannel(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::Tamex::Channel[nElements] : new ::Neuland::Tamex::Channel[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLTamexcLcLChannel(void *p) {
      delete ((::Neuland::Tamex::Channel*)p);
   }
   static void deleteArray_NeulandcLcLTamexcLcLChannel(void *p) {
      delete [] ((::Neuland::Tamex::Channel*)p);
   }
   static void destruct_NeulandcLcLTamexcLcLChannel(void *p) {
      typedef ::Neuland::Tamex::Channel current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::Tamex::Channel

namespace ROOT {
   // Wrappers around operator new
   static void *new_NeulandcLcLDigitizingTamex(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::DigitizingTamex : new ::Neuland::DigitizingTamex;
   }
   static void *newArray_NeulandcLcLDigitizingTamex(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) ::Neuland::DigitizingTamex[nElements] : new ::Neuland::DigitizingTamex[nElements];
   }
   // Wrapper around operator delete
   static void delete_NeulandcLcLDigitizingTamex(void *p) {
      delete ((::Neuland::DigitizingTamex*)p);
   }
   static void deleteArray_NeulandcLcLDigitizingTamex(void *p) {
      delete [] ((::Neuland::DigitizingTamex*)p);
   }
   static void destruct_NeulandcLcLDigitizingTamex(void *p) {
      typedef ::Neuland::DigitizingTamex current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Neuland::DigitizingTamex

//______________________________________________________________________________
void R3BNeulandHitMon::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandHitMon.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandHitMon::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandHitMon::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandHitMon(void *p) {
      return  p ? new(p) ::R3BNeulandHitMon : new ::R3BNeulandHitMon;
   }
   static void *newArray_R3BNeulandHitMon(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandHitMon[nElements] : new ::R3BNeulandHitMon[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandHitMon(void *p) {
      delete ((::R3BNeulandHitMon*)p);
   }
   static void deleteArray_R3BNeulandHitMon(void *p) {
      delete [] ((::R3BNeulandHitMon*)p);
   }
   static void destruct_R3BNeulandHitMon(void *p) {
      typedef ::R3BNeulandHitMon current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandHitMon

//______________________________________________________________________________
void R3BNeulandDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandDigitizer(void *p) {
      return  p ? new(p) ::R3BNeulandDigitizer : new ::R3BNeulandDigitizer;
   }
   static void *newArray_R3BNeulandDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandDigitizer[nElements] : new ::R3BNeulandDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandDigitizer(void *p) {
      delete ((::R3BNeulandDigitizer*)p);
   }
   static void deleteArray_R3BNeulandDigitizer(void *p) {
      delete [] ((::R3BNeulandDigitizer*)p);
   }
   static void destruct_R3BNeulandDigitizer(void *p) {
      typedef ::R3BNeulandDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandDigitizer

namespace ROOT {
   static TClass *vectorlENeulandcLcLDigitizingcLcLPMTHitgR_Dictionary();
   static void vectorlENeulandcLcLDigitizingcLcLPMTHitgR_TClassManip(TClass*);
   static void *new_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p = 0);
   static void *newArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(Long_t size, void *p);
   static void delete_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p);
   static void deleteArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p);
   static void destruct_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<Neuland::Digitizing::PMTHit>*)
   {
      vector<Neuland::Digitizing::PMTHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<Neuland::Digitizing::PMTHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<Neuland::Digitizing::PMTHit>", -2, "vector", 214,
                  typeid(vector<Neuland::Digitizing::PMTHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENeulandcLcLDigitizingcLcLPMTHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<Neuland::Digitizing::PMTHit>) );
      instance.SetNew(&new_vectorlENeulandcLcLDigitizingcLcLPMTHitgR);
      instance.SetNewArray(&newArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR);
      instance.SetDelete(&delete_vectorlENeulandcLcLDigitizingcLcLPMTHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR);
      instance.SetDestructor(&destruct_vectorlENeulandcLcLDigitizingcLcLPMTHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<Neuland::Digitizing::PMTHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<Neuland::Digitizing::PMTHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENeulandcLcLDigitizingcLcLPMTHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<Neuland::Digitizing::PMTHit>*)0x0)->GetClass();
      vectorlENeulandcLcLDigitizingcLcLPMTHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENeulandcLcLDigitizingcLcLPMTHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Neuland::Digitizing::PMTHit> : new vector<Neuland::Digitizing::PMTHit>;
   }
   static void *newArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<Neuland::Digitizing::PMTHit>[nElements] : new vector<Neuland::Digitizing::PMTHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p) {
      delete ((vector<Neuland::Digitizing::PMTHit>*)p);
   }
   static void deleteArray_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p) {
      delete [] ((vector<Neuland::Digitizing::PMTHit>*)p);
   }
   static void destruct_vectorlENeulandcLcLDigitizingcLcLPMTHitgR(void *p) {
      typedef vector<Neuland::Digitizing::PMTHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<Neuland::Digitizing::PMTHit>

namespace ROOT {
   static TClass *maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_Dictionary();
   static void maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_TClassManip(TClass*);
   static void *new_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p = 0);
   static void *newArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(Long_t size, void *p);
   static void delete_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p);
   static void deleteArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p);
   static void destruct_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,Neuland::Digitizing::Paddle*>*)
   {
      map<int,Neuland::Digitizing::Paddle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,Neuland::Digitizing::Paddle*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,Neuland::Digitizing::Paddle*>", -2, "map", 96,
                  typeid(map<int,Neuland::Digitizing::Paddle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,Neuland::Digitizing::Paddle*>) );
      instance.SetNew(&new_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR);
      instance.SetNewArray(&newArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR);
      instance.SetDelete(&delete_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR);
      instance.SetDestructor(&destruct_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,Neuland::Digitizing::Paddle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,Neuland::Digitizing::Paddle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,Neuland::Digitizing::Paddle*>*)0x0)->GetClass();
      maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,Neuland::Digitizing::Paddle*> : new map<int,Neuland::Digitizing::Paddle*>;
   }
   static void *newArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,Neuland::Digitizing::Paddle*>[nElements] : new map<int,Neuland::Digitizing::Paddle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p) {
      delete ((map<int,Neuland::Digitizing::Paddle*>*)p);
   }
   static void deleteArray_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p) {
      delete [] ((map<int,Neuland::Digitizing::Paddle*>*)p);
   }
   static void destruct_maplEintcONeulandcLcLDigitizingcLcLPaddlemUgR(void *p) {
      typedef map<int,Neuland::Digitizing::Paddle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,Neuland::Digitizing::Paddle*>

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandDigitizingDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/work/R3BRoot/neuland/digitizing",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/digitizing/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandDigitizingDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
namespace Neuland{namespace Digitizing{struct PMTHit;}}
namespace Neuland{namespace Digitizing{class Channel;}}
namespace Neuland{namespace Digitizing{class Paddle;}}
namespace Neuland{class DigitizingEngine;}
namespace Neuland{namespace TacQuila{class Channel;}}
namespace Neuland{class DigitizingTacQuila;}
namespace Neuland{namespace Tamex{class Channel;}}
namespace Neuland{class DigitizingTamex;}
class R3BNeulandHitMon;
class R3BNeulandDigitizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandDigitizingDict dictionary payload"

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

#ifndef NEULAND_DIGITIZING_ENGINE_H
#define NEULAND_DIGITIZING_ENGINE_H

#include "Rtypes.h"
#include <map>
#include <memory>
#include <vector>

namespace Neuland
{
    namespace Digitizing
    {
        struct PMTHit
        {
            Double_t time;
            Double_t light;

            bool operator<(const PMTHit& rhs) const { return (time < rhs.time); }

            PMTHit() = default;
            PMTHit(Double_t mcTime, Double_t mcLight, Double_t dist);
        };

        class Channel
        {
          public:
            virtual ~Channel() = default; // FIXME: Root doesn't like pure virtual destructors (= 0;)
            virtual void AddHit(Double_t mcTime, Double_t mcLight, Double_t dist) = 0;
            virtual bool HasFired() const = 0;
            virtual Double_t GetQDC() const = 0;
            virtual Double_t GetTDC() const = 0;
            virtual Double_t GetEnergy() const = 0;

          protected:
            std::vector<PMTHit> fPMTHits;
        };

        class Paddle
        {
          public:
            Paddle(std::unique_ptr<Channel> l, std::unique_ptr<Channel> r);
            void DepositLight(Double_t time, Double_t light, Double_t dist);

            bool HasFired() const;
            bool HasHalfFired() const;
            Double_t GetEnergy() const;
            Double_t GetTime() const;
            Double_t GetPosition() const;

            const Channel* GetLeftChannel() const { return fLeftChannel.get(); }
            const Channel* GetRightChannel() const { return fRightChannel.get(); }

          protected:
            std::unique_ptr<Channel> fLeftChannel;
            std::unique_ptr<Channel> fRightChannel;

          public:
            static constexpr Double_t gHalfLength = 135.;   // [cm]
            static constexpr Double_t gCMedium = 14.;       // speed of light in material in [cm/ns]
            static constexpr Double_t gAttenuation = 0.008; // light attenuation of plastic scintillator [1/cm]
            static constexpr Double_t gLambda = 1. / 2.1;
        };
    } // namespace Digitizing

    // abstract class, cannot be instantiated, to be used as a base class.
    class DigitizingEngine
    {
      public:
        virtual ~DigitizingEngine() = default; // FIXME: Root doesn't like pure virtual destructors (= 0;)
        virtual std::unique_ptr<Digitizing::Channel> BuildChannel() = 0;

        void DepositLight(Int_t paddle_id, Double_t time, Double_t light, Double_t dist);
        Double_t GetTriggerTime() const;
        std::map<Int_t, std::unique_ptr<Digitizing::Paddle>> ExtractPaddles();

      protected:
        std::map<Int_t, std::unique_ptr<Digitizing::Paddle>> paddles;
    };
} // namespace Neuland

#endif // NEULAND_DIGITIZING_ENGINE_H
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

#ifndef NEULAND_DIGITIZING_TACQUILA_H
#define NEULAND_DIGITIZING_TACQUILA_H

#include "DigitizingEngine.h"
#include "TRandom3.h"
#include "Validated.h"

namespace Neuland
{
    namespace TacQuila
    {
        struct Params
        {
            Double_t fPMTThresh;             // [MeV]
            Double_t fSaturationCoefficient; //
            Bool_t fExperimentalDataIsCorrectedForSaturation;
            Double_t fTimeRes;         // time + Gaus(0., fTimeRes) [ns]
            Double_t fEResRel;         // Gaus(e, fEResRel * e) []
            Double_t fIntegrationTime; // [ns]
            std::shared_ptr<TRandom3> fRnd;

            Params();
        };

        class Channel : public Digitizing::Channel
        {
          public:
            explicit Channel(const TacQuila::Params&);
            ~Channel() override = default;
            void AddHit(Double_t mcTime, Double_t mcLight, Double_t dist) override;
            bool HasFired() const override;
            Double_t GetQDC() const override;
            Double_t GetTDC() const override;
            Double_t GetEnergy() const override;

          private:
            // NOTE: Some expensive calculations and random distributions are cached
            // so they do not need to be recomputed every time a Getter is called
            mutable Validated<std::vector<Digitizing::PMTHit>::const_iterator> cachedFirstHitOverThresh;
            std::vector<Digitizing::PMTHit>::const_iterator FindThresholdExceedingHit() const;

            Double_t BuildQDC() const;
            mutable Validated<Double_t> cachedQDC;

            Double_t BuildTDC() const;
            mutable Validated<Double_t> cachedTDC;

            Double_t BuildEnergy() const;
            mutable Validated<Double_t> cachedEnergy;

            const TacQuila::Params& par;
        };

    } // namespace TacQuila

    class DigitizingTacQuila : public DigitizingEngine
    {
      public:
        DigitizingTacQuila();
        ~DigitizingTacQuila() override = default;
        std::unique_ptr<Digitizing::Channel> BuildChannel() override;

        void SetPMTThreshold(const Double_t v) { fTQP.fPMTThresh = v; }
        void SetSaturationCoefficient(const Double_t v) { fTQP.fSaturationCoefficient = v; }
        void SetExperimentalDataIsCorrectedForSaturation(const Bool_t v)
        {
            fTQP.fExperimentalDataIsCorrectedForSaturation = v;
        }
        void SetTimeRes(const Double_t v) { fTQP.fTimeRes = v; }
        void SetERes(const Double_t v) { fTQP.fEResRel = v; }
        void SetIntegrationTime(const Double_t v) { fTQP.fIntegrationTime = v; }

      private:
        TacQuila::Params fTQP;
    };
} // namespace Neuland

#endif // NEULAND_DIGITIZING_TACQUILA_H
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

#ifndef R3BROOT_DIGITIZINGTAMEX_H
#define R3BROOT_DIGITIZINGTAMEX_H

#include "DigitizingEngine.h"

namespace Neuland
{
    namespace Tamex
    {
        class Channel : public Digitizing::Channel
        {
          public:
            Channel() = default;
            ~Channel() override = default;
            void AddHit(Double_t mcTime, Double_t mcLight, Double_t dist) override;
            bool HasFired() const override;
            Double_t GetQDC() const override;
            Double_t GetTDC() const override;
            Double_t GetEnergy() const override;
        };

    } // namespace Tamex

    class DigitizingTamex : public DigitizingEngine
    {
      public:
        DigitizingTamex() = default;
        ~DigitizingTamex() override = default;
        std::unique_ptr<Digitizing::Channel> BuildChannel() override;
    };
} // namespace Neuland

#endif // R3BROOT_DIGITIZINGTAMEX_H
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

#ifndef R3BNEULANDHITMON_H
#define R3BNEULANDHITMON_H

/** Neuland Digi Monitor
 * @author Jan Mayer
 * @since  10.06.2015
 *
 *  Input:  Digis. Should work both on Digis from Monte Carlo simulations
 *          as well as experimental data on digi level.
 *  Output: Vairous diagrams, 3D scatterplot for each event if option 3DTRACK is given.
 */

#include "FairTask.h"
#include "R3BNeulandHit.h"
#include "TCAConnector.h"

class TH1D;
class TH2D;
class TH3D;

class R3BNeulandHitMon : public FairTask
{
  public:
    R3BNeulandHitMon(TString input = "NeulandHits", TString output = "NeulandHitMon", const Option_t* option = "");

    ~R3BNeulandHitMon() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandHitMon(const R3BNeulandHitMon&) = delete;            // copy constructor
    R3BNeulandHitMon(R3BNeulandHitMon&&) = delete;                 // move constructor
    R3BNeulandHitMon& operator=(const R3BNeulandHitMon&) = delete; // copy assignment
    R3BNeulandHitMon& operator=(R3BNeulandHitMon&&) = delete;      // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;

  public:
    void Exec(Option_t*) override;

    void SetDistanceToTarget(double x) { fDistanceToTarget = x; }

  private:
    TString fOutput;

    TCAInputConnector<R3BNeulandHit> fHits;

    double fDistanceToTarget;

    Bool_t fIs3DTrackEnabled;
    TH3D* fh3;

    TH1D* hTime;
    TH1D* hTimeAdj;
    TH1D* hMult;
    TH1D* hDepth;
    TH1D* hForemostEnergy;
    TH1D* hSternmostEnergy;
    TH2D* hDepthVSForemostEnergy;
    TH2D* hDepthVSSternmostEnergy;
    TH1D* hEtot;
    TH1D* hE;
    TH1D* hX;
    TH1D* hY;
    TH1D* hT;
    TH1D* hTNeigh;
    TH2D* hDepthVSEtot;
    TH2D* hPosVSEnergy;
    TH2D* hdeltaEE;
    TH1D* hBeta;

    ClassDefOverride(R3BNeulandHitMon, 0);
};

#endif // R3BNEULANDHITMON_H
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

#ifndef R3B_NEULAND_DIGITIZER_H
#define R3B_NEULAND_DIGITIZER_H

#include "DigitizingEngine.h"
#include "FairTask.h"
#include "Filterable.h"
#include "R3BNeulandGeoPar.h"
#include "R3BNeulandHit.h"
#include "R3BNeulandPoint.h"
#include "TCAConnector.h"

class TGeoNode;
class TH1F;
class TH2F;

/**
 * NeuLAND digitizing finder task
 * @author Jan Mayer
 *
 * For each event, get the R3BNeulandPoints and apply the detector response to create R3BNeulandHits.
 *   Input:  Branch NeulandPoints = TClonesArray("R3BNeulandPoint")
 *           Stored Neuland Geometry Parameter NeulandGeoPar
 *   Output: Branch NeulandHits  = TClonesArray("R3BNeulandDigi")
 *   Additional output: Some control histograms
 *
 */

class R3BNeulandDigitizer : public FairTask
{
  public:
    R3BNeulandDigitizer(TString input = "NeulandPoints", TString output = "NeulandHits");
    R3BNeulandDigitizer(Neuland::DigitizingEngine* engine,
                        TString input = "NeulandPoints",
                        TString output = "NeulandHits");

    ~R3BNeulandDigitizer() override = default;

    // No copy and no move is allowed (Rule of three/five)
    R3BNeulandDigitizer(const R3BNeulandDigitizer&) = delete;            // copy constructor
    R3BNeulandDigitizer(R3BNeulandDigitizer&&) = delete;                 // move constructor
    R3BNeulandDigitizer& operator=(const R3BNeulandDigitizer&) = delete; // copy assignment
    R3BNeulandDigitizer& operator=(R3BNeulandDigitizer&&) = delete;      // move assignment

  protected:
    InitStatus Init() override;
    void Finish() override;
    void SetParContainers() override;

  public:
    void Exec(Option_t*) override;
    void AddFilter(const Filterable<R3BNeulandHit&>::Filter& f) { fHitFilters.Add(f); }

  private:
    TCAInputConnector<R3BNeulandPoint> fPoints;
    TCAOutputConnector<R3BNeulandHit> fHits;

    std::unique_ptr<Neuland::DigitizingEngine> fDigitizingEngine; // owning

    Filterable<R3BNeulandHit&> fHitFilters;

    R3BNeulandGeoPar* fNeulandGeoPar; // non-owning

    TH1F* hMultOne;
    TH1F* hMultTwo;
    TH1F* hRLTimeToTrig;
    TH2F* hElossVSQDC;

  public:
    ClassDefOverride(R3BNeulandDigitizer, 0)
};

#endif // R3B_NEULAND_DIGITIZER_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Neuland::Digitizing::Channel", payloadCode, "@",
"Neuland::Digitizing::PMTHit", payloadCode, "@",
"Neuland::Digitizing::Paddle", payloadCode, "@",
"Neuland::DigitizingEngine", payloadCode, "@",
"Neuland::DigitizingTacQuila", payloadCode, "@",
"Neuland::DigitizingTamex", payloadCode, "@",
"Neuland::TacQuila::Channel", payloadCode, "@",
"Neuland::Tamex::Channel", payloadCode, "@",
"R3BNeulandDigitizer", payloadCode, "@",
"R3BNeulandHitMon", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandDigitizingDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandDigitizingDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandDigitizingDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandDigitizingDict() {
  TriggerDictionaryInitialization_G__R3BNeulandDigitizingDict_Impl();
}
