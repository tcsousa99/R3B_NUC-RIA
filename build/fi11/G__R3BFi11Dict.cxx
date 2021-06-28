// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfi11dIG__R3BFi11Dict

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
#include "R3BFi11.h"
#include "R3BFi11Cal2Hit.h"
#include "R3BFi11Mapped2Cal.h"
#include "R3BFi11ContFact.h"
#include "R3BFi11Digitizer.h"
#include "R3BFi11DigitizerCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BFi11(void *p = 0);
   static void *newArray_R3BFi11(Long_t size, void *p);
   static void delete_R3BFi11(void *p);
   static void deleteArray_R3BFi11(void *p);
   static void destruct_R3BFi11(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11*)
   {
      ::R3BFi11 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11", ::R3BFi11::Class_Version(), "", 30,
                  typeid(::R3BFi11), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11) );
      instance.SetNew(&new_R3BFi11);
      instance.SetNewArray(&newArray_R3BFi11);
      instance.SetDelete(&delete_R3BFi11);
      instance.SetDeleteArray(&deleteArray_R3BFi11);
      instance.SetDestructor(&destruct_R3BFi11);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11*)
   {
      return GenerateInitInstanceLocal((::R3BFi11*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi11Cal2Hit(void *p);
   static void deleteArray_R3BFi11Cal2Hit(void *p);
   static void destruct_R3BFi11Cal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11Cal2Hit*)
   {
      ::R3BFi11Cal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11Cal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11Cal2Hit", ::R3BFi11Cal2Hit::Class_Version(), "", 189,
                  typeid(::R3BFi11Cal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11Cal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11Cal2Hit) );
      instance.SetDelete(&delete_R3BFi11Cal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BFi11Cal2Hit);
      instance.SetDestructor(&destruct_R3BFi11Cal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11Cal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BFi11Cal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11Cal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi11Mapped2Cal(void *p);
   static void deleteArray_R3BFi11Mapped2Cal(void *p);
   static void destruct_R3BFi11Mapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11Mapped2Cal*)
   {
      ::R3BFi11Mapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11Mapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11Mapped2Cal", ::R3BFi11Mapped2Cal::Class_Version(), "", 219,
                  typeid(::R3BFi11Mapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11Mapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11Mapped2Cal) );
      instance.SetDelete(&delete_R3BFi11Mapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BFi11Mapped2Cal);
      instance.SetDestructor(&destruct_R3BFi11Mapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11Mapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BFi11Mapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11Mapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi11ContFact(void *p = 0);
   static void *newArray_R3BFi11ContFact(Long_t size, void *p);
   static void delete_R3BFi11ContFact(void *p);
   static void deleteArray_R3BFi11ContFact(void *p);
   static void destruct_R3BFi11ContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11ContFact*)
   {
      ::R3BFi11ContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11ContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11ContFact", ::R3BFi11ContFact::Class_Version(), "", 250,
                  typeid(::R3BFi11ContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11ContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11ContFact) );
      instance.SetNew(&new_R3BFi11ContFact);
      instance.SetNewArray(&newArray_R3BFi11ContFact);
      instance.SetDelete(&delete_R3BFi11ContFact);
      instance.SetDeleteArray(&deleteArray_R3BFi11ContFact);
      instance.SetDestructor(&destruct_R3BFi11ContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11ContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFi11ContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11ContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi11Digitizer(void *p = 0);
   static void *newArray_R3BFi11Digitizer(Long_t size, void *p);
   static void delete_R3BFi11Digitizer(void *p);
   static void deleteArray_R3BFi11Digitizer(void *p);
   static void destruct_R3BFi11Digitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11Digitizer*)
   {
      ::R3BFi11Digitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11Digitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11Digitizer", ::R3BFi11Digitizer::Class_Version(), "", 293,
                  typeid(::R3BFi11Digitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11Digitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11Digitizer) );
      instance.SetNew(&new_R3BFi11Digitizer);
      instance.SetNewArray(&newArray_R3BFi11Digitizer);
      instance.SetDelete(&delete_R3BFi11Digitizer);
      instance.SetDeleteArray(&deleteArray_R3BFi11Digitizer);
      instance.SetDestructor(&destruct_R3BFi11Digitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11Digitizer*)
   {
      return GenerateInitInstanceLocal((::R3BFi11Digitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11Digitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi11DigitizerCal(void *p = 0);
   static void *newArray_R3BFi11DigitizerCal(Long_t size, void *p);
   static void delete_R3BFi11DigitizerCal(void *p);
   static void deleteArray_R3BFi11DigitizerCal(void *p);
   static void destruct_R3BFi11DigitizerCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi11DigitizerCal*)
   {
      ::R3BFi11DigitizerCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi11DigitizerCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi11DigitizerCal", ::R3BFi11DigitizerCal::Class_Version(), "", 371,
                  typeid(::R3BFi11DigitizerCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi11DigitizerCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi11DigitizerCal) );
      instance.SetNew(&new_R3BFi11DigitizerCal);
      instance.SetNewArray(&newArray_R3BFi11DigitizerCal);
      instance.SetDelete(&delete_R3BFi11DigitizerCal);
      instance.SetDeleteArray(&deleteArray_R3BFi11DigitizerCal);
      instance.SetDestructor(&destruct_R3BFi11DigitizerCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi11DigitizerCal*)
   {
      return GenerateInitInstanceLocal((::R3BFi11DigitizerCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi11DigitizerCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11::Class_Name()
{
   return "R3BFi11";
}

//______________________________________________________________________________
const char *R3BFi11::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11Cal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11Cal2Hit::Class_Name()
{
   return "R3BFi11Cal2Hit";
}

//______________________________________________________________________________
const char *R3BFi11Cal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Cal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11Cal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Cal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11Cal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Cal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11Cal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Cal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11Mapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11Mapped2Cal::Class_Name()
{
   return "R3BFi11Mapped2Cal";
}

//______________________________________________________________________________
const char *R3BFi11Mapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Mapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11Mapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Mapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11Mapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Mapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11Mapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Mapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11ContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11ContFact::Class_Name()
{
   return "R3BFi11ContFact";
}

//______________________________________________________________________________
const char *R3BFi11ContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11ContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11ContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11ContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11ContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11ContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11ContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11ContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11Digitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11Digitizer::Class_Name()
{
   return "R3BFi11Digitizer";
}

//______________________________________________________________________________
const char *R3BFi11Digitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Digitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11Digitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Digitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11Digitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Digitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11Digitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11Digitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi11DigitizerCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi11DigitizerCal::Class_Name()
{
   return "R3BFi11DigitizerCal";
}

//______________________________________________________________________________
const char *R3BFi11DigitizerCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11DigitizerCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi11DigitizerCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11DigitizerCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi11DigitizerCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11DigitizerCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi11DigitizerCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi11DigitizerCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFi11::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi11(void *p) {
      return  p ? new(p) ::R3BFi11 : new ::R3BFi11;
   }
   static void *newArray_R3BFi11(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi11[nElements] : new ::R3BFi11[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi11(void *p) {
      delete ((::R3BFi11*)p);
   }
   static void deleteArray_R3BFi11(void *p) {
      delete [] ((::R3BFi11*)p);
   }
   static void destruct_R3BFi11(void *p) {
      typedef ::R3BFi11 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11

//______________________________________________________________________________
void R3BFi11Cal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11Cal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11Cal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11Cal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi11Cal2Hit(void *p) {
      delete ((::R3BFi11Cal2Hit*)p);
   }
   static void deleteArray_R3BFi11Cal2Hit(void *p) {
      delete [] ((::R3BFi11Cal2Hit*)p);
   }
   static void destruct_R3BFi11Cal2Hit(void *p) {
      typedef ::R3BFi11Cal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11Cal2Hit

//______________________________________________________________________________
void R3BFi11Mapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11Mapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11Mapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11Mapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi11Mapped2Cal(void *p) {
      delete ((::R3BFi11Mapped2Cal*)p);
   }
   static void deleteArray_R3BFi11Mapped2Cal(void *p) {
      delete [] ((::R3BFi11Mapped2Cal*)p);
   }
   static void destruct_R3BFi11Mapped2Cal(void *p) {
      typedef ::R3BFi11Mapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11Mapped2Cal

//______________________________________________________________________________
void R3BFi11ContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11ContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11ContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11ContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi11ContFact(void *p) {
      return  p ? new(p) ::R3BFi11ContFact : new ::R3BFi11ContFact;
   }
   static void *newArray_R3BFi11ContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi11ContFact[nElements] : new ::R3BFi11ContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi11ContFact(void *p) {
      delete ((::R3BFi11ContFact*)p);
   }
   static void deleteArray_R3BFi11ContFact(void *p) {
      delete [] ((::R3BFi11ContFact*)p);
   }
   static void destruct_R3BFi11ContFact(void *p) {
      typedef ::R3BFi11ContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11ContFact

//______________________________________________________________________________
void R3BFi11Digitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11Digitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11Digitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11Digitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi11Digitizer(void *p) {
      return  p ? new(p) ::R3BFi11Digitizer : new ::R3BFi11Digitizer;
   }
   static void *newArray_R3BFi11Digitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi11Digitizer[nElements] : new ::R3BFi11Digitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi11Digitizer(void *p) {
      delete ((::R3BFi11Digitizer*)p);
   }
   static void deleteArray_R3BFi11Digitizer(void *p) {
      delete [] ((::R3BFi11Digitizer*)p);
   }
   static void destruct_R3BFi11Digitizer(void *p) {
      typedef ::R3BFi11Digitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11Digitizer

//______________________________________________________________________________
void R3BFi11DigitizerCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi11DigitizerCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi11DigitizerCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi11DigitizerCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi11DigitizerCal(void *p) {
      return  p ? new(p) ::R3BFi11DigitizerCal : new ::R3BFi11DigitizerCal;
   }
   static void *newArray_R3BFi11DigitizerCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi11DigitizerCal[nElements] : new ::R3BFi11DigitizerCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi11DigitizerCal(void *p) {
      delete ((::R3BFi11DigitizerCal*)p);
   }
   static void deleteArray_R3BFi11DigitizerCal(void *p) {
      delete [] ((::R3BFi11DigitizerCal*)p);
   }
   static void destruct_R3BFi11DigitizerCal(void *p) {
      typedef ::R3BFi11DigitizerCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi11DigitizerCal

namespace {
  void TriggerDictionaryInitialization_G__R3BFi11Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/fi11",
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
"/work/R3BRoot/build/fi11/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BFi11Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFi11;
class R3BFi11Cal2Hit;
class R3BFi11Mapped2Cal;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Fi4 parameter containers)ATTRDUMP"))) R3BFi11ContFact;
class R3BFi11Digitizer;
class R3BFi11DigitizerCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BFi11Dict dictionary payload"

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

#ifndef R3BFi11_H
#define R3BFi11_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BFibPoint;
class FairVolume;
class R3BTGeoPar;

class R3BFi11 : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BFi11();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BFi11(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BFi11(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BFi11();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BFi11Point and adds it to the
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
    TClonesArray* fFi11Collection;  //!  The hit collection
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

    ClassDef(R3BFi11, 2);
};

inline void R3BFi11::ResetParameters()
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

#ifndef R3BFI11CAL2HIT
#define R3BFI11CAL2HIT

#include "R3BBunchedFiberCal2Hit.h"

class R3BFi11Cal2Hit : public R3BBunchedFiberCal2Hit
{
  public:
    R3BFi11Cal2Hit(enum R3BTCalEngine::CTDCVariant, Bool_t, Bool_t, Bool_t, Int_t = 1);
    virtual ~R3BFi11Cal2Hit();
    UInt_t FixMistake(UInt_t);

    ClassDef(R3BFi11Cal2Hit, 1)
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

#ifndef R3BFI11MAPPED2CAL
#define R3BFI11MAPPED2CAL

#include "R3BBunchedFiberMapped2Cal.h"

class R3BFi11Mapped2Cal : public R3BBunchedFiberMapped2Cal
{
  public:
    R3BFi11Mapped2Cal(Int_t, enum R3BTCalEngine::CTDCVariant);
    virtual ~R3BFi11Mapped2Cal();

    ClassDef(R3BFi11Mapped2Cal, 1)
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

#ifndef R3BFI11CONTFACT_H
#define R3BFI11CONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BFi11ContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BFi11ContFact();
    ~R3BFi11ContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BFi11ContFact, 0) // Factory for all Fi4 parameter containers
};

#endif /* !R3BFI11CONTFACT_H */
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

// R3BFi11Digitizer.h

#ifndef R3BFi11DIGITIZER_H
#define R3BFi11DIGITIZER_H 1

#include "FairTask.h"
#include "R3BBunchedFiberHitData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi11Digitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi11Digitizer();

    R3BFi11Digitizer(Double_t esigma, Double_t tsigma, Double_t ysigma);

    /** Destructor **/
    ~R3BFi11Digitizer();

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
    TClonesArray* fFi11Points;

    TClonesArray* fMCTrack;

    TClonesArray* fFi11Hits;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Double_t ysigma;

    Float_t detector_height = 50.000000;
    Float_t fiber_thickness = 0.050000;
    Int_t fiber_nbr = 1024;
    Float_t dead_layer = 0.9;
    Float_t air_layer = 0.01; // relative to fiber_thickness
    Float_t detector_width = fiber_nbr * fiber_thickness * (1 + air_layer);

    ClassDef(R3BFi11Digitizer, 1);
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

// R3BFi11DigitizerCal.h

#ifndef R3BFi11DIGITIZERCAL_H
#define R3BFi11DIGITIZERCAL_H 1

#include "FairTask.h"
#include "R3BBunchedFiberCalData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi11DigitizerCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi11DigitizerCal();

    R3BFi11DigitizerCal(const char* name, Int_t iVerbose = 1);
   
    /** Destructor **/
   virtual  ~R3BFi11DigitizerCal();

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
    TClonesArray* fFi11Points;

    TClonesArray* fMCTrack;

    TClonesArray* fFi11Cals;
    TClonesArray* fFi11TriggerCals;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Double_t ysigma;

    Float_t detector_height = 50.000000;
    Float_t fiber_thickness = 0.050000;
    Int_t fiber_nbr = 1024;
    Float_t dead_layer = 0.9;
    Float_t air_layer = 0.01; // relative to fiber_thickness
    Float_t detector_width = fiber_nbr * fiber_thickness * (1 + air_layer);

    ClassDef(R3BFi11DigitizerCal, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFi11", payloadCode, "@",
"R3BFi11Cal2Hit", payloadCode, "@",
"R3BFi11ContFact", payloadCode, "@",
"R3BFi11Digitizer", payloadCode, "@",
"R3BFi11DigitizerCal", payloadCode, "@",
"R3BFi11Mapped2Cal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BFi11Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BFi11Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BFi11Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BFi11Dict() {
  TriggerDictionaryInitialization_G__R3BFi11Dict_Impl();
}
