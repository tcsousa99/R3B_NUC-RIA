// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIpdcdIG__R3BPdcDict

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
#include "R3BGeoPdcPar.h"
#include "R3BPdcContFact.h"
#include "R3BPdcMapped2CalPar.h"
#include "R3BPdcMapped2Cal.h"
#include "R3BPdcCal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BGeoPdcPar(void *p = 0);
   static void *newArray_R3BGeoPdcPar(Long_t size, void *p);
   static void delete_R3BGeoPdcPar(void *p);
   static void deleteArray_R3BGeoPdcPar(void *p);
   static void destruct_R3BGeoPdcPar(void *p);
   static void streamer_R3BGeoPdcPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoPdcPar*)
   {
      ::R3BGeoPdcPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoPdcPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoPdcPar", ::R3BGeoPdcPar::Class_Version(), "", 26,
                  typeid(::R3BGeoPdcPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoPdcPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoPdcPar) );
      instance.SetNew(&new_R3BGeoPdcPar);
      instance.SetNewArray(&newArray_R3BGeoPdcPar);
      instance.SetDelete(&delete_R3BGeoPdcPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoPdcPar);
      instance.SetDestructor(&destruct_R3BGeoPdcPar);
      instance.SetStreamerFunc(&streamer_R3BGeoPdcPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoPdcPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoPdcPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoPdcPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcContFact(void *p = 0);
   static void *newArray_R3BPdcContFact(Long_t size, void *p);
   static void delete_R3BPdcContFact(void *p);
   static void deleteArray_R3BPdcContFact(void *p);
   static void destruct_R3BPdcContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcContFact*)
   {
      ::R3BPdcContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcContFact", ::R3BPdcContFact::Class_Version(), "", 67,
                  typeid(::R3BPdcContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcContFact) );
      instance.SetNew(&new_R3BPdcContFact);
      instance.SetNewArray(&newArray_R3BPdcContFact);
      instance.SetDelete(&delete_R3BPdcContFact);
      instance.SetDeleteArray(&deleteArray_R3BPdcContFact);
      instance.SetDestructor(&destruct_R3BPdcContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcContFact*)
   {
      return GenerateInitInstanceLocal((::R3BPdcContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcMapped2CalPar(void *p = 0);
   static void *newArray_R3BPdcMapped2CalPar(Long_t size, void *p);
   static void delete_R3BPdcMapped2CalPar(void *p);
   static void deleteArray_R3BPdcMapped2CalPar(void *p);
   static void destruct_R3BPdcMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcMapped2CalPar*)
   {
      ::R3BPdcMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcMapped2CalPar", ::R3BPdcMapped2CalPar::Class_Version(), "", 117,
                  typeid(::R3BPdcMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcMapped2CalPar) );
      instance.SetNew(&new_R3BPdcMapped2CalPar);
      instance.SetNewArray(&newArray_R3BPdcMapped2CalPar);
      instance.SetDelete(&delete_R3BPdcMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BPdcMapped2CalPar);
      instance.SetDestructor(&destruct_R3BPdcMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BPdcMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BPdcMapped2Cal(void *p);
   static void deleteArray_R3BPdcMapped2Cal(void *p);
   static void destruct_R3BPdcMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcMapped2Cal*)
   {
      ::R3BPdcMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcMapped2Cal", ::R3BPdcMapped2Cal::Class_Version(), "", 234,
                  typeid(::R3BPdcMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcMapped2Cal) );
      instance.SetDelete(&delete_R3BPdcMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BPdcMapped2Cal);
      instance.SetDestructor(&destruct_R3BPdcMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BPdcMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcCal2Hit(void *p = 0);
   static void *newArray_R3BPdcCal2Hit(Long_t size, void *p);
   static void delete_R3BPdcCal2Hit(void *p);
   static void deleteArray_R3BPdcCal2Hit(void *p);
   static void destruct_R3BPdcCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcCal2Hit*)
   {
      ::R3BPdcCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcCal2Hit", ::R3BPdcCal2Hit::Class_Version(), "", 361,
                  typeid(::R3BPdcCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcCal2Hit) );
      instance.SetNew(&new_R3BPdcCal2Hit);
      instance.SetNewArray(&newArray_R3BPdcCal2Hit);
      instance.SetDelete(&delete_R3BPdcCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BPdcCal2Hit);
      instance.SetDestructor(&destruct_R3BPdcCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BPdcCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoPdcPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoPdcPar::Class_Name()
{
   return "R3BGeoPdcPar";
}

//______________________________________________________________________________
const char *R3BGeoPdcPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPdcPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoPdcPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPdcPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoPdcPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPdcPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoPdcPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPdcPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcContFact::Class_Name()
{
   return "R3BPdcContFact";
}

//______________________________________________________________________________
const char *R3BPdcContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcMapped2CalPar::Class_Name()
{
   return "R3BPdcMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BPdcMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcMapped2Cal::Class_Name()
{
   return "R3BPdcMapped2Cal";
}

//______________________________________________________________________________
const char *R3BPdcMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcCal2Hit::Class_Name()
{
   return "R3BPdcCal2Hit";
}

//______________________________________________________________________________
const char *R3BPdcCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BGeoPdcPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoPdcPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoPdcPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoPdcPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoPdcPar(void *p) {
      return  p ? new(p) ::R3BGeoPdcPar : new ::R3BGeoPdcPar;
   }
   static void *newArray_R3BGeoPdcPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoPdcPar[nElements] : new ::R3BGeoPdcPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoPdcPar(void *p) {
      delete ((::R3BGeoPdcPar*)p);
   }
   static void deleteArray_R3BGeoPdcPar(void *p) {
      delete [] ((::R3BGeoPdcPar*)p);
   }
   static void destruct_R3BGeoPdcPar(void *p) {
      typedef ::R3BGeoPdcPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoPdcPar(TBuffer &buf, void *obj) {
      ((::R3BGeoPdcPar*)obj)->::R3BGeoPdcPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoPdcPar

//______________________________________________________________________________
void R3BPdcContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcContFact(void *p) {
      return  p ? new(p) ::R3BPdcContFact : new ::R3BPdcContFact;
   }
   static void *newArray_R3BPdcContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcContFact[nElements] : new ::R3BPdcContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcContFact(void *p) {
      delete ((::R3BPdcContFact*)p);
   }
   static void deleteArray_R3BPdcContFact(void *p) {
      delete [] ((::R3BPdcContFact*)p);
   }
   static void destruct_R3BPdcContFact(void *p) {
      typedef ::R3BPdcContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcContFact

//______________________________________________________________________________
void R3BPdcMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BPdcMapped2CalPar : new ::R3BPdcMapped2CalPar;
   }
   static void *newArray_R3BPdcMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcMapped2CalPar[nElements] : new ::R3BPdcMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcMapped2CalPar(void *p) {
      delete ((::R3BPdcMapped2CalPar*)p);
   }
   static void deleteArray_R3BPdcMapped2CalPar(void *p) {
      delete [] ((::R3BPdcMapped2CalPar*)p);
   }
   static void destruct_R3BPdcMapped2CalPar(void *p) {
      typedef ::R3BPdcMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcMapped2CalPar

//______________________________________________________________________________
void R3BPdcMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BPdcMapped2Cal(void *p) {
      delete ((::R3BPdcMapped2Cal*)p);
   }
   static void deleteArray_R3BPdcMapped2Cal(void *p) {
      delete [] ((::R3BPdcMapped2Cal*)p);
   }
   static void destruct_R3BPdcMapped2Cal(void *p) {
      typedef ::R3BPdcMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcMapped2Cal

//______________________________________________________________________________
void R3BPdcCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcCal2Hit(void *p) {
      return  p ? new(p) ::R3BPdcCal2Hit : new ::R3BPdcCal2Hit;
   }
   static void *newArray_R3BPdcCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcCal2Hit[nElements] : new ::R3BPdcCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcCal2Hit(void *p) {
      delete ((::R3BPdcCal2Hit*)p);
   }
   static void deleteArray_R3BPdcCal2Hit(void *p) {
      delete [] ((::R3BPdcCal2Hit*)p);
   }
   static void destruct_R3BPdcCal2Hit(void *p) {
      typedef ::R3BPdcCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcCal2Hit

namespace ROOT {
   static TClass *vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_Dictionary();
   static void vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p);
   static void destruct_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<R3BPdcCal2Hit::Channel> >*)
   {
      vector<vector<R3BPdcCal2Hit::Channel> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<R3BPdcCal2Hit::Channel> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<R3BPdcCal2Hit::Channel> >", -2, "vector", 214,
                  typeid(vector<vector<R3BPdcCal2Hit::Channel> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<R3BPdcCal2Hit::Channel> >) );
      instance.SetNew(&new_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<R3BPdcCal2Hit::Channel> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<R3BPdcCal2Hit::Channel> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<R3BPdcCal2Hit::Channel> >*)0x0)->GetClass();
      vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BPdcCal2Hit::Channel> > : new vector<vector<R3BPdcCal2Hit::Channel> >;
   }
   static void *newArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BPdcCal2Hit::Channel> >[nElements] : new vector<vector<R3BPdcCal2Hit::Channel> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p) {
      delete ((vector<vector<R3BPdcCal2Hit::Channel> >*)p);
   }
   static void deleteArray_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p) {
      delete [] ((vector<vector<R3BPdcCal2Hit::Channel> >*)p);
   }
   static void destruct_vectorlEvectorlER3BPdcCal2HitcLcLChannelgRsPgR(void *p) {
      typedef vector<vector<R3BPdcCal2Hit::Channel> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<R3BPdcCal2Hit::Channel> >

namespace ROOT {
   static TClass *vectorlER3BPdcCal2HitcLcLChannelgR_Dictionary();
   static void vectorlER3BPdcCal2HitcLcLChannelgR_TClassManip(TClass*);
   static void *new_vectorlER3BPdcCal2HitcLcLChannelgR(void *p = 0);
   static void *newArray_vectorlER3BPdcCal2HitcLcLChannelgR(Long_t size, void *p);
   static void delete_vectorlER3BPdcCal2HitcLcLChannelgR(void *p);
   static void deleteArray_vectorlER3BPdcCal2HitcLcLChannelgR(void *p);
   static void destruct_vectorlER3BPdcCal2HitcLcLChannelgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BPdcCal2Hit::Channel>*)
   {
      vector<R3BPdcCal2Hit::Channel> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BPdcCal2Hit::Channel>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BPdcCal2Hit::Channel>", -2, "vector", 214,
                  typeid(vector<R3BPdcCal2Hit::Channel>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BPdcCal2HitcLcLChannelgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BPdcCal2Hit::Channel>) );
      instance.SetNew(&new_vectorlER3BPdcCal2HitcLcLChannelgR);
      instance.SetNewArray(&newArray_vectorlER3BPdcCal2HitcLcLChannelgR);
      instance.SetDelete(&delete_vectorlER3BPdcCal2HitcLcLChannelgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BPdcCal2HitcLcLChannelgR);
      instance.SetDestructor(&destruct_vectorlER3BPdcCal2HitcLcLChannelgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BPdcCal2Hit::Channel> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BPdcCal2Hit::Channel>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BPdcCal2HitcLcLChannelgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BPdcCal2Hit::Channel>*)0x0)->GetClass();
      vectorlER3BPdcCal2HitcLcLChannelgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BPdcCal2HitcLcLChannelgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BPdcCal2HitcLcLChannelgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BPdcCal2Hit::Channel> : new vector<R3BPdcCal2Hit::Channel>;
   }
   static void *newArray_vectorlER3BPdcCal2HitcLcLChannelgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BPdcCal2Hit::Channel>[nElements] : new vector<R3BPdcCal2Hit::Channel>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BPdcCal2HitcLcLChannelgR(void *p) {
      delete ((vector<R3BPdcCal2Hit::Channel>*)p);
   }
   static void deleteArray_vectorlER3BPdcCal2HitcLcLChannelgR(void *p) {
      delete [] ((vector<R3BPdcCal2Hit::Channel>*)p);
   }
   static void destruct_vectorlER3BPdcCal2HitcLcLChannelgR(void *p) {
      typedef vector<R3BPdcCal2Hit::Channel> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BPdcCal2Hit::Channel>

namespace {
  void TriggerDictionaryInitialization_G__R3BPdcDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/pdc",
"/work/R3BRoot/tcal",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/r3bdata/pdcData",
"/work/R3BRoot/tracking",
"/work/R3BRoot/r3bsource",
"/work/R3BRoot/r3bsource/ext",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/pdc/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BPdcDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BGeoPdcPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Pdc parameter containers)ATTRDUMP"))) R3BPdcContFact;
class R3BPdcMapped2CalPar;
class R3BPdcMapped2Cal;
class R3BPdcCal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BPdcDict dictionary payload"

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

#ifndef R3BGEOPDCPAR_H
#define R3BGEOPDCPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoPdcPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoPdcPar(const char* name = "R3BGeoPdcPar",
                  const char* title = "Pdc Geometry Parameters",
                  const char* context = "TestDefaultContext");
    ~R3BGeoPdcPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoPdcPar, 1)
};

#endif /* !R3BGEOPDCPAR_H */
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

#ifndef R3BPDCCONTFACT_H
#define R3BPDCCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BPdcContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BPdcContFact();
    ~R3BPdcContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BPdcContFact, 0) // Factory for all Pdc parameter containers
};

#endif /* !R3BPDCCONTFACT_H */
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

// ----------------------------------------------------------------
// ----- Create time calib parameters for Pdc via Clock TDC   -----
// ----------------------------------------------------------------

#ifndef R3BPDCMAPPED2TCALPAR_H
#define R3BPDCMAPPED2TCALPAR_H

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
class R3BPdcMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPdcMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPdcMapped2CalPar(const char*, Int_t = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPdcMapped2CalPar();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    InitStatus Init();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    void Exec(Option_t*);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    void FinishTask();

    /**
     * Method for setting the update rate for control histograms
     * @param rate an update rate value (events).
     */
    void SetUpdateRate(Int_t);

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries in TDC
     * distribution greater than minimum statistics will be
     * calibrated.
     * @param minStats a value of minimum statistics required.
     */
    void SetMinStats(Int_t);

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */

    R3BTCalPar* fCalPar;   /**< Parameter container. */
    TClonesArray* fMapped; /**< Array with mapped data - input data. */
    TClonesArray* fMappedTrigger; /**< Array with mapped trigger data - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BPdcMapped2CalPar, 1)
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


#ifndef R3BPDCMAPPED2TCAL
#define R3BPDCMAPPED2TCAL

#include <vector>

#include "FairTask.h"

class TClonesArray;
class R3BTCalPar;
class R3BPdcMappedData;
class R3BPdcCalData;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BPdcMapped2CalFill task.
 */
class R3BPdcMapped2Cal : public FairTask
{
  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPdcMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPdcMapped2Cal(Int_t = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPdcMapped2Cal();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    InitStatus Init();

    /**
     * Method for initialization of the parameter containers.
     * Called by the framework prior to Init() method.
     */
    void SetParContainers();

    /**
     * Method for re-initialization of parameter containers
     * in case the Run ID has changed.
     */
    InitStatus ReInit();

    /**
     * Method for event loop implementation.
     * Is called by the framework every time a new event is read.
     * @param option an execution option.
     */
    void Exec(Option_t*);

    /**
     * A method for finish of processing of an event.
     * Is called by the framework for each event after executing
     * the tasks.
     */
    void FinishEvent();

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    void FinishTask();

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }

  private:
    TClonesArray* fMappedItems; /**< Array with mapped items - input data. */
    TClonesArray* fCalItems;    /**< Array with cal items - output data. */
    TClonesArray* fCalTriggerItems;    /**< Array with cal trigger items - output data. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    Double_t fClockFreq;     /**< Clock cycle in [ns]. */
    Int_t fnEvents;

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

  public:
    ClassDef(R3BPdcMapped2Cal, 1)
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
// -----                 R3BPdcCal2Hit                   -----
// -----         Created June 2nd 2020 by M.Heil          -----
// ------------------------------------------------------------

#ifndef R3BPDCCAL2HIT
#define R3BPDCCAL2HIT

#include <list>
#include <map>

#include "FairTask.h"
#include "THnSparse.h"

class TClonesArray;
class R3BPdcHitModulePar;
class R3BPdcHitPar;
class R3BEventHeader;
class TH1F;
class TH2F;
class R3BPdcCalData;

/**
 * An analysis task to apply HIT calibration for Pdc.
 * it also applies walk corrections and Z-calibration
 */
class R3BPdcCal2Hit : public FairTask
{
  public:
    struct ToT
    {
        ToT(R3BPdcCalData const*, R3BPdcCalData const*, Double_t, Double_t, Double_t);
        R3BPdcCalData const* lead;
        R3BPdcCalData const* trail;
        Double_t lead_ns, tail_ns, tot_ns;
    };
    struct Channel
    {
        std::list<R3BPdcCalData const*> lead_list;
        std::list<ToT> tot_list;
    };

    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPdcCal2Hit();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPdcCal2Hit(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPdcCal2Hit();

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

    virtual void SetParContainers();

  private:
    TClonesArray* fCalItems;        /**< Array with Cal items - input data. */
    TClonesArray* fCalTriggerItems; /**< Array with trigger Cal items - input data. */
    TClonesArray* fHitItems;        /**< Array with Hit items - output data. */
    UInt_t fNofHitItems;            /**< Number of hit items for cur event. */
                                    //    R3BPdcHitPar* fHitPar;     /**< Hit parameter container. */
    UInt_t fNofHitPars;             /**< Number of modules in parameter file. */
    R3BEventHeader* header;         /**< Event header - input data. */
    Double_t fClockFreq;            /**< Clock cycle in [ns]. */
    UInt_t maxevent;
    UInt_t fnEvents;

    typedef std::vector<Channel> ChannelArray;
    std::vector<ChannelArray> fPlaneArray;

  public:
    ClassDef(R3BPdcCal2Hit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoPdcPar", payloadCode, "@",
"R3BPdcCal2Hit", payloadCode, "@",
"R3BPdcContFact", payloadCode, "@",
"R3BPdcMapped2Cal", payloadCode, "@",
"R3BPdcMapped2CalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BPdcDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BPdcDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BPdcDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BPdcDict() {
  TriggerDictionaryInitialization_G__R3BPdcDict_Impl();
}
