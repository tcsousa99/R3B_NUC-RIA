// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddItrackingdIG__R3BTrackingDict

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
#include "R3BTPropagator.h"
#include "R3BTGeoPar.h"
#include "R3BFragmentTracker.h"
#include "R3BFragmentFitterGeneric.h"
#include "R3BFragmentFitterChi2.h"
#include "R3BTrackingDetector.h"
#include "R3BTrackingParticle.h"
#include "R3BTrackingSetup.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BTPropagator(void *p);
   static void deleteArray_R3BTPropagator(void *p);
   static void destruct_R3BTPropagator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTPropagator*)
   {
      ::R3BTPropagator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTPropagator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTPropagator", ::R3BTPropagator::Class_Version(), "", 33,
                  typeid(::R3BTPropagator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTPropagator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTPropagator) );
      instance.SetDelete(&delete_R3BTPropagator);
      instance.SetDeleteArray(&deleteArray_R3BTPropagator);
      instance.SetDestructor(&destruct_R3BTPropagator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTPropagator*)
   {
      return GenerateInitInstanceLocal((::R3BTPropagator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTPropagator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTGeoPar(void *p = 0);
   static void *newArray_R3BTGeoPar(Long_t size, void *p);
   static void delete_R3BTGeoPar(void *p);
   static void deleteArray_R3BTGeoPar(void *p);
   static void destruct_R3BTGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTGeoPar*)
   {
      ::R3BTGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTGeoPar", ::R3BTGeoPar::Class_Version(), "", 113,
                  typeid(::R3BTGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTGeoPar) );
      instance.SetNew(&new_R3BTGeoPar);
      instance.SetNewArray(&newArray_R3BTGeoPar);
      instance.SetDelete(&delete_R3BTGeoPar);
      instance.SetDeleteArray(&deleteArray_R3BTGeoPar);
      instance.SetDestructor(&destruct_R3BTGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTGeoPar*)
   {
      return GenerateInitInstanceLocal((::R3BTGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFragmentTracker(void *p);
   static void deleteArray_R3BFragmentTracker(void *p);
   static void destruct_R3BFragmentTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFragmentTracker*)
   {
      ::R3BFragmentTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFragmentTracker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFragmentTracker", ::R3BFragmentTracker::Class_Version(), "", 265,
                  typeid(::R3BFragmentTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFragmentTracker::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFragmentTracker) );
      instance.SetDelete(&delete_R3BFragmentTracker);
      instance.SetDeleteArray(&deleteArray_R3BFragmentTracker);
      instance.SetDestructor(&destruct_R3BFragmentTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFragmentTracker*)
   {
      return GenerateInitInstanceLocal((::R3BFragmentTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFragmentTracker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFragmentFitterGeneric(void *p);
   static void deleteArray_R3BFragmentFitterGeneric(void *p);
   static void destruct_R3BFragmentFitterGeneric(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFragmentFitterGeneric*)
   {
      ::R3BFragmentFitterGeneric *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFragmentFitterGeneric >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFragmentFitterGeneric", ::R3BFragmentFitterGeneric::Class_Version(), "", 352,
                  typeid(::R3BFragmentFitterGeneric), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFragmentFitterGeneric::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFragmentFitterGeneric) );
      instance.SetDelete(&delete_R3BFragmentFitterGeneric);
      instance.SetDeleteArray(&deleteArray_R3BFragmentFitterGeneric);
      instance.SetDestructor(&destruct_R3BFragmentFitterGeneric);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFragmentFitterGeneric*)
   {
      return GenerateInitInstanceLocal((::R3BFragmentFitterGeneric*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFragmentFitterGeneric*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFragmentFitterChi2(void *p = 0);
   static void *newArray_R3BFragmentFitterChi2(Long_t size, void *p);
   static void delete_R3BFragmentFitterChi2(void *p);
   static void deleteArray_R3BFragmentFitterChi2(void *p);
   static void destruct_R3BFragmentFitterChi2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFragmentFitterChi2*)
   {
      ::R3BFragmentFitterChi2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFragmentFitterChi2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFragmentFitterChi2", ::R3BFragmentFitterChi2::Class_Version(), "", 396,
                  typeid(::R3BFragmentFitterChi2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFragmentFitterChi2::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFragmentFitterChi2) );
      instance.SetNew(&new_R3BFragmentFitterChi2);
      instance.SetNewArray(&newArray_R3BFragmentFitterChi2);
      instance.SetDelete(&delete_R3BFragmentFitterChi2);
      instance.SetDeleteArray(&deleteArray_R3BFragmentFitterChi2);
      instance.SetDestructor(&destruct_R3BFragmentFitterChi2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFragmentFitterChi2*)
   {
      return GenerateInitInstanceLocal((::R3BFragmentFitterChi2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFragmentFitterChi2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackingParticle(void *p = 0);
   static void *newArray_R3BTrackingParticle(Long_t size, void *p);
   static void delete_R3BTrackingParticle(void *p);
   static void deleteArray_R3BTrackingParticle(void *p);
   static void destruct_R3BTrackingParticle(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackingParticle*)
   {
      ::R3BTrackingParticle *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackingParticle >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackingParticle", ::R3BTrackingParticle::Class_Version(), "R3BTrackingParticle.h", 25,
                  typeid(::R3BTrackingParticle), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackingParticle::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackingParticle) );
      instance.SetNew(&new_R3BTrackingParticle);
      instance.SetNewArray(&newArray_R3BTrackingParticle);
      instance.SetDelete(&delete_R3BTrackingParticle);
      instance.SetDeleteArray(&deleteArray_R3BTrackingParticle);
      instance.SetDestructor(&destruct_R3BTrackingParticle);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackingParticle*)
   {
      return GenerateInitInstanceLocal((::R3BTrackingParticle*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackingParticle*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BTrackingDetector(void *p);
   static void deleteArray_R3BTrackingDetector(void *p);
   static void destruct_R3BTrackingDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackingDetector*)
   {
      ::R3BTrackingDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackingDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackingDetector", ::R3BTrackingDetector::Class_Version(), "", 474,
                  typeid(::R3BTrackingDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackingDetector::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackingDetector) );
      instance.SetDelete(&delete_R3BTrackingDetector);
      instance.SetDeleteArray(&deleteArray_R3BTrackingDetector);
      instance.SetDestructor(&destruct_R3BTrackingDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackingDetector*)
   {
      return GenerateInitInstanceLocal((::R3BTrackingDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackingDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackingSetup(void *p = 0);
   static void *newArray_R3BTrackingSetup(Long_t size, void *p);
   static void delete_R3BTrackingSetup(void *p);
   static void deleteArray_R3BTrackingSetup(void *p);
   static void destruct_R3BTrackingSetup(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackingSetup*)
   {
      ::R3BTrackingSetup *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackingSetup >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackingSetup", ::R3BTrackingSetup::Class_Version(), "", 722,
                  typeid(::R3BTrackingSetup), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackingSetup::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackingSetup) );
      instance.SetNew(&new_R3BTrackingSetup);
      instance.SetNewArray(&newArray_R3BTrackingSetup);
      instance.SetDelete(&delete_R3BTrackingSetup);
      instance.SetDeleteArray(&deleteArray_R3BTrackingSetup);
      instance.SetDestructor(&destruct_R3BTrackingSetup);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackingSetup*)
   {
      return GenerateInitInstanceLocal((::R3BTrackingSetup*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackingSetup*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BTPropagator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTPropagator::Class_Name()
{
   return "R3BTPropagator";
}

//______________________________________________________________________________
const char *R3BTPropagator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTPropagator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTPropagator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTPropagator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTPropagator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTPropagator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTPropagator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTPropagator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTGeoPar::Class_Name()
{
   return "R3BTGeoPar";
}

//______________________________________________________________________________
const char *R3BTGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFragmentTracker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFragmentTracker::Class_Name()
{
   return "R3BFragmentTracker";
}

//______________________________________________________________________________
const char *R3BFragmentTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentTracker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFragmentTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentTracker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFragmentTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentTracker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFragmentTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentTracker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFragmentFitterGeneric::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFragmentFitterGeneric::Class_Name()
{
   return "R3BFragmentFitterGeneric";
}

//______________________________________________________________________________
const char *R3BFragmentFitterGeneric::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterGeneric*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFragmentFitterGeneric::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterGeneric*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFragmentFitterGeneric::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterGeneric*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFragmentFitterGeneric::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterGeneric*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFragmentFitterChi2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFragmentFitterChi2::Class_Name()
{
   return "R3BFragmentFitterChi2";
}

//______________________________________________________________________________
const char *R3BFragmentFitterChi2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterChi2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFragmentFitterChi2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterChi2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFragmentFitterChi2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterChi2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFragmentFitterChi2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFragmentFitterChi2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackingParticle::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackingParticle::Class_Name()
{
   return "R3BTrackingParticle";
}

//______________________________________________________________________________
const char *R3BTrackingParticle::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingParticle*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackingParticle::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingParticle*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackingParticle::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingParticle*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackingParticle::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingParticle*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackingDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackingDetector::Class_Name()
{
   return "R3BTrackingDetector";
}

//______________________________________________________________________________
const char *R3BTrackingDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackingDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackingDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackingDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackingSetup::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackingSetup::Class_Name()
{
   return "R3BTrackingSetup";
}

//______________________________________________________________________________
const char *R3BTrackingSetup::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingSetup*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackingSetup::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingSetup*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackingSetup::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingSetup*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackingSetup::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackingSetup*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BTPropagator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTPropagator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTPropagator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTPropagator::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BTPropagator(void *p) {
      delete ((::R3BTPropagator*)p);
   }
   static void deleteArray_R3BTPropagator(void *p) {
      delete [] ((::R3BTPropagator*)p);
   }
   static void destruct_R3BTPropagator(void *p) {
      typedef ::R3BTPropagator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTPropagator

//______________________________________________________________________________
void R3BTGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTGeoPar(void *p) {
      return  p ? new(p) ::R3BTGeoPar : new ::R3BTGeoPar;
   }
   static void *newArray_R3BTGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTGeoPar[nElements] : new ::R3BTGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTGeoPar(void *p) {
      delete ((::R3BTGeoPar*)p);
   }
   static void deleteArray_R3BTGeoPar(void *p) {
      delete [] ((::R3BTGeoPar*)p);
   }
   static void destruct_R3BTGeoPar(void *p) {
      typedef ::R3BTGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTGeoPar

//______________________________________________________________________________
void R3BFragmentTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFragmentTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFragmentTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFragmentTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFragmentTracker(void *p) {
      delete ((::R3BFragmentTracker*)p);
   }
   static void deleteArray_R3BFragmentTracker(void *p) {
      delete [] ((::R3BFragmentTracker*)p);
   }
   static void destruct_R3BFragmentTracker(void *p) {
      typedef ::R3BFragmentTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFragmentTracker

//______________________________________________________________________________
void R3BFragmentFitterGeneric::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFragmentFitterGeneric.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFragmentFitterGeneric::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFragmentFitterGeneric::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFragmentFitterGeneric(void *p) {
      delete ((::R3BFragmentFitterGeneric*)p);
   }
   static void deleteArray_R3BFragmentFitterGeneric(void *p) {
      delete [] ((::R3BFragmentFitterGeneric*)p);
   }
   static void destruct_R3BFragmentFitterGeneric(void *p) {
      typedef ::R3BFragmentFitterGeneric current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFragmentFitterGeneric

//______________________________________________________________________________
void R3BFragmentFitterChi2::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFragmentFitterChi2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFragmentFitterChi2::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFragmentFitterChi2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFragmentFitterChi2(void *p) {
      return  p ? new(p) ::R3BFragmentFitterChi2 : new ::R3BFragmentFitterChi2;
   }
   static void *newArray_R3BFragmentFitterChi2(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFragmentFitterChi2[nElements] : new ::R3BFragmentFitterChi2[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFragmentFitterChi2(void *p) {
      delete ((::R3BFragmentFitterChi2*)p);
   }
   static void deleteArray_R3BFragmentFitterChi2(void *p) {
      delete [] ((::R3BFragmentFitterChi2*)p);
   }
   static void destruct_R3BFragmentFitterChi2(void *p) {
      typedef ::R3BFragmentFitterChi2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFragmentFitterChi2

//______________________________________________________________________________
void R3BTrackingParticle::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackingParticle.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackingParticle::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackingParticle::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackingParticle(void *p) {
      return  p ? new(p) ::R3BTrackingParticle : new ::R3BTrackingParticle;
   }
   static void *newArray_R3BTrackingParticle(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackingParticle[nElements] : new ::R3BTrackingParticle[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackingParticle(void *p) {
      delete ((::R3BTrackingParticle*)p);
   }
   static void deleteArray_R3BTrackingParticle(void *p) {
      delete [] ((::R3BTrackingParticle*)p);
   }
   static void destruct_R3BTrackingParticle(void *p) {
      typedef ::R3BTrackingParticle current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackingParticle

//______________________________________________________________________________
void R3BTrackingDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackingDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackingDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackingDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BTrackingDetector(void *p) {
      delete ((::R3BTrackingDetector*)p);
   }
   static void deleteArray_R3BTrackingDetector(void *p) {
      delete [] ((::R3BTrackingDetector*)p);
   }
   static void destruct_R3BTrackingDetector(void *p) {
      typedef ::R3BTrackingDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackingDetector

//______________________________________________________________________________
void R3BTrackingSetup::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackingSetup.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackingSetup::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackingSetup::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackingSetup(void *p) {
      return  p ? new(p) ::R3BTrackingSetup : new ::R3BTrackingSetup;
   }
   static void *newArray_R3BTrackingSetup(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackingSetup[nElements] : new ::R3BTrackingSetup[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackingSetup(void *p) {
      delete ((::R3BTrackingSetup*)p);
   }
   static void deleteArray_R3BTrackingSetup(void *p) {
      delete [] ((::R3BTrackingSetup*)p);
   }
   static void destruct_R3BTrackingSetup(void *p) {
      typedef ::R3BTrackingSetup current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackingSetup

namespace ROOT {
   static TClass *vectorlEpairlEstringcOintgRsPgR_Dictionary();
   static void vectorlEpairlEstringcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEpairlEstringcOintgRsPgR(void *p = 0);
   static void *newArray_vectorlEpairlEstringcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEpairlEstringcOintgRsPgR(void *p);
   static void deleteArray_vectorlEpairlEstringcOintgRsPgR(void *p);
   static void destruct_vectorlEpairlEstringcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<pair<string,int> >*)
   {
      vector<pair<string,int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<pair<string,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<pair<string,int> >", -2, "vector", 214,
                  typeid(vector<pair<string,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpairlEstringcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<pair<string,int> >) );
      instance.SetNew(&new_vectorlEpairlEstringcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpairlEstringcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEpairlEstringcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<pair<string,int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<pair<string,int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpairlEstringcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<pair<string,int> >*)0x0)->GetClass();
      vectorlEpairlEstringcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpairlEstringcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpairlEstringcOintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<string,int> > : new vector<pair<string,int> >;
   }
   static void *newArray_vectorlEpairlEstringcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<pair<string,int> >[nElements] : new vector<pair<string,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpairlEstringcOintgRsPgR(void *p) {
      delete ((vector<pair<string,int> >*)p);
   }
   static void deleteArray_vectorlEpairlEstringcOintgRsPgR(void *p) {
      delete [] ((vector<pair<string,int> >*)p);
   }
   static void destruct_vectorlEpairlEstringcOintgRsPgR(void *p) {
      typedef vector<pair<string,int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<pair<string,int> >

namespace ROOT {
   static TClass *vectorlER3BTrackingParticlemUgR_Dictionary();
   static void vectorlER3BTrackingParticlemUgR_TClassManip(TClass*);
   static void *new_vectorlER3BTrackingParticlemUgR(void *p = 0);
   static void *newArray_vectorlER3BTrackingParticlemUgR(Long_t size, void *p);
   static void delete_vectorlER3BTrackingParticlemUgR(void *p);
   static void deleteArray_vectorlER3BTrackingParticlemUgR(void *p);
   static void destruct_vectorlER3BTrackingParticlemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BTrackingParticle*>*)
   {
      vector<R3BTrackingParticle*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BTrackingParticle*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BTrackingParticle*>", -2, "vector", 214,
                  typeid(vector<R3BTrackingParticle*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BTrackingParticlemUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BTrackingParticle*>) );
      instance.SetNew(&new_vectorlER3BTrackingParticlemUgR);
      instance.SetNewArray(&newArray_vectorlER3BTrackingParticlemUgR);
      instance.SetDelete(&delete_vectorlER3BTrackingParticlemUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BTrackingParticlemUgR);
      instance.SetDestructor(&destruct_vectorlER3BTrackingParticlemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BTrackingParticle*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BTrackingParticle*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BTrackingParticlemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BTrackingParticle*>*)0x0)->GetClass();
      vectorlER3BTrackingParticlemUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BTrackingParticlemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BTrackingParticlemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTrackingParticle*> : new vector<R3BTrackingParticle*>;
   }
   static void *newArray_vectorlER3BTrackingParticlemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTrackingParticle*>[nElements] : new vector<R3BTrackingParticle*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BTrackingParticlemUgR(void *p) {
      delete ((vector<R3BTrackingParticle*>*)p);
   }
   static void deleteArray_vectorlER3BTrackingParticlemUgR(void *p) {
      delete [] ((vector<R3BTrackingParticle*>*)p);
   }
   static void destruct_vectorlER3BTrackingParticlemUgR(void *p) {
      typedef vector<R3BTrackingParticle*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BTrackingParticle*>

namespace ROOT {
   static TClass *vectorlER3BTrackingDetectormUgR_Dictionary();
   static void vectorlER3BTrackingDetectormUgR_TClassManip(TClass*);
   static void *new_vectorlER3BTrackingDetectormUgR(void *p = 0);
   static void *newArray_vectorlER3BTrackingDetectormUgR(Long_t size, void *p);
   static void delete_vectorlER3BTrackingDetectormUgR(void *p);
   static void deleteArray_vectorlER3BTrackingDetectormUgR(void *p);
   static void destruct_vectorlER3BTrackingDetectormUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BTrackingDetector*>*)
   {
      vector<R3BTrackingDetector*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BTrackingDetector*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BTrackingDetector*>", -2, "vector", 214,
                  typeid(vector<R3BTrackingDetector*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BTrackingDetectormUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BTrackingDetector*>) );
      instance.SetNew(&new_vectorlER3BTrackingDetectormUgR);
      instance.SetNewArray(&newArray_vectorlER3BTrackingDetectormUgR);
      instance.SetDelete(&delete_vectorlER3BTrackingDetectormUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BTrackingDetectormUgR);
      instance.SetDestructor(&destruct_vectorlER3BTrackingDetectormUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BTrackingDetector*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BTrackingDetector*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BTrackingDetectormUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BTrackingDetector*>*)0x0)->GetClass();
      vectorlER3BTrackingDetectormUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BTrackingDetectormUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BTrackingDetectormUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTrackingDetector*> : new vector<R3BTrackingDetector*>;
   }
   static void *newArray_vectorlER3BTrackingDetectormUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTrackingDetector*>[nElements] : new vector<R3BTrackingDetector*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BTrackingDetectormUgR(void *p) {
      delete ((vector<R3BTrackingDetector*>*)p);
   }
   static void deleteArray_vectorlER3BTrackingDetectormUgR(void *p) {
      delete [] ((vector<R3BTrackingDetector*>*)p);
   }
   static void destruct_vectorlER3BTrackingDetectormUgR(void *p) {
      typedef vector<R3BTrackingDetector*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BTrackingDetector*>

namespace ROOT {
   static TClass *maplEstringcOintgR_Dictionary();
   static void maplEstringcOintgR_TClassManip(TClass*);
   static void *new_maplEstringcOintgR(void *p = 0);
   static void *newArray_maplEstringcOintgR(Long_t size, void *p);
   static void delete_maplEstringcOintgR(void *p);
   static void deleteArray_maplEstringcOintgR(void *p);
   static void destruct_maplEstringcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,int>*)
   {
      map<string,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,int>", -2, "map", 96,
                  typeid(map<string,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<string,int>) );
      instance.SetNew(&new_maplEstringcOintgR);
      instance.SetNewArray(&newArray_maplEstringcOintgR);
      instance.SetDelete(&delete_maplEstringcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOintgR);
      instance.SetDestructor(&destruct_maplEstringcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<string,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<string,int>*)0x0)->GetClass();
      maplEstringcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int> : new map<string,int>;
   }
   static void *newArray_maplEstringcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<string,int>[nElements] : new map<string,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOintgR(void *p) {
      delete ((map<string,int>*)p);
   }
   static void deleteArray_maplEstringcOintgR(void *p) {
      delete [] ((map<string,int>*)p);
   }
   static void destruct_maplEstringcOintgR(void *p) {
      typedef map<string,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<string,int>

namespace {
  void TriggerDictionaryInitialization_G__R3BTrackingDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/tracking",
"/work/R3BRoot/field",
"/work/R3BRoot/tof",
"/work/R3BRoot/passive",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/fibData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/tracking/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BTrackingDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BTPropagator;
class R3BTGeoPar;
class R3BFragmentTracker;
class R3BFragmentFitterGeneric;
class R3BFragmentFitterChi2;
class __attribute__((annotate("$clingAutoload$R3BTrackingParticle.h")))  R3BTrackingParticle;
class R3BTrackingDetector;
class R3BTrackingSetup;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BTrackingDict dictionary payload"

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

#ifndef R3B_T_PROPAGATOR
#define R3B_T_PROPAGATOR

#include "TCanvas.h"
#include "TObject.h"
#include "TVector3.h"

class R3BGladFieldMap;
class FairRKPropagator;
class R3BTGeoPar;
class FairField;
class R3BTrackingParticle;
class R3BTrackingDetector;

class R3BTPropagator : public TObject
{
  public:
    R3BTPropagator(R3BGladFieldMap* field, Bool_t vis = kFALSE);

    virtual ~R3BTPropagator();

    inline void SetmTofGeo(R3BTGeoPar* geo) { fmTofGeo = geo; }

    Bool_t PropagateToDetector(R3BTrackingParticle* particle, R3BTrackingDetector* detector);

    Bool_t PropagateToDetectorBackward(R3BTrackingParticle* particle, R3BTrackingDetector* detector);

    Bool_t PropagateToPlane(R3BTrackingParticle* particle, const TVector3& v1, const TVector3& v2, const TVector3& v3);

    Bool_t PropagateToPlaneBackward(R3BTrackingParticle* particle,
                                    const TVector3& v1,
                                    const TVector3& v2,
                                    const TVector3& v3);

    Bool_t PropagateToPlaneRK(R3BTrackingParticle* particle,
                              const TVector3& v1,
                              const TVector3& v2,
                              const TVector3& v3);

    Bool_t LineIntersectPlane(const TVector3& pos,
                              const TVector3& mom,
                              const TVector3& v1,
                              const TVector3& normal,
                              TVector3& intersect);

    void SetVis(Bool_t vis = kTRUE) { fVis = vis; }

  private:
    FairRKPropagator* fFairProp;

    FairField* fField;

    R3BTGeoPar* fmTofGeo;

    Bool_t fVis;

    TVector3 fPlane1[3];
    TVector3 fPlane2[3];
    TVector3 fNorm1;
    TVector3 fNorm2;

    TCanvas* fc4;

    ClassDef(R3BTPropagator, 1)
};

#endif //! R3B_T_PROPAGATOR
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

#ifndef R3BTGEOPAR_H
#define R3BTGEOPAR_H

#include "FairParGenericSet.h"

using namespace std;

class FairParamList;

/**
 * @author D. Kresan
 * @since November 11, 2016
 */
class R3BTGeoPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BTGeoPar(const char* name = "TGeoPar",
               const char* title = "Geometry parameters",
               const char* context = "TestDefaultContext",
               Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BTGeoPar(void);

    /**
     * Method to reset the values of parameters.
     */
    virtual void clear(void);

    /**
     * Method to store parameters using FairRuntimeDB.
     * @param list a list of parameters.
     */
    virtual void putParams(FairParamList* list);

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

    inline const Double_t& GetPosX() const { return fPosX; }
    inline const Double_t& GetPosY() const { return fPosY; }
    inline const Double_t& GetPosZ() const { return fPosZ; }

    inline const Double_t& GetRotX() const { return fRotX; }
    inline const Double_t& GetRotY() const { return fRotY; }
    inline const Double_t& GetRotZ() const { return fRotZ; }

    inline const Double_t& GetDimX() const { return fDimX; }
    inline const Double_t& GetDimY() const { return fDimY; }
    inline const Double_t& GetDimZ() const { return fDimZ; }

    inline const Double_t& GetSigmaX() const { return fSigmaX; }
    inline const Double_t& GetSigmaY() const { return fSigmaY; }

    inline void SetPosXYZ(const Double_t& posX, const Double_t& posY, const Double_t& posZ)
    {
        fPosX = posX;
        fPosY = posY;
        fPosZ = posZ;
    }
    inline void SetRotXYZ(const Double_t& rotX, const Double_t& rotY, const Double_t& rotZ)
    {
        fRotX = rotX;
        fRotY = rotY;
        fRotZ = rotZ;
    }
    inline void SetDimXYZ(const Double_t& dimX, const Double_t& dimY, const Double_t& dimZ)
    {
        fDimX = dimX;
        fDimY = dimY;
        fDimZ = dimZ;
    }

    inline void SetSigmaXY(const Double_t& sigmaX, const Double_t& sigmaY)
    {
        fSigmaX = sigmaX;
        fSigmaY = sigmaY;
    }

    void SetMaterial(const Double_t& Z, const Double_t& A, const Double_t& density, const Double_t& I);

    inline const Double_t& GetZ() const { return fZ; }
    inline const Double_t& GetA() const { return fA; }
    inline const Double_t& GetDensity() const { return fDensity; }
    inline const Double_t& GetI() const { return fI; }

  private:
    const R3BTGeoPar& operator=(const R3BTGeoPar&); /**< an assignment operator */
    R3BTGeoPar(const R3BTGeoPar&);                  /**< a copy constructor */

    Double_t fPosX;
    Double_t fPosY;
    Double_t fPosZ;

    Double_t fRotX;
    Double_t fRotY;
    Double_t fRotZ;

    Double_t fDimX;
    Double_t fDimY;
    Double_t fDimZ;

    Double_t fSigmaX;
    Double_t fSigmaY;

    Double_t fZ;
    Double_t fA;
    Double_t fDensity;
    Double_t fI;

    ClassDef(R3BTGeoPar, 2);
};

#endif /* !R3BTGEOPAR_H*/
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

#ifndef R3B_FRAGMENTTRACKER_H
#define R3B_FRAGMENTTRACKER_H

#include "FairTask.h"

#include <string>
#include <vector>

class TClonesArray;
class R3BFieldPar;
class R3BTPropagator;
class R3BTrackingDetector;
class R3BTrackingParticle;
class R3BTrackingSetup;
class R3BFragmentFitterGeneric;

class TH1F;

class R3BFragmentTracker : public FairTask
{
  public:
    R3BFragmentTracker(const char* name, Bool_t vis = kFALSE, Int_t verbose = 1);
    virtual ~R3BFragmentTracker();

    virtual InitStatus Init();
    virtual InitStatus ReInit();

    virtual void SetParContainers();

    virtual void Exec(const Option_t* = "");

    virtual void Finish();

    void SetFragmentFitter(R3BFragmentFitterGeneric* fitter) { fFitter = fitter; }
    void SetEnergyLoss(Bool_t energyLoss) { fEnergyLoss = energyLoss; }

  private:
    Bool_t InitPropagator();

    R3BFieldPar* fFieldPar;
    R3BTPropagator* fPropagator;
    TClonesArray* fArrayMCTracks; // simulation output??? To compare?
    R3BTrackingSetup* fDetectors; // array of R3BTrackingDetector
    std::vector<R3BTrackingParticle*> fFragments;
    TClonesArray* fArrayFragments;
    Int_t fNEvents;
    Bool_t fVis;
//   	Double_t amu = 0.93149410242;
   	Double_t amu = 0.938272;

    R3BFragmentFitterGeneric* fFitter;
    Bool_t fEnergyLoss;

    Double_t fAfterGladResolution;

    TH1F* fh_mult_psp;
    TH1F* fh_mult_fi4;
    TH1F* fh_mult_fi5;
    TH1F* fh_mult_tofd;
    TH1F* fh_eloss_psp_mc;
    TH1F* fh_eloss_psp;
    TH1F* fh_eloss_fi4_mc;
    TH1F* fh_eloss_fi4;
    TH1F* fh_eloss_fi5_mc;
    TH1F* fh_eloss_fi5;
    TH1F* fh_eloss_fi6_mc;
    TH1F* fh_eloss_fi6;
    TH1F* fh_ncand;
    TH1F* fh_x_res[6];
    TH1F* fh_x_pull[6];
    TH1F* fh_A_reco1;
    TH1F* fh_A_reco2;
    TH1F* fh_mom_res;
    TH1F* fh_mass_res;
    TH1F* fh_chi2;
    TH1F* fh_vz_res;
    TH1F* fh_beta_res;

    ClassDef(R3BFragmentTracker, 1)
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

#ifndef R3BFRAGMENTFITTERGENERIC
#define R3BFRAGMENTFITTERGENERIC

#include "Rtypes.h"

class R3BTrackingParticle;
class R3BTrackingSetup;
class R3BTPropagator;

class R3BFragmentFitterGeneric
{
  public:
    R3BFragmentFitterGeneric();
    virtual ~R3BFragmentFitterGeneric();

    virtual void Init(R3BTPropagator* prop = nullptr, Bool_t energyLoss = kTRUE) = 0;

    virtual Int_t FitTrack(R3BTrackingParticle*, R3BTrackingSetup*) = 0;
    
    virtual Int_t FitTrackBeta(R3BTrackingParticle*, R3BTrackingSetup*) = 0;

    virtual Int_t FitTrackBackward(R3BTrackingParticle*, R3BTrackingSetup*) = 0;
    
    virtual Int_t FitTrackBackward2D(R3BTrackingParticle*, R3BTrackingSetup*) = 0;

    ClassDef(R3BFragmentFitterGeneric, 1)
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

#ifndef R3BFRAGMENTFITTERCHI2
#define R3BFRAGMENTFITTERCHI2

#include "R3BFragmentFitterGeneric.h"

#include "Math/Factory.h"
#include "Math/Functor.h"
#include "Math/Minimizer.h"
#include "Minuit2/Minuit2Minimizer.h"

class R3BFragmentFitterChi2 : public R3BFragmentFitterGeneric
{
  public:
    R3BFragmentFitterChi2();
    ~R3BFragmentFitterChi2();

    void Init(R3BTPropagator* prop = nullptr, Bool_t energyLoss = kTRUE);

    Int_t FitTrack(R3BTrackingParticle*, R3BTrackingSetup*);
    
    Int_t FitTrackBeta(R3BTrackingParticle*, R3BTrackingSetup*);

    Int_t FitTrackBackward(R3BTrackingParticle*, R3BTrackingSetup*);
    
    Int_t FitTrackBackward2D(R3BTrackingParticle*, R3BTrackingSetup*);

    Double_t TrackFragment(R3BTrackingParticle* particle,
                           Bool_t energyLoss,
                           Double_t& devTof,
                           Double_t& time,
                           Double_t& chi2);
    Double_t DbetaDx(R3BTrackingParticle* candidate);
    Double_t DbetaChi2(R3BTrackingParticle* candidate);
    Double_t DbetaDt(R3BTrackingParticle* candidate);
    Double_t DmDx(R3BTrackingParticle* candidate, Bool_t energy_loss);
    Double_t DmDxTof(R3BTrackingParticle* candidate, Bool_t energy_loss);
    Double_t DmDt(R3BTrackingParticle* candidate, Bool_t energy_loss);
    Double_t Velocity(R3BTrackingParticle* candidate);

  private:
    ROOT::Math::Minimizer* fMinimum;
    R3BTPropagator* fPropagator;
   	Double_t amu = 0.938272;

    ClassDef(R3BFragmentFitterChi2, 1)
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

#ifndef R3B_TRACKING_DETECTOR
#define R3B_TRACKING_DETECTOR

#include <vector>

#include "FairTask.h"
#include "R3BTrackingParticle.h"
#include "TObject.h"
#include "TString.h"
#include "TVector3.h"

enum EDetectorType
{
    kBeforeTarget,
    kTarget,
    kTargetGlad,
    kAfterGlad,
    kTof
};

class R3BHit;
class TClonesArray;
class R3BTGeoPar;

/* Generic detector class that holds all infos needed for the track fitting
 */
class R3BTrackingDetector : public TObject
{
  public:
    R3BTrackingDetector(const char* detectorName,
                        EDetectorType type,
                        const char* geoParName,
                        const char* hitArray = NULL);
    virtual ~R3BTrackingDetector();

    void SetParContainers();

    InitStatus Init();

    void CopyHits();

    void Draw(Option_t* option = "");

    void GlobalToLocal(const TVector3& posGlobal, Double_t& x_local, Double_t& y_local);
    void LocalToGlobal(TVector3& posGlobal, Double_t x_local, Double_t y_local);

    const TString& GetDetectorName() const { return fDetectorName; }

    Double_t GetEnergyLoss(const R3BTrackingParticle* particle);

    inline R3BTGeoPar* GetGeoPar() { return fGeo; }

  public:
    TString fDetectorName;
    TString fGeoParName;
    TString fDataName;

    // coordinates of the plane
    TVector3 pos0;
    TVector3 pos1;
    TVector3 pos2;

    TVector3 norm;

    // which section of the setup: 0=before target 1=target-glad 2=after glad
    EDetectorType section;

    // material + thickness
    // ??
    R3BTGeoPar* fGeo;

    // resolutions (for the chi2)
    Double_t res_x;
    Double_t res_y;
    Double_t res_t;

    // TClonesArray of hits. Holding a detector dependent structure.
    // In the Exec() function the user has to copy the hit position
    // of interest into the hit_# structures.
    std::vector<R3BHit*> hits; // not used directly by the fitter
    TClonesArray* fArrayHits;

    // Double_t hit_x; // local coordinates (on the detector plane)
    // Double_t hit_y;
    // TVector3 hit_xyz; // same in global coordinates
    // Double_t hit_time;
    // we could store a time here as well. Maybe later.

    // Double_t track_x; // local coordinates (on the detector plane)
    // Double_t track_y;
    // TVector3 track_xyz; // same in global coordinates

  public:
    ClassDef(R3BTrackingDetector, 0)
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

#ifndef R3B_TRACKING_PARTICLE
#define R3B_TRACKING_PARTICLE

#include "TMath.h"
#include "TObject.h"
#include "TVector3.h"
#include <utility>
#include <vector>

class R3BTrackingDetector;

class R3BTrackingParticle : public TObject
{
  public:
    R3BTrackingParticle();

    R3BTrackingParticle(Double_t charge,
                        Double_t x,
                        Double_t y,
                        Double_t z,
                        Double_t px,
                        Double_t py,
                        Double_t pz,
                        Double_t beta,
                        Double_t mass);

    virtual ~R3BTrackingParticle();

    Double_t GetCharge() const { return fCharge; }
    void SetCharge(Double_t charge) { fCharge = charge; }

    void GetPosition(Double_t* xyz) const
    {
        xyz[0] = fPosition.X();
        xyz[1] = fPosition.Y();
        xyz[2] = fPosition.Z();
    }
    void GetMomentum(Double_t* p) const
    {
        p[0] = fMomentum.X();
        p[1] = fMomentum.Y();
        p[2] = fMomentum.Z();
    }
    void GetCosines(Double_t* cos) const
    {
        cos[3] = fMomentum.Mag();
        cos[0] = fMomentum.X() / cos[3];
        cos[1] = fMomentum.Y() / cos[3];
        cos[2] = fMomentum.Z() / cos[3];
    }

    void SetPosition(const TVector3& pos) { fPosition = pos; }
    void SetPosition(Double_t* xyz) { fPosition.SetXYZ(xyz[0], xyz[1], xyz[2]); }
    void SetMomentum(const TVector3& mom) { fMomentum = mom; }
    void SetMomentum(Double_t* p) { fMomentum.SetXYZ(p[0], p[1], p[2]); }
    void SetCosines(Double_t* cos) { fMomentum.SetXYZ(cos[0] * cos[3], cos[1] * cos[3], cos[2] * cos[3]); }

    void SetStartBeta(const Double_t& startBeta);
    void SetBeta(const Double_t& beta);
    void SetMass(const Double_t& mass);
    void UpdateMomentum();

    void AddStep(Double_t step) { fLength += step; }

    void SetChi2(Double_t chi2) { fChi2 = chi2; }

    Double_t GetX() const { return fPosition.X(); }
    Double_t GetY() const { return fPosition.Y(); }
    Double_t GetZ() const { return fPosition.Z(); }
    const TVector3& GetPosition() const { return fPosition; }

    const TVector3& GetMomentum() const { return fMomentum; }

    const TVector3& GetStartPosition() const { return fStartPosition; }
    const TVector3& GetStartMomentum() const { return fStartMomentum; }
    Double_t GetStartBeta() const { return fStartBeta; }
    Double_t GetStartGamma() const { return TMath::Sqrt(1. / (1. - fStartBeta * fStartBeta)); }

    Double_t GetBeta() const { return fBeta; }
    Double_t GetGamma() const { return TMath::Sqrt(1. / (1. - fBeta * fBeta)); }
    Double_t GetMass() const { return fMass; }
    Double_t GetLength() const { return fLength; }

    Double_t GetChi2() const { return fChi2; }

    void PassThroughDetector(R3BTrackingDetector* det, Double_t weight = 1.);
    void PassThroughDetectorBackward(R3BTrackingDetector* det, Double_t weight = 1.);

    void SetStartPosition(const TVector3& startPosition) { fStartPosition = startPosition; }
    void SetStartMomentum(const TVector3& startMomentum) { fStartMomentum = startMomentum; }

    Double_t DeltaEToDeltaBeta(Double_t eloss);

    void Reset();

    void AddHit(const std::string& detName, const Int_t& hitId)
    {
        std::pair<std::string, Int_t> index(detName, hitId);
        fHits.push_back(index);
    }

    const Int_t GetSize() const { return fHits.size(); }

    void GetHit(const Int_t& index, std::string& detName, Int_t& hitId)
    {
        detName = fHits[index].first;
        hitId = fHits[index].second;
    }

    const Int_t GetHitIndexByName(const std::string& detName)
    {
        for (auto x : fHits)
        {
            if (0 == x.first.compare(detName))
            {
                return x.second;
            }
        }
        return -1;
    }

  private:
    std::vector<std::pair<std::string, Int_t>> fHits;

    Double_t fCharge;
    TVector3 fStartPosition;
    TVector3 fStartMomentum;
    Double_t fStartBeta;
    Double_t fMass;

    TVector3 fPosition;
    TVector3 fMomentum;
    Double_t fBeta;
    Double_t fLength;

    Double_t fChi2;

    ClassDef(R3BTrackingParticle, 1)
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

#ifndef R3B_TRACKING_SETUP
#define R3B_TRACKING_SETUP

#include "R3BTrackingDetector.h"
#include <map>
#include <string>
#include <vector>

class R3BTrackingSetup
{
  public:
    R3BTrackingSetup();
    virtual ~R3BTrackingSetup();

    void AddDetector(const std::string& name,
                     EDetectorType type,
                     const std::string& geoParName,
                     const std::string& dataName = "");

    R3BTrackingDetector* GetByName(const std::string& name);

    R3BTrackingDetector* GetFirstByType(const EDetectorType& type);

    void Init();

    void SetParContainers();

    void CopyHits();

    std::vector<R3BTrackingDetector*>& GetArray() { return fDetectors; }

    R3BHit* GetHit(const std::string& detName, const Int_t& hitId) { return GetByName(detName)->hits[hitId]; }

    Double_t GetAfterGladResolution();

  private:
    std::vector<R3BTrackingDetector*> fDetectors;
    std::map<std::string, int> fMapIndex;

    ClassDef(R3BTrackingSetup, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFragmentFitterChi2", payloadCode, "@",
"R3BFragmentFitterGeneric", payloadCode, "@",
"R3BFragmentTracker", payloadCode, "@",
"R3BTGeoPar", payloadCode, "@",
"R3BTPropagator", payloadCode, "@",
"R3BTrackingDetector", payloadCode, "@",
"R3BTrackingParticle", payloadCode, "@",
"R3BTrackingSetup", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BTrackingDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BTrackingDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BTrackingDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BTrackingDict() {
  TriggerDictionaryInitialization_G__R3BTrackingDict_Impl();
}
