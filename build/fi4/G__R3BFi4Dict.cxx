// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfi4dIG__R3BFi4Dict

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
#include "R3BFi4.h"
#include "R3BFi4ContFact.h"
#include "R3BFi4Digitizer.h"
#include "R3BFi4Mapped2Cal.h"
#include "R3BFi4Cal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BFi4(void *p = 0);
   static void *newArray_R3BFi4(Long_t size, void *p);
   static void delete_R3BFi4(void *p);
   static void deleteArray_R3BFi4(void *p);
   static void destruct_R3BFi4(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4*)
   {
      ::R3BFi4 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4", ::R3BFi4::Class_Version(), "", 30,
                  typeid(::R3BFi4), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4) );
      instance.SetNew(&new_R3BFi4);
      instance.SetNewArray(&newArray_R3BFi4);
      instance.SetDelete(&delete_R3BFi4);
      instance.SetDeleteArray(&deleteArray_R3BFi4);
      instance.SetDestructor(&destruct_R3BFi4);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4*)
   {
      return GenerateInitInstanceLocal((::R3BFi4*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi4ContFact(void *p = 0);
   static void *newArray_R3BFi4ContFact(Long_t size, void *p);
   static void delete_R3BFi4ContFact(void *p);
   static void deleteArray_R3BFi4ContFact(void *p);
   static void destruct_R3BFi4ContFact(void *p);
   static void streamer_R3BFi4ContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4ContFact*)
   {
      ::R3BFi4ContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4ContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4ContFact", ::R3BFi4ContFact::Class_Version(), "", 191,
                  typeid(::R3BFi4ContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4ContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BFi4ContFact) );
      instance.SetNew(&new_R3BFi4ContFact);
      instance.SetNewArray(&newArray_R3BFi4ContFact);
      instance.SetDelete(&delete_R3BFi4ContFact);
      instance.SetDeleteArray(&deleteArray_R3BFi4ContFact);
      instance.SetDestructor(&destruct_R3BFi4ContFact);
      instance.SetStreamerFunc(&streamer_R3BFi4ContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4ContFact*)
   {
      return GenerateInitInstanceLocal((::R3BFi4ContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4ContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi4Digitizer(void *p = 0);
   static void *newArray_R3BFi4Digitizer(Long_t size, void *p);
   static void delete_R3BFi4Digitizer(void *p);
   static void deleteArray_R3BFi4Digitizer(void *p);
   static void destruct_R3BFi4Digitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4Digitizer*)
   {
      ::R3BFi4Digitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4Digitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4Digitizer", ::R3BFi4Digitizer::Class_Version(), "", 235,
                  typeid(::R3BFi4Digitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4Digitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4Digitizer) );
      instance.SetNew(&new_R3BFi4Digitizer);
      instance.SetNewArray(&newArray_R3BFi4Digitizer);
      instance.SetDelete(&delete_R3BFi4Digitizer);
      instance.SetDeleteArray(&deleteArray_R3BFi4Digitizer);
      instance.SetDestructor(&destruct_R3BFi4Digitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4Digitizer*)
   {
      return GenerateInitInstanceLocal((::R3BFi4Digitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4Digitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi4Mapped2Cal(void *p);
   static void deleteArray_R3BFi4Mapped2Cal(void *p);
   static void destruct_R3BFi4Mapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4Mapped2Cal*)
   {
      ::R3BFi4Mapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4Mapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4Mapped2Cal", ::R3BFi4Mapped2Cal::Class_Version(), "", 306,
                  typeid(::R3BFi4Mapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4Mapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4Mapped2Cal) );
      instance.SetDelete(&delete_R3BFi4Mapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BFi4Mapped2Cal);
      instance.SetDestructor(&destruct_R3BFi4Mapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4Mapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BFi4Mapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4Mapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi4Cal2Hit(void *p);
   static void deleteArray_R3BFi4Cal2Hit(void *p);
   static void destruct_R3BFi4Cal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4Cal2Hit*)
   {
      ::R3BFi4Cal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4Cal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4Cal2Hit", ::R3BFi4Cal2Hit::Class_Version(), "", 335,
                  typeid(::R3BFi4Cal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4Cal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4Cal2Hit) );
      instance.SetDelete(&delete_R3BFi4Cal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BFi4Cal2Hit);
      instance.SetDestructor(&destruct_R3BFi4Cal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4Cal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BFi4Cal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4Cal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4::Class_Name()
{
   return "R3BFi4";
}

//______________________________________________________________________________
const char *R3BFi4::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4ContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4ContFact::Class_Name()
{
   return "R3BFi4ContFact";
}

//______________________________________________________________________________
const char *R3BFi4ContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4ContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4ContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4ContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4ContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4ContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4ContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4ContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4Digitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4Digitizer::Class_Name()
{
   return "R3BFi4Digitizer";
}

//______________________________________________________________________________
const char *R3BFi4Digitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Digitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4Digitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Digitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4Digitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Digitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4Digitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Digitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4Mapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4Mapped2Cal::Class_Name()
{
   return "R3BFi4Mapped2Cal";
}

//______________________________________________________________________________
const char *R3BFi4Mapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Mapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4Mapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Mapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4Mapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Mapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4Mapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Mapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4Cal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4Cal2Hit::Class_Name()
{
   return "R3BFi4Cal2Hit";
}

//______________________________________________________________________________
const char *R3BFi4Cal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Cal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4Cal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Cal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4Cal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Cal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4Cal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Cal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFi4::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4(void *p) {
      return  p ? new(p) ::R3BFi4 : new ::R3BFi4;
   }
   static void *newArray_R3BFi4(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4[nElements] : new ::R3BFi4[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4(void *p) {
      delete ((::R3BFi4*)p);
   }
   static void deleteArray_R3BFi4(void *p) {
      delete [] ((::R3BFi4*)p);
   }
   static void destruct_R3BFi4(void *p) {
      typedef ::R3BFi4 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4

//______________________________________________________________________________
void R3BFi4ContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4ContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4ContFact(void *p) {
      return  p ? new(p) ::R3BFi4ContFact : new ::R3BFi4ContFact;
   }
   static void *newArray_R3BFi4ContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4ContFact[nElements] : new ::R3BFi4ContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4ContFact(void *p) {
      delete ((::R3BFi4ContFact*)p);
   }
   static void deleteArray_R3BFi4ContFact(void *p) {
      delete [] ((::R3BFi4ContFact*)p);
   }
   static void destruct_R3BFi4ContFact(void *p) {
      typedef ::R3BFi4ContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BFi4ContFact(TBuffer &buf, void *obj) {
      ((::R3BFi4ContFact*)obj)->::R3BFi4ContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BFi4ContFact

//______________________________________________________________________________
void R3BFi4Digitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4Digitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4Digitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4Digitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4Digitizer(void *p) {
      return  p ? new(p) ::R3BFi4Digitizer : new ::R3BFi4Digitizer;
   }
   static void *newArray_R3BFi4Digitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4Digitizer[nElements] : new ::R3BFi4Digitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4Digitizer(void *p) {
      delete ((::R3BFi4Digitizer*)p);
   }
   static void deleteArray_R3BFi4Digitizer(void *p) {
      delete [] ((::R3BFi4Digitizer*)p);
   }
   static void destruct_R3BFi4Digitizer(void *p) {
      typedef ::R3BFi4Digitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4Digitizer

//______________________________________________________________________________
void R3BFi4Mapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4Mapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4Mapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4Mapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi4Mapped2Cal(void *p) {
      delete ((::R3BFi4Mapped2Cal*)p);
   }
   static void deleteArray_R3BFi4Mapped2Cal(void *p) {
      delete [] ((::R3BFi4Mapped2Cal*)p);
   }
   static void destruct_R3BFi4Mapped2Cal(void *p) {
      typedef ::R3BFi4Mapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4Mapped2Cal

//______________________________________________________________________________
void R3BFi4Cal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4Cal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4Cal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4Cal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi4Cal2Hit(void *p) {
      delete ((::R3BFi4Cal2Hit*)p);
   }
   static void deleteArray_R3BFi4Cal2Hit(void *p) {
      delete [] ((::R3BFi4Cal2Hit*)p);
   }
   static void destruct_R3BFi4Cal2Hit(void *p) {
      typedef ::R3BFi4Cal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4Cal2Hit

namespace {
  void TriggerDictionaryInitialization_G__R3BFi4Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/fi4",
"/work/R3BRoot/fiber",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tracking",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/fi4/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BFi4Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFi4;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Fi4 parameter containers)ATTRDUMP"))) R3BFi4ContFact;
class R3BFi4Digitizer;
class R3BFi4Mapped2Cal;
class R3BFi4Cal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BFi4Dict dictionary payload"

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

#ifndef R3BFi4_H
#define R3BFi4_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BFi4Point;
class FairVolume;
class R3BTGeoPar;

class R3BFi4 : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BFi4();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BFi4(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BFi4(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BFi4();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BFi4Point and adds it to the
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
    TClonesArray* fFi4Collection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    R3BTGeoPar* fTGeoPar; //!

    /** Private method AddHit
     **
     ** Adds a Fi4Point to the HitCollection
     **/
    R3BFi4Point* AddHit(Int_t trackID,
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

    ClassDef(R3BFi4, 2);
};

inline void R3BFi4::ResetParameters()
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

#ifndef R3BFI4CONTFACT_H
#define R3BFI4CONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BFi4ContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BFi4ContFact();
    ~R3BFi4ContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BFi4ContFact, 0) // Factory for all Fi4 parameter containers
};

#endif /* !R3BFI4CONTFACT_H */
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

// R3BFi4Digitizer.h 07. 08. 2017.
// Created by: Aron Kripko

#ifndef R3BFi4DIGITISER_H
#define R3BFI4DIGITISER_H 1

#include "FairTask.h"
#include "R3BFi4HitItem.h"
#include <TRandom3.h>
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;

class R3BFi4Digitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BFi4Digitizer();

    R3BFi4Digitizer(Double_t esigma, Double_t tsigma, Double_t ysigma);

    /** Destructor **/
    ~R3BFi4Digitizer();

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
    TClonesArray* fFi4Points;
    TClonesArray* fFi6Points;
    TClonesArray* fFi5Points;

    TClonesArray* fMCTrack;

    TClonesArray* fFi4Hits;
    TClonesArray* fFi6Hits;
    TClonesArray* fFi5Hits;

  private:
    TRandom3* prnd;
    Double_t esigma;
    Double_t tsigma;
    Double_t ysigma;

    ClassDef(R3BFi4Digitizer, 1);
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
// -----                R3BFi4Mapped2Cal                -----
// -----            Created Jan 13th 2018 by M.Heil       -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BFI4MAPPED2CAL
#define R3BFI4MAPPED2CAL

#include "R3BBunchedFiberMapped2Cal.h"

class R3BFi4Mapped2Cal : public R3BBunchedFiberMapped2Cal
{
  public:
    R3BFi4Mapped2Cal(Int_t, enum R3BTCalEngine::CTDCVariant);
    virtual ~R3BFi4Mapped2Cal();

    ClassDef(R3BFi4Mapped2Cal, 1)
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

#ifndef R3BFI4CAL2HIT
#define R3BFI4CAL2HIT

#include "R3BBunchedFiberCal2Hit.h"

class R3BFi4Cal2Hit : public R3BBunchedFiberCal2Hit
{
  public:
    R3BFi4Cal2Hit(Bool_t, Bool_t, Bool_t, Int_t = 1);
    virtual ~R3BFi4Cal2Hit();
    UInt_t FixMistake(UInt_t);

    ClassDef(R3BFi4Cal2Hit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFi4", payloadCode, "@",
"R3BFi4Cal2Hit", payloadCode, "@",
"R3BFi4ContFact", payloadCode, "@",
"R3BFi4Digitizer", payloadCode, "@",
"R3BFi4Mapped2Cal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BFi4Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BFi4Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BFi4Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BFi4Dict() {
  TriggerDictionaryInitialization_G__R3BFi4Dict_Impl();
}
