// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIlosdIG__R3BLosDict

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
#include "R3BLosMapped2Cal.h"
#include "R3BLosMapped2CalPar.h"
#include "R3BLosCal2Hit.h"
#include "R3BLosProvideTStart.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BLosMapped2Cal(void *p = 0);
   static void *newArray_R3BLosMapped2Cal(Long_t size, void *p);
   static void delete_R3BLosMapped2Cal(void *p);
   static void deleteArray_R3BLosMapped2Cal(void *p);
   static void destruct_R3BLosMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosMapped2Cal*)
   {
      ::R3BLosMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosMapped2Cal", ::R3BLosMapped2Cal::Class_Version(), "", 49,
                  typeid(::R3BLosMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosMapped2Cal) );
      instance.SetNew(&new_R3BLosMapped2Cal);
      instance.SetNewArray(&newArray_R3BLosMapped2Cal);
      instance.SetDelete(&delete_R3BLosMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BLosMapped2Cal);
      instance.SetDestructor(&destruct_R3BLosMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BLosMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosMapped2CalPar(void *p = 0);
   static void *newArray_R3BLosMapped2CalPar(Long_t size, void *p);
   static void delete_R3BLosMapped2CalPar(void *p);
   static void deleteArray_R3BLosMapped2CalPar(void *p);
   static void destruct_R3BLosMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosMapped2CalPar*)
   {
      ::R3BLosMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosMapped2CalPar", ::R3BLosMapped2CalPar::Class_Version(), "", 201,
                  typeid(::R3BLosMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosMapped2CalPar) );
      instance.SetNew(&new_R3BLosMapped2CalPar);
      instance.SetNewArray(&newArray_R3BLosMapped2CalPar);
      instance.SetDelete(&delete_R3BLosMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BLosMapped2CalPar);
      instance.SetDestructor(&destruct_R3BLosMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BLosMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosCal2Hit(void *p = 0);
   static void *newArray_R3BLosCal2Hit(Long_t size, void *p);
   static void delete_R3BLosCal2Hit(void *p);
   static void deleteArray_R3BLosCal2Hit(void *p);
   static void destruct_R3BLosCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosCal2Hit*)
   {
      ::R3BLosCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosCal2Hit", ::R3BLosCal2Hit::Class_Version(), "", 353,
                  typeid(::R3BLosCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosCal2Hit) );
      instance.SetNew(&new_R3BLosCal2Hit);
      instance.SetNewArray(&newArray_R3BLosCal2Hit);
      instance.SetDelete(&delete_R3BLosCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BLosCal2Hit);
      instance.SetDestructor(&destruct_R3BLosCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BLosCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosProvideTStart(void *p = 0);
   static void *newArray_R3BLosProvideTStart(Long_t size, void *p);
   static void delete_R3BLosProvideTStart(void *p);
   static void deleteArray_R3BLosProvideTStart(void *p);
   static void destruct_R3BLosProvideTStart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosProvideTStart*)
   {
      ::R3BLosProvideTStart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosProvideTStart >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosProvideTStart", ::R3BLosProvideTStart::Class_Version(), "", 599,
                  typeid(::R3BLosProvideTStart), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosProvideTStart::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosProvideTStart) );
      instance.SetNew(&new_R3BLosProvideTStart);
      instance.SetNewArray(&newArray_R3BLosProvideTStart);
      instance.SetDelete(&delete_R3BLosProvideTStart);
      instance.SetDeleteArray(&deleteArray_R3BLosProvideTStart);
      instance.SetDestructor(&destruct_R3BLosProvideTStart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosProvideTStart*)
   {
      return GenerateInitInstanceLocal((::R3BLosProvideTStart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosProvideTStart*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BLosMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosMapped2Cal::Class_Name()
{
   return "R3BLosMapped2Cal";
}

//______________________________________________________________________________
const char *R3BLosMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosMapped2CalPar::Class_Name()
{
   return "R3BLosMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BLosMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosCal2Hit::Class_Name()
{
   return "R3BLosCal2Hit";
}

//______________________________________________________________________________
const char *R3BLosCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosProvideTStart::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosProvideTStart::Class_Name()
{
   return "R3BLosProvideTStart";
}

//______________________________________________________________________________
const char *R3BLosProvideTStart::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosProvideTStart*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosProvideTStart::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosProvideTStart*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosProvideTStart::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosProvideTStart*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosProvideTStart::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosProvideTStart*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BLosMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosMapped2Cal(void *p) {
      return  p ? new(p) ::R3BLosMapped2Cal : new ::R3BLosMapped2Cal;
   }
   static void *newArray_R3BLosMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosMapped2Cal[nElements] : new ::R3BLosMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosMapped2Cal(void *p) {
      delete ((::R3BLosMapped2Cal*)p);
   }
   static void deleteArray_R3BLosMapped2Cal(void *p) {
      delete [] ((::R3BLosMapped2Cal*)p);
   }
   static void destruct_R3BLosMapped2Cal(void *p) {
      typedef ::R3BLosMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosMapped2Cal

//______________________________________________________________________________
void R3BLosMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BLosMapped2CalPar : new ::R3BLosMapped2CalPar;
   }
   static void *newArray_R3BLosMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosMapped2CalPar[nElements] : new ::R3BLosMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosMapped2CalPar(void *p) {
      delete ((::R3BLosMapped2CalPar*)p);
   }
   static void deleteArray_R3BLosMapped2CalPar(void *p) {
      delete [] ((::R3BLosMapped2CalPar*)p);
   }
   static void destruct_R3BLosMapped2CalPar(void *p) {
      typedef ::R3BLosMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosMapped2CalPar

//______________________________________________________________________________
void R3BLosCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosCal2Hit(void *p) {
      return  p ? new(p) ::R3BLosCal2Hit : new ::R3BLosCal2Hit;
   }
   static void *newArray_R3BLosCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosCal2Hit[nElements] : new ::R3BLosCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosCal2Hit(void *p) {
      delete ((::R3BLosCal2Hit*)p);
   }
   static void deleteArray_R3BLosCal2Hit(void *p) {
      delete [] ((::R3BLosCal2Hit*)p);
   }
   static void destruct_R3BLosCal2Hit(void *p) {
      typedef ::R3BLosCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosCal2Hit

//______________________________________________________________________________
void R3BLosProvideTStart::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosProvideTStart.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosProvideTStart::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosProvideTStart::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosProvideTStart(void *p) {
      return  p ? new(p) ::R3BLosProvideTStart : new ::R3BLosProvideTStart;
   }
   static void *newArray_R3BLosProvideTStart(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosProvideTStart[nElements] : new ::R3BLosProvideTStart[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosProvideTStart(void *p) {
      delete ((::R3BLosProvideTStart*)p);
   }
   static void deleteArray_R3BLosProvideTStart(void *p) {
      delete [] ((::R3BLosProvideTStart*)p);
   }
   static void destruct_R3BLosProvideTStart(void *p) {
      typedef ::R3BLosProvideTStart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosProvideTStart

namespace ROOT {
   static TClass *vectorlEvectorlER3BLosCalDatamUgRsPgR_Dictionary();
   static void vectorlEvectorlER3BLosCalDatamUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlER3BLosCalDatamUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p);
   static void destruct_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<R3BLosCalData*> >*)
   {
      vector<vector<R3BLosCalData*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<R3BLosCalData*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<R3BLosCalData*> >", -2, "vector", 214,
                  typeid(vector<vector<R3BLosCalData*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlER3BLosCalDatamUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<R3BLosCalData*> >) );
      instance.SetNew(&new_vectorlEvectorlER3BLosCalDatamUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlER3BLosCalDatamUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlER3BLosCalDatamUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlER3BLosCalDatamUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlER3BLosCalDatamUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<R3BLosCalData*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<R3BLosCalData*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlER3BLosCalDatamUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<R3BLosCalData*> >*)0x0)->GetClass();
      vectorlEvectorlER3BLosCalDatamUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlER3BLosCalDatamUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BLosCalData*> > : new vector<vector<R3BLosCalData*> >;
   }
   static void *newArray_vectorlEvectorlER3BLosCalDatamUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BLosCalData*> >[nElements] : new vector<vector<R3BLosCalData*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p) {
      delete ((vector<vector<R3BLosCalData*> >*)p);
   }
   static void deleteArray_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p) {
      delete [] ((vector<vector<R3BLosCalData*> >*)p);
   }
   static void destruct_vectorlEvectorlER3BLosCalDatamUgRsPgR(void *p) {
      typedef vector<vector<R3BLosCalData*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<R3BLosCalData*> >

namespace ROOT {
   static TClass *vectorlER3BLosCalDatamUgR_Dictionary();
   static void vectorlER3BLosCalDatamUgR_TClassManip(TClass*);
   static void *new_vectorlER3BLosCalDatamUgR(void *p = 0);
   static void *newArray_vectorlER3BLosCalDatamUgR(Long_t size, void *p);
   static void delete_vectorlER3BLosCalDatamUgR(void *p);
   static void deleteArray_vectorlER3BLosCalDatamUgR(void *p);
   static void destruct_vectorlER3BLosCalDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BLosCalData*>*)
   {
      vector<R3BLosCalData*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BLosCalData*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BLosCalData*>", -2, "vector", 214,
                  typeid(vector<R3BLosCalData*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BLosCalDatamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BLosCalData*>) );
      instance.SetNew(&new_vectorlER3BLosCalDatamUgR);
      instance.SetNewArray(&newArray_vectorlER3BLosCalDatamUgR);
      instance.SetDelete(&delete_vectorlER3BLosCalDatamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BLosCalDatamUgR);
      instance.SetDestructor(&destruct_vectorlER3BLosCalDatamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BLosCalData*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BLosCalData*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BLosCalDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BLosCalData*>*)0x0)->GetClass();
      vectorlER3BLosCalDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BLosCalDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BLosCalDatamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BLosCalData*> : new vector<R3BLosCalData*>;
   }
   static void *newArray_vectorlER3BLosCalDatamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BLosCalData*>[nElements] : new vector<R3BLosCalData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BLosCalDatamUgR(void *p) {
      delete ((vector<R3BLosCalData*>*)p);
   }
   static void deleteArray_vectorlER3BLosCalDatamUgR(void *p) {
      delete [] ((vector<R3BLosCalData*>*)p);
   }
   static void destruct_vectorlER3BLosCalDatamUgR(void *p) {
      typedef vector<R3BLosCalData*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BLosCalData*>

namespace {
  void TriggerDictionaryInitialization_G__R3BLosDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/los",
"/work/R3BRoot/r3bdata/",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tcal",
"/work/R3BRoot/neuland/shared",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/los/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BLosDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BLosMapped2Cal;
class R3BLosMapped2CalPar;
class R3BLosCal2Hit;
class R3BLosProvideTStart;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BLosDict dictionary payload"

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

// ------------------------------------------------------------
// -----                  R3BLosMapped2Cal                -----
// -----            Created 4-02-2016 by R.Plag           -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BLOSMAPPED2CAL
#define R3BLOSMAPPED2CAL

#include <map>
#include <vector>

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;
class R3BLosMappedData;
class R3BLosCalData;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BLosMapped2CalFill task.
 */
class R3BLosMapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BLosMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLosMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BLosMapped2Cal();

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

    /**
     * Method for setting the number of NeuLAND modules.
     * @param nPMTs a number of photomultipliers.
     * @param n17 a number of channels with stop signal (17-th channel).
     */

    inline void SetNofModules(Int_t nDets, Int_t nChs)
    {
        fNofDetectors = nDets;
        fNofChannels = nChs; //=4 or 8  or 16
    }

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    size_t GetCalLookupIndex(R3BLosMappedData const&) const;

    TClonesArray* fMappedItems; /**< Array with mapped items - input data. */
    TClonesArray* fCalItems;    /**< Array with cal items - output data. */

    Int_t fNofCalItems; /**< Number of produced time items per event. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    UInt_t fNofDetectors; /**< Number of detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    Double_t fClockFreq;  /**< Clock cycle in [ns]. */
    UInt_t fNEvent;
    // Don't store data for online
    Bool_t fOnline;

    // Fast lookup for matching mapped data.
    std::vector<std::vector<R3BLosCalData*>> fCalLookup;

  public:
    ClassDef(R3BLosMapped2Cal, 2)
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

// ----------------------------------------------------------------
// -----     Create time calib parameters for LOS via VFTX    -----
// -----      Adopted Feb 4th 2016 from Neuland by R. Plag    -----
// ----------------------------------------------------------------

#ifndef R3BLOSMAPPED2CALPAR_H
#define R3BLOSMAPPED2CALPAR_H

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
class R3BLosMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BLosMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLosMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BLosMapped2CalPar();

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
     * Method for setting the update rate for control histograms
     * @param rate an update rate value (events).
     */
    inline void SetUpdateRate(Int_t rate) { fUpdateRate = rate; }

    /**
     * Method for setting minimum required statistics per module.
     * Only detector modules with number of entries in TDC
     * distribution greater than minimum statistics will be
     * calibrated.
     * @param minStats a value of minimum statistics required.
     */
    inline void SetMinStats(Int_t minStats) { fMinStats = minStats; }

    /**
     * Method for selecting events with certain trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }

    /**
     * Method for setting number of LOS detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    inline void SetNofModules(Int_t nDets, Int_t nCh)
    {
        fNofDetectors = nDets;
        fNofChannels = nCh; // = 4 or 8 or 16
        fNofTypes = 3;
        fNofModules = nDets * nCh * 3; // 4 or 8 los signals *3 times per channel 12 or 24 in total
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */
    Int_t Icounts1 = 0;
    Int_t Icounts2 = 0;
    Int_t Icounts3 = 0;
    Int_t Icount[16][3];

    UInt_t fNofDetectors; /**< Number of LOS detectors. */
    UInt_t fNofChannels;  /**< Number of channels per detector. */
    UInt_t fNofTypes = 3; /**< Number of time-types per channel (VFTX, TAMEX leading/trailing). */
    UInt_t fNofModules;   /**< Total number of modules (=edges) to calibrate */

    Int_t fNEvents;         /**< Event counter. */
    R3BTCalPar* fCal_Par;   /**< Parameter container. */
    TClonesArray* fMapped;  /**< Array with mapped data - input data. */
    R3BEventHeader* header; /**< Event header - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BLosMapped2CalPar, 1)
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
// -----                  R3BLosCal2Hit                         -----
// -----            Created March 10th 2016 by R.Plag           -----
// ----- Convert time calibrated data to hit level (single time) ----
// ------------------------------------------------------------------

#ifndef R3BLOSCAL2HIT
#define R3BLOSCAL2HIT

#include <map>

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * TODO: This explanation is humbug.
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BLosCal2HitFill task.
 */
class R3BLosCal2Hit : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BLosCal2Hit();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BLosCal2Hit(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BLosCal2Hit();

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
     * A method to create histograms
     **/
    void CreateHisto();

    /**
     * A method to fill histograms
     **/
    void FillHisto();

    /**
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosParamMCFD(Double_t offsetX, Double_t offsetY, Double_t veffX, Double_t veffY)
    {
        flosOffsetX = offsetX;
        flosOffsetY = offsetY;
        flosVeffX = veffX;
        flosVeffY = veffY;
    }

    inline void SetLosParamToT(Double_t offsetXQ, Double_t offsetYQ, Double_t veffXQ, Double_t veffYQ)
    {
        flosOffsetXQ = offsetXQ;
        flosOffsetYQ = offsetYQ;
        flosVeffXQ = veffXQ;
        flosVeffYQ = veffYQ;
    }

    inline void SetLosParamTAMEX(Double_t offsetXT, Double_t offsetYT, Double_t veffXT, Double_t veffYT)
    {
        flosOffsetXT = offsetXT;
        flosOffsetYT = offsetYT;
        flosVeffXT = veffXT;
        flosVeffYT = veffYT;
    }

    /**
     * Methods for setting input files
     */
    inline void SetLosInput(Int_t iOptHisto, std::string const& walk_param_file, std::string const& tot_param_file)
    {
        OptHisto = iOptHisto;
        fwalk_param_file = walk_param_file;
        ftot_param_file = tot_param_file;
    }

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Method for walk calculation.
     */
    virtual Double_t walk(Int_t inum, Double_t tot);

    /**
     * Method for saturation correction.
     */
    virtual Double_t satu(Int_t inum, Double_t tot, Double_t dt);

    /**
     * Method for finish of the task execution.
     * Is called by the framework after processing the event loop.
     */
    virtual void FinishTask();

  private:
    TClonesArray* fCalItems; /**< Array with Cal items - input data. */
    TClonesArray* fHitItems; /**< Array with Hit items - output data. */

    // check for trigger
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;

    UInt_t fNofHitItems; /**< Number of hit items for cur event. */
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    Double_t flosVeffX;
    Double_t flosVeffY;
    Double_t flosOffsetX;
    Double_t flosOffsetY;
    Double_t flosVeffXQ;
    Double_t flosVeffYQ;
    Double_t flosOffsetXQ;
    Double_t flosOffsetYQ;
    Double_t flosVeffXT;
    Double_t flosVeffYT;
    Double_t flosOffsetXT;
    Double_t flosOffsetYT;
    Double_t walk_par[16][11]{}; // Array containing walk parameters: x=PM, y=min,max,p0...p9; MCFD and TAMEX considered
    Double_t tot_par[8][4]{};    // Array containing walk parameters: x=PM, y=p0...p3;
    Int_t OptHisto;
    std::string fwalk_param_file;
    std::string ftot_param_file;

    TClonesArray* fMapped; /**< Array with mapped data - input data. */

    TH1F* fhTres_M;
    TH1F* fhTres_T;
    TH1F* fhTres_M_corr;
    TH1F* fhTres_T_corr;
    TH1F* fhTres_MT_corr;
    TH1F* fhQ;
    TH1F* fhQtest;
    TH2F* fhQ_L;
    TH2F* fhQ_T;
    TH2F* fhQ_R;
    TH2F* fhQ_B;
    TH2F* fhQ_L_corr;
    TH2F* fhQ_T_corr;
    TH2F* fhQ_R_corr;
    TH2F* fhQ_B_corr;
    TH2F* fhQ_LB;
    TH2F* fhQ_LT;
    TH2F* fhQ_RT;
    TH2F* fhQ_RB;
    TH2F* fhQ_LB_corr;
    TH2F* fhQ_LT_corr;
    TH2F* fhQ_RT_corr;
    TH2F* fhQ_RB_corr;
    TH2F* fhQ_vs_X;
    TH2F* fhQ_vs_Y;
    TH2F* fhQ_vs_X_corr;
    TH2F* fhQ_vs_Y_corr;
    TH2F* fhTM_vs_Q;
    TH2F* fhTT_vs_Q;
    TH2F* fhTM_vs_Q_corr;
    TH2F* fhTT_vs_Q_corr;
    TH2F* fhXY;
    TH2F* fhXYT;
    TH2F* fhXYmean;
    TH2F* fhXY_ToT;
    TH2F* fhXYproj;
    TH2F* fhQ1_vs_Q5;
    TH2F* fhQ1_vs_Q5_corr;
    TH2F* fhQ2_vs_Q6;
    TH2F* fhQ2_vs_Q6_corr;
    TH2F* fhQ3_vs_Q7;
    TH2F* fhQ3_vs_Q7_corr;
    TH2F* fhQ4_vs_Q8;
    TH2F* fhQ4_vs_Q8_corr;
    ;
    TH2F* fhTresX_M;
    TH2F* fhTresY_M;
    TH2F* fhTresX_T;
    TH2F* fhTresY_T;
    TH2F* fhTresX_M_corr;
    TH2F* fhTresY_M_corr;
    TH2F* fhTresX_T_corr;
    TH2F* fhTresY_T_corr;
    TH2F* fhTresMvsIcount;
    TH2F* fhTreswcMvsIcount;
    TH2F* fhTreswcTvsIcount;
    TH2F* fhTresTvsIcount;
    TH2F* fh_los_dt_hits_ToT_corr;
    TH2F* fh_los_ihit_ToTcorr;
    TH2F* fhQvsdt[8];
    TH2F* fhQcorrvsIcount[8];
    TH2F* fhQvsIcount[8];

    Int_t Icount = 0;

  public:
    ClassDef(R3BLosCal2Hit, 1)
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

#ifndef R3BROOT_R3BLOSPROVIDETSTART_H
#define R3BROOT_R3BLOSPROVIDETSTART_H

#include "FairTask.h"
#include "R3BLosCalData.h"
#include "TCAConnector.h"

class R3BEventHeader;

class R3BLosProvideTStart : public FairTask
{
  public:
    R3BLosProvideTStart();

    InitStatus Init() override;
    void Exec(Option_t*) override;

  private:
    TCAOptionalInputConnector<R3BLosCalData> fLosCalData;
    R3BEventHeader* fEventHeader;

    bool IsBeam() const;
    Double_t GetTStart() const;

    ClassDefOverride(R3BLosProvideTStart, 0)
};

#endif // R3BROOT_R3BLOSPROVIDETSTART_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BLosCal2Hit", payloadCode, "@",
"R3BLosMapped2Cal", payloadCode, "@",
"R3BLosMapped2CalPar", payloadCode, "@",
"R3BLosProvideTStart", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BLosDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BLosDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BLosDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BLosDict() {
  TriggerDictionaryInitialization_G__R3BLosDict_Impl();
}
