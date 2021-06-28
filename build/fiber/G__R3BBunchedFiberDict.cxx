// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfiberdIG__R3BBunchedFiberDict

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
#include "R3BBunchedFiberMapped2CalPar.h"
#include "R3BBunchedFiberMapped2Cal.h"
#include "R3BBunchedFiberCal2Hit.h"
#include "R3BBunchedFiberHitModulePar.h"
#include "R3BBunchedFiberHitPar.h"
#include "R3BFiberContFact.h"
#include "R3BBunchedFiberSPMTTrigMapped2CalPar.h"
#include "R3BBunchedFiberSPMTTrigMapped2Cal.h"
#include "R3BBunchedFiberSPMTTrigDigitizerCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BBunchedFiberMapped2CalPar(void *p);
   static void deleteArray_R3BBunchedFiberMapped2CalPar(void *p);
   static void destruct_R3BBunchedFiberMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberMapped2CalPar*)
   {
      ::R3BBunchedFiberMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberMapped2CalPar", ::R3BBunchedFiberMapped2CalPar::Class_Version(), "", 33,
                  typeid(::R3BBunchedFiberMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberMapped2CalPar) );
      instance.SetDelete(&delete_R3BBunchedFiberMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberMapped2CalPar);
      instance.SetDestructor(&destruct_R3BBunchedFiberMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BBunchedFiberMapped2Cal(void *p);
   static void deleteArray_R3BBunchedFiberMapped2Cal(void *p);
   static void destruct_R3BBunchedFiberMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberMapped2Cal*)
   {
      ::R3BBunchedFiberMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberMapped2Cal", ::R3BBunchedFiberMapped2Cal::Class_Version(), "", 160,
                  typeid(::R3BBunchedFiberMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberMapped2Cal) );
      instance.SetDelete(&delete_R3BBunchedFiberMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberMapped2Cal);
      instance.SetDestructor(&destruct_R3BBunchedFiberMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BBunchedFiberCal2Hit(void *p);
   static void deleteArray_R3BBunchedFiberCal2Hit(void *p);
   static void destruct_R3BBunchedFiberCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberCal2Hit*)
   {
      ::R3BBunchedFiberCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberCal2Hit", ::R3BBunchedFiberCal2Hit::Class_Version(), "", 285,
                  typeid(::R3BBunchedFiberCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberCal2Hit) );
      instance.SetDelete(&delete_R3BBunchedFiberCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberCal2Hit);
      instance.SetDestructor(&destruct_R3BBunchedFiberCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberHitModulePar(void *p = 0);
   static void *newArray_R3BBunchedFiberHitModulePar(Long_t size, void *p);
   static void delete_R3BBunchedFiberHitModulePar(void *p);
   static void deleteArray_R3BBunchedFiberHitModulePar(void *p);
   static void destruct_R3BBunchedFiberHitModulePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberHitModulePar*)
   {
      ::R3BBunchedFiberHitModulePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberHitModulePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberHitModulePar", ::R3BBunchedFiberHitModulePar::Class_Version(), "", 462,
                  typeid(::R3BBunchedFiberHitModulePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberHitModulePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberHitModulePar) );
      instance.SetNew(&new_R3BBunchedFiberHitModulePar);
      instance.SetNewArray(&newArray_R3BBunchedFiberHitModulePar);
      instance.SetDelete(&delete_R3BBunchedFiberHitModulePar);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberHitModulePar);
      instance.SetDestructor(&destruct_R3BBunchedFiberHitModulePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberHitModulePar*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberHitModulePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberHitModulePar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberHitPar(void *p = 0);
   static void *newArray_R3BBunchedFiberHitPar(Long_t size, void *p);
   static void delete_R3BBunchedFiberHitPar(void *p);
   static void deleteArray_R3BBunchedFiberHitPar(void *p);
   static void destruct_R3BBunchedFiberHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberHitPar*)
   {
      ::R3BBunchedFiberHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberHitPar", ::R3BBunchedFiberHitPar::Class_Version(), "", 581,
                  typeid(::R3BBunchedFiberHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberHitPar) );
      instance.SetNew(&new_R3BBunchedFiberHitPar);
      instance.SetNewArray(&newArray_R3BBunchedFiberHitPar);
      instance.SetDelete(&delete_R3BBunchedFiberHitPar);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberHitPar);
      instance.SetDestructor(&destruct_R3BBunchedFiberHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFiberContFact(void *p = 0);
   static void *newArray_R3BFiberContFact(Long_t size, void *p);
   static void delete_R3BFiberContFact(void *p);
   static void deleteArray_R3BFiberContFact(void *p);
   static void destruct_R3BFiberContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFiberContFact*)
   {
      ::R3BFiberContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFiberContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFiberContFact", ::R3BFiberContFact::Class_Version(), "", 704,
                  typeid(::R3BFiberContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFiberContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFiberContFact) );
      instance.SetNew(&new_R3BFiberContFact);
      instance.SetNewArray(&newArray_R3BFiberContFact);
      instance.SetDelete(&delete_R3BFiberContFact);
      instance.SetDeleteArray(&deleteArray_R3BFiberContFact);
      instance.SetDestructor(&destruct_R3BFiberContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFiberContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFiberContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFiberContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p);
   static void deleteArray_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p);
   static void destruct_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)
   {
      ::R3BBunchedFiberSPMTTrigMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberSPMTTrigMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberSPMTTrigMapped2CalPar", ::R3BBunchedFiberSPMTTrigMapped2CalPar::Class_Version(), "", 746,
                  typeid(::R3BBunchedFiberSPMTTrigMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberSPMTTrigMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberSPMTTrigMapped2CalPar) );
      instance.SetDelete(&delete_R3BBunchedFiberSPMTTrigMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberSPMTTrigMapped2CalPar);
      instance.SetDestructor(&destruct_R3BBunchedFiberSPMTTrigMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberSPMTTrigMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BBunchedFiberSPMTTrigMapped2Cal(void *p);
   static void deleteArray_R3BBunchedFiberSPMTTrigMapped2Cal(void *p);
   static void destruct_R3BBunchedFiberSPMTTrigMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberSPMTTrigMapped2Cal*)
   {
      ::R3BBunchedFiberSPMTTrigMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberSPMTTrigMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberSPMTTrigMapped2Cal", ::R3BBunchedFiberSPMTTrigMapped2Cal::Class_Version(), "", 857,
                  typeid(::R3BBunchedFiberSPMTTrigMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberSPMTTrigMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberSPMTTrigMapped2Cal) );
      instance.SetDelete(&delete_R3BBunchedFiberSPMTTrigMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberSPMTTrigMapped2Cal);
      instance.SetDestructor(&destruct_R3BBunchedFiberSPMTTrigMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberSPMTTrigMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberSPMTTrigMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberSPMTTrigDigitizerCal(void *p = 0);
   static void *newArray_R3BBunchedFiberSPMTTrigDigitizerCal(Long_t size, void *p);
   static void delete_R3BBunchedFiberSPMTTrigDigitizerCal(void *p);
   static void deleteArray_R3BBunchedFiberSPMTTrigDigitizerCal(void *p);
   static void destruct_R3BBunchedFiberSPMTTrigDigitizerCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberSPMTTrigDigitizerCal*)
   {
      ::R3BBunchedFiberSPMTTrigDigitizerCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberSPMTTrigDigitizerCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberSPMTTrigDigitizerCal", ::R3BBunchedFiberSPMTTrigDigitizerCal::Class_Version(), "", 955,
                  typeid(::R3BBunchedFiberSPMTTrigDigitizerCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberSPMTTrigDigitizerCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberSPMTTrigDigitizerCal) );
      instance.SetNew(&new_R3BBunchedFiberSPMTTrigDigitizerCal);
      instance.SetNewArray(&newArray_R3BBunchedFiberSPMTTrigDigitizerCal);
      instance.SetDelete(&delete_R3BBunchedFiberSPMTTrigDigitizerCal);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberSPMTTrigDigitizerCal);
      instance.SetDestructor(&destruct_R3BBunchedFiberSPMTTrigDigitizerCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberSPMTTrigDigitizerCal*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberSPMTTrigDigitizerCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigDigitizerCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberMapped2CalPar::Class_Name()
{
   return "R3BBunchedFiberMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BBunchedFiberMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberMapped2Cal::Class_Name()
{
   return "R3BBunchedFiberMapped2Cal";
}

//______________________________________________________________________________
const char *R3BBunchedFiberMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberCal2Hit::Class_Name()
{
   return "R3BBunchedFiberCal2Hit";
}

//______________________________________________________________________________
const char *R3BBunchedFiberCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberHitModulePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberHitModulePar::Class_Name()
{
   return "R3BBunchedFiberHitModulePar";
}

//______________________________________________________________________________
const char *R3BBunchedFiberHitModulePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitModulePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberHitModulePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitModulePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitModulePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitModulePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitModulePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitModulePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberHitPar::Class_Name()
{
   return "R3BBunchedFiberHitPar";
}

//______________________________________________________________________________
const char *R3BBunchedFiberHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFiberContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFiberContFact::Class_Name()
{
   return "R3BFiberContFact";
}

//______________________________________________________________________________
const char *R3BFiberContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFiberContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFiberContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFiberContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFiberContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFiberContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFiberContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFiberContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberSPMTTrigMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigMapped2CalPar::Class_Name()
{
   return "R3BBunchedFiberSPMTTrigMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberSPMTTrigMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberSPMTTrigMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigMapped2Cal::Class_Name()
{
   return "R3BBunchedFiberSPMTTrigMapped2Cal";
}

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberSPMTTrigMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberSPMTTrigDigitizerCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigDigitizerCal::Class_Name()
{
   return "R3BBunchedFiberSPMTTrigDigitizerCal";
}

//______________________________________________________________________________
const char *R3BBunchedFiberSPMTTrigDigitizerCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigDigitizerCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberSPMTTrigDigitizerCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigDigitizerCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigDigitizerCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigDigitizerCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberSPMTTrigDigitizerCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberSPMTTrigDigitizerCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BBunchedFiberMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberMapped2CalPar(void *p) {
      delete ((::R3BBunchedFiberMapped2CalPar*)p);
   }
   static void deleteArray_R3BBunchedFiberMapped2CalPar(void *p) {
      delete [] ((::R3BBunchedFiberMapped2CalPar*)p);
   }
   static void destruct_R3BBunchedFiberMapped2CalPar(void *p) {
      typedef ::R3BBunchedFiberMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberMapped2CalPar

//______________________________________________________________________________
void R3BBunchedFiberMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberMapped2Cal(void *p) {
      delete ((::R3BBunchedFiberMapped2Cal*)p);
   }
   static void deleteArray_R3BBunchedFiberMapped2Cal(void *p) {
      delete [] ((::R3BBunchedFiberMapped2Cal*)p);
   }
   static void destruct_R3BBunchedFiberMapped2Cal(void *p) {
      typedef ::R3BBunchedFiberMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberMapped2Cal

//______________________________________________________________________________
void R3BBunchedFiberCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberCal2Hit(void *p) {
      delete ((::R3BBunchedFiberCal2Hit*)p);
   }
   static void deleteArray_R3BBunchedFiberCal2Hit(void *p) {
      delete [] ((::R3BBunchedFiberCal2Hit*)p);
   }
   static void destruct_R3BBunchedFiberCal2Hit(void *p) {
      typedef ::R3BBunchedFiberCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberCal2Hit

//______________________________________________________________________________
void R3BBunchedFiberHitModulePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberHitModulePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberHitModulePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberHitModulePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberHitModulePar(void *p) {
      return  p ? new(p) ::R3BBunchedFiberHitModulePar : new ::R3BBunchedFiberHitModulePar;
   }
   static void *newArray_R3BBunchedFiberHitModulePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberHitModulePar[nElements] : new ::R3BBunchedFiberHitModulePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberHitModulePar(void *p) {
      delete ((::R3BBunchedFiberHitModulePar*)p);
   }
   static void deleteArray_R3BBunchedFiberHitModulePar(void *p) {
      delete [] ((::R3BBunchedFiberHitModulePar*)p);
   }
   static void destruct_R3BBunchedFiberHitModulePar(void *p) {
      typedef ::R3BBunchedFiberHitModulePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberHitModulePar

//______________________________________________________________________________
void R3BBunchedFiberHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberHitPar(void *p) {
      return  p ? new(p) ::R3BBunchedFiberHitPar : new ::R3BBunchedFiberHitPar;
   }
   static void *newArray_R3BBunchedFiberHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberHitPar[nElements] : new ::R3BBunchedFiberHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberHitPar(void *p) {
      delete ((::R3BBunchedFiberHitPar*)p);
   }
   static void deleteArray_R3BBunchedFiberHitPar(void *p) {
      delete [] ((::R3BBunchedFiberHitPar*)p);
   }
   static void destruct_R3BBunchedFiberHitPar(void *p) {
      typedef ::R3BBunchedFiberHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberHitPar

//______________________________________________________________________________
void R3BFiberContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFiberContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFiberContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFiberContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFiberContFact(void *p) {
      return  p ? new(p) ::R3BFiberContFact : new ::R3BFiberContFact;
   }
   static void *newArray_R3BFiberContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFiberContFact[nElements] : new ::R3BFiberContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFiberContFact(void *p) {
      delete ((::R3BFiberContFact*)p);
   }
   static void deleteArray_R3BFiberContFact(void *p) {
      delete [] ((::R3BFiberContFact*)p);
   }
   static void destruct_R3BFiberContFact(void *p) {
      typedef ::R3BFiberContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFiberContFact

//______________________________________________________________________________
void R3BBunchedFiberSPMTTrigMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberSPMTTrigMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberSPMTTrigMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberSPMTTrigMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p) {
      delete ((::R3BBunchedFiberSPMTTrigMapped2CalPar*)p);
   }
   static void deleteArray_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p) {
      delete [] ((::R3BBunchedFiberSPMTTrigMapped2CalPar*)p);
   }
   static void destruct_R3BBunchedFiberSPMTTrigMapped2CalPar(void *p) {
      typedef ::R3BBunchedFiberSPMTTrigMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberSPMTTrigMapped2CalPar

//______________________________________________________________________________
void R3BBunchedFiberSPMTTrigMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberSPMTTrigMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberSPMTTrigMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberSPMTTrigMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberSPMTTrigMapped2Cal(void *p) {
      delete ((::R3BBunchedFiberSPMTTrigMapped2Cal*)p);
   }
   static void deleteArray_R3BBunchedFiberSPMTTrigMapped2Cal(void *p) {
      delete [] ((::R3BBunchedFiberSPMTTrigMapped2Cal*)p);
   }
   static void destruct_R3BBunchedFiberSPMTTrigMapped2Cal(void *p) {
      typedef ::R3BBunchedFiberSPMTTrigMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberSPMTTrigMapped2Cal

//______________________________________________________________________________
void R3BBunchedFiberSPMTTrigDigitizerCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberSPMTTrigDigitizerCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberSPMTTrigDigitizerCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberSPMTTrigDigitizerCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberSPMTTrigDigitizerCal(void *p) {
      return  p ? new(p) ::R3BBunchedFiberSPMTTrigDigitizerCal : new ::R3BBunchedFiberSPMTTrigDigitizerCal;
   }
   static void *newArray_R3BBunchedFiberSPMTTrigDigitizerCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberSPMTTrigDigitizerCal[nElements] : new ::R3BBunchedFiberSPMTTrigDigitizerCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberSPMTTrigDigitizerCal(void *p) {
      delete ((::R3BBunchedFiberSPMTTrigDigitizerCal*)p);
   }
   static void deleteArray_R3BBunchedFiberSPMTTrigDigitizerCal(void *p) {
      delete [] ((::R3BBunchedFiberSPMTTrigDigitizerCal*)p);
   }
   static void destruct_R3BBunchedFiberSPMTTrigDigitizerCal(void *p) {
      typedef ::R3BBunchedFiberSPMTTrigDigitizerCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberSPMTTrigDigitizerCal

namespace ROOT {
   static TClass *vectorlER3BBunchedFiberCal2HitcLcLChannelgR_Dictionary();
   static void vectorlER3BBunchedFiberCal2HitcLcLChannelgR_TClassManip(TClass*);
   static void *new_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p = 0);
   static void *newArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(Long_t size, void *p);
   static void delete_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p);
   static void deleteArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p);
   static void destruct_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BBunchedFiberCal2Hit::Channel>*)
   {
      vector<R3BBunchedFiberCal2Hit::Channel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BBunchedFiberCal2Hit::Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BBunchedFiberCal2Hit::Channel>", -2, "vector", 214,
                  typeid(vector<R3BBunchedFiberCal2Hit::Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BBunchedFiberCal2HitcLcLChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BBunchedFiberCal2Hit::Channel>) );
      instance.SetNew(&new_vectorlER3BBunchedFiberCal2HitcLcLChannelgR);
      instance.SetNewArray(&newArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR);
      instance.SetDelete(&delete_vectorlER3BBunchedFiberCal2HitcLcLChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR);
      instance.SetDestructor(&destruct_vectorlER3BBunchedFiberCal2HitcLcLChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BBunchedFiberCal2Hit::Channel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BBunchedFiberCal2Hit::Channel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BBunchedFiberCal2HitcLcLChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BBunchedFiberCal2Hit::Channel>*)0x0)->GetClass();
      vectorlER3BBunchedFiberCal2HitcLcLChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BBunchedFiberCal2HitcLcLChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BBunchedFiberCal2Hit::Channel> : new vector<R3BBunchedFiberCal2Hit::Channel>;
   }
   static void *newArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BBunchedFiberCal2Hit::Channel>[nElements] : new vector<R3BBunchedFiberCal2Hit::Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p) {
      delete ((vector<R3BBunchedFiberCal2Hit::Channel>*)p);
   }
   static void deleteArray_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p) {
      delete [] ((vector<R3BBunchedFiberCal2Hit::Channel>*)p);
   }
   static void destruct_vectorlER3BBunchedFiberCal2HitcLcLChannelgR(void *p) {
      typedef vector<R3BBunchedFiberCal2Hit::Channel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BBunchedFiberCal2Hit::Channel>

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

namespace {
  void TriggerDictionaryInitialization_G__R3BBunchedFiberDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/fiber",
"/work/R3BRoot/tcal",
"/work/R3BRoot/r3bdata",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/fiber/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BBunchedFiberDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BBunchedFiberMapped2CalPar;
class R3BBunchedFiberMapped2Cal;
class R3BBunchedFiberCal2Hit;
class R3BBunchedFiberHitModulePar;
class R3BBunchedFiberHitPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Fiber parameter containers)ATTRDUMP"))) R3BFiberContFact;
class R3BBunchedFiberSPMTTrigMapped2CalPar;
class R3BBunchedFiberSPMTTrigMapped2Cal;
class R3BBunchedFiberSPMTTrigDigitizerCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BBunchedFiberDict dictionary payload"

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

//
// Creates time calib parameters for bunched fiber detector.
//

#ifndef R3BBUNCHEDFIBERMAPPED2CALPAR_H
#define R3BBUNCHEDFIBERMAPPED2CALPAR_H

#include "FairTask.h"
#include <R3BTCalEngine.h>

class TClonesArray;
class R3BTCalPar;
class R3BEventHeader;

class R3BBunchedFiberMapped2CalPar : public FairTask
{
  public:
    enum Electronics
    {
        CTDC,
        TAMEX
    };

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param a_name a name of the task.
     * @param a_verbose a FairTask verbosity level.
     * @param a_update_rate a update rate for online histograms.
     * @param a_min_stats a minimum statistics for calibration.
     */
    R3BBunchedFiberMapped2CalPar(const char*,
                                 Int_t,
                                 enum Electronics = TAMEX,
                                 enum R3BTCalEngine::CTDCVariant = R3BTCalEngine::CTDC_16_BWD_150,
                                 Int_t = 1e6,
                                 Int_t = 1e5);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BBunchedFiberMapped2CalPar();

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
    TString fName;
    enum Electronics fSPMTElectronics;
    enum R3BTCalEngine::CTDCVariant fCTDCVariant;
    TClonesArray* fMapped;
    R3BTCalPar* fMAPMTTCalPar;
    R3BTCalEngine* fMAPMTEngine;
    R3BTCalPar* fMAPMTTrigTCalPar;
    R3BTCalEngine* fMAPMTTrigEngine;
    R3BTCalPar* fSPMTTCalPar;
    R3BTCalEngine* fSPMTEngine;
    Int_t fUpdateRate;
    Int_t fMinStats;

  public:
    ClassDef(R3BBunchedFiberMapped2CalPar, 3)
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

// ------------------------------------------------------------
// -----                R3BBunchedFiberMapped2Cal                -----
// -----            Created Jan 13th 2018 by M.Heil       -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BBUNCHEDFIBERMAPPED2CAL
#define R3BBUNCHEDFIBERMAPPED2CAL

#include "FairTask.h"
#include <R3BTCalEngine.h>

class R3BTCalPar;

/**
 * An analysis task to apply TCAL calibration.
 * This class reads mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BBunchedFiberMapped2CalPar task.
 */
class R3BBunchedFiberMapped2Cal : public FairTask
{
  public:
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     * @param a_variant CTDC firmware variant, see R3BTCalEngine.
     * @param a_skip_spmt Don't process SPMT side for pure MAPMT tests.
     */
    R3BBunchedFiberMapped2Cal(const char*, Int_t, enum R3BTCalEngine::CTDCVariant, Bool_t = false);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BBunchedFiberMapped2Cal();

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
    TString fName;
    UInt_t fSideNum[2];
    Bool_t fSkipSPMT;
    R3BTCalPar* fMAPMTTCalPar;
    R3BTCalPar* fMAPMTTrigTCalPar;
    R3BTCalPar* fSPMTTCalPar;
    TClonesArray* fMappedItems;
    TClonesArray* fCalItems;
    TClonesArray* fCalTriggerItems;
    Double_t fClockFreq;
    Double_t fTamexFreq;
    Int_t fnEvents;

  public:
    ClassDef(R3BBunchedFiberMapped2Cal, 3)
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

#ifndef R3BBUNCHEDFIBERCAL2HIT
#define R3BBUNCHEDFIBERCAL2HIT

#include "FairTask.h"

#include <R3BTCalEngine.h>

#include <list>

class TH1F;
class TH2F;

class R3BBunchedFiberCalData;
class R3BBunchedFiberHitPar;
class R3BBunchedFiberHitModulePar;

#define BUNCHED_FIBER_TRIGGER_MAP_SET(mapmt_arr, spmt_arr) \
  MAPMTTriggerMapSet(mapmt_arr, sizeof mapmt_arr);\
  SPMTTriggerMapSet(spmt_arr, sizeof spmt_arr)

/**
 * Transforms bunched fiber Cal level data to Hit level.
 *
 * A note about the UCESB unpacker:
 * All channels in a full plane of fibers should be mapped in sequence. For
 * example, Fib4 is built out of two "sub-detectors" (left and right side),
 * where each subdet has 256 CTDC/MAPMT 2 TAMEX2/SPMT channels, which should be
 * mapped as:
 *  FIB4_MAPMT1 .. FIB4_MAPMT512
 *  FIB4_SPMT1 .. FIB4_SPMT4
 * This class will then figure out how to map the actual fibers (except for
 * non-ambiguous sorting errors).
 */
class R3BBunchedFiberCal2Hit : public FairTask
{
  public:
    enum Direction
    {
        HORIZONTAL,
        VERTICAL
    };
    struct ToT
    {
        ToT(R3BBunchedFiberCalData const*, R3BBunchedFiberCalData const*, Double_t, Double_t, Double_t);
        R3BBunchedFiberCalData const* lead;
        R3BBunchedFiberCalData const* trail;
        Double_t lead_ns, tail_ns, tot_ns;
    };
    struct Channel
    {
        std::list<R3BBunchedFiberCalData const*> lead_list;
        std::list<ToT> tot_list;
    };

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BBunchedFiberCal2Hit(const char*,
                           Int_t,
                           enum R3BTCalEngine::CTDCVariant,
                           Direction,
                           UInt_t,
                           UInt_t,
                           UInt_t,
                           Bool_t,   // is calib
                           Bool_t,   // is gain
                           Bool_t);  // is tsync

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BBunchedFiberCal2Hit();

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

    R3BBunchedFiberHitModulePar* GetModuleParAt(Int_t fiber);

    /**
     * Getting all fibers correct is difficult, this function lets us fix that
     * per detector.
     */
    virtual UInt_t FixMistake(UInt_t) = 0;

    /**
     * Can provide an array that lists for every channel (i.e. fiber bunch, not
     * fiber!) the entry in the <name>TriggerCal TClonesArray for trigger
     * times.
     */
    void MAPMTTriggerMapSet(unsigned const *, size_t);
    void SPMTTriggerMapSet(unsigned const *, size_t);

  private:
    TString fName;
    Int_t fnEvents;
    Int_t maxevent;
    Int_t fnEventsfill = 0;

	Int_t multi=0;
	Double_t energy[2048];
	Int_t counts[2048];
	Double_t tsync_temp[2048]={0};
	Double_t  gain_temp[2048]={10};
    Bool_t tofdin;

    double fClockFreq;
    Direction fDirection;
    UInt_t fSubNum;
    UInt_t fChPerSub[2];
    Bool_t fIsCalibrator;
    Bool_t fIsGain;
    Bool_t fIsTsync;
    TClonesArray* fCalItems;
    TClonesArray* fMAPMTCalTriggerItems;
    TClonesArray* fSPMTCalTriggerItems;
    TClonesArray* fHitItems;
    TClonesArray* fTofdHitItems;
    unsigned const *fMAPMTTriggerMap;
    unsigned const *fSPMTTriggerMap;
    R3BBunchedFiberHitPar* fCalPar; /**< Parameter container. */
    R3BBunchedFiberHitPar* fHitPar; /**< Hit parameter container. */
    Int_t fNofHitPars;              /**< Number of modules in parameter file. */
    Int_t fNofHitItems;
    // [0=MAPMT,1=SPMT][Channel].
    std::vector<Channel> fChannelArray[2];

    // histograms for gain matching
    TH2F* fh_ToT_MA_Fib;
    TH2F* fh_ToT_Single_Fib;
    TH2F* fh_ToT_s_Fib[4];
    TH2F* fh_time_s_Fib;
    TH2F* fh_ToT_ToT;
    TH2F* fh_dt_Fib;
    TH2F* fh_Fib_ToF;
    TH2F* fh_Test;
    TH1F* fh_multi;
    TH2F* fh_time_Fib;
    

  public:
    ClassDef(R3BBunchedFiberCal2Hit, 3)
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

#ifndef R3BBUNCHEDFIBERHITMODULEPAR_H
#define R3BBUNCHEDFIBERHITMODULEPAR_H

#include "FairParGenericSet.h"

#define NCHMAX 5000

class FairParamList;

/**
 * Container for time calibration of a single module. This class is used for
 * storage of BunchedFiber hit parameter
 */

class R3BBunchedFiberHitModulePar : public FairParGenericSet
{
  public:
    /**
     * Standard constructor.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BBunchedFiberHitModulePar(const char* name = "BunchedFiberHitModulePar",
                                const char* title = "Fiber hit calibration of a module",
                                const char* context = "TestDefaultContext",
                                Bool_t own = kTRUE);

    /**
     * Destructor.
     * Frees the memory allocated by the object.
     */
    virtual ~R3BBunchedFiberHitModulePar(void);

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

    /**
     * A method to draw vaues of parameters on the current Canvas.
     */
    void DrawParams();

    /** Accessor functions **/
    Int_t GetFiber() const { return fFiber; }
    Double_t GetSync() const { return fSync; }
    Double_t GetOffset1() const { return fOffset1; }
    Double_t GetOffset2() const { return fOffset2; }
    Double_t GetVeff() const { return fVeff; }
    Double_t GetGainMA() const { return fGainMA; }
    Double_t GetGainS() const { return fGainS; }

    void SetFiber(Int_t i) { fFiber = i; }
    void SetSync(Double_t t) { fSync = t; }
    void SetOffset1(Double_t t) { fOffset1 = t; }
    void SetOffset2(Double_t t) { fOffset2 = t; }
    void SetGainMA(Double_t gainMA) { fGainMA = gainMA; }
    void SetGainS(Double_t gainS) { fGainS = gainS; }
    void SetVeff(Double_t v) { fVeff = v; }

  private:
    Int_t fFiber;      /**< Index of a fiber. */
    Double_t fOffset1; /**< time offset of PM1 */
    Double_t fOffset2; /**< time offset of PM2 */
    Double_t fVeff;    /**< effective velocity of light in paddle for position determination */
    Double_t fSync;    /**< time offset between paddles */
    Double_t fGainMA;
    Double_t fGainS;

    ClassDef(R3BBunchedFiberHitModulePar, 1);
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

#ifndef R3BBUNCHEDFIBERHITPAR_H
#define R3BBUNCHEDFIBERHITPAR_H

#define NMODULEMAX 6000

#define N_FIBER_MAX 2048

#include "FairParGenericSet.h" // for FairParGenericSet
#include "R3BBunchedFiberHitModulePar.h"
#include "TObjArray.h"
#include <map>

using namespace std;

class FairParamList;

/**
 * Parameter container for storing time calibration of a detector.
 * This class contains array of time calibration containers for each
 * module (of type R3BTCalModulePar). Instance of this class has to be
 * created using FairRuntimeDB::getContainer("name") method. Supported
 * names: LandTCalPar, LosTCalPar.
 * @author D. Kresan
 * @since September 3, 2015
 */
class R3BBunchedFiberHitPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BBunchedFiberHitPar(const char* name = "BunchedFiberHitPar",
                          const char* title = "fiber HIT calibration",
                          const char* context = "TestDefaultContext",
                          Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BBunchedFiberHitPar(void);

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
     * Accessible from Context menu in TBrowser.
     */
    void printParams(); // *MENU*

    /**
     * Method to print value of parameters for a specific module.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * Accessible from Context menu in TBrowser.
     */
    void PrintModuleParams(Int_t fiber); // *MENU*

    /**
     * Method to draw value of parameters for a specific module on a current Canvas.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * Accessible from Context menu in TBrowser.
     */
    void DrawModuleParams(Int_t fiber); // *MENU*

    /**
     * Method to add parameter container for a module.
     * Extends the array.
     * @param tch a parameter container for a detector module.
     */
    void AddModulePar(R3BBunchedFiberHitModulePar* tch);

    /**
     * Method to retrieve the arrray with module containers.
     * @return an array with parameter containers of type R3BTCalModulePar.
     */
    TObjArray* GetListOfModulePar() { return fHitParams; }

    /**
     * Method to get number of modules storred in array.
     * @return size of array.
     */
    Int_t GetNumModulePar() { return fHitParams->GetEntries(); }

    /**
     * Method to get single parameter container for a specific module.
     * @param idx an index of a module.
     * @return parameter container of this module.
     */
    R3BBunchedFiberHitModulePar* GetModuleParAt(Int_t fiber);

  private:
    const R3BBunchedFiberHitPar& operator=(const R3BBunchedFiberHitPar&); /**< an assignment operator */
    R3BBunchedFiberHitPar(const R3BBunchedFiberHitPar&);                  /**< a copy constructor */

    TObjArray* fHitParams; /**< an array with parameter containers of all modules */

    Bool_t fMapInit;             /**< a boolean flag for indication whether the indexing map is initialized */
    map<Int_t, Int_t> fIndexMap; /**< a map between index of a container in array and plane,paddle,side */

    ClassDef(R3BBunchedFiberHitPar, 1);
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

#ifndef R3BFIBERCONTFACT_H
#define R3BFIBERCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BFiberContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BFiberContFact();
    ~R3BFiberContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BFiberContFact, 0) // Factory for all Fiber parameter containers
};

#endif /* !R3BTOFCONTFACT_H */
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

#ifndef R3BBUNCHEDFIBERSPMTTRIGMAPPED2CALPAR_H
#define R3BBUNCHEDFIBERSPMTTRIGMAPPED2CALPAR_H

#include "FairTask.h"
#include <R3BTCalEngine.h>

class TClonesArray;
class R3BTCalPar;
class R3BEventHeader;

class R3BBunchedFiberSPMTTrigMapped2CalPar : public FairTask
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
    R3BBunchedFiberSPMTTrigMapped2CalPar(Int_t,
                                 Int_t = 1e6,
                                 Int_t = 1e5);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BBunchedFiberSPMTTrigMapped2CalPar();

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
    TClonesArray* fMapped;
    R3BTCalPar* fTCalPar;
    R3BTCalEngine* fEngine;
    Int_t fUpdateRate;
    Int_t fMinStats;

  public:
    ClassDef(R3BBunchedFiberSPMTTrigMapped2CalPar, 0)
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

// ------------------------------------------------------------
// -----                R3BBunchedFiberSPMTTrigMapped2Cal                -----
// -----            Created Jan 13th 2018 by M.Heil       -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BBUNCHEDFIBERSPMTTRIGMAPPED2CAL
#define R3BBUNCHEDFIBERSPMTTRIGMAPPED2CAL

#include "FairTask.h"
#include <R3BTCalEngine.h>

class R3BTCalPar;

/**
 * An analysis task to apply TCAL calibration.
 * This class reads mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BBunchedFiberSPMTTrigMapped2CalPar task.
 */
class R3BBunchedFiberSPMTTrigMapped2Cal : public FairTask
{
  public:
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     * @param a_variant CTDC firmware variant, see R3BTCalEngine.
     * @param a_skip_spmt Don't process SPMT side for pure MAPMT tests.
     */
    R3BBunchedFiberSPMTTrigMapped2Cal(Int_t);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BBunchedFiberSPMTTrigMapped2Cal();

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

  public:
    ClassDef(R3BBunchedFiberSPMTTrigMapped2Cal, 0)
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

// R3BBunchedFiberSPMTTrigDigitizerCal.h

#ifndef R3BBunchedFiberSPMTTrigDigitizerCal_H
#define R3BBunchedFiberSPMTTrigDigitizerCal_H 1

#include "FairTask.h"
#include "R3BBunchedFiberCalData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BBunchedFiberSPMTTrigDigitizerCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BBunchedFiberSPMTTrigDigitizerCal();

    R3BBunchedFiberSPMTTrigDigitizerCal(const char* name, Int_t iVerbose = 1);
   
    /** Destructor **/
   virtual  ~R3BBunchedFiberSPMTTrigDigitizerCal();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    
    virtual void Reset();


  protected:
    TClonesArray* fFiberTriggerSingleCals;
    TClonesArray* fMCTrack;

  private:

    ClassDef(R3BBunchedFiberSPMTTrigDigitizerCal, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BBunchedFiberCal2Hit", payloadCode, "@",
"R3BBunchedFiberHitModulePar", payloadCode, "@",
"R3BBunchedFiberHitPar", payloadCode, "@",
"R3BBunchedFiberMapped2Cal", payloadCode, "@",
"R3BBunchedFiberMapped2CalPar", payloadCode, "@",
"R3BBunchedFiberSPMTTrigDigitizerCal", payloadCode, "@",
"R3BBunchedFiberSPMTTrigMapped2Cal", payloadCode, "@",
"R3BBunchedFiberSPMTTrigMapped2CalPar", payloadCode, "@",
"R3BFiberContFact", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BBunchedFiberDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BBunchedFiberDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BBunchedFiberDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BBunchedFiberDict() {
  TriggerDictionaryInitialization_G__R3BBunchedFiberDict_Impl();
}
