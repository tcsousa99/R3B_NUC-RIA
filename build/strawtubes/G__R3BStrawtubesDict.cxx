// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIstrawtubesdIG__R3BStrawtubesDict

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
#include "R3BStrawtubesMapped2Cal.h"
#include "R3BStrawtubesMapped2CalPar.h"
#include "R3BStrawtubesCal2Hit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BStrawtubesMapped2Cal(void *p = 0);
   static void *newArray_R3BStrawtubesMapped2Cal(Long_t size, void *p);
   static void delete_R3BStrawtubesMapped2Cal(void *p);
   static void deleteArray_R3BStrawtubesMapped2Cal(void *p);
   static void destruct_R3BStrawtubesMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesMapped2Cal*)
   {
      ::R3BStrawtubesMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesMapped2Cal", ::R3BStrawtubesMapped2Cal::Class_Version(), "", 26,
                  typeid(::R3BStrawtubesMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesMapped2Cal) );
      instance.SetNew(&new_R3BStrawtubesMapped2Cal);
      instance.SetNewArray(&newArray_R3BStrawtubesMapped2Cal);
      instance.SetDelete(&delete_R3BStrawtubesMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesMapped2Cal);
      instance.SetDestructor(&destruct_R3BStrawtubesMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStrawtubesMapped2CalPar(void *p = 0);
   static void *newArray_R3BStrawtubesMapped2CalPar(Long_t size, void *p);
   static void delete_R3BStrawtubesMapped2CalPar(void *p);
   static void deleteArray_R3BStrawtubesMapped2CalPar(void *p);
   static void destruct_R3BStrawtubesMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesMapped2CalPar*)
   {
      ::R3BStrawtubesMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesMapped2CalPar", ::R3BStrawtubesMapped2CalPar::Class_Version(), "", 72,
                  typeid(::R3BStrawtubesMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesMapped2CalPar) );
      instance.SetNew(&new_R3BStrawtubesMapped2CalPar);
      instance.SetNewArray(&newArray_R3BStrawtubesMapped2CalPar);
      instance.SetDelete(&delete_R3BStrawtubesMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesMapped2CalPar);
      instance.SetDestructor(&destruct_R3BStrawtubesMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStrawtubesCal2Hit(void *p = 0);
   static void *newArray_R3BStrawtubesCal2Hit(Long_t size, void *p);
   static void delete_R3BStrawtubesCal2Hit(void *p);
   static void deleteArray_R3BStrawtubesCal2Hit(void *p);
   static void destruct_R3BStrawtubesCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesCal2Hit*)
   {
      ::R3BStrawtubesCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesCal2Hit", ::R3BStrawtubesCal2Hit::Class_Version(), "", 115,
                  typeid(::R3BStrawtubesCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesCal2Hit) );
      instance.SetNew(&new_R3BStrawtubesCal2Hit);
      instance.SetNewArray(&newArray_R3BStrawtubesCal2Hit);
      instance.SetDelete(&delete_R3BStrawtubesCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesCal2Hit);
      instance.SetDestructor(&destruct_R3BStrawtubesCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesMapped2Cal::Class_Name()
{
   return "R3BStrawtubesMapped2Cal";
}

//______________________________________________________________________________
const char *R3BStrawtubesMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesMapped2CalPar::Class_Name()
{
   return "R3BStrawtubesMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BStrawtubesMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesCal2Hit::Class_Name()
{
   return "R3BStrawtubesCal2Hit";
}

//______________________________________________________________________________
const char *R3BStrawtubesCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BStrawtubesMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStrawtubesMapped2Cal(void *p) {
      return  p ? new(p) ::R3BStrawtubesMapped2Cal : new ::R3BStrawtubesMapped2Cal;
   }
   static void *newArray_R3BStrawtubesMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStrawtubesMapped2Cal[nElements] : new ::R3BStrawtubesMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStrawtubesMapped2Cal(void *p) {
      delete ((::R3BStrawtubesMapped2Cal*)p);
   }
   static void deleteArray_R3BStrawtubesMapped2Cal(void *p) {
      delete [] ((::R3BStrawtubesMapped2Cal*)p);
   }
   static void destruct_R3BStrawtubesMapped2Cal(void *p) {
      typedef ::R3BStrawtubesMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesMapped2Cal

//______________________________________________________________________________
void R3BStrawtubesMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStrawtubesMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BStrawtubesMapped2CalPar : new ::R3BStrawtubesMapped2CalPar;
   }
   static void *newArray_R3BStrawtubesMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStrawtubesMapped2CalPar[nElements] : new ::R3BStrawtubesMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStrawtubesMapped2CalPar(void *p) {
      delete ((::R3BStrawtubesMapped2CalPar*)p);
   }
   static void deleteArray_R3BStrawtubesMapped2CalPar(void *p) {
      delete [] ((::R3BStrawtubesMapped2CalPar*)p);
   }
   static void destruct_R3BStrawtubesMapped2CalPar(void *p) {
      typedef ::R3BStrawtubesMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesMapped2CalPar

//______________________________________________________________________________
void R3BStrawtubesCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStrawtubesCal2Hit(void *p) {
      return  p ? new(p) ::R3BStrawtubesCal2Hit : new ::R3BStrawtubesCal2Hit;
   }
   static void *newArray_R3BStrawtubesCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStrawtubesCal2Hit[nElements] : new ::R3BStrawtubesCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStrawtubesCal2Hit(void *p) {
      delete ((::R3BStrawtubesCal2Hit*)p);
   }
   static void deleteArray_R3BStrawtubesCal2Hit(void *p) {
      delete [] ((::R3BStrawtubesCal2Hit*)p);
   }
   static void destruct_R3BStrawtubesCal2Hit(void *p) {
      typedef ::R3BStrawtubesCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesCal2Hit

namespace {
  void TriggerDictionaryInitialization_G__R3BStrawtubesDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/strawtubes",
"/work/R3BRoot/r3bdata/strawtubesData",
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/strawtubes/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BStrawtubesDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BStrawtubesMapped2Cal;
class R3BStrawtubesMapped2CalPar;
class R3BStrawtubesCal2Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BStrawtubesDict dictionary payload"

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

#ifndef R3BSTRAWTUBESMAPPED2CAL
#define R3BSTRAWTUBESMAPPED2CAL

#include "FairTask.h"

class R3BTCalPar;

class R3BStrawtubesMapped2Cal : public FairTask
{
  public:
    R3BStrawtubesMapped2Cal(const char* = "StrawtubesTcal", Int_t = 1);
    virtual ~R3BStrawtubesMapped2Cal();
    virtual void Exec(Option_t*);
    virtual void FinishEvent();
    virtual void FinishTask();
    virtual InitStatus Init();
    virtual InitStatus ReInit();
    virtual void SetParContainers();

  private:
    TClonesArray* fMappedItems;
    TClonesArray* fCalItems;
    Int_t fNofCalItems;
    R3BTCalPar* fTcalPar;

  public:
    ClassDef(R3BStrawtubesMapped2Cal, 0)
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

#ifndef R3BSTRAWTUBESMAPPED2CALPAR_H
#define R3BSTRAWTUBESMAPPED2CALPAR_H

#include "FairTask.h"

class R3BTCalEngine;
class R3BTCalPar;
class TClonesArray;

class R3BStrawtubesMapped2CalPar : public FairTask
{
  public:
    R3BStrawtubesMapped2CalPar(const char* = "R3BStrawtubesMapped2CalPar", Int_t = 1);
    virtual ~R3BStrawtubesMapped2CalPar();
    virtual void Exec(Option_t* option);
    virtual void FinishEvent();
    virtual void FinishTask();
    virtual InitStatus Init();
    void SetMinStats(Int_t);

  private:
    Int_t fMinStats;
    R3BTCalPar* fCalPar;
    R3BTCalEngine* fEngine;
    TClonesArray* fMapped;

  public:
    ClassDef(R3BStrawtubesMapped2CalPar, 0)
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

#ifndef R3BSTRAWTUBESCAL2HIT
#define R3BSTRAWTUBESCAL2HIT

#include "FairTask.h"

class TClonesArray;

class R3BStrawtubesCal2Hit : public FairTask
{
  public:
    R3BStrawtubesCal2Hit(const char* = "StrawtubesCal2Hit", Int_t = 1);
    virtual ~R3BStrawtubesCal2Hit();
    virtual void Exec(Option_t*);
    virtual void FinishEvent();
    virtual void FinishTask();
    virtual InitStatus Init();
    virtual InitStatus ReInit();

  private:
    TClonesArray* fCalItems;
    TClonesArray* fHitItems;
    UInt_t fNofHitItems;

  public:
    ClassDef(R3BStrawtubesCal2Hit, 0)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BStrawtubesCal2Hit", payloadCode, "@",
"R3BStrawtubesMapped2Cal", payloadCode, "@",
"R3BStrawtubesMapped2CalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BStrawtubesDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BStrawtubesDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BStrawtubesDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BStrawtubesDict() {
  TriggerDictionaryInitialization_G__R3BStrawtubesDict_Impl();
}
