// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfi3adIG__R3BFi3aDict

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
#include "R3BFi3aCal2Hit.h"
#include "R3BFi3aMapped2Cal.h"
#include "R3BFi3a.h"
#include "R3BFi3aContFact.h"
#include "R3BFi3aDigitizer.h"
#include "R3BFi3aDigitizerCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BFi3aCal2Hit(void *p);
   static void deleteArray_R3BFi3aCal2Hit(void *p);
   static void destruct_R3BFi3aCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3aCal2Hit*)
   {
      ::R3BFi3aCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3aCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3aCal2Hit", ::R3BFi3aCal2Hit::Class_Version(), "", 24,
                  typeid(::R3BFi3aCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3aCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3aCal2Hit) );
      instance.SetDelete(&delete_R3BFi3aCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BFi3aCal2Hit);
      instance.SetDestructor(&destruct_R3BFi3aCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3aCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BFi3aCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3aCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi3aMapped2Cal(void *p);
   static void deleteArray_R3BFi3aMapped2Cal(void *p);
   static void destruct_R3BFi3aMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3aMapped2Cal*)
   {
      ::R3BFi3aMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3aMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3aMapped2Cal", ::R3BFi3aMapped2Cal::Class_Version(), "", 54,
                  typeid(::R3BFi3aMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3aMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3aMapped2Cal) );
      instance.SetDelete(&delete_R3BFi3aMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BFi3aMapped2Cal);
      instance.SetDestructor(&destruct_R3BFi3aMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3aMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BFi3aMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3aMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3a(void *p = 0);
   static void *newArray_R3BFi3a(Long_t size, void *p);
   static void delete_R3BFi3a(void *p);
   static void deleteArray_R3BFi3a(void *p);
   static void destruct_R3BFi3a(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3a*)
   {
      ::R3BFi3a *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3a >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3a", ::R3BFi3a::Class_Version(), "", 89,
                  typeid(::R3BFi3a), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3a::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3a) );
      instance.SetNew(&new_R3BFi3a);
      instance.SetNewArray(&newArray_R3BFi3a);
      instance.SetDelete(&delete_R3BFi3a);
      instance.SetDeleteArray(&deleteArray_R3BFi3a);
      instance.SetDestructor(&destruct_R3BFi3a);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3a*)
   {
      return GenerateInitInstanceLocal((::R3BFi3a*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3a*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3aContFact(void *p = 0);
   static void *newArray_R3BFi3aContFact(Long_t size, void *p);
   static void delete_R3BFi3aContFact(void *p);
   static void deleteArray_R3BFi3aContFact(void *p);
   static void destruct_R3BFi3aContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3aContFact*)
   {
      ::R3BFi3aContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3aContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3aContFact", ::R3BFi3aContFact::Class_Version(), "", 250,
                  typeid(::R3BFi3aContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3aContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3aContFact) );
      instance.SetNew(&new_R3BFi3aContFact);
      instance.SetNewArray(&newArray_R3BFi3aContFact);
      instance.SetDelete(&delete_R3BFi3aContFact);
      instance.SetDeleteArray(&deleteArray_R3BFi3aContFact);
      instance.SetDestructor(&destruct_R3BFi3aContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3aContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFi3aContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3aContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3aDigitizer(void *p = 0);
   static void *newArray_R3BFi3aDigitizer(Long_t size, void *p);
   static void delete_R3BFi3aDigitizer(void *p);
   static void deleteArray_R3BFi3aDigitizer(void *p);
   static void destruct_R3BFi3aDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3aDigitizer*)
   {
      ::R3BFi3aDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3aDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3aDigitizer", ::R3BFi3aDigitizer::Class_Version(), "", 293,
                  typeid(::R3BFi3aDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3aDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3aDigitizer) );
      instance.SetNew(&new_R3BFi3aDigitizer);
      instance.SetNewArray(&newArray_R3BFi3aDigitizer);
      instance.SetDelete(&delete_R3BFi3aDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BFi3aDigitizer);
      instance.SetDestructor(&destruct_R3BFi3aDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3aDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BFi3aDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3aDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3aDigitizerCal(void *p = 0);
   static void *newArray_R3BFi3aDigitizerCal(Long_t size, void *p);
   static void delete_R3BFi3aDigitizerCal(void *p);
   static void deleteArray_R3BFi3aDigitizerCal(void *p);
   static void destruct_R3BFi3aDigitizerCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3aDigitizerCal*)
   {
      ::R3BFi3aDigitizerCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3aDigitizerCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3aDigitizerCal", ::R3BFi3aDigitizerCal::Class_Version(), "", 371,
                  typeid(::R3BFi3aDigitizerCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3aDigitizerCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3aDigitizerCal) );
      instance.SetNew(&new_R3BFi3aDigitizerCal);
      instance.SetNewArray(&newArray_R3BFi3aDigitizerCal);
      instance.SetDelete(&delete_R3BFi3aDigitizerCal);
      instance.SetDeleteArray(&deleteArray_R3BFi3aDigitizerCal);
      instance.SetDestructor(&destruct_R3BFi3aDigitizerCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3aDigitizerCal*)
   {
      return GenerateInitInstanceLocal((::R3BFi3aDigitizerCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3aDigitizerCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3aCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3aCal2Hit::Class_Name()
{
   return "R3BFi3aCal2Hit";
}

//______________________________________________________________________________
const char *R3BFi3aCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3aCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3aCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3aCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3aMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3aMapped2Cal::Class_Name()
{
   return "R3BFi3aMapped2Cal";
}

//______________________________________________________________________________
const char *R3BFi3aMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3aMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3aMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3aMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3a::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3a::Class_Name()
{
   return "R3BFi3a";
}

//______________________________________________________________________________
const char *R3BFi3a::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3a*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3a::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3a*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3a::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3a*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3a::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3a*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3aContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3aContFact::Class_Name()
{
   return "R3BFi3aContFact";
}

//______________________________________________________________________________
const char *R3BFi3aContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3aContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3aContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3aContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3aDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3aDigitizer::Class_Name()
{
   return "R3BFi3aDigitizer";
}

//______________________________________________________________________________
const char *R3BFi3aDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3aDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3aDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3aDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3aDigitizerCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3aDigitizerCal::Class_Name()
{
   return "R3BFi3aDigitizerCal";
}

//______________________________________________________________________________
const char *R3BFi3aDigitizerCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizerCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3aDigitizerCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizerCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3aDigitizerCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizerCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3aDigitizerCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3aDigitizerCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFi3aCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3aCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3aCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3aCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi3aCal2Hit(void *p) {
      delete ((::R3BFi3aCal2Hit*)p);
   }
   static void deleteArray_R3BFi3aCal2Hit(void *p) {
      delete [] ((::R3BFi3aCal2Hit*)p);
   }
   static void destruct_R3BFi3aCal2Hit(void *p) {
      typedef ::R3BFi3aCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3aCal2Hit

//______________________________________________________________________________
void R3BFi3aMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3aMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3aMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3aMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi3aMapped2Cal(void *p) {
      delete ((::R3BFi3aMapped2Cal*)p);
   }
   static void deleteArray_R3BFi3aMapped2Cal(void *p) {
      delete [] ((::R3BFi3aMapped2Cal*)p);
   }
   static void destruct_R3BFi3aMapped2Cal(void *p) {
      typedef ::R3BFi3aMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3aMapped2Cal

//______________________________________________________________________________
void R3BFi3a::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3a.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3a::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3a::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3a(void *p) {
      return  p ? new(p) ::R3BFi3a : new ::R3BFi3a;
   }
   static void *newArray_R3BFi3a(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3a[nElements] : new ::R3BFi3a[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3a(void *p) {
      delete ((::R3BFi3a*)p);
   }
   static void deleteArray_R3BFi3a(void *p) {
      delete [] ((::R3BFi3a*)p);
   }
   static void destruct_R3BFi3a(void *p) {
      typedef ::R3BFi3a current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3a

//______________________________________________________________________________
void R3BFi3aContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3aContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3aContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3aContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3aContFact(void *p) {
      return  p ? new(p) ::R3BFi3aContFact : new ::R3BFi3aContFact;
   }
   static void *newArray_R3BFi3aContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3aContFact[nElements] : new ::R3BFi3aContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3aContFact(void *p) {
      delete ((::R3BFi3aContFact*)p);
   }
   static void deleteArray_R3BFi3aContFact(void *p) {
      delete [] ((::R3BFi3aContFact*)p);
   }
   static void destruct_R3BFi3aContFact(void *p) {
      typedef ::R3BFi3aContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3aContFact

//______________________________________________________________________________
void R3BFi3aDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3aDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3aDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3aDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3aDigitizer(void *p) {
      return  p ? new(p) ::R3BFi3aDigitizer : new ::R3BFi3aDigitizer;
   }
   static void *newArray_R3BFi3aDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3aDigitizer[nElements] : new ::R3BFi3aDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3aDigitizer(void *p) {
      delete ((::R3BFi3aDigitizer*)p);
   }
   static void deleteArray_R3BFi3aDigitizer(void *p) {
      delete [] ((::R3BFi3aDigitizer*)p);
   }
   static void destruct_R3BFi3aDigitizer(void *p) {
      typedef ::R3BFi3aDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3aDigitizer

//______________________________________________________________________________
void R3BFi3aDigitizerCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3aDigitizerCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3aDigitizerCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3aDigitizerCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3aDigitizerCal(void *p) {
      return  p ? new(p) ::R3BFi3aDigitizerCal : new ::R3BFi3aDigitizerCal;
   }
   static void *newArray_R3BFi3aDigitizerCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3aDigitizerCal[nElements] : new ::R3BFi3aDigitizerCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3aDigitizerCal(void *p) {
      delete ((::R3BFi3aDigitizerCal*)p);
   }
   static void deleteArray_R3BFi3aDigitizerCal(void *p) {
      delete [] ((::R3BFi3aDigitizerCal*)p);
   }
   static void destruct_R3BFi3aDigitizerCal(void *p) {
      typedef ::R3BFi3aDigitizerCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3aDigitizerCal

namespace {
  void TriggerDictionaryInitialization_G__R3BFi3aDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/fi3a",
"/work/R3BRoot/fiber",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/tcal",
"/work/R3BRoot/tracking",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/fi3a/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BFi3aDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFi3aCal2Hit;
class R3BFi3aMapped2Cal;
class R3BFi3a;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Fi4 parameter containers)ATTRDUMP"))) R3BFi3aContFact;
class R3BFi3aDigitizer;
class R3BFi3aDigitizerCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BFi3aDict dictionary payload"

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

#ifndef R3BFI3ACAL2HIT
#define R3BFI3ACAL2HIT

#include "R3BBunchedFiberCal2Hit.h"

class R3BFi3aCal2Hit : public R3BBunchedFiberCal2Hit
{
  public:
    R3BFi3aCal2Hit(enum R3BTCalEngine::CTDCVariant, Direction, Bool_t, Bool_t, Bool_t, Int_t = 1);
    virtual ~R3BFi3aCal2Hit();
    UInt_t FixMistake(UInt_t);

    ClassDef(R3BFi3aCal2Hit, 1)
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

#ifndef R3BFI3AMAPPED2CAL
#define R3BFI3AMAPPED2CAL

#include "R3BBunchedFiberMapped2Cal.h"

class R3BFi3aMapped2Cal : public R3BBunchedFiberMapped2Cal
{
  public:
    R3BFi3aMapped2Cal(Int_t, enum R3BTCalEngine::CTDCVariant);
    virtual ~R3BFi3aMapped2Cal();

    ClassDef(R3BFi3aMapped2Cal, 1)
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

#ifndef R3BFi3a_H
#define R3BFi3a_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BFibPoint;
class FairVolume;
class R3BTGeoPar;

class R3BFi3a : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BFi3a();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BFi3a(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BFi3a(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BFi3a();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BFi3aPoint and adds it to the
     ** collection.
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
    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts();

    //  void SaveGeoParams();

  private:
    /** Track information to be stored until the track leaves the
    active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fVolumeID;                //!  volume id
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime_in;            //!  time when entering active volume
    Double32_t fTime_out;           //!  time when exiting active volume
    Double32_t fTime;               //!  time
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    TClonesArray* fFi3aCollection;  //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    R3BTGeoPar* fTGeoPar; //!

    /** Private method AddHit
     **
     ** Adds a FibPoint to the HitCollection
     **/
    R3BFibPoint* AddHit(Int_t trackID,
                        Int_t detID,
                        Int_t plane,
                        TVector3 posIn,
                        TVector3 pos_out,
                        TVector3 momIn,
                        TVector3 momOut,
                        Double_t time,
                        Double_t length,
                        Double_t eLoss);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BFi3a, 2);
};

inline void R3BFi3a::ResetParameters()
{
    fTrackID = fVolumeID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = 0;
    fPosIndex = 0;
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

#ifndef R3BFI3aCONTFACT_H
#define R3BFI3aCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BFi3aContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BFi3aContFact();
    ~R3BFi3aContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BFi3aContFact, 0) // Factory for all Fi4 parameter containers
};

#endif /* !R3BFI3aCONTFACT_H */
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

// R3BFi3aDigitizer.h

#ifndef R3BFi3aDIGITIZER_H
#define R3BFi3aDIGITIZER_H 1

#include "FairTask.h"
#include "R3BBunchedFiberHitData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi3aDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi3aDigitizer();

    R3BFi3aDigitizer(Double_t esigma, Double_t tsigma, Double_t ysigma);

    /** Destructor **/
    ~R3BFi3aDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    void SetEnergyResolution(Double_t e);
    void SetTimeResolution(Double_t t);
    void SetYPositionResolution(Double_t y);

  protected:
    TClonesArray* fFi3aPoints;

    TClonesArray* fMCTrack;

    TClonesArray* fFi3aHits;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Double_t ysigma;

    Float_t detector_height = 10.000000;
    Float_t fiber_thickness = 0.021000;
    Int_t fiber_nbr = 512;
    Float_t dead_layer = 0.9;
    Float_t air_layer = 0.01; // relative to fiber_thickness
    Float_t detector_width = fiber_nbr * fiber_thickness * (1 + air_layer);

    ClassDef(R3BFi3aDigitizer, 1);
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

// R3BFi3aDigitizerCal.h

#ifndef R3BFi3aDIGITIZERCAL_H
#define R3BFi3aDIGITIZERCAL_H 1

#include "FairTask.h"
#include "R3BBunchedFiberCalData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi3aDigitizerCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi3aDigitizerCal();

    R3BFi3aDigitizerCal(const char* name, Int_t iVerbose = 1);
   
    /** Destructor **/
   virtual  ~R3BFi3aDigitizerCal();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    
    virtual void Reset();

    inline void SetEnergyResolution(Double_t e)
    {
		esigma = e;
    }    
    inline void SetTimeResolution(Double_t t)
    {
	    tsigma = t;	
	}	
    inline void SetYPositionResolution(Double_t y)
    {
		ysigma = y;
	}	

  protected:
    TClonesArray* fFi3aPoints;

    TClonesArray* fMCTrack;

    TClonesArray* fFi3aCals;
    TClonesArray* fFi3aTriggerCals;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Double_t ysigma;

    Float_t detector_height = 10.000000;
    Float_t fiber_thickness = 0.021000;
    Int_t fiber_nbr = 512;
    Float_t dead_layer = 0.9;
    Float_t air_layer = 0.01; // relative to fiber_thickness
    Float_t detector_width = fiber_nbr * fiber_thickness * (1 + air_layer);

    ClassDef(R3BFi3aDigitizerCal, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFi3a", payloadCode, "@",
"R3BFi3aCal2Hit", payloadCode, "@",
"R3BFi3aContFact", payloadCode, "@",
"R3BFi3aDigitizer", payloadCode, "@",
"R3BFi3aDigitizerCal", payloadCode, "@",
"R3BFi3aMapped2Cal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BFi3aDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BFi3aDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BFi3aDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BFi3aDict() {
  TriggerDictionaryInitialization_G__R3BFi3aDict_Impl();
}
