// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIfi0dIG__R3BFi0Dict

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
#include "R3BFi0Cal2Hit.h"
#include "R3BFi0Mapped2Cal.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void delete_R3BFi0Cal2Hit(void *p);
   static void deleteArray_R3BFi0Cal2Hit(void *p);
   static void destruct_R3BFi0Cal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi0Cal2Hit*)
   {
      ::R3BFi0Cal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi0Cal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi0Cal2Hit", ::R3BFi0Cal2Hit::Class_Version(), "", 24,
                  typeid(::R3BFi0Cal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi0Cal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi0Cal2Hit) );
      instance.SetDelete(&delete_R3BFi0Cal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BFi0Cal2Hit);
      instance.SetDestructor(&destruct_R3BFi0Cal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi0Cal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BFi0Cal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi0Cal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFi0Mapped2Cal(void *p);
   static void deleteArray_R3BFi0Mapped2Cal(void *p);
   static void destruct_R3BFi0Mapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi0Mapped2Cal*)
   {
      ::R3BFi0Mapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi0Mapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi0Mapped2Cal", ::R3BFi0Mapped2Cal::Class_Version(), "", 54,
                  typeid(::R3BFi0Mapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi0Mapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi0Mapped2Cal) );
      instance.SetDelete(&delete_R3BFi0Mapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BFi0Mapped2Cal);
      instance.SetDestructor(&destruct_R3BFi0Mapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi0Mapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BFi0Mapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi0Mapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BFi0Cal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi0Cal2Hit::Class_Name()
{
   return "R3BFi0Cal2Hit";
}

//______________________________________________________________________________
const char *R3BFi0Cal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Cal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi0Cal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Cal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi0Cal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Cal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi0Cal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Cal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi0Mapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi0Mapped2Cal::Class_Name()
{
   return "R3BFi0Mapped2Cal";
}

//______________________________________________________________________________
const char *R3BFi0Mapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Mapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi0Mapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Mapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi0Mapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Mapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi0Mapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi0Mapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BFi0Cal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi0Cal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi0Cal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi0Cal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi0Cal2Hit(void *p) {
      delete ((::R3BFi0Cal2Hit*)p);
   }
   static void deleteArray_R3BFi0Cal2Hit(void *p) {
      delete [] ((::R3BFi0Cal2Hit*)p);
   }
   static void destruct_R3BFi0Cal2Hit(void *p) {
      typedef ::R3BFi0Cal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi0Cal2Hit

//______________________________________________________________________________
void R3BFi0Mapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi0Mapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi0Mapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi0Mapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFi0Mapped2Cal(void *p) {
      delete ((::R3BFi0Mapped2Cal*)p);
   }
   static void deleteArray_R3BFi0Mapped2Cal(void *p) {
      delete [] ((::R3BFi0Mapped2Cal*)p);
   }
   static void destruct_R3BFi0Mapped2Cal(void *p) {
      typedef ::R3BFi0Mapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi0Mapped2Cal

namespace {
  void TriggerDictionaryInitialization_G__R3BFi0Dict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/fi0",
"/work/R3BRoot/fiber",
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/fi0/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BFi0Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BFi0Cal2Hit;
class R3BFi0Mapped2Cal;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BFi0Dict dictionary payload"

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

#ifndef R3BFI0CAL2HIT
#define R3BFI0CAL2HIT

#include "R3BBunchedFiberCal2Hit.h"

class R3BFi0Cal2Hit : public R3BBunchedFiberCal2Hit
{
  public:
    R3BFi0Cal2Hit(Bool_t, Bool_t, Bool_t, Int_t = 1);
    virtual ~R3BFi0Cal2Hit();
    UInt_t FixMistake(UInt_t);

    ClassDef(R3BFi0Cal2Hit, 1)
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

#ifndef R3BFI0MAPPED2CAL
#define R3BFI0MAPPED2CAL

#include "R3BBunchedFiberMapped2Cal.h"

class R3BFi0Mapped2Cal : public R3BBunchedFiberMapped2Cal
{
  public:
    R3BFi0Mapped2Cal(Int_t, enum R3BTCalEngine::CTDCVariant);
    virtual ~R3BFi0Mapped2Cal();

    ClassDef(R3BFi0Mapped2Cal, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BFi0Cal2Hit", payloadCode, "@",
"R3BFi0Mapped2Cal", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BFi0Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BFi0Dict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BFi0Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BFi0Dict() {
  TriggerDictionaryInitialization_G__R3BFi0Dict_Impl();
}
