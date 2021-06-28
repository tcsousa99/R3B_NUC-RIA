// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfi3bdIG__R3BFi3bDict

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
#include "R3BFi3bCal2Hit.h"
#include "R3BFi3bMapped2Cal.h"
#include "R3BFi3b.h"
#include "R3BFi3bContFact.h"
#include "R3BFi3bDigitizer.h"
#include "R3BFi3bDigitizerCal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BFi3bCal2Hit(void *p);
   static void deleteArray_R3BFi3bCal2Hit(void *p);
   static void destruct_R3BFi3bCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3bCal2Hit*)
   {
      ::R3BFi3bCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3bCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3bCal2Hit", ::R3BFi3bCal2Hit::Class_Version(), "", 24,
                  typeid(::R3BFi3bCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3bCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3bCal2Hit) );
      instance.SetDelete(&delete_R3BFi3bCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BFi3bCal2Hit);
      instance.SetDestructor(&destruct_R3BFi3bCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3bCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BFi3bCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3bCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi3bMapped2Cal(void *p);
   static void deleteArray_R3BFi3bMapped2Cal(void *p);
   static void destruct_R3BFi3bMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3bMapped2Cal*)
   {
      ::R3BFi3bMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3bMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3bMapped2Cal", ::R3BFi3bMapped2Cal::Class_Version(), "", 54,
                  typeid(::R3BFi3bMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3bMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3bMapped2Cal) );
      instance.SetDelete(&delete_R3BFi3bMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BFi3bMapped2Cal);
      instance.SetDestructor(&destruct_R3BFi3bMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3bMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BFi3bMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3bMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3b(void *p = 0);
   static void *newArray_R3BFi3b(Long_t size, void *p);
   static void delete_R3BFi3b(void *p);
   static void deleteArray_R3BFi3b(void *p);
   static void destruct_R3BFi3b(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3b*)
   {
      ::R3BFi3b *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3b >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3b", ::R3BFi3b::Class_Version(), "", 89,
                  typeid(::R3BFi3b), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3b::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3b) );
      instance.SetNew(&new_R3BFi3b);
      instance.SetNewArray(&newArray_R3BFi3b);
      instance.SetDelete(&delete_R3BFi3b);
      instance.SetDeleteArray(&deleteArray_R3BFi3b);
      instance.SetDestructor(&destruct_R3BFi3b);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3b*)
   {
      return GenerateInitInstanceLocal((::R3BFi3b*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3b*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3bContFact(void *p = 0);
   static void *newArray_R3BFi3bContFact(Long_t size, void *p);
   static void delete_R3BFi3bContFact(void *p);
   static void deleteArray_R3BFi3bContFact(void *p);
   static void destruct_R3BFi3bContFact(void *p);
   static void streamer_R3BFi3bContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3bContFact*)
   {
      ::R3BFi3bContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3bContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3bContFact", ::R3BFi3bContFact::Class_Version(), "", 250,
                  typeid(::R3BFi3bContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3bContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BFi3bContFact) );
      instance.SetNew(&new_R3BFi3bContFact);
      instance.SetNewArray(&newArray_R3BFi3bContFact);
      instance.SetDelete(&delete_R3BFi3bContFact);
      instance.SetDeleteArray(&deleteArray_R3BFi3bContFact);
      instance.SetDestructor(&destruct_R3BFi3bContFact);
      instance.SetStreamerFunc(&streamer_R3BFi3bContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3bContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFi3bContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3bContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3bDigitizer(void *p = 0);
   static void *newArray_R3BFi3bDigitizer(Long_t size, void *p);
   static void delete_R3BFi3bDigitizer(void *p);
   static void deleteArray_R3BFi3bDigitizer(void *p);
   static void destruct_R3BFi3bDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3bDigitizer*)
   {
      ::R3BFi3bDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3bDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3bDigitizer", ::R3BFi3bDigitizer::Class_Version(), "", 293,
                  typeid(::R3BFi3bDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3bDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3bDigitizer) );
      instance.SetNew(&new_R3BFi3bDigitizer);
      instance.SetNewArray(&newArray_R3BFi3bDigitizer);
      instance.SetDelete(&delete_R3BFi3bDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BFi3bDigitizer);
      instance.SetDestructor(&destruct_R3BFi3bDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3bDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BFi3bDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3bDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi3bDigitizerCal(void *p = 0);
   static void *newArray_R3BFi3bDigitizerCal(Long_t size, void *p);
   static void delete_R3BFi3bDigitizerCal(void *p);
   static void deleteArray_R3BFi3bDigitizerCal(void *p);
   static void destruct_R3BFi3bDigitizerCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi3bDigitizerCal*)
   {
      ::R3BFi3bDigitizerCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi3bDigitizerCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi3bDigitizerCal", ::R3BFi3bDigitizerCal::Class_Version(), "", 371,
                  typeid(::R3BFi3bDigitizerCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi3bDigitizerCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi3bDigitizerCal) );
      instance.SetNew(&new_R3BFi3bDigitizerCal);
      instance.SetNewArray(&newArray_R3BFi3bDigitizerCal);
      instance.SetDelete(&delete_R3BFi3bDigitizerCal);
      instance.SetDeleteArray(&deleteArray_R3BFi3bDigitizerCal);
      instance.SetDestructor(&destruct_R3BFi3bDigitizerCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi3bDigitizerCal*)
   {
      return GenerateInitInstanceLocal((::R3BFi3bDigitizerCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi3bDigitizerCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3bCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3bCal2Hit::Class_Name()
{
   return "R3BFi3bCal2Hit";
}

//______________________________________________________________________________
const char *R3BFi3bCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3bCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3bCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3bCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3bMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3bMapped2Cal::Class_Name()
{
   return "R3BFi3bMapped2Cal";
}

//______________________________________________________________________________
const char *R3BFi3bMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3bMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3bMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3bMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3b::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3b::Class_Name()
{
   return "R3BFi3b";
}

//______________________________________________________________________________
const char *R3BFi3b::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3b*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3b::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3b*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3b::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3b*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3b::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3b*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3bContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3bContFact::Class_Name()
{
   return "R3BFi3bContFact";
}

//______________________________________________________________________________
const char *R3BFi3bContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3bContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3bContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3bContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3bDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3bDigitizer::Class_Name()
{
   return "R3BFi3bDigitizer";
}

//______________________________________________________________________________
const char *R3BFi3bDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3bDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3bDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3bDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi3bDigitizerCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi3bDigitizerCal::Class_Name()
{
   return "R3BFi3bDigitizerCal";
}

//______________________________________________________________________________
const char *R3BFi3bDigitizerCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizerCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi3bDigitizerCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizerCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi3bDigitizerCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizerCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi3bDigitizerCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi3bDigitizerCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFi3bCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3bCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3bCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3bCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi3bCal2Hit(void *p) {
      delete ((::R3BFi3bCal2Hit*)p);
   }
   static void deleteArray_R3BFi3bCal2Hit(void *p) {
      delete [] ((::R3BFi3bCal2Hit*)p);
   }
   static void destruct_R3BFi3bCal2Hit(void *p) {
      typedef ::R3BFi3bCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3bCal2Hit

//______________________________________________________________________________
void R3BFi3bMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3bMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3bMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3bMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi3bMapped2Cal(void *p) {
      delete ((::R3BFi3bMapped2Cal*)p);
   }
   static void deleteArray_R3BFi3bMapped2Cal(void *p) {
      delete [] ((::R3BFi3bMapped2Cal*)p);
   }
   static void destruct_R3BFi3bMapped2Cal(void *p) {
      typedef ::R3BFi3bMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3bMapped2Cal

//______________________________________________________________________________
void R3BFi3b::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3b.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3b::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3b::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3b(void *p) {
      return  p ? new(p) ::R3BFi3b : new ::R3BFi3b;
   }
   static void *newArray_R3BFi3b(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3b[nElements] : new ::R3BFi3b[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3b(void *p) {
      delete ((::R3BFi3b*)p);
   }
   static void deleteArray_R3BFi3b(void *p) {
      delete [] ((::R3BFi3b*)p);
   }
   static void destruct_R3BFi3b(void *p) {
      typedef ::R3BFi3b current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3b

//______________________________________________________________________________
void R3BFi3bContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3bContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3bContFact(void *p) {
      return  p ? new(p) ::R3BFi3bContFact : new ::R3BFi3bContFact;
   }
   static void *newArray_R3BFi3bContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3bContFact[nElements] : new ::R3BFi3bContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3bContFact(void *p) {
      delete ((::R3BFi3bContFact*)p);
   }
   static void deleteArray_R3BFi3bContFact(void *p) {
      delete [] ((::R3BFi3bContFact*)p);
   }
   static void destruct_R3BFi3bContFact(void *p) {
      typedef ::R3BFi3bContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BFi3bContFact(TBuffer &buf, void *obj) {
      ((::R3BFi3bContFact*)obj)->::R3BFi3bContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BFi3bContFact

//______________________________________________________________________________
void R3BFi3bDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3bDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3bDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3bDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3bDigitizer(void *p) {
      return  p ? new(p) ::R3BFi3bDigitizer : new ::R3BFi3bDigitizer;
   }
   static void *newArray_R3BFi3bDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3bDigitizer[nElements] : new ::R3BFi3bDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3bDigitizer(void *p) {
      delete ((::R3BFi3bDigitizer*)p);
   }
   static void deleteArray_R3BFi3bDigitizer(void *p) {
      delete [] ((::R3BFi3bDigitizer*)p);
   }
   static void destruct_R3BFi3bDigitizer(void *p) {
      typedef ::R3BFi3bDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3bDigitizer

//______________________________________________________________________________
void R3BFi3bDigitizerCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi3bDigitizerCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi3bDigitizerCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi3bDigitizerCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi3bDigitizerCal(void *p) {
      return  p ? new(p) ::R3BFi3bDigitizerCal : new ::R3BFi3bDigitizerCal;
   }
   static void *newArray_R3BFi3bDigitizerCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi3bDigitizerCal[nElements] : new ::R3BFi3bDigitizerCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi3bDigitizerCal(void *p) {
      delete ((::R3BFi3bDigitizerCal*)p);
   }
   static void deleteArray_R3BFi3bDigitizerCal(void *p) {
      delete [] ((::R3BFi3bDigitizerCal*)p);
   }
   static void destruct_R3BFi3bDigitizerCal(void *p) {
      typedef ::R3BFi3bDigitizerCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi3bDigitizerCal

namespace {
  void TriggerDictionaryInitialization_G__R3BFi3bDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/fi3b",
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
"/work/R3BRoot/build/fi3b/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BFi3bDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFi3bCal2Hit;
class R3BFi3bMapped2Cal;
class R3BFi3b;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Fi4 parameter containers)ATTRDUMP"))) R3BFi3bContFact;
class R3BFi3bDigitizer;
class R3BFi3bDigitizerCal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BFi3bDict dictionary payload"

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

#ifndef R3BFI3BCAL2HIT
#define R3BFI3BCAL2HIT

#include "R3BBunchedFiberCal2Hit.h"

class R3BFi3bCal2Hit : public R3BBunchedFiberCal2Hit
{
  public:
    R3BFi3bCal2Hit(enum R3BTCalEngine::CTDCVariant, Direction, Bool_t, Bool_t, Bool_t, Int_t = 1);
    virtual ~R3BFi3bCal2Hit();
    UInt_t FixMistake(UInt_t);

    ClassDef(R3BFi3bCal2Hit, 1)
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

#ifndef R3BFI3BMAPPED2CAL
#define R3BFI3BMAPPED2CAL

#include "R3BBunchedFiberMapped2Cal.h"

class R3BFi3bMapped2Cal : public R3BBunchedFiberMapped2Cal
{
  public:
    R3BFi3bMapped2Cal(Int_t, enum R3BTCalEngine::CTDCVariant);
    virtual ~R3BFi3bMapped2Cal();

    ClassDef(R3BFi3bMapped2Cal, 1)
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

#ifndef R3BFi3b_H
#define R3BFi3b_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BFibPoint;
class FairVolume;
class R3BTGeoPar;

class R3BFi3b : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BFi3b();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BFi3b(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BFi3b(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BFi3b();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BFi3bPoint and adds it to the
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
    TClonesArray* fFi3bCollection;  //!  The hit collection
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

    ClassDef(R3BFi3b, 2);
};

inline void R3BFi3b::ResetParameters()
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

#ifndef R3BFI3bCONTFACT_H
#define R3BFI3bCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BFi3bContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BFi3bContFact();
    ~R3BFi3bContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BFi3bContFact, 0) // Factory for all Fi4 parameter containers
};

#endif /* !R3BFI3bCONTFACT_H */
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

// R3BFi3bDigitizer.h

#ifndef R3BFi3bDIGITIZER_H
#define R3BFi3bDIGITIZER_H 1

#include "FairTask.h"
#include "R3BBunchedFiberHitData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi3bDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi3bDigitizer();

    R3BFi3bDigitizer(Double_t esigma, Double_t tsigma, Double_t ysigma);

    /** Destructor **/
    ~R3BFi3bDigitizer();

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
    TClonesArray* fFi3bPoints;

    TClonesArray* fMCTrack;

    TClonesArray* fFi3bHits;

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

    ClassDef(R3BFi3bDigitizer, 1);
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

// R3BFi3bDigitizerCal.h

#ifndef R3BFi3bDIGITIZERCAL_H
#define R3BFi3bDIGITIZERCAL_H 1

#include "FairTask.h"
#include "R3BBunchedFiberCalData.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi3bDigitizerCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi3bDigitizerCal();

    R3BFi3bDigitizerCal(const char* name, Int_t iVerbose = 1);
   
    /** Destructor **/
   virtual  ~R3BFi3bDigitizerCal();

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
    TClonesArray* fFi3bPoints;

    TClonesArray* fMCTrack;

    TClonesArray* fFi3bCals;
    TClonesArray* fFi3bTriggerCals;

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

    ClassDef(R3BFi3bDigitizerCal, 1);
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFi3b", payloadCode, "@",
"R3BFi3bCal2Hit", payloadCode, "@",
"R3BFi3bContFact", payloadCode, "@",
"R3BFi3bDigitizer", payloadCode, "@",
"R3BFi3bDigitizerCal", payloadCode, "@",
"R3BFi3bMapped2Cal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BFi3bDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BFi3bDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BFi3bDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BFi3bDict() {
  TriggerDictionaryInitialization_G__R3BFi3bDict_Impl();
}
