// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIneulanddIshareddIG__R3BNeulandSharedDict

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
#include "ClusteringEngine.h"
#include "ElasticScattering.h"
#include "Filterable.h"
#include "TCAConnector.h"
#include "Validated.h"
#include "IsElastic.h"
#include "R3BNeulandGeoPar.h"
#include "R3BNeulandContFact.h"
#include "R3BNeulandVisualizer.h"
#include "R3BNeulandCommon.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static TClass *FilterablelER3BNeulandClustermUgR_Dictionary();
   static void FilterablelER3BNeulandClustermUgR_TClassManip(TClass*);
   static void *new_FilterablelER3BNeulandClustermUgR(void *p = 0);
   static void *newArray_FilterablelER3BNeulandClustermUgR(Long_t size, void *p);
   static void delete_FilterablelER3BNeulandClustermUgR(void *p);
   static void deleteArray_FilterablelER3BNeulandClustermUgR(void *p);
   static void destruct_FilterablelER3BNeulandClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Filterable<R3BNeulandCluster*>*)
   {
      ::Filterable<R3BNeulandCluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::Filterable<R3BNeulandCluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("Filterable<R3BNeulandCluster*>", "", 156,
                  typeid(::Filterable<R3BNeulandCluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &FilterablelER3BNeulandClustermUgR_Dictionary, isa_proxy, 4,
                  sizeof(::Filterable<R3BNeulandCluster*>) );
      instance.SetNew(&new_FilterablelER3BNeulandClustermUgR);
      instance.SetNewArray(&newArray_FilterablelER3BNeulandClustermUgR);
      instance.SetDelete(&delete_FilterablelER3BNeulandClustermUgR);
      instance.SetDeleteArray(&deleteArray_FilterablelER3BNeulandClustermUgR);
      instance.SetDestructor(&destruct_FilterablelER3BNeulandClustermUgR);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Filterable<R3BNeulandCluster*>*)
   {
      return GenerateInitInstanceLocal((::Filterable<R3BNeulandCluster*>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Filterable<R3BNeulandCluster*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *FilterablelER3BNeulandClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::Filterable<R3BNeulandCluster*>*)0x0)->GetClass();
      FilterablelER3BNeulandClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void FilterablelER3BNeulandClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandGeoPar(void *p = 0);
   static void *newArray_R3BNeulandGeoPar(Long_t size, void *p);
   static void delete_R3BNeulandGeoPar(void *p);
   static void deleteArray_R3BNeulandGeoPar(void *p);
   static void destruct_R3BNeulandGeoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandGeoPar*)
   {
      ::R3BNeulandGeoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandGeoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandGeoPar", ::R3BNeulandGeoPar::Class_Version(), "", 648,
                  typeid(::R3BNeulandGeoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandGeoPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandGeoPar) );
      instance.SetNew(&new_R3BNeulandGeoPar);
      instance.SetNewArray(&newArray_R3BNeulandGeoPar);
      instance.SetDelete(&delete_R3BNeulandGeoPar);
      instance.SetDeleteArray(&deleteArray_R3BNeulandGeoPar);
      instance.SetDestructor(&destruct_R3BNeulandGeoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandGeoPar*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandGeoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandGeoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandContFact(void *p = 0);
   static void *newArray_R3BNeulandContFact(Long_t size, void *p);
   static void delete_R3BNeulandContFact(void *p);
   static void deleteArray_R3BNeulandContFact(void *p);
   static void destruct_R3BNeulandContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandContFact*)
   {
      ::R3BNeulandContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandContFact", ::R3BNeulandContFact::Class_Version(), "", 712,
                  typeid(::R3BNeulandContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandContFact) );
      instance.SetNew(&new_R3BNeulandContFact);
      instance.SetNewArray(&newArray_R3BNeulandContFact);
      instance.SetDelete(&delete_R3BNeulandContFact);
      instance.SetDeleteArray(&deleteArray_R3BNeulandContFact);
      instance.SetDestructor(&destruct_R3BNeulandContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandContFact*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BNeulandVisualizer(void *p);
   static void deleteArray_R3BNeulandVisualizer(void *p);
   static void destruct_R3BNeulandVisualizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandVisualizer*)
   {
      ::R3BNeulandVisualizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandVisualizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandVisualizer", ::R3BNeulandVisualizer::Class_Version(), "", 747,
                  typeid(::R3BNeulandVisualizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandVisualizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandVisualizer) );
      instance.SetDelete(&delete_R3BNeulandVisualizer);
      instance.SetDeleteArray(&deleteArray_R3BNeulandVisualizer);
      instance.SetDestructor(&destruct_R3BNeulandVisualizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandVisualizer*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandVisualizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandGeoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandGeoPar::Class_Name()
{
   return "R3BNeulandGeoPar";
}

//______________________________________________________________________________
const char *R3BNeulandGeoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandGeoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandGeoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandGeoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandGeoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandGeoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandGeoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandGeoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandContFact::Class_Name()
{
   return "R3BNeulandContFact";
}

//______________________________________________________________________________
const char *R3BNeulandContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandVisualizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandVisualizer::Class_Name()
{
   return "R3BNeulandVisualizer";
}

//______________________________________________________________________________
const char *R3BNeulandVisualizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandVisualizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandVisualizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandVisualizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandVisualizer*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FilterablelER3BNeulandClustermUgR(void *p) {
      return  p ? new(p) ::Filterable<R3BNeulandCluster*> : new ::Filterable<R3BNeulandCluster*>;
   }
   static void *newArray_FilterablelER3BNeulandClustermUgR(Long_t nElements, void *p) {
      return p ? new(p) ::Filterable<R3BNeulandCluster*>[nElements] : new ::Filterable<R3BNeulandCluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_FilterablelER3BNeulandClustermUgR(void *p) {
      delete ((::Filterable<R3BNeulandCluster*>*)p);
   }
   static void deleteArray_FilterablelER3BNeulandClustermUgR(void *p) {
      delete [] ((::Filterable<R3BNeulandCluster*>*)p);
   }
   static void destruct_FilterablelER3BNeulandClustermUgR(void *p) {
      typedef ::Filterable<R3BNeulandCluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Filterable<R3BNeulandCluster*>

//______________________________________________________________________________
void R3BNeulandGeoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandGeoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandGeoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandGeoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandGeoPar(void *p) {
      return  p ? new(p) ::R3BNeulandGeoPar : new ::R3BNeulandGeoPar;
   }
   static void *newArray_R3BNeulandGeoPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandGeoPar[nElements] : new ::R3BNeulandGeoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandGeoPar(void *p) {
      delete ((::R3BNeulandGeoPar*)p);
   }
   static void deleteArray_R3BNeulandGeoPar(void *p) {
      delete [] ((::R3BNeulandGeoPar*)p);
   }
   static void destruct_R3BNeulandGeoPar(void *p) {
      typedef ::R3BNeulandGeoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandGeoPar

//______________________________________________________________________________
void R3BNeulandContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandContFact(void *p) {
      return  p ? new(p) ::R3BNeulandContFact : new ::R3BNeulandContFact;
   }
   static void *newArray_R3BNeulandContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandContFact[nElements] : new ::R3BNeulandContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandContFact(void *p) {
      delete ((::R3BNeulandContFact*)p);
   }
   static void deleteArray_R3BNeulandContFact(void *p) {
      delete [] ((::R3BNeulandContFact*)p);
   }
   static void destruct_R3BNeulandContFact(void *p) {
      typedef ::R3BNeulandContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandContFact

//______________________________________________________________________________
void R3BNeulandVisualizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandVisualizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandVisualizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandVisualizer::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BNeulandVisualizer(void *p) {
      delete ((::R3BNeulandVisualizer*)p);
   }
   static void deleteArray_R3BNeulandVisualizer(void *p) {
      delete [] ((::R3BNeulandVisualizer*)p);
   }
   static void destruct_R3BNeulandVisualizer(void *p) {
      typedef ::R3BNeulandVisualizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandVisualizer

namespace ROOT {
   static TClass *vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_Dictionary();
   static void vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p = 0);
   static void *newArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(Long_t size, void *p);
   static void delete_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p);
   static void deleteArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p);
   static void destruct_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<function<bool(R3BNeulandCluster*const)> >*)
   {
      vector<function<bool(R3BNeulandCluster*const)> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<function<bool(R3BNeulandCluster*const)> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<function<bool(R3BNeulandCluster*const)> >", -2, "vector", 214,
                  typeid(vector<function<bool(R3BNeulandCluster*const)> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<function<bool(R3BNeulandCluster*const)> >) );
      instance.SetNew(&new_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR);
      instance.SetNewArray(&newArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR);
      instance.SetDelete(&delete_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR);
      instance.SetDestructor(&destruct_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<function<bool(R3BNeulandCluster*const)> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<function<bool(R3BNeulandCluster*const)> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<function<bool(R3BNeulandCluster*const)> >*)0x0)->GetClass();
      vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<function<bool(R3BNeulandCluster*const)> > : new vector<function<bool(R3BNeulandCluster*const)> >;
   }
   static void *newArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<function<bool(R3BNeulandCluster*const)> >[nElements] : new vector<function<bool(R3BNeulandCluster*const)> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p) {
      delete ((vector<function<bool(R3BNeulandCluster*const)> >*)p);
   }
   static void deleteArray_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p) {
      delete [] ((vector<function<bool(R3BNeulandCluster*const)> >*)p);
   }
   static void destruct_vectorlEfunctionlEbooloPR3BNeulandClustermUconstcPgRsPgR(void *p) {
      typedef vector<function<bool(R3BNeulandCluster*const)> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<function<bool(R3BNeulandCluster*const)> >

namespace ROOT {
   static TClass *maplEintcOTGeoNodemUgR_Dictionary();
   static void maplEintcOTGeoNodemUgR_TClassManip(TClass*);
   static void *new_maplEintcOTGeoNodemUgR(void *p = 0);
   static void *newArray_maplEintcOTGeoNodemUgR(Long_t size, void *p);
   static void delete_maplEintcOTGeoNodemUgR(void *p);
   static void deleteArray_maplEintcOTGeoNodemUgR(void *p);
   static void destruct_maplEintcOTGeoNodemUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,TGeoNode*>*)
   {
      map<int,TGeoNode*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,TGeoNode*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,TGeoNode*>", -2, "map", 96,
                  typeid(map<int,TGeoNode*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOTGeoNodemUgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,TGeoNode*>) );
      instance.SetNew(&new_maplEintcOTGeoNodemUgR);
      instance.SetNewArray(&newArray_maplEintcOTGeoNodemUgR);
      instance.SetDelete(&delete_maplEintcOTGeoNodemUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOTGeoNodemUgR);
      instance.SetDestructor(&destruct_maplEintcOTGeoNodemUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,TGeoNode*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,TGeoNode*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOTGeoNodemUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,TGeoNode*>*)0x0)->GetClass();
      maplEintcOTGeoNodemUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOTGeoNodemUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOTGeoNodemUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TGeoNode*> : new map<int,TGeoNode*>;
   }
   static void *newArray_maplEintcOTGeoNodemUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,TGeoNode*>[nElements] : new map<int,TGeoNode*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOTGeoNodemUgR(void *p) {
      delete ((map<int,TGeoNode*>*)p);
   }
   static void deleteArray_maplEintcOTGeoNodemUgR(void *p) {
      delete [] ((map<int,TGeoNode*>*)p);
   }
   static void destruct_maplEintcOTGeoNodemUgR(void *p) {
      typedef map<int,TGeoNode*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,TGeoNode*>

namespace {
  void TriggerDictionaryInitialization_G__R3BNeulandSharedDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/neuland/shared",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/neuland/shared/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BNeulandSharedDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$R3BNeulandCluster.h")))  R3BNeulandCluster;
template <typename T> class Filterable;

class R3BNeulandGeoPar;
class R3BNeulandContFact;
class R3BNeulandVisualizer;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BNeulandSharedDict dictionary payload"

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

#ifndef NEULANDCLUSTERINGENGINEH
#define NEULANDCLUSTERINGENGINEH

#include <algorithm>
#include <functional>
#include <vector>

namespace Neuland
{

    template <typename T>
    class ClusteringEngine
    {
        using Tit = typename std::vector<T>::iterator;
        using BinaryPredicate = std::function<bool(const T&, const T&)>;

      private:
        BinaryPredicate f;

        /* Partitions an already divided range by clustering both the items in the first part AND the items added to the
         * first part during this process with the items in the second part.
         * Takes the begin of a range of interest that acts as reference/seed, the end of that range which is the
         * divider to the range to be analyzed, the end of the container, and the clustering function.
         * Returns the new divider between cluster and non-cluster */
        Tit moving_partition(const Tit begin, Tit moving_divider, const Tit end) const
        {
            // The end of the iteration will change if matching objects are found, such that these will be iterated over
            // as well
            for (Tit a = begin; a != moving_divider; a++)
            {
                // Partition returns iterator to the first element of the non-clustered rest of the container
                moving_divider = std::partition(moving_divider, end, [&](const T& b) { return f(*a, b); });
            }
            return moving_divider;
        }

      public:
        /* Default Constructor. Note: If the clustering condition is not set, a "bad_function_call" will be thrown upon
         * calling clusterize. This seems better than providing a default function which might produce hard-to-track
         * unwanted results. */
        ClusteringEngine(){};
        ClusteringEngine(const BinaryPredicate& _f)
            : f(_f)
        {
        }

        void SetClusteringCondition(const BinaryPredicate& _f) { f = _f; }

        bool SatisfiesClusteringCondition(const T& a, const T& b) const { return f(a, b); }

        std::vector<std::vector<T>> Clusterize(std::vector<T>& from) const
        {
            std::vector<std::vector<T>> out;

            /* Three iterators (read: markers for positions in the input vector) are required:
             * Begin is the start of the clustered part of the vector
             * Divider separates the clustered part from the unclustered part, and
             * end is the end of the vector*/
            Tit begin;
            Tit divider = from.begin();
            const Tit end = from.end();

            /* While the end of the input vector has not been reached, start a new cluster containing one element from
             * the unclustered part and then move all objects that match the clustering condition in that range.
             * This part of the input vector can then be move-constructed into a new vector = cluster */
            while (divider != end)
            {
                begin = divider;
                divider++;
                divider = moving_partition(begin, divider, end);
                out.push_back(
                    std::move(std::vector<T>(std::make_move_iterator(begin), std::make_move_iterator(divider))));
            }
            return out;
        }
    };

}; // namespace Neuland

#endif // NEULANDCLUSTERINGENGINEH
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

#ifndef NEULAND_ELASTICPROTONENERGY
#define NEULAND_ELASTICPROTONENERGY

#include "R3BNeulandCluster.h"

namespace Neuland
{
    Double_t RecoilProtonEnergy(const R3BNeulandCluster*);
    Double_t RecoilScatteringAngle(const R3BNeulandCluster*);
    Double_t ScatteredNeutronEnergy(const R3BNeulandCluster* first, const R3BNeulandCluster* second);
    Double_t ScatteredNeutronAngle(const R3BNeulandCluster* first, const R3BNeulandCluster* second);
    Double_t NeutronEnergyFromElasticProtonScattering(const R3BNeulandCluster*);
    Double_t NeutronEnergyFromElasticScattering(const R3BNeulandCluster* first,
                                                const R3BNeulandCluster* second,
                                                const Double_t targetMass);
    Double_t MaybeElasticScattering(const R3BNeulandCluster* first,
                                    const R3BNeulandCluster* second,
                                    const Double_t targetMass);
    Double_t ElasticScatteringTargetMass(const R3BNeulandCluster* first, const R3BNeulandCluster* second);
} // namespace Neuland

#endif // NEULAND_ELASTICPROTONENERGY
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

#ifndef FILTERABLE
#define FILTERABLE

#include <functional>
#include <vector>

template <typename T>
class Filterable
{
  public:
    using Filter = std::function<bool(const T)>;

  private:
    std::vector<Filter> filters;

  public:
    Filterable() = default;
    explicit Filterable(const std::vector<Filter>& vf)
        : filters(vf)
    {
    }
    inline void Add(const Filter& f) { filters.push_back(f); }
    inline bool IsValid(const T t) const
    {
        for (const auto& filter : filters)
        {
            if (filter(t) == false)
            {
                return false;
            }
        }
        return true;
    }
};

#endif // FILTERABLE
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

#ifndef TCACONNECTOR
#define TCACONNECTOR

#include "FairRootManager.h"
#include "TClonesArray.h"
#include "TString.h"
#include <exception>
#include <utility>
#include <vector>

template <typename T>
class TCAInputConnector
{
  private:
    TString fBranchName;
    TString fClassName;
    TClonesArray* fTCA; // non-owning

  public:
    TCAInputConnector(TString b)
        : fBranchName(std::move(b))
        , fClassName(T().ClassName())
        , fTCA(nullptr)
    {
    }

    void Init()
    {
        auto ioman = FairRootManager::Instance();
        if (ioman == nullptr)
        {
            throw std::runtime_error("TCAInputConnector: No FairRootManager");
        }
        fTCA = (TClonesArray*)ioman->GetObject(fBranchName);
        if (fTCA == nullptr)
        {
            throw std::runtime_error(("TCAInputConnector: No TClonesArray called " + fBranchName +
                                      " could be obtained from the FairRootManager")
                                         .Data());
        }
        if (!TString(fTCA->GetClass()->GetName()).EqualTo(fClassName))
        {
            throw std::runtime_error(
                ("TCAInputConnector: TClonesArray " + fBranchName + " does not contain elements of type " + fClassName)
                    .Data());
        }
    }

    std::vector<T*> Retrieve() const
    {
        std::vector<T*> fV;
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAInputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }

        const Int_t n = fTCA->GetEntries();
        fV.reserve(n);
        for (Int_t i = 0; i < n; i++)
        {
            fV.emplace_back((T*)fTCA->At(i));
        }
        return fV;
    }

    std::vector<T> RetrieveObjects() const
    {
        std::vector<T> fV;
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAInputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }

        const Int_t n = fTCA->GetEntries();
        fV.reserve(n);
        for (Int_t i = 0; i < n; i++)
        {
            fV.emplace_back(*(T*)fTCA->At(i));
        }
        return fV;
    }
};

template <typename T>
class TCAOptionalInputConnector
{
  private:
    TString fBranchName;
    TString fClassName;
    TClonesArray* fTCA; // non-owning

  public:
    TCAOptionalInputConnector(TString b)
        : fBranchName(std::move(b))
        , fClassName(T().ClassName())
        , fTCA(nullptr)
    {
    }

    void Init()
    {
        auto ioman = FairRootManager::Instance();
        if (ioman == nullptr)
        {
            throw std::runtime_error("TCAInputConnector: No FairRootManager");
        }
        fTCA = (TClonesArray*)ioman->GetObject(fBranchName);
        if (fTCA != nullptr && !TString(fTCA->GetClass()->GetName()).EqualTo(fClassName))
        {
            throw std::runtime_error(
                ("TCAInputConnector: TClonesArray " + fBranchName + " does not contain elements of type " + fClassName)
                    .Data());
        }
    }

    std::vector<T*> Retrieve() const
    {
        std::vector<T*> fV;
        if (fTCA == nullptr)
        {
            return fV;
        }

        const Int_t n = fTCA->GetEntries();
        fV.reserve(n);
        for (Int_t i = 0; i < n; i++)
        {
            fV.emplace_back((T*)fTCA->At(i));
        }
        return fV;
    }

    std::vector<T> RetrieveObjects() const
    {
        std::vector<T> fV;
        if (fTCA == nullptr)
        {
            return fV;
        }

        const Int_t n = fTCA->GetEntries();
        fV.reserve(n);
        for (Int_t i = 0; i < n; i++)
        {
            fV.emplace_back(*(T*)fTCA->At(i));
        }
        return fV;
    }
};

template <typename T>
class TCAOutputConnector
{
  private:
    TString fBranchName;
    TString fClassName;
    TClonesArray* fTCA; // non-owning

  public:
    TCAOutputConnector(TString b)
        : fBranchName(std::move(b))
        , fClassName(T().ClassName())
        , fTCA(nullptr)
    {
    }

    void Init()
    {
        auto ioman = FairRootManager::Instance();
        if (ioman == nullptr)
        {
            throw std::runtime_error("TCAOutputConnector: No FairRootManager");
        }
        fTCA = ioman->Register(fBranchName, fClassName, "", kTRUE);

        if (fTCA == nullptr)
        {
            throw std::runtime_error(("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName +
                                      "s could not be provided by the FairRootManager")
                                         .Data());
        }
    }

    void Reset()
    {
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }
        fTCA->Clear("C");
    }

    Int_t Size()
    {
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }
        return fTCA->GetEntries();
    }

    void Insert(T t)
    {
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }
        new ((*fTCA)[fTCA->GetEntries()]) T(std::move(t));
    }

    void Insert(T* t)
    {
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }
        if (t != nullptr)
        {
            new ((*fTCA)[fTCA->GetEntries()]) T(*t);
        }
    }

    void Insert(std::vector<T>& v)
    {
        if (fTCA == nullptr)
        {
            throw std::runtime_error(
                ("TCAOutputConnector: TClonesArray " + fBranchName + " of " + fClassName + "s not available").Data());
        }
        for (auto& o : v)
        {
            new ((*fTCA)[fTCA->GetEntries()]) T(std::move(o));
        }
        v.clear();
    }
};

#endif // TCACONNECTOR
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

#ifndef R3BVALIDATED_H
#define R3BVALIDATED_H

//=============================================================================
//
// D A templatised class to represent data which can be validated, for instance
// D for data caching.
// D Original: https://bitbucket.org/davidcorne/mutable/
// D Modified by Jan Mayer

#include <assert.h>

//=============================================================================
template <typename T>
class Validated
{
  public:
    Validated();
    // invalid constructor

    Validated(const T& data);
    // valid constructor

    bool valid() const;
    // is this valid or not?

    void invalidate();
    // makes the class invalid again, so call in a function which will change the
    // cached value.

    void set(const T& data);
    // set the data, makes the instance valid.

    T get() const;
    // explicit conversion

    operator T();
    operator T() const;
    // implicit conversions to the template type.

  private:
    bool m_valid;
    T m_data;
};

//=============================================================================
//
// D Include the source in the header file as it is a templatised class.
//

//=============================================================================
template <typename T>
Validated<T>::Validated()
    //
    // D Invalid constructor
    //
    : m_valid(false)
{
}

//=============================================================================
template <typename T>
Validated<T>::Validated(const T& data)
    //
    // D Valid constructor
    //
    : m_valid(true)
    , m_data(data)
{
}

//=============================================================================
template <typename T>
bool Validated<T>::valid() const
//
// D is this valid or not?
//
{
    return m_valid;
}

//=============================================================================
template <typename T>
void Validated<T>::invalidate()
//
// D Makes the class invalid again, so call when the client calls a function
// D which will change the cached value.
//
{
    m_valid = false;
}

//=============================================================================
template <typename T>
void Validated<T>::set(const T& data)
//
// D set the data.
//
{
    m_data = data;
    m_valid = true;
}

//=============================================================================
template <typename T>
T Validated<T>::get() const
{
    assert(valid() && "Cannot return invalid data.");
    return m_data;
}

//=============================================================================
template <typename T>
Validated<T>::operator T()
//
// D implicit conversion to the template type.
//
{
    assert(valid() && "Cannot return invalid data.");
    return m_data;
}

//=============================================================================
template <typename T>
Validated<T>::operator T() const
//
// D implicit conversion to the template type.
//
{
    // a nice way of returning a message with a standard assert.
    assert(valid() && "Cannot return invalid data.");
    return m_data;
}

#endif // R3BVALIDATED_H
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

#ifndef NEULAND_ISELASTIC
#define NEULAND_ISELASTIC

#include "R3BNeulandCluster.h"

namespace Neuland
{
    bool IsElastic(const R3BNeulandCluster*, const R3BNeulandCluster*);
} // namespace Neuland

#endif // NEULAND_ISELASTIC
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

#ifndef R3BNEULANDGEOPAR_H
#define R3BNEULANDGEOPAR_H

#include "FairParGenericSet.h"
#include "TGeoNode.h"
#include <map>
class FairParamList;
class TVector3;

/**
 * NeuLAND geometry parameter storage
 * @author Jan Mayer
 *
 * Stores the full Neuland geo node used in the simulation for later reference, especially for coordinate
 * transformation from and to local and global coordinates.
 */

class R3BNeulandGeoPar : public FairParGenericSet
{
  public:
    // needs to be public?
    TGeoNode* fNeulandGeoNode;

    R3BNeulandGeoPar(const char* name = "R3BNeulandGeoPar",
                     const char* title = "Neuland Geometry Parameters",
                     const char* context = "TestDefaultContext");
    ~R3BNeulandGeoPar() override;

    void clear() override;
    void putParams(FairParamList*) override;
    Bool_t getParams(FairParamList*) override;
    void printParams() override;

    TGeoNode* GetNeulandGeoNode() { return fNeulandGeoNode; } // FIXME: const?
    void SetNeulandGeoNode(const TGeoNode* const p);

    Double_t GetPaddleHalfLength() const;
    TVector3 ConvertToLocalCoordinates(const TVector3& position, const Int_t paddleID) const;
    TVector3 ConvertToGlobalCoordinates(const TVector3& position, const Int_t paddleID) const;
    TVector3 ConvertGlobalToPixel(const TVector3& position) const;

  private:
    std::map<Int_t, TGeoNode*> fPaddleGeoNodes;
    void BuildPaddleLookup();

    R3BNeulandGeoPar(const R3BNeulandGeoPar&);
    R3BNeulandGeoPar& operator=(const R3BNeulandGeoPar&);

    ClassDefOverride(R3BNeulandGeoPar, 1)
};

#endif // R3BNEULANDGEOPAR_H
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

#ifndef R3BNEULANDCONTFACT_H
#define R3BNEULANDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

/**
 * NeuLAND parameter container factory
 * @author Jan Mayer
 *
 * Lots of super brittle boilerplate code that should really not be necessary
 * TODO: Make FairRoot better so all of this can be deleted.
 */

class R3BNeulandContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BNeulandContFact();
    FairParSet* createContainer(FairContainer*) override;
    ClassDefOverride(R3BNeulandContFact, 0)
};

#endif // R3BNEULANDCONTFACT_H
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

#ifndef R3BNEULANDVISUALIZER_H
#define R3BNEULANDVISUALIZER_H 1

#include "TCanvas.h"
#include "TFile.h"
#include "TH3D.h"
#include "TTree.h"
#include <memory>

class R3BNeulandVisualizer
{
  public:
    R3BNeulandVisualizer(const TString& input_file, const TString& what);
    virtual ~R3BNeulandVisualizer() = default; // to avoid a ROOT-based (?) warning

    inline void ShowEvent(const UInt_t i)
    {
        fIndex = i;
        Visualize();
    }

    inline void ShowNext()
    {
        fIndex++;
        Visualize();
    }

  protected:
    void Visualize();

  private:
    std::shared_ptr<TFile> fFile;
    TTree* fTree; // non-owning
    TH3D* fh3;    // non-owning
    std::shared_ptr<TCanvas> fCanvas;
    UInt_t fIndex;

    ClassDef(R3BNeulandVisualizer, 0);
};

#endif // R3BNEULANDVISUALIZER_H
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

#ifndef NEULANDCOMMON_H
#define NEULANDCOMMON_H

#include <cmath>
#include <limits>
#include <vector>

namespace Neuland
{
    // Constants

    constexpr auto __sqrt12 = 3.464101615;
    constexpr auto NaN = std::numeric_limits<double>::quiet_NaN();
    constexpr auto Inf = std::numeric_limits<double>::infinity();

    // Usefull functions I do not want to redefine in every file

    template <typename T>
    constexpr T Sqr(const T val)
    {
        return val * val;
    }


    // Initialize variables from Birk' s Law

    constexpr double BirkdP = 1.032;
    constexpr double BirkC1 = 0.013 / BirkdP;
    constexpr double BirkC2 = 9.6e-6 / (BirkdP * BirkdP);

    constexpr double GetLightYieldAfterBirk(const int charge, const double length_mm, const double edep_MeV)
    {
        return (charge * length_mm == 0.
                    ? edep_MeV
                    : edep_MeV / (1. + BirkC1 * (Sqr(charge) > 1 ? 7.2 / 12.6 : 1.) * (edep_MeV / length_mm) +
                                  BirkC2 * Sqr(edep_MeV / length_mm)));
    }

    // Physical Constants

    constexpr auto CLight = 29.9792458;     // Speed of light [cm/ns]
    constexpr auto InvCLight = 1. / CLight; // Speed of light [cm/ns]>

    // Electronics Constans

    constexpr auto MaxCalTime = 5. * 2048;

    // Geometry & Material Constants

    constexpr auto BarSize_XY = 5.0;                                  // cm NeuLAND parameter
    constexpr auto BarUncertainty_XY = BarSize_XY / __sqrt12;         // cm NeuLAND parameter
    constexpr auto BarSize_Z = 5.0;                                   // cm NeuLAND parameter
    constexpr auto BarUncertainty_Z = BarSize_Z / __sqrt12;           // cm NeuLAND parameter
    constexpr auto BarLength = 250.0;                                 // cm NeuLAND parameter
    constexpr auto LightGuideLength = 10.0;                           // cm NeuLAND parameter
    constexpr auto TotalBarLength = BarLength + 2 * LightGuideLength; // cm NeuLAND parameter, Bar including Light Guide

    constexpr auto ScintillatorDensity = 1.032;        // g / cm^3
    constexpr auto MIPStoppingPowerPerDensity = 1.956; // MeV cm^2 / g
    constexpr auto MIPStoppingPower = 1.73;            // MeV / cm

    constexpr auto FirstHorizontalPlane = 0;
    constexpr auto BarsPerPlane = 50;
    constexpr auto MaxNumberOfPlanes = 60;
    constexpr auto MaxNumberOfBars = MaxNumberOfPlanes * BarsPerPlane;

    constexpr bool IsPlaneHorizontal(const int plane) { return (plane % 2 == FirstHorizontalPlane); }
    constexpr bool IsPlaneVertical(const int plane) { return !IsPlaneHorizontal(plane); }
    constexpr int GetPlaneNumber(const int barID) { return barID / BarsPerPlane; }

    // Average Parameters

    constexpr auto AvgTimeResolution = 0.150;   // ns
    constexpr auto AvgEffectiveCLight = -7.95;  // cm / ns
    constexpr auto AvgGain = 15;                // MeV / ns
    constexpr auto AvgThreshold = 1.75;         // MeV
    constexpr auto AvgAttenuationLength = 400.; // cm

    constexpr auto SaturationCoefficient = 1.75e-3; // 1 / ns

} // namespace Neuland

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"Filterable<R3BNeulandCluster*>", payloadCode, "@",
"R3BNeulandContFact", payloadCode, "@",
"R3BNeulandGeoPar", payloadCode, "@",
"R3BNeulandVisualizer", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BNeulandSharedDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BNeulandSharedDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BNeulandSharedDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BNeulandSharedDict() {
  TriggerDictionaryInitialization_G__R3BNeulandSharedDict_Impl();
}
