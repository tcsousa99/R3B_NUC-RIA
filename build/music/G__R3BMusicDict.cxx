// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddImusicdIG__R3BMusicDict

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
#include "R3BMusic.h"
#include "R3BMusicCalPar.h"
#include "R3BMusicHitPar.h"
#include "R3BMusicContFact.h"
#include "R3BMusicMapped2Cal.h"
#include "R3BMusicCal2Hit.h"
#include "R3BMusicOnlineSpectra.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BMusic(void *p = 0);
   static void *newArray_R3BMusic(Long_t size, void *p);
   static void delete_R3BMusic(void *p);
   static void deleteArray_R3BMusic(void *p);
   static void destruct_R3BMusic(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusic*)
   {
      ::R3BMusic *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusic >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusic", ::R3BMusic::Class_Version(), "", 31,
                  typeid(::R3BMusic), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusic::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusic) );
      instance.SetNew(&new_R3BMusic);
      instance.SetNewArray(&newArray_R3BMusic);
      instance.SetDelete(&delete_R3BMusic);
      instance.SetDeleteArray(&deleteArray_R3BMusic);
      instance.SetDestructor(&destruct_R3BMusic);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusic*)
   {
      return GenerateInitInstanceLocal((::R3BMusic*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusic*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicCalPar(void *p = 0);
   static void *newArray_R3BMusicCalPar(Long_t size, void *p);
   static void delete_R3BMusicCalPar(void *p);
   static void deleteArray_R3BMusicCalPar(void *p);
   static void destruct_R3BMusicCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicCalPar*)
   {
      ::R3BMusicCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicCalPar", ::R3BMusicCalPar::Class_Version(), "", 208,
                  typeid(::R3BMusicCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicCalPar) );
      instance.SetNew(&new_R3BMusicCalPar);
      instance.SetNewArray(&newArray_R3BMusicCalPar);
      instance.SetDelete(&delete_R3BMusicCalPar);
      instance.SetDeleteArray(&deleteArray_R3BMusicCalPar);
      instance.SetDestructor(&destruct_R3BMusicCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BMusicCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicHitPar(void *p = 0);
   static void *newArray_R3BMusicHitPar(Long_t size, void *p);
   static void delete_R3BMusicHitPar(void *p);
   static void deleteArray_R3BMusicHitPar(void *p);
   static void destruct_R3BMusicHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicHitPar*)
   {
      ::R3BMusicHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicHitPar", ::R3BMusicHitPar::Class_Version(), "", 298,
                  typeid(::R3BMusicHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicHitPar) );
      instance.SetNew(&new_R3BMusicHitPar);
      instance.SetNewArray(&newArray_R3BMusicHitPar);
      instance.SetDelete(&delete_R3BMusicHitPar);
      instance.SetDeleteArray(&deleteArray_R3BMusicHitPar);
      instance.SetDestructor(&destruct_R3BMusicHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BMusicHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicContFact(void *p = 0);
   static void *newArray_R3BMusicContFact(Long_t size, void *p);
   static void delete_R3BMusicContFact(void *p);
   static void deleteArray_R3BMusicContFact(void *p);
   static void destruct_R3BMusicContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicContFact*)
   {
      ::R3BMusicContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicContFact", ::R3BMusicContFact::Class_Version(), "", 378,
                  typeid(::R3BMusicContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicContFact) );
      instance.SetNew(&new_R3BMusicContFact);
      instance.SetNewArray(&newArray_R3BMusicContFact);
      instance.SetDelete(&delete_R3BMusicContFact);
      instance.SetDeleteArray(&deleteArray_R3BMusicContFact);
      instance.SetDestructor(&destruct_R3BMusicContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicContFact*)
   {
      return GenerateInitInstanceLocal((::R3BMusicContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicMapped2Cal(void *p = 0);
   static void *newArray_R3BMusicMapped2Cal(Long_t size, void *p);
   static void delete_R3BMusicMapped2Cal(void *p);
   static void deleteArray_R3BMusicMapped2Cal(void *p);
   static void destruct_R3BMusicMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicMapped2Cal*)
   {
      ::R3BMusicMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicMapped2Cal", ::R3BMusicMapped2Cal::Class_Version(), "", 428,
                  typeid(::R3BMusicMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicMapped2Cal) );
      instance.SetNew(&new_R3BMusicMapped2Cal);
      instance.SetNewArray(&newArray_R3BMusicMapped2Cal);
      instance.SetDelete(&delete_R3BMusicMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BMusicMapped2Cal);
      instance.SetDestructor(&destruct_R3BMusicMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BMusicMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicCal2Hit(void *p = 0);
   static void *newArray_R3BMusicCal2Hit(Long_t size, void *p);
   static void delete_R3BMusicCal2Hit(void *p);
   static void deleteArray_R3BMusicCal2Hit(void *p);
   static void destruct_R3BMusicCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicCal2Hit*)
   {
      ::R3BMusicCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicCal2Hit", ::R3BMusicCal2Hit::Class_Version(), "", 526,
                  typeid(::R3BMusicCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicCal2Hit) );
      instance.SetNew(&new_R3BMusicCal2Hit);
      instance.SetNewArray(&newArray_R3BMusicCal2Hit);
      instance.SetDelete(&delete_R3BMusicCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BMusicCal2Hit);
      instance.SetDestructor(&destruct_R3BMusicCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BMusicCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicOnlineSpectra(void *p = 0);
   static void *newArray_R3BMusicOnlineSpectra(Long_t size, void *p);
   static void delete_R3BMusicOnlineSpectra(void *p);
   static void deleteArray_R3BMusicOnlineSpectra(void *p);
   static void destruct_R3BMusicOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicOnlineSpectra*)
   {
      ::R3BMusicOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicOnlineSpectra", ::R3BMusicOnlineSpectra::Class_Version(), "", 630,
                  typeid(::R3BMusicOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicOnlineSpectra) );
      instance.SetNew(&new_R3BMusicOnlineSpectra);
      instance.SetNewArray(&newArray_R3BMusicOnlineSpectra);
      instance.SetDelete(&delete_R3BMusicOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BMusicOnlineSpectra);
      instance.SetDestructor(&destruct_R3BMusicOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BMusicOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BMusic::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusic::Class_Name()
{
   return "R3BMusic";
}

//______________________________________________________________________________
const char *R3BMusic::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusic*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusic::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusic*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusic::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusic*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusic::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusic*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicCalPar::Class_Name()
{
   return "R3BMusicCalPar";
}

//______________________________________________________________________________
const char *R3BMusicCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicHitPar::Class_Name()
{
   return "R3BMusicHitPar";
}

//______________________________________________________________________________
const char *R3BMusicHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicContFact::Class_Name()
{
   return "R3BMusicContFact";
}

//______________________________________________________________________________
const char *R3BMusicContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicMapped2Cal::Class_Name()
{
   return "R3BMusicMapped2Cal";
}

//______________________________________________________________________________
const char *R3BMusicMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicCal2Hit::Class_Name()
{
   return "R3BMusicCal2Hit";
}

//______________________________________________________________________________
const char *R3BMusicCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicOnlineSpectra::Class_Name()
{
   return "R3BMusicOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BMusicOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BMusic::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusic.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusic::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusic::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusic(void *p) {
      return  p ? new(p) ::R3BMusic : new ::R3BMusic;
   }
   static void *newArray_R3BMusic(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusic[nElements] : new ::R3BMusic[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusic(void *p) {
      delete ((::R3BMusic*)p);
   }
   static void deleteArray_R3BMusic(void *p) {
      delete [] ((::R3BMusic*)p);
   }
   static void destruct_R3BMusic(void *p) {
      typedef ::R3BMusic current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusic

//______________________________________________________________________________
void R3BMusicCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicCalPar(void *p) {
      return  p ? new(p) ::R3BMusicCalPar : new ::R3BMusicCalPar;
   }
   static void *newArray_R3BMusicCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicCalPar[nElements] : new ::R3BMusicCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicCalPar(void *p) {
      delete ((::R3BMusicCalPar*)p);
   }
   static void deleteArray_R3BMusicCalPar(void *p) {
      delete [] ((::R3BMusicCalPar*)p);
   }
   static void destruct_R3BMusicCalPar(void *p) {
      typedef ::R3BMusicCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicCalPar

//______________________________________________________________________________
void R3BMusicHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicHitPar(void *p) {
      return  p ? new(p) ::R3BMusicHitPar : new ::R3BMusicHitPar;
   }
   static void *newArray_R3BMusicHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicHitPar[nElements] : new ::R3BMusicHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicHitPar(void *p) {
      delete ((::R3BMusicHitPar*)p);
   }
   static void deleteArray_R3BMusicHitPar(void *p) {
      delete [] ((::R3BMusicHitPar*)p);
   }
   static void destruct_R3BMusicHitPar(void *p) {
      typedef ::R3BMusicHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicHitPar

//______________________________________________________________________________
void R3BMusicContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicContFact(void *p) {
      return  p ? new(p) ::R3BMusicContFact : new ::R3BMusicContFact;
   }
   static void *newArray_R3BMusicContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicContFact[nElements] : new ::R3BMusicContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicContFact(void *p) {
      delete ((::R3BMusicContFact*)p);
   }
   static void deleteArray_R3BMusicContFact(void *p) {
      delete [] ((::R3BMusicContFact*)p);
   }
   static void destruct_R3BMusicContFact(void *p) {
      typedef ::R3BMusicContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicContFact

//______________________________________________________________________________
void R3BMusicMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicMapped2Cal(void *p) {
      return  p ? new(p) ::R3BMusicMapped2Cal : new ::R3BMusicMapped2Cal;
   }
   static void *newArray_R3BMusicMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicMapped2Cal[nElements] : new ::R3BMusicMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicMapped2Cal(void *p) {
      delete ((::R3BMusicMapped2Cal*)p);
   }
   static void deleteArray_R3BMusicMapped2Cal(void *p) {
      delete [] ((::R3BMusicMapped2Cal*)p);
   }
   static void destruct_R3BMusicMapped2Cal(void *p) {
      typedef ::R3BMusicMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicMapped2Cal

//______________________________________________________________________________
void R3BMusicCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicCal2Hit(void *p) {
      return  p ? new(p) ::R3BMusicCal2Hit : new ::R3BMusicCal2Hit;
   }
   static void *newArray_R3BMusicCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicCal2Hit[nElements] : new ::R3BMusicCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicCal2Hit(void *p) {
      delete ((::R3BMusicCal2Hit*)p);
   }
   static void deleteArray_R3BMusicCal2Hit(void *p) {
      delete [] ((::R3BMusicCal2Hit*)p);
   }
   static void destruct_R3BMusicCal2Hit(void *p) {
      typedef ::R3BMusicCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicCal2Hit

//______________________________________________________________________________
void R3BMusicOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BMusicOnlineSpectra : new ::R3BMusicOnlineSpectra;
   }
   static void *newArray_R3BMusicOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicOnlineSpectra[nElements] : new ::R3BMusicOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicOnlineSpectra(void *p) {
      delete ((::R3BMusicOnlineSpectra*)p);
   }
   static void deleteArray_R3BMusicOnlineSpectra(void *p) {
      delete [] ((::R3BMusicOnlineSpectra*)p);
   }
   static void destruct_R3BMusicOnlineSpectra(void *p) {
      typedef ::R3BMusicOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicOnlineSpectra

namespace {
  void TriggerDictionaryInitialization_G__R3BMusicDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/music",
"/work/R3BRoot/tracking",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/musicData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/music/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BMusicDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BMusic;
class R3BMusicCalPar;
class R3BMusicHitPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all R3BMUSIC parameter containers)ATTRDUMP"))) R3BMusicContFact;
class R3BMusicMapped2Cal;
class R3BMusicCal2Hit;
class R3BMusicOnlineSpectra;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BMusicDict dictionary payload"

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

#ifndef R3BMusic_H
#define R3BMusic_H

#include "R3BDetector.h"
#include "TLorentzVector.h"
#include <map>

class TClonesArray;
class R3BMusicPoint;
class FairVolume;
class TGeoRotation;

class R3BMusic : public R3BDetector
{
  public:
    /** Default constructor */
    R3BMusic();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BMusic(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BMusic(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BMusic();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BMusicPoint and adds it
     ** to the collection.
     *@param vol  Pointer to the active volume
     **/
    virtual Bool_t ProcessHits(FairVolume* vol = 0);

    /** Virtual method BeginEvent
     **
     ** Actions at the begin of the event
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
    virtual void SetSpecialPhysicsCuts() {}

  private:
    /** Track information to be stored until the track leaves the
        active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fTrackPID;                //!  particle identification
    Int_t fVolumeID;                //!  volume id
    Int_t fDetCopyID;               //!  Det volume id
    Double_t fZ;                    //!  atomic number fragment
    Double_t fA;                    //!  mass number fragment
    Int_t fParentTrackID;           //!  parent track index
    Int_t fUniqueID;                //!  particle unique id (e.g. if Delta electron, fUniqueID=9)
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime;               //!  time
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    Int_t fNSteps;                  //!  Number of steps in the active volume
    Double32_t fEinc;               //!  Total incident energy
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    TClonesArray* fMusicCollection; //!  The point collection

    /** Private method AddHit
     **
     ** Adds a MusicPoint to the HitCollection
     **/
    R3BMusicPoint* AddPoint(Int_t trackID,
                            Int_t detID,
                            Int_t volid,
                            Double_t Z,
                            Double_t A,
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

    TGeoRotation* createMatrix(Double_t phi, Double_t theta, Double_t psi);

    ClassDef(R3BMusic, 1);
};

inline void R3BMusic::ResetParameters()
{
    fTrackID = fVolumeID = fParentTrackID = fTrackPID = fUniqueID = 0;
    fDetCopyID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = fEinc = fZ = fA = 0;
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

// ------------------------------------------------------------------
// -----             R3BMusicCalPar source file                 -----
// -----         Created 24/11/19  by J.L. Rodriguez-Sanchez    -----
// ------------------------------------------------------------------

#ifndef R3BMusicCalPar_H
#define R3BMusicCalPar_H

#include "FairParGenericSet.h" // for FairParGenericSet

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

class FairParamList;

class R3BMusicCalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BMusicCalPar(const char* name = "musicCalPar",
                   const char* title = "MUSIC Cal Parameters",
                   const char* context = "MusicCalParContext");

    /** Destructor **/
    virtual ~R3BMusicCalPar();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Int_t GetNumAnodes() { return fNumAnodes; }
    const Int_t GetNumParamsEFit() { return fNumParamsEFit; }
    const Int_t GetNumParamsPosFit() { return fNumParamsPosFit; }
    const Int_t GetInUse(Int_t anode) { return fIn_use->GetAt(anode - 1); }
    TArrayF* GetAnodeCalParams() { return fAnodeCalParams; }
    TArrayF* GetPosParams() { return fPosParams; }

    void SetNumAnodes(Int_t numberAnodes) { fNumAnodes = numberAnodes; }
    void SetNumParamsEFit(Int_t numberParams) { fNumParamsEFit = numberParams; }
    void SetNumParamsPosFit(Int_t numberParams) { fNumParamsPosFit = numberParams; }
    void SetInUse(Int_t value, Int_t anode) { fIn_use->AddAt(value, anode - 1); }
    void SetAnodeCalParams(Float_t cc, Int_t ii) { fAnodeCalParams->AddAt(cc, ii); }
    void SetPosParams(Float_t cc, Int_t ii) { fPosParams->AddAt(cc, ii); }

    // Create more Methods if you need them!

  private:
    TArrayF* fAnodeCalParams; // Energy calibration parameters for anodes
    TArrayF* fPosParams;      // Position calibration parameters for anodes
    TArrayI* fIn_use;         // 1: anode ready, 0:otherwise
    Int_t fNumAnodes;         // number of anodes
    Int_t fNumParamsEFit;     /* number of cal parameters in the fit
                                gaus: A_fit & B_fit & C_fit*/
    Int_t fNumParamsPosFit;   // number of parameters for position calibration

    const R3BMusicCalPar& operator=(const R3BMusicCalPar&); /*< an assignment operator>*/

    R3BMusicCalPar(const R3BMusicCalPar&); /*< a copy constructor >*/

    ClassDef(R3BMusicCalPar, 1);
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

// --------------------------------------------------------------
// -----          R3BMusicHitPar source file                -----
// -----     Created 24/11/19  by J.L. Rodriguez-Sanchez    -----
// --------------------------------------------------------------

#ifndef R3BMusicHitPar_H
#define R3BMusicHitPar_H

#include "FairParGenericSet.h" // for FairParGenericSet

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

class FairParamList;

class R3BMusicHitPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BMusicHitPar(const char* name = "musicHitPar",
                   const char* title = "MUSIC Hit Parameters",
                   const char* context = "MusicHitParContext");

    /** Destructor **/
    virtual ~R3BMusicHitPar();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Int_t GetNumParZFit() { return fNumParamsZFit; }
    const Int_t GetNumAnodes() { return fNumAnodes; }
    const Int_t GetInUse(Int_t anode) { return fIn_use->GetAt(anode - 1); }
    const Float_t GetAnodePos(Int_t anode) { return fAnode_pos->GetAt(anode - 1); }
    TArrayF* GetZHitPar() { return fDetZHitParams; }

    void SetNumParZFit(Int_t nbParams) { fNumParamsZFit = nbParams; }
    void SetNumAnodes(Int_t nbAnodes) { fNumAnodes = nbAnodes; }
    void SetInUse(Int_t value, Int_t anode) { fIn_use->AddAt(value, anode - 1); }
    void SetZHitPar(Double_t cc, Int_t ii) { fDetZHitParams->AddAt(cc, ii); }
    void SetAnodePos(Float_t value, Int_t anode) { fAnode_pos->AddAt(value, anode - 1); }

    // Create more Methods if you need them!

  private:
    TArrayF* fDetZHitParams; // Calibration Parameters for charge Z
    TArrayI* fIn_use;        // 1: anode ready, 0:otherwise
    TArrayF* fAnode_pos;     // Position of each anode along the beam direction
    Int_t fNumAnodes;        // Number of anodes
    Int_t fNumParamsZFit;    // number of hit parameters in the fit for charge Z

    const R3BMusicHitPar& operator=(const R3BMusicHitPar&); /*< an assignment operator>*/

    R3BMusicHitPar(const R3BMusicHitPar&); /*< a copy constructor >*/

    ClassDef(R3BMusicHitPar, 1);
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

// ------------------------------------------------------------------
// -----             R3BMusicContFact source file               -----
// -----         Created 24/11/19  by J.L. Rodriguez-Sanchez    -----
// ------------------------------------------------------------------

#ifndef R3BMusicContFact_H
#define R3BMusicContFact_H

#include "FairContFact.h"

class FairContainer;

class R3BMusicContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BMusicContFact();
    ~R3BMusicContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BMusicContFact, 0) // Factory for all R3BMUSIC parameter containers
};

#endif /* R3BMusicContFact_H */
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

// -----------------------------------------------------------------
// -----                                                       -----
// -----                R3BMusicMapped2Cal                     -----
// -----        Created 24/11/19  by J.L. Rodriguez-Sanchez    -----
// -----------------------------------------------------------------

#ifndef R3BMusicMapped2Cal_H
#define R3BMusicMapped2Cal_H

#include "FairTask.h"
#include "R3BMusicCalData.h"
#include "R3BMusicMappedData.h"
#include "TH1F.h"
#include <TRandom.h>

#define MAX_MULT_MUSIC_CAL 100
#define MAX_NB_MUSICANODE 8
#define MAX_NB_MUSICTREF 2

class TClonesArray;
class R3BMusicCalPar;

class R3BMusicMapped2Cal : public FairTask
{

  public:
    /** Default constructor **/
    R3BMusicMapped2Cal();

    /** Standard constructor **/
    R3BMusicMapped2Cal(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BMusicMapped2Cal();

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
    void SetParameters();

    Int_t fNumAnodes;
    Int_t fMaxMult;
    Int_t fNumParams;
    Int_t fNumPosParams;
    Int_t fNumAnodesRef;
    Int_t fMaxSigma;
    TArrayF* CalParams;
    TArrayF* PosParams;

    Int_t mulanode[MAX_NB_MUSICANODE + MAX_NB_MUSICTREF];
    Double_t energy[MAX_MULT_MUSIC_CAL][MAX_NB_MUSICANODE + MAX_NB_MUSICTREF];
    Double_t dtime[MAX_MULT_MUSIC_CAL][MAX_NB_MUSICANODE + MAX_NB_MUSICTREF];

    Bool_t fOnline; // Don't store data for online

    R3BMusicCalPar* fCal_Par;         /**< Parameter container. >*/
    TClonesArray* fMusicMappedDataCA; /**< Array with Music Mapped-input data. >*/
    TClonesArray* fMusicCalDataCA;    /**< Array with Music Cal-output data. >*/

    /** Private method AddCalData **/
    //** Adds a MusicCalData to the anodeCalCollection
    R3BMusicCalData* AddCalData(UShort_t anodeid, Double_t dtime, Double_t energy);

  public:
    // Class definition
    ClassDef(R3BMusicMapped2Cal, 1)
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

// -------------------------------------------------------------
// -----                                                   -----
// -----             R3BMusicCal2Hit                       -----
// -----    Created 30/11/19  by J.L. Rodriguez-Sanchez    -----
// -------------------------------------------------------------

#ifndef R3BMusicCal2Hit_H
#define R3BMusicCal2Hit_H

#include "FairTask.h"
#include "R3BMusicHitData.h"
#include "TH1F.h"
#include "TVectorD.h"
#include <TRandom.h>

class TClonesArray;
class R3BMusicHitPar;

class R3BMusicCal2Hit : public FairTask
{

  public:
    /** Default constructor **/
    R3BMusicCal2Hit();

    /** Standard constructor **/
    R3BMusicCal2Hit(const char* name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BMusicCal2Hit();

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

    /** Method to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    void SetParameter();

    Int_t fNumAnodes;
    Int_t fNumAnodesAngleFit;
    Int_t fNumParams;
    Float_t fZ0, fZ1, fZ2;
    TArrayF* CalZParams;
    Int_t fStatusAnodes[8]; // Status anodes
    Double_t fPosAnodes[8]; // Position-Z of each anode
    TVectorD fPosZ;
    Bool_t fOnline; // Don't store data for online

    R3BMusicHitPar* fCal_Par;      /**< Parameter container. >*/
    TClonesArray* fMusicCalDataCA; /**< Array with Music Cal-input data. >*/
    TClonesArray* fMusicHitDataCA; /**< Array with Music Hit-output data. >*/

    /** Private method MusicHitData **/
    //** Adds a MusicHitData to the detector
    R3BMusicHitData* AddHitData(Double_t theta, Double_t charge_z);
    R3BMusicHitData* AddHitData(Double_t theta, Double_t charge_z, Double_t ene_ave);

  public:
    // Class definition
    ClassDef(R3BMusicCal2Hit, 1)
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
// -----                R3BMusicOnlineSpectra             -----
// -----    Created 06/10/19  by J.L. Rodriguez-Sanchez   -----
// -----           Fill MusIC online histograms           -----
// ------------------------------------------------------------

#ifndef R3BMusicOnlineSpectra_H
#define R3BMusicOnlineSpectra_H

#include "FairTask.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TH2F.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

#define NbAnodesMus 8

class TClonesArray;
class R3BEventHeader;

/**
 * This taks reads MusIC data and plots online histograms
 */
class R3BMusicOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BMusicOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BMusicOnlineSpectra(const TString& name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BMusicOnlineSpectra();

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
     * Methods to clean histograms.
     */
    virtual void Reset_Histo();

    void SetExpId(Int_t exp) { fExpId = exp; }

  private:
    TClonesArray* fMappedItemsMus; /**< Array with mapped items. */
    TClonesArray* fCalItemsMus;    /**< Array with cal items. */
    TClonesArray* fHitItemsMus;    /**< Array with hit items. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header.      */
    Int_t fNEvents;         /**< Event counter.     */
    Int_t fExpId;
    Int_t fERange;
    Int_t fZRange;
    Double_t fE[NbAnodesMus], fT[NbAnodesMus + 2];
    Int_t multhit[NbAnodesMus + 2];

    // Canvas
    TCanvas* cMusMap_E;
    TCanvas* cMusMap_EvsDT;
    TCanvas* cMusMap_DT;
    TCanvas* cMusCal_Pos;
    TCanvas *cMusMap_ESum, *cMus_EsumvsDT, *cMusMap_ESum1, *cMusMap_ESum2, *cMusMap_DTvsDT;
    TCanvas* cMusMap_ESum_vs_diffDT;

    // Histograms for Mapped data
    TH1F* fh1_Musmap_mult;
    TH2F* fh2_Musmap_multhit;
    TH1F* fh1_Mus_treftrigger;
    TH1F* fh1_Musmap_E[NbAnodesMus];
    TH1F* fh1_Musmap_DT[NbAnodesMus];
    TH1F* fh1_Mus_ESum[3];
    TH2F* fh2_Mus_ESum;
    TH2F* fh2_Mus_ESum_vs_DT;
    TH2F* fh2_Mus_EneRawVsDriftTime[NbAnodesMus];
    TH2F* fh2_Mus_DTvsDT[NbAnodesMus - 1];
    TH2F* fh2_Mus_ESum_vs_diffDT;

    // Histograms for Cal data
    TH1F* fh1_Muscal_Pos[NbAnodesMus];

    // Histograms for Hit data
    TH1F* fh1_Mushit_z;
    TH1F* fh1_Mushit_theta;
    TH2F* fh2_Mushit_zvstheta;

  public:
    ClassDef(R3BMusicOnlineSpectra, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BMusic", payloadCode, "@",
"R3BMusicCal2Hit", payloadCode, "@",
"R3BMusicCalPar", payloadCode, "@",
"R3BMusicContFact", payloadCode, "@",
"R3BMusicHitPar", payloadCode, "@",
"R3BMusicMapped2Cal", payloadCode, "@",
"R3BMusicOnlineSpectra", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BMusicDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BMusicDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BMusicDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BMusicDict() {
  TriggerDictionaryInitialization_G__R3BMusicDict_Impl();
}
