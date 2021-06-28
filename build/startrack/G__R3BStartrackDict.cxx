// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIstartrackdIG__R3BStartrackDict

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
#include "R3BStartrack.h"
#include "R3BGeoStartrack.h"
#include "R3BGeoStartrackPar.h"
#include "R3BStartrackContFact.h"
#include "R3BStartrackDigit.h"
#include "R3BStartrackEvent.h"
#include "unpack/R3BStartrackUnpack.h"
#include "unpack/R3BStartrackMapped2Cal.h"
#include "unpack/R3BStartrackCal2Hit.h"
#include "unpack/B4Ucesb/R3BStartrackRawHit.h"
#include "unpack/B4Ucesb/R3BStartrackRawAna.h"
#include "unpack/B4Ucesb/R3BStartrackRecTS.h"
#include "unpack/B4Ucesb/R3BStartrackOrderTS.h"
#include "unpack/B4Ucesb/R3BStartrackStripAna.h"
#include "unpack/B4Ucesb/R3BStartrackCalib.h"
#include "unpack/B4Ucesb/R3BStartrackCalibPar.h"
#include "unpack/B4Ucesb/R3BStartrackCalibParFinder.h"
#include "unpack/par/R3BStartrackMapped2CalPar.h"
#include "unpack/par/R3BStartrackHitPar.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BStartrack(void *p = 0);
   static void *newArray_R3BStartrack(Long_t size, void *p);
   static void delete_R3BStartrack(void *p);
   static void deleteArray_R3BStartrack(void *p);
   static void destruct_R3BStartrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrack*)
   {
      ::R3BStartrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrack", ::R3BStartrack::Class_Version(), "", 29,
                  typeid(::R3BStartrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrack) );
      instance.SetNew(&new_R3BStartrack);
      instance.SetNewArray(&newArray_R3BStartrack);
      instance.SetDelete(&delete_R3BStartrack);
      instance.SetDeleteArray(&deleteArray_R3BStartrack);
      instance.SetDestructor(&destruct_R3BStartrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrack*)
   {
      return GenerateInitInstanceLocal((::R3BStartrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoStartrack(void *p = 0);
   static void *newArray_R3BGeoStartrack(Long_t size, void *p);
   static void delete_R3BGeoStartrack(void *p);
   static void deleteArray_R3BGeoStartrack(void *p);
   static void destruct_R3BGeoStartrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoStartrack*)
   {
      ::R3BGeoStartrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoStartrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoStartrack", ::R3BGeoStartrack::Class_Version(), "", 185,
                  typeid(::R3BGeoStartrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoStartrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoStartrack) );
      instance.SetNew(&new_R3BGeoStartrack);
      instance.SetNewArray(&newArray_R3BGeoStartrack);
      instance.SetDelete(&delete_R3BGeoStartrack);
      instance.SetDeleteArray(&deleteArray_R3BGeoStartrack);
      instance.SetDestructor(&destruct_R3BGeoStartrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoStartrack*)
   {
      return GenerateInitInstanceLocal((::R3BGeoStartrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoStartrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoStartrackPar(void *p = 0);
   static void *newArray_R3BGeoStartrackPar(Long_t size, void *p);
   static void delete_R3BGeoStartrackPar(void *p);
   static void deleteArray_R3BGeoStartrackPar(void *p);
   static void destruct_R3BGeoStartrackPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoStartrackPar*)
   {
      ::R3BGeoStartrackPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoStartrackPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoStartrackPar", ::R3BGeoStartrackPar::Class_Version(), "", 227,
                  typeid(::R3BGeoStartrackPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoStartrackPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoStartrackPar) );
      instance.SetNew(&new_R3BGeoStartrackPar);
      instance.SetNewArray(&newArray_R3BGeoStartrackPar);
      instance.SetDelete(&delete_R3BGeoStartrackPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoStartrackPar);
      instance.SetDestructor(&destruct_R3BGeoStartrackPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoStartrackPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoStartrackPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoStartrackPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackContFact(void *p = 0);
   static void *newArray_R3BStartrackContFact(Long_t size, void *p);
   static void delete_R3BStartrackContFact(void *p);
   static void deleteArray_R3BStartrackContFact(void *p);
   static void destruct_R3BStartrackContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackContFact*)
   {
      ::R3BStartrackContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackContFact", ::R3BStartrackContFact::Class_Version(), "", 268,
                  typeid(::R3BStartrackContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackContFact) );
      instance.SetNew(&new_R3BStartrackContFact);
      instance.SetNewArray(&newArray_R3BStartrackContFact);
      instance.SetDelete(&delete_R3BStartrackContFact);
      instance.SetDeleteArray(&deleteArray_R3BStartrackContFact);
      instance.SetDestructor(&destruct_R3BStartrackContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackContFact*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackHitPar(void *p = 0);
   static void *newArray_R3BStartrackHitPar(Long_t size, void *p);
   static void delete_R3BStartrackHitPar(void *p);
   static void deleteArray_R3BStartrackHitPar(void *p);
   static void destruct_R3BStartrackHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackHitPar*)
   {
      ::R3BStartrackHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackHitPar", ::R3BStartrackHitPar::Class_Version(), "R3BStartrackHitPar.h", 23,
                  typeid(::R3BStartrackHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackHitPar) );
      instance.SetNew(&new_R3BStartrackHitPar);
      instance.SetNewArray(&newArray_R3BStartrackHitPar);
      instance.SetDelete(&delete_R3BStartrackHitPar);
      instance.SetDeleteArray(&deleteArray_R3BStartrackHitPar);
      instance.SetDestructor(&destruct_R3BStartrackHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackDigit(void *p = 0);
   static void *newArray_R3BStartrackDigit(Long_t size, void *p);
   static void delete_R3BStartrackDigit(void *p);
   static void deleteArray_R3BStartrackDigit(void *p);
   static void destruct_R3BStartrackDigit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackDigit*)
   {
      ::R3BStartrackDigit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackDigit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackDigit", ::R3BStartrackDigit::Class_Version(), "", 314,
                  typeid(::R3BStartrackDigit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackDigit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackDigit) );
      instance.SetNew(&new_R3BStartrackDigit);
      instance.SetNewArray(&newArray_R3BStartrackDigit);
      instance.SetDelete(&delete_R3BStartrackDigit);
      instance.SetDeleteArray(&deleteArray_R3BStartrackDigit);
      instance.SetDestructor(&destruct_R3BStartrackDigit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackDigit*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackDigit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackDigit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackEvent(void *p = 0);
   static void *newArray_R3BStartrackEvent(Long_t size, void *p);
   static void delete_R3BStartrackEvent(void *p);
   static void deleteArray_R3BStartrackEvent(void *p);
   static void destruct_R3BStartrackEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackEvent*)
   {
      ::R3BStartrackEvent *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackEvent >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackEvent", ::R3BStartrackEvent::Class_Version(), "", 401,
                  typeid(::R3BStartrackEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackEvent::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackEvent) );
      instance.SetNew(&new_R3BStartrackEvent);
      instance.SetNewArray(&newArray_R3BStartrackEvent);
      instance.SetDelete(&delete_R3BStartrackEvent);
      instance.SetDeleteArray(&deleteArray_R3BStartrackEvent);
      instance.SetDestructor(&destruct_R3BStartrackEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackEvent*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackEvent*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackEvent*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BStartrackUnpack(void *p);
   static void deleteArray_R3BStartrackUnpack(void *p);
   static void destruct_R3BStartrackUnpack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackUnpack*)
   {
      ::R3BStartrackUnpack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackUnpack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackUnpack", ::R3BStartrackUnpack::Class_Version(), "", 525,
                  typeid(::R3BStartrackUnpack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackUnpack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackUnpack) );
      instance.SetDelete(&delete_R3BStartrackUnpack);
      instance.SetDeleteArray(&deleteArray_R3BStartrackUnpack);
      instance.SetDestructor(&destruct_R3BStartrackUnpack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackUnpack*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackUnpack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackUnpack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackMapped2CalPar(void *p = 0);
   static void *newArray_R3BStartrackMapped2CalPar(Long_t size, void *p);
   static void delete_R3BStartrackMapped2CalPar(void *p);
   static void deleteArray_R3BStartrackMapped2CalPar(void *p);
   static void destruct_R3BStartrackMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackMapped2CalPar*)
   {
      ::R3BStartrackMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackMapped2CalPar", ::R3BStartrackMapped2CalPar::Class_Version(), "R3BStartrackMapped2CalPar.h", 35,
                  typeid(::R3BStartrackMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackMapped2CalPar) );
      instance.SetNew(&new_R3BStartrackMapped2CalPar);
      instance.SetNewArray(&newArray_R3BStartrackMapped2CalPar);
      instance.SetDelete(&delete_R3BStartrackMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BStartrackMapped2CalPar);
      instance.SetDestructor(&destruct_R3BStartrackMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackMapped2Cal(void *p = 0);
   static void *newArray_R3BStartrackMapped2Cal(Long_t size, void *p);
   static void delete_R3BStartrackMapped2Cal(void *p);
   static void deleteArray_R3BStartrackMapped2Cal(void *p);
   static void destruct_R3BStartrackMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackMapped2Cal*)
   {
      ::R3BStartrackMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackMapped2Cal", ::R3BStartrackMapped2Cal::Class_Version(), "", 644,
                  typeid(::R3BStartrackMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackMapped2Cal) );
      instance.SetNew(&new_R3BStartrackMapped2Cal);
      instance.SetNewArray(&newArray_R3BStartrackMapped2Cal);
      instance.SetDelete(&delete_R3BStartrackMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BStartrackMapped2Cal);
      instance.SetDestructor(&destruct_R3BStartrackMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackCal2Hit(void *p = 0);
   static void *newArray_R3BStartrackCal2Hit(Long_t size, void *p);
   static void delete_R3BStartrackCal2Hit(void *p);
   static void deleteArray_R3BStartrackCal2Hit(void *p);
   static void destruct_R3BStartrackCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackCal2Hit*)
   {
      ::R3BStartrackCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackCal2Hit", ::R3BStartrackCal2Hit::Class_Version(), "", 794,
                  typeid(::R3BStartrackCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackCal2Hit) );
      instance.SetNew(&new_R3BStartrackCal2Hit);
      instance.SetNewArray(&newArray_R3BStartrackCal2Hit);
      instance.SetDelete(&delete_R3BStartrackCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BStartrackCal2Hit);
      instance.SetDestructor(&destruct_R3BStartrackCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackRawHit(void *p = 0);
   static void *newArray_R3BStartrackRawHit(Long_t size, void *p);
   static void delete_R3BStartrackRawHit(void *p);
   static void deleteArray_R3BStartrackRawHit(void *p);
   static void destruct_R3BStartrackRawHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackRawHit*)
   {
      ::R3BStartrackRawHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackRawHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackRawHit", ::R3BStartrackRawHit::Class_Version(), "", 886,
                  typeid(::R3BStartrackRawHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackRawHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackRawHit) );
      instance.SetNew(&new_R3BStartrackRawHit);
      instance.SetNewArray(&newArray_R3BStartrackRawHit);
      instance.SetDelete(&delete_R3BStartrackRawHit);
      instance.SetDeleteArray(&deleteArray_R3BStartrackRawHit);
      instance.SetDestructor(&destruct_R3BStartrackRawHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackRawHit*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackRawHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackRawHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackRawAna(void *p = 0);
   static void *newArray_R3BStartrackRawAna(Long_t size, void *p);
   static void delete_R3BStartrackRawAna(void *p);
   static void deleteArray_R3BStartrackRawAna(void *p);
   static void destruct_R3BStartrackRawAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackRawAna*)
   {
      ::R3BStartrackRawAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackRawAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackRawAna", ::R3BStartrackRawAna::Class_Version(), "", 1023,
                  typeid(::R3BStartrackRawAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackRawAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackRawAna) );
      instance.SetNew(&new_R3BStartrackRawAna);
      instance.SetNewArray(&newArray_R3BStartrackRawAna);
      instance.SetDelete(&delete_R3BStartrackRawAna);
      instance.SetDeleteArray(&deleteArray_R3BStartrackRawAna);
      instance.SetDestructor(&destruct_R3BStartrackRawAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackRawAna*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackRawAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackRawAna*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackRecTS(void *p = 0);
   static void *newArray_R3BStartrackRecTS(Long_t size, void *p);
   static void delete_R3BStartrackRecTS(void *p);
   static void deleteArray_R3BStartrackRecTS(void *p);
   static void destruct_R3BStartrackRecTS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackRecTS*)
   {
      ::R3BStartrackRecTS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackRecTS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackRecTS", ::R3BStartrackRecTS::Class_Version(), "", 1093,
                  typeid(::R3BStartrackRecTS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackRecTS::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackRecTS) );
      instance.SetNew(&new_R3BStartrackRecTS);
      instance.SetNewArray(&newArray_R3BStartrackRecTS);
      instance.SetDelete(&delete_R3BStartrackRecTS);
      instance.SetDeleteArray(&deleteArray_R3BStartrackRecTS);
      instance.SetDestructor(&destruct_R3BStartrackRecTS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackRecTS*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackRecTS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackRecTS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackOrderTS(void *p = 0);
   static void *newArray_R3BStartrackOrderTS(Long_t size, void *p);
   static void delete_R3BStartrackOrderTS(void *p);
   static void deleteArray_R3BStartrackOrderTS(void *p);
   static void destruct_R3BStartrackOrderTS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackOrderTS*)
   {
      ::R3BStartrackOrderTS *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackOrderTS >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackOrderTS", ::R3BStartrackOrderTS::Class_Version(), "", 1239,
                  typeid(::R3BStartrackOrderTS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackOrderTS::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackOrderTS) );
      instance.SetNew(&new_R3BStartrackOrderTS);
      instance.SetNewArray(&newArray_R3BStartrackOrderTS);
      instance.SetDelete(&delete_R3BStartrackOrderTS);
      instance.SetDeleteArray(&deleteArray_R3BStartrackOrderTS);
      instance.SetDestructor(&destruct_R3BStartrackOrderTS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackOrderTS*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackOrderTS*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackOrderTS*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackStripAna(void *p = 0);
   static void *newArray_R3BStartrackStripAna(Long_t size, void *p);
   static void delete_R3BStartrackStripAna(void *p);
   static void deleteArray_R3BStartrackStripAna(void *p);
   static void destruct_R3BStartrackStripAna(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackStripAna*)
   {
      ::R3BStartrackStripAna *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackStripAna >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackStripAna", ::R3BStartrackStripAna::Class_Version(), "", 1431,
                  typeid(::R3BStartrackStripAna), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackStripAna::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackStripAna) );
      instance.SetNew(&new_R3BStartrackStripAna);
      instance.SetNewArray(&newArray_R3BStartrackStripAna);
      instance.SetDelete(&delete_R3BStartrackStripAna);
      instance.SetDeleteArray(&deleteArray_R3BStartrackStripAna);
      instance.SetDestructor(&destruct_R3BStartrackStripAna);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackStripAna*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackStripAna*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackStripAna*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackCalibPar(void *p = 0);
   static void *newArray_R3BStartrackCalibPar(Long_t size, void *p);
   static void delete_R3BStartrackCalibPar(void *p);
   static void deleteArray_R3BStartrackCalibPar(void *p);
   static void destruct_R3BStartrackCalibPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackCalibPar*)
   {
      ::R3BStartrackCalibPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackCalibPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackCalibPar", ::R3BStartrackCalibPar::Class_Version(), "R3BStartrackCalibPar.h", 30,
                  typeid(::R3BStartrackCalibPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackCalibPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackCalibPar) );
      instance.SetNew(&new_R3BStartrackCalibPar);
      instance.SetNewArray(&newArray_R3BStartrackCalibPar);
      instance.SetDelete(&delete_R3BStartrackCalibPar);
      instance.SetDeleteArray(&deleteArray_R3BStartrackCalibPar);
      instance.SetDestructor(&destruct_R3BStartrackCalibPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackCalibPar*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackCalibPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackCalibPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackCalib(void *p = 0);
   static void *newArray_R3BStartrackCalib(Long_t size, void *p);
   static void delete_R3BStartrackCalib(void *p);
   static void deleteArray_R3BStartrackCalib(void *p);
   static void destruct_R3BStartrackCalib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackCalib*)
   {
      ::R3BStartrackCalib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackCalib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackCalib", ::R3BStartrackCalib::Class_Version(), "", 1497,
                  typeid(::R3BStartrackCalib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackCalib::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackCalib) );
      instance.SetNew(&new_R3BStartrackCalib);
      instance.SetNewArray(&newArray_R3BStartrackCalib);
      instance.SetDelete(&delete_R3BStartrackCalib);
      instance.SetDeleteArray(&deleteArray_R3BStartrackCalib);
      instance.SetDestructor(&destruct_R3BStartrackCalib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackCalib*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackCalib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackCalib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackCalibParFinder(void *p = 0);
   static void *newArray_R3BStartrackCalibParFinder(Long_t size, void *p);
   static void delete_R3BStartrackCalibParFinder(void *p);
   static void deleteArray_R3BStartrackCalibParFinder(void *p);
   static void destruct_R3BStartrackCalibParFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackCalibParFinder*)
   {
      ::R3BStartrackCalibParFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackCalibParFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackCalibParFinder", ::R3BStartrackCalibParFinder::Class_Version(), "", 1669,
                  typeid(::R3BStartrackCalibParFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackCalibParFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackCalibParFinder) );
      instance.SetNew(&new_R3BStartrackCalibParFinder);
      instance.SetNewArray(&newArray_R3BStartrackCalibParFinder);
      instance.SetDelete(&delete_R3BStartrackCalibParFinder);
      instance.SetDeleteArray(&deleteArray_R3BStartrackCalibParFinder);
      instance.SetDestructor(&destruct_R3BStartrackCalibParFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackCalibParFinder*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackCalibParFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackCalibParFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrack::Class_Name()
{
   return "R3BStartrack";
}

//______________________________________________________________________________
const char *R3BStartrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoStartrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoStartrack::Class_Name()
{
   return "R3BGeoStartrack";
}

//______________________________________________________________________________
const char *R3BGeoStartrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoStartrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoStartrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoStartrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoStartrackPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoStartrackPar::Class_Name()
{
   return "R3BGeoStartrackPar";
}

//______________________________________________________________________________
const char *R3BGeoStartrackPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrackPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoStartrackPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrackPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoStartrackPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrackPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoStartrackPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoStartrackPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackContFact::Class_Name()
{
   return "R3BStartrackContFact";
}

//______________________________________________________________________________
const char *R3BStartrackContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackHitPar::Class_Name()
{
   return "R3BStartrackHitPar";
}

//______________________________________________________________________________
const char *R3BStartrackHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackDigit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackDigit::Class_Name()
{
   return "R3BStartrackDigit";
}

//______________________________________________________________________________
const char *R3BStartrackDigit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackDigit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackDigit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackDigit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackDigit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackDigit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackDigit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackDigit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackEvent::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackEvent::Class_Name()
{
   return "R3BStartrackEvent";
}

//______________________________________________________________________________
const char *R3BStartrackEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackEvent*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackEvent*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackEvent*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackEvent*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackUnpack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackUnpack::Class_Name()
{
   return "R3BStartrackUnpack";
}

//______________________________________________________________________________
const char *R3BStartrackUnpack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackUnpack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackUnpack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackUnpack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackUnpack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackUnpack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackUnpack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackUnpack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackMapped2CalPar::Class_Name()
{
   return "R3BStartrackMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BStartrackMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackMapped2Cal::Class_Name()
{
   return "R3BStartrackMapped2Cal";
}

//______________________________________________________________________________
const char *R3BStartrackMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackCal2Hit::Class_Name()
{
   return "R3BStartrackCal2Hit";
}

//______________________________________________________________________________
const char *R3BStartrackCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackRawHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackRawHit::Class_Name()
{
   return "R3BStartrackRawHit";
}

//______________________________________________________________________________
const char *R3BStartrackRawHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackRawHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackRawHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackRawHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackRawAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackRawAna::Class_Name()
{
   return "R3BStartrackRawAna";
}

//______________________________________________________________________________
const char *R3BStartrackRawAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackRawAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackRawAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackRawAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRawAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackRecTS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackRecTS::Class_Name()
{
   return "R3BStartrackRecTS";
}

//______________________________________________________________________________
const char *R3BStartrackRecTS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRecTS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackRecTS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRecTS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackRecTS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRecTS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackRecTS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackRecTS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackOrderTS::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackOrderTS::Class_Name()
{
   return "R3BStartrackOrderTS";
}

//______________________________________________________________________________
const char *R3BStartrackOrderTS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackOrderTS*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackOrderTS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackOrderTS*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackOrderTS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackOrderTS*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackOrderTS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackOrderTS*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackStripAna::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackStripAna::Class_Name()
{
   return "R3BStartrackStripAna";
}

//______________________________________________________________________________
const char *R3BStartrackStripAna::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackStripAna*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackStripAna::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackStripAna*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackStripAna::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackStripAna*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackStripAna::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackStripAna*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackCalibPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackCalibPar::Class_Name()
{
   return "R3BStartrackCalibPar";
}

//______________________________________________________________________________
const char *R3BStartrackCalibPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackCalibPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackCalibPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackCalibPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackCalib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackCalib::Class_Name()
{
   return "R3BStartrackCalib";
}

//______________________________________________________________________________
const char *R3BStartrackCalib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackCalib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackCalib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackCalib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackCalibParFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackCalibParFinder::Class_Name()
{
   return "R3BStartrackCalibParFinder";
}

//______________________________________________________________________________
const char *R3BStartrackCalibParFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibParFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackCalibParFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibParFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackCalibParFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibParFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackCalibParFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalibParFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BStartrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrack(void *p) {
      return  p ? new(p) ::R3BStartrack : new ::R3BStartrack;
   }
   static void *newArray_R3BStartrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrack[nElements] : new ::R3BStartrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrack(void *p) {
      delete ((::R3BStartrack*)p);
   }
   static void deleteArray_R3BStartrack(void *p) {
      delete [] ((::R3BStartrack*)p);
   }
   static void destruct_R3BStartrack(void *p) {
      typedef ::R3BStartrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrack

//______________________________________________________________________________
void R3BGeoStartrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoStartrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoStartrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoStartrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoStartrack(void *p) {
      return  p ? new(p) ::R3BGeoStartrack : new ::R3BGeoStartrack;
   }
   static void *newArray_R3BGeoStartrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoStartrack[nElements] : new ::R3BGeoStartrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoStartrack(void *p) {
      delete ((::R3BGeoStartrack*)p);
   }
   static void deleteArray_R3BGeoStartrack(void *p) {
      delete [] ((::R3BGeoStartrack*)p);
   }
   static void destruct_R3BGeoStartrack(void *p) {
      typedef ::R3BGeoStartrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoStartrack

//______________________________________________________________________________
void R3BGeoStartrackPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoStartrackPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoStartrackPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoStartrackPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoStartrackPar(void *p) {
      return  p ? new(p) ::R3BGeoStartrackPar : new ::R3BGeoStartrackPar;
   }
   static void *newArray_R3BGeoStartrackPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoStartrackPar[nElements] : new ::R3BGeoStartrackPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoStartrackPar(void *p) {
      delete ((::R3BGeoStartrackPar*)p);
   }
   static void deleteArray_R3BGeoStartrackPar(void *p) {
      delete [] ((::R3BGeoStartrackPar*)p);
   }
   static void destruct_R3BGeoStartrackPar(void *p) {
      typedef ::R3BGeoStartrackPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoStartrackPar

//______________________________________________________________________________
void R3BStartrackContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackContFact(void *p) {
      return  p ? new(p) ::R3BStartrackContFact : new ::R3BStartrackContFact;
   }
   static void *newArray_R3BStartrackContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackContFact[nElements] : new ::R3BStartrackContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackContFact(void *p) {
      delete ((::R3BStartrackContFact*)p);
   }
   static void deleteArray_R3BStartrackContFact(void *p) {
      delete [] ((::R3BStartrackContFact*)p);
   }
   static void destruct_R3BStartrackContFact(void *p) {
      typedef ::R3BStartrackContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackContFact

//______________________________________________________________________________
void R3BStartrackHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackHitPar(void *p) {
      return  p ? new(p) ::R3BStartrackHitPar : new ::R3BStartrackHitPar;
   }
   static void *newArray_R3BStartrackHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackHitPar[nElements] : new ::R3BStartrackHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackHitPar(void *p) {
      delete ((::R3BStartrackHitPar*)p);
   }
   static void deleteArray_R3BStartrackHitPar(void *p) {
      delete [] ((::R3BStartrackHitPar*)p);
   }
   static void destruct_R3BStartrackHitPar(void *p) {
      typedef ::R3BStartrackHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackHitPar

//______________________________________________________________________________
void R3BStartrackDigit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackDigit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackDigit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackDigit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackDigit(void *p) {
      return  p ? new(p) ::R3BStartrackDigit : new ::R3BStartrackDigit;
   }
   static void *newArray_R3BStartrackDigit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackDigit[nElements] : new ::R3BStartrackDigit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackDigit(void *p) {
      delete ((::R3BStartrackDigit*)p);
   }
   static void deleteArray_R3BStartrackDigit(void *p) {
      delete [] ((::R3BStartrackDigit*)p);
   }
   static void destruct_R3BStartrackDigit(void *p) {
      typedef ::R3BStartrackDigit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackDigit

//______________________________________________________________________________
void R3BStartrackEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackEvent(void *p) {
      return  p ? new(p) ::R3BStartrackEvent : new ::R3BStartrackEvent;
   }
   static void *newArray_R3BStartrackEvent(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackEvent[nElements] : new ::R3BStartrackEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackEvent(void *p) {
      delete ((::R3BStartrackEvent*)p);
   }
   static void deleteArray_R3BStartrackEvent(void *p) {
      delete [] ((::R3BStartrackEvent*)p);
   }
   static void destruct_R3BStartrackEvent(void *p) {
      typedef ::R3BStartrackEvent current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackEvent

//______________________________________________________________________________
void R3BStartrackUnpack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackUnpack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackUnpack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackUnpack::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BStartrackUnpack(void *p) {
      delete ((::R3BStartrackUnpack*)p);
   }
   static void deleteArray_R3BStartrackUnpack(void *p) {
      delete [] ((::R3BStartrackUnpack*)p);
   }
   static void destruct_R3BStartrackUnpack(void *p) {
      typedef ::R3BStartrackUnpack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackUnpack

//______________________________________________________________________________
void R3BStartrackMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BStartrackMapped2CalPar : new ::R3BStartrackMapped2CalPar;
   }
   static void *newArray_R3BStartrackMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackMapped2CalPar[nElements] : new ::R3BStartrackMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackMapped2CalPar(void *p) {
      delete ((::R3BStartrackMapped2CalPar*)p);
   }
   static void deleteArray_R3BStartrackMapped2CalPar(void *p) {
      delete [] ((::R3BStartrackMapped2CalPar*)p);
   }
   static void destruct_R3BStartrackMapped2CalPar(void *p) {
      typedef ::R3BStartrackMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackMapped2CalPar

//______________________________________________________________________________
void R3BStartrackMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackMapped2Cal(void *p) {
      return  p ? new(p) ::R3BStartrackMapped2Cal : new ::R3BStartrackMapped2Cal;
   }
   static void *newArray_R3BStartrackMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackMapped2Cal[nElements] : new ::R3BStartrackMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackMapped2Cal(void *p) {
      delete ((::R3BStartrackMapped2Cal*)p);
   }
   static void deleteArray_R3BStartrackMapped2Cal(void *p) {
      delete [] ((::R3BStartrackMapped2Cal*)p);
   }
   static void destruct_R3BStartrackMapped2Cal(void *p) {
      typedef ::R3BStartrackMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackMapped2Cal

//______________________________________________________________________________
void R3BStartrackCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackCal2Hit(void *p) {
      return  p ? new(p) ::R3BStartrackCal2Hit : new ::R3BStartrackCal2Hit;
   }
   static void *newArray_R3BStartrackCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackCal2Hit[nElements] : new ::R3BStartrackCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackCal2Hit(void *p) {
      delete ((::R3BStartrackCal2Hit*)p);
   }
   static void deleteArray_R3BStartrackCal2Hit(void *p) {
      delete [] ((::R3BStartrackCal2Hit*)p);
   }
   static void destruct_R3BStartrackCal2Hit(void *p) {
      typedef ::R3BStartrackCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackCal2Hit

//______________________________________________________________________________
void R3BStartrackRawHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackRawHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackRawHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackRawHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackRawHit(void *p) {
      return  p ? new(p) ::R3BStartrackRawHit : new ::R3BStartrackRawHit;
   }
   static void *newArray_R3BStartrackRawHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackRawHit[nElements] : new ::R3BStartrackRawHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackRawHit(void *p) {
      delete ((::R3BStartrackRawHit*)p);
   }
   static void deleteArray_R3BStartrackRawHit(void *p) {
      delete [] ((::R3BStartrackRawHit*)p);
   }
   static void destruct_R3BStartrackRawHit(void *p) {
      typedef ::R3BStartrackRawHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackRawHit

//______________________________________________________________________________
void R3BStartrackRawAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackRawAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackRawAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackRawAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackRawAna(void *p) {
      return  p ? new(p) ::R3BStartrackRawAna : new ::R3BStartrackRawAna;
   }
   static void *newArray_R3BStartrackRawAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackRawAna[nElements] : new ::R3BStartrackRawAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackRawAna(void *p) {
      delete ((::R3BStartrackRawAna*)p);
   }
   static void deleteArray_R3BStartrackRawAna(void *p) {
      delete [] ((::R3BStartrackRawAna*)p);
   }
   static void destruct_R3BStartrackRawAna(void *p) {
      typedef ::R3BStartrackRawAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackRawAna

//______________________________________________________________________________
void R3BStartrackRecTS::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackRecTS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackRecTS::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackRecTS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackRecTS(void *p) {
      return  p ? new(p) ::R3BStartrackRecTS : new ::R3BStartrackRecTS;
   }
   static void *newArray_R3BStartrackRecTS(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackRecTS[nElements] : new ::R3BStartrackRecTS[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackRecTS(void *p) {
      delete ((::R3BStartrackRecTS*)p);
   }
   static void deleteArray_R3BStartrackRecTS(void *p) {
      delete [] ((::R3BStartrackRecTS*)p);
   }
   static void destruct_R3BStartrackRecTS(void *p) {
      typedef ::R3BStartrackRecTS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackRecTS

//______________________________________________________________________________
void R3BStartrackOrderTS::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackOrderTS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackOrderTS::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackOrderTS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackOrderTS(void *p) {
      return  p ? new(p) ::R3BStartrackOrderTS : new ::R3BStartrackOrderTS;
   }
   static void *newArray_R3BStartrackOrderTS(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackOrderTS[nElements] : new ::R3BStartrackOrderTS[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackOrderTS(void *p) {
      delete ((::R3BStartrackOrderTS*)p);
   }
   static void deleteArray_R3BStartrackOrderTS(void *p) {
      delete [] ((::R3BStartrackOrderTS*)p);
   }
   static void destruct_R3BStartrackOrderTS(void *p) {
      typedef ::R3BStartrackOrderTS current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackOrderTS

//______________________________________________________________________________
void R3BStartrackStripAna::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackStripAna.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackStripAna::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackStripAna::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackStripAna(void *p) {
      return  p ? new(p) ::R3BStartrackStripAna : new ::R3BStartrackStripAna;
   }
   static void *newArray_R3BStartrackStripAna(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackStripAna[nElements] : new ::R3BStartrackStripAna[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackStripAna(void *p) {
      delete ((::R3BStartrackStripAna*)p);
   }
   static void deleteArray_R3BStartrackStripAna(void *p) {
      delete [] ((::R3BStartrackStripAna*)p);
   }
   static void destruct_R3BStartrackStripAna(void *p) {
      typedef ::R3BStartrackStripAna current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackStripAna

//______________________________________________________________________________
void R3BStartrackCalibPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackCalibPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackCalibPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackCalibPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackCalibPar(void *p) {
      return  p ? new(p) ::R3BStartrackCalibPar : new ::R3BStartrackCalibPar;
   }
   static void *newArray_R3BStartrackCalibPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackCalibPar[nElements] : new ::R3BStartrackCalibPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackCalibPar(void *p) {
      delete ((::R3BStartrackCalibPar*)p);
   }
   static void deleteArray_R3BStartrackCalibPar(void *p) {
      delete [] ((::R3BStartrackCalibPar*)p);
   }
   static void destruct_R3BStartrackCalibPar(void *p) {
      typedef ::R3BStartrackCalibPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackCalibPar

//______________________________________________________________________________
void R3BStartrackCalib::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackCalib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackCalib::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackCalib::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackCalib(void *p) {
      return  p ? new(p) ::R3BStartrackCalib : new ::R3BStartrackCalib;
   }
   static void *newArray_R3BStartrackCalib(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackCalib[nElements] : new ::R3BStartrackCalib[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackCalib(void *p) {
      delete ((::R3BStartrackCalib*)p);
   }
   static void deleteArray_R3BStartrackCalib(void *p) {
      delete [] ((::R3BStartrackCalib*)p);
   }
   static void destruct_R3BStartrackCalib(void *p) {
      typedef ::R3BStartrackCalib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackCalib

//______________________________________________________________________________
void R3BStartrackCalibParFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackCalibParFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackCalibParFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackCalibParFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackCalibParFinder(void *p) {
      return  p ? new(p) ::R3BStartrackCalibParFinder : new ::R3BStartrackCalibParFinder;
   }
   static void *newArray_R3BStartrackCalibParFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackCalibParFinder[nElements] : new ::R3BStartrackCalibParFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackCalibParFinder(void *p) {
      delete ((::R3BStartrackCalibParFinder*)p);
   }
   static void deleteArray_R3BStartrackCalibParFinder(void *p) {
      delete [] ((::R3BStartrackCalibParFinder*)p);
   }
   static void destruct_R3BStartrackCalibParFinder(void *p) {
      typedef ::R3BStartrackCalibParFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackCalibParFinder

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = 0);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 214,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<double>*)0x0)->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete ((vector<double>*)p);
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] ((vector<double>*)p);
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace {
  void TriggerDictionaryInitialization_G__R3BStartrackDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/startrack",
"/work/R3BRoot/startrack/unpack",
"/work/R3BRoot/startrack/unpack/B4Ucesb",
"/work/R3BRoot/startrack/unpack/par",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/xballData",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/startrackData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/startrack/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BStartrackDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BStartrack;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoStartrack;
class R3BGeoStartrackPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TRA parameter containers)ATTRDUMP"))) R3BStartrackContFact;
class __attribute__((annotate("$clingAutoload$R3BStartrackHitPar.h")))  R3BStartrackHitPar;
class R3BStartrackDigit;
class R3BStartrackEvent;
class R3BStartrackUnpack;
class __attribute__((annotate("$clingAutoload$R3BStartrackMapped2CalPar.h")))  R3BStartrackMapped2CalPar;
class R3BStartrackMapped2Cal;
class R3BStartrackCal2Hit;
class R3BStartrackRawHit;
class R3BStartrackRawAna;
class R3BStartrackRecTS;
class R3BStartrackOrderTS;
class R3BStartrackStripAna;
class __attribute__((annotate("$clingAutoload$R3BStartrackCalibPar.h")))  R3BStartrackCalibPar;
class R3BStartrackCalib;
class R3BStartrackCalibParFinder;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BStartrackDict dictionary payload"

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

#ifndef R3BSTARTRACK_H
#define R3BSTARTRACK_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BStartrackPoint;
class FairVolume;

class R3BStartrack : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BStartrack();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BStartrack(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BStartrack(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BStartrack();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BTraPoint and adds it to the
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
    virtual void SetSpecialPhysicsCuts() {}

    //  void SaveGeoParams();

  private:
    /** Track information to be stored until the track leaves the
    active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fVolumeID;                //!  volume id
    Int_t fDetCopyID;               //!  Det volume id  // added by Marc
    Int_t fsector;                  //!  volume id
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime;               //!  time
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Int_t fPosIndex;                //!
    TClonesArray* fTraCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!

    /** Private method AddHit
     **
     ** Adds a TraPoint to the HitCollection
     **/
    R3BStartrackPoint* AddHit(Int_t trackID,
                              Int_t detID,
                              Int_t detCopyID, // Int_t detCopyID added by Marc
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

    ClassDef(R3BStartrack, 3);
};

inline void R3BStartrack::ResetParameters()
{
    fTrackID = fVolumeID = 0;
    fDetCopyID = 0; // fDetCopyID added by Marc
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

#ifndef R3BGEOSTARTRACK_H
#define R3BGEOSTARTRACK_H

#include "FairGeoSet.h"

class R3BGeoStartrack : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoStartrack();
    ~R3BGeoStartrack() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoStartrack, 0) // Class for STS
};

inline Int_t R3BGeoStartrack::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOSTARTRACK_H */
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

#ifndef R3BGEOSTARTRACKPAR_H
#define R3BGEOSTARTRACKPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoStartrackPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoStartrackPar(const char* name = "R3BGeoStartrackPar",
                       const char* title = "Startrack Geometry Parameters",
                       const char* context = "TestDefaultContext");
    ~R3BGeoStartrackPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoStartrackPar, 1)
};

#endif /* !R3BGEOSTARTRACKPAR_H */
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

#ifndef R3BSTARTRACKCONTFACT_H
#define R3BSTARTRACKCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BStartrackContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BStartrackContFact();
    ~R3BStartrackContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BStartrackContFact, 0) // Factory for all TRA parameter containers
};

#endif /* !R3BTRACONTFACT_H */
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

// -------------------------------------------------------------------------
// -----                   R3BStartrackHitFinder source file                 -----
// -----                  Created 01/06/11  by N.Ashwood               -----
// -------------------------------------------------------------------------

/**  R3BStartrackHitFinder.h
 **/

#ifndef R3BSTARTRACKDIGIT_H
#define R3BSTARTRACKDIGIT_H

#include "FairTask.h"
#include "R3BStartrackerDigitHit.h"

#include "R3BStartrackHitPar.h"

class TClonesArray;

class R3BStartrackDigit : public FairTask
{

  public:
    /** Default constructor **/
    R3BStartrackDigit();

    /** Destructor **/
    ~R3BStartrackDigit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Public method SetExperimentalResolution
     **
     ** Defines the experimental resolution of the tracker.
     **
     **/
    void SetExperimentalResolution(Double_t trackerRes);

    /** Public method SetDetectionThreshold
     **
     ** Defines the minimum energy requested in a strip to be considered in a tracker Hit
     **
     **/
    void SetDetectionThreshold(Double_t thresholdEne);

  protected:
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Finish **/
    virtual void Finish();

    TClonesArray* fStartrackerHitCA;
    TClonesArray* fStartrackHitCA;

    // Minimum energy requested in a crystal to be considered in a calorimeter Hit
    Double_t fThreshold;
    // Experimental resolution @ 1 MeV
    Double_t fTrackerResolution;

    // Parameter class
    R3BStartrackHitPar* fStartrackHitPar;

  private:
    /** Private method ExpResSmearing **/
    Double_t ExpResSmearing(Double_t inputEnergy);

    /** Private method Addhit **/
    // R3BStartrackerDigitHit* AddHit(Double_t ene,Int_t det,Int_t Stripfrt,Int_t Stripbck,Double_t time);
    R3BStartrackerDigitHit* AddHit(Int_t det, Int_t chip, Int_t Side, Int_t Strip, Double_t energy, Double_t time);

    virtual void SetParContainers();

    ClassDef(R3BStartrackDigit, 1);
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

#ifndef R3BStartrackEvent_H
#define R3BStartrackEvent_H

#include "../califaData/R3BCalifaHitData.h"
#include "R3BStartrackerHit.h"
#include <TObjArray.h>
#include <TObject.h>

class R3BStartrackEvent : public TObject
{

  public:
    // constructor, destructor, copy

    R3BStartrackEvent();
    R3BStartrackEvent(Int_t nhitsST, Int_t nhitsCalifa);

    virtual ~R3BStartrackEvent();

    R3BStartrackEvent(const R3BStartrackEvent& stevent);

    // getters
    Double_t* GetBeamPosition() { return fBeamPosition; }
    Double_t GetBeamX() { return fBeamPosition[0]; }
    Double_t* GetTargetDim() { return fTargetDim; }
    Double_t GetTargetLenght() { return fTargetDim[0]; }
    Double_t GetTargetWidth() { return fTargetDim[1]; }
    Double_t GetTargetThickness() { return fTargetDim[2]; }
    Double_t* GetTargetPosition() { return fTargetPosition; }
    Double_t* GetVtxPosition() { return fVtxPosition; }
    Double_t GetVtxPositionX() { return fVtxPosition[0]; }
    Double_t* GetVtxError() { return fVtxError; }
    TObjArray* GetSTHits() const { return (TObjArray*)fSTHits; }
    TObjArray* GetCalifaHits() const { return (TObjArray*)fCalifaHits; }
    TString GetGeometryST() { return fGeometryST; }

    // setters
    void SetBeamPosition(Double_t beam[3])
    {
        for (Int_t i = 0; i < 3; i++)
        {
            fBeamPosition[i] = beam[i];
        }
        return;
    }
    void SetTargetDim(Double_t tgdim[3])
    {
        for (Int_t i = 0; i < 3; i++)
        {
            fTargetDim[i] = tgdim[i];
        }
        return;
    }
    void SetTargetPosition(Double_t tgpos[3])
    {
        for (Int_t i = 0; i < 3; i++)
        {
            fTargetPosition[i] = tgpos[i];
        }
        return;
    }
    void SetVtxPosition(Double_t vtxpos[3])
    {
        for (Int_t i = 0; i < 3; i++)
        {
            fVtxPosition[i] = vtxpos[i];
        }
        return;
    }
    void SetVtxError(Double_t vtxerr[3])
    {
        for (Int_t i = 0; i < 3; i++)
        {
            fVtxError[i] = vtxerr[i];
        }
        return;
    }
    void SetSTHits(TObjArray* sthits)
    {
        fSTHits = sthits;
        return;
    }
    void SetCalifaHits(TObjArray* califahits)
    {
        fCalifaHits = califahits;
        return;
    }
    void SetSTGeometry(TString geometry = "geometry.root") { fGeometryST = geometry.Data(); }

  private:
    Double_t fBeamPosition[3];   // beam position
    Double_t fTargetDim[3];      // target dimension (Lenght,Width,Thickness)
    Double_t fTargetPosition[3]; // target position
    Double_t fVtxPosition[3];    // primary vertex position
    Double_t fVtxError[3];       // primary vertex error
    TObjArray* fSTHits;          // Hits in the Silicon Tracker (R3BSTaRTrackerHit), min 3 (1 track), or 6 (2 protons)
    TObjArray* fCalifaHits;      // CALIFA hit (R3BCalifaHitData)
    TString fGeometryST;         // geometry Silicon Tracker

    ClassDef(R3BStartrackEvent, 1);
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BStartrackUnpack                            -----
// -----                           Version 0.1                             -----
// -----                    Created 28.05.2014 by M.Labiche               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKUNPACK_H
#define R3BSTARTRACKUNPACK_H

#include "FairUnpack.h"

class TClonesArray;

class R3BStartrackUnpack : public FairUnpack
{
  public:
    // Constructor
    R3BStartrackUnpack(char* strCalDir,
                       Short_t type = 104,
                       Short_t subType = 10400,
                       Short_t procId = 1,
                       Short_t subCrate = 0,
                       Short_t control = 37);

    // Type, SubTypde, procId, subcrate, control are parameters that are unique to the Silicon Tracker.

    // Destructor
    virtual ~R3BStartrackUnpack();

    // Fair specific
    virtual Bool_t Init();
    virtual Bool_t DoUnpack(Int_t* data, Int_t size);
    // virtual Bool_t DoUnpack2(Int_t* data_wd0, Int_t* data_wd1, Int_t size);
    virtual void Reset();

  protected:
    virtual void Register();

  private:
    TClonesArray* fRawData;
    Int_t fNHits;
    Int_t nblock;

    // The information is split into 2 words of 32 bits (4 byte).
    // The words can by of two types: A or B.
    // Type A words have word_0 with msb=10.
    // Type B words have word_0 with msb=11.
    UInt_t word_0A;
    UInt_t word_1A;
    UInt_t word_0B;
    UInt_t word_1B;

    UInt_t wordtype; //
    UInt_t info_field;
    UInt_t info_code;

    // UInt_t ts_vhb;
    ULong_t ts_vhb; // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    // UInt_t ts_hb;
    ULong_t ts_hb;        // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    ULong_t ts_code47_lb; // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    UInt_t ts_lb;
    UInt_t ts_lb_part1;
    UInt_t ts_lb_part2;
    UInt_t ts_lb_part2_inv;
    UInt_t ts_lb_part3;
    // long long ts=0;

    // Time information from an external input (ie: other than Si tracker)
    UInt_t tsExt_vhb; // 63:48 in Si (16 bits)
    UInt_t tsExt_hb;  // 47:28 in Si (20 bits)
    UInt_t tsExt_lb;  // 27:0 in Si (28 bits)
    // long long tsExt=0;

    UInt_t hitbit;    // real values are: 0 or 1
    UInt_t module_id; // module id, real values are  1 to 30
    UInt_t side;      // real values are  0 or 1
    UInt_t asic_id;   // Chip id, real values are 0 to 15
    UInt_t strip_id;  // strip id, real values are 0 to 127
    UInt_t adcData;   // adc value for energy loss in Si

  public:
    // Class definition
    ClassDef(R3BStartrackUnpack, 0)
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
// -----                R3BStartrackMapped2TCal           -----
// -----            Created July 2017 by M.Labiche        -----
// ----- Convert mapped data to time ordered data         -----
// ------------------------------------------------------------

#ifndef R3BSTARTRACKMAPPED2CAL_H
#define R3BSTARTRACKMAPPED2CAL_H

#include <map>

// ROOt headers:
#include "TGraph.h"
#include "TH2F.h"

#include "FairTask.h"
#include "R3BStartrackMapped2CalPar.h"
//#include "R3BStartrackCalData.h"
#include "R3BStartrackMappedData.h"

class TClonesArray;
class TH2F;
// class R3BStartrackMapped2CalPar;
// class R3BEventHeader;

/**
 * An analysis task to order data in time for Startrack.
 * This class reads Stratrack mapped items and
 * produces time ordered items with time in [ns].
 */

class R3BStartrackMapped2Cal : public FairTask
{
  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BStartrackMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BStartrackMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BStartrackMapped2Cal();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    /**
     * Method for initialization of the parameter containers.
     * Called by the framework prior to Init() method.
     */
    virtual void SetParContainers();

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

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    // inline void SetTrigger(Int_t trigger)
    //{
    //    fTrigger = trigger;
    //}

    /**
     * Method for ordering data in time.
     */
    // virtual void InsertionSort(vector<long long> & v_ts, vector<long long> & v_index);
    // virtual void InsertionSort2(vector<long long> & v_ts, vector<long long> & v_block_index, vector<long long> &
    // v_hit_index);
    virtual void InsertionSort(vector<ULong64_t>& v_ts, vector<ULong64_t>& v_index);
    virtual void InsertionSort2(vector<long long>& v_ts,
                                vector<long long>& v_block_index,
                                vector<long long>& v_hit_index);

  private:
    // check for trigger should be done globablly (somewhere else)
    // R3BEventHeader* header;                     /**< Event header. */
    // Int_t fTrigger;                             /**< Trigger value. */
    //
    TClonesArray* fMappedItemsCA; /**< Array with mapped items - input data. as defined in
                                     r3bdata/StartrackData/R3BStartrackMappedData  */
    TClonesArray* fCalItemsCA;    /**< Array with cal items - output data.  as defined in
                                     r3bdata/StartrackData/R3BStartrackCalData */
    Int_t fNofCalItems;           /**< Number of produced time items per event. */

    R3BStartrackMapped2CalPar* fStartrackCalPar; /**< Parameter instance holding gain for energy correction */

    UInt_t fNofCalPars; /**< Number of modules in parameter file. */

    // UInt_t fNofPlanes;
    // UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    // UInt_t fNofEdges;      /**< Total number of edges. */
    // Double_t fClockFreq;     /**< Clock cycle in [ns]. */

    Int_t fN_first;
    ULong64_t fW3TSlast;
    Int_t fNbReject;

    // TH2F* fTsHit;
    // TGraph* grTsHit;

    // double gain[18][2][16][128];
    // double offset[18][2][16][128];

  public:
    ClassDef(R3BStartrackMapped2Cal, 1)
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

// -------------------------------------------------------------------------
// -----                   R3BStartrackHitFinder source file                 -----
// -----                  Created 01/06/11  by N.Ashwood               -----
// -------------------------------------------------------------------------

/**  R3BStartrackHitFinder.h
 **/

#ifndef R3BSTARTRACKCAL2HIT_H
#define R3BSTARTRACKCAL2HIT_H

#include "FairTask.h"
#include "R3BStartrackerDigitHit.h"

#include "R3BStartrackHitPar.h"

class TClonesArray;

class R3BStartrackCal2Hit : public FairTask
{

  public:
    /** Default constructor **/
    R3BStartrackCal2Hit();

    /** Destructor **/
    ~R3BStartrackCal2Hit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

    /** Public method SetExperimentalResolution
     **
     ** Defines the experimental resolution of the tracker.
     **
     **/
    void SetExperimentalResolution(Double_t trackerRes);

    /** Public method SetDetectionThreshold
     **
     ** Defines the minimum energy requested in a strip to be considered in a tracker Hit
     **
     **/
    void SetDetectionThreshold(Double_t thresholdEne);

  protected:
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Finish **/
    virtual void Finish();

    TClonesArray* fStartrackerHitCA;
    TClonesArray* fStartrackHitCA;

    // Minimum energy requested in a crystal to be considered in a calorimeter Hit
    Double_t fThreshold;
    // Experimental resolution @ 1 MeV
    Double_t fTrackerResolution;

    // Parameter class
    R3BStartrackHitPar* fStartrackHitPar;

  private:
    /** Private method ExpResSmearing **/
    Double_t ExpResSmearing(Double_t inputEnergy);

    /** Private method Addhit **/
    // R3BStartrackerDigitHit* AddHit(Double_t ene,Int_t det,Int_t Stripfrt,Int_t Stripbck,Double_t time);
    R3BStartrackerDigitHit* AddHit(Int_t det, Int_t chip, Int_t Side, Int_t Strip, Double_t energy, Double_t time);

    virtual void SetParContainers();

    ClassDef(R3BStartrackCal2Hit, 1);
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BStartrackRawHit                         -----
// -----                           Version 0.1                             -----
// -----                    Created 28.05.2014 by M. Labiche               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKRAWHIT_H
#define R3BSTARTRACKRAWHIT_H

#include "TObject.h"

class R3BStartrackRawHit : public TObject
{
  public:
    // Default Constructor
    R3BStartrackRawHit();

    /** Standard Constructor
     *@param moduleId    module unique identifier
     *@param side        module Side unique identifier
     *@param asicId      asic unique identifier
     *@param stripId     Strip unique identifier
     *@param adc         Total energy deposited on the crystal [ch]
     *@param time        Time since event start [ns]
     **/

    // R3BStartrackRawHit( UInt_t WRvhb, UInt_t WRhb , UInt_t WRlb, UInt_t wordtype, UInt_t hitbit, UInt_t moduleId,
    // UInt_t side, UInt_t asicId, UInt_t stripId, UInt_t adc_data, UInt_t timevhb, UInt_t timehb, UInt_t timelb, UInt_t
    // timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, UInt_t infofield, UInt_t infocode);
    R3BStartrackRawHit(UInt_t WRvhb,
                       UInt_t WRhb,
                       UInt_t WRlb,
                       UInt_t wordtype,
                       UInt_t hitbit,
                       UInt_t moduleId,
                       UInt_t side,
                       UInt_t asicId,
                       UInt_t stripId,
                       UInt_t adc_data,
                       ULong_t timevhb,
                       ULong_t timehb,
                       UInt_t timelb,
                       UInt_t timeExtvhb,
                       UInt_t timeExthb,
                       UInt_t timeExtlb,
                       UInt_t time47lb,
                       UInt_t infofield,
                       UInt_t infocode);

    // vhb stands for very high bit
    // hb stands for  high bit
    // lb stands for  low bit

    // Destructor
    ~R3BStartrackRawHit() {}

    // Getters
    inline const UInt_t& GetWRvhb() const { return fWRvhb; }
    inline const UInt_t& GetWRhb() const { return fWRhb; }
    inline const UInt_t& GetWRlb() const { return fWRlb; }
    inline const UInt_t& GetWordType() const { return fWordType; }
    inline const UInt_t& GetHitBit() const { return fHitBit; }
    inline const UInt_t& GetModuleId() const { return fModuleId; }
    inline const UInt_t& GetSide() const { return fSide; }
    inline const UInt_t& GetAsicId() const { return fAsicId; }
    inline const UInt_t& GetStripId() const { return fStripId; }
    inline const UInt_t& GetADCdata() const { return fADCdata; }
    // inline const UInt_t&  GetTimevhb()      const { return fTimevhb;      }
    inline const ULong_t& GetTimevhb() const
    {
        return fTimevhb;
    } // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    // inline const UInt_t&  GetTimehb()      const { return fTimehb;      }
    inline const ULong_t& GetTimehb() const
    {
        return fTimehb;
    } // to be used if Time stamp is reconstructed in the unpacker (otherwise UInt_t is sufficient)
    inline const UInt_t& GetTimelb() const { return fTimelb; }
    inline const UInt_t& GetTimeExtvhb() const { return fTimeExtvhb; }
    inline const UInt_t& GetTimeExthb() const { return fTimeExthb; }
    inline const UInt_t& GetTimeExtlb() const { return fTimeExtlb; }
    inline const UInt_t& GetTime47lb() const { return fTime47lb; }
    inline const UInt_t& GetInfoField() const { return fInfoField; }
    inline const UInt_t& GetInfoCode() const { return fInfoCode; }

  protected:
    // ULong_t  fWR;        //header White Rabbit time (all bits) of the interaction
    UInt_t fWRvhb;    // header White Rabbit time (48 - 63 bits) of the interaction
    UInt_t fWRhb;     // header White Rabbit time (28-47 bits) of the interaction
    UInt_t fWRlb;     // header White Rabbit time (low bit) of the interaction
    UInt_t fWordType; //
    UInt_t fHitBit;   //
    UInt_t fModuleId; // module unique identifier
    UInt_t fSide;     // module side unique identifier (128 strip per chip)
    UInt_t fAsicId;   // chip unique identifier
    UInt_t fStripId;  // strip unique identifier
    UInt_t fADCdata;  // total energy in the crystal
    // ULong_t  fTime;        //time (all 64 bits) of the interaction
    // UInt_t  fTimevhb;        //time (48 - 63 bits) of the interaction
    ULong_t fTimevhb; // time (48 - 63 bits) of the interaction // to be used if Time stamp is reconstructed in the
                      // unpacker (otherwise UInt_t is sufficient)
    // UInt_t  fTimehb;        //time ( 28-47 bits) of the interaction
    ULong_t fTimehb; // time ( 28-47 bits) of the interaction // to be used if Time stamp is reconstructed in the
                     // unpacker (otherwise UInt_t is sufficient)
    UInt_t fTimelb;     // time (low bit) of the interaction
    UInt_t fTimeExtvhb; // time (48 - 63 bits) of the external input
    UInt_t fTimeExthb;  // time (28-47  bits) of the external input
    UInt_t fTimeExtlb;  // time (low bit) of the external input
    UInt_t fTime47lb;   // time (low bit) of the wordtype2 input
    UInt_t fInfoField;  // time of the interaction
    UInt_t fInfoCode;   // time of the interaction

  public:
    ClassDef(R3BStartrackRawHit, 1)
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        R3BStartrackRawAna                         -----
// -----                           Version 0.1                             -----
// -----                    Created 28.04.2014 by M.Labiche                -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKRAWANA_H
#define R3BSTARTRACKRAWANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BStartrackRawAna : public FairTask
{
  public:
    R3BStartrackRawAna();
    virtual ~R3BStartrackRawAna();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:
    Int_t fnEvents;

    TClonesArray* fRawData;

    TH1F* thw;
    TH1F* thh;
    TH1F* thm;
    TH1F* thsd;
    TH1F* tha;
    TH1F* thst;
    TH1F* the;
    TH1F* thts;
    TH1F* thtslbdiff;
    TH1F* thtsExt;
    TH1F* thtsExtlbdiff;
    TH1F* thif;
    TH1F* thic;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BStartrackRawAna, 0)
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

#ifndef _R3BSTARTRACK_RECTS_
#define _R3BSTARTRACK_RECTS_

#include "FairTask.h"

using namespace std;

#include <vector>

class TClonesArray; // just to indicate that this class exists and will be used
class TH1F;         // just to indicate that this class exists and will be used
class TH2F;         // just to indicate that this class exists and will be used
class TTree;

// class R3BTofCalPar;

class R3BStartrackRecTS : public FairTask
{

  public:
    R3BStartrackRecTS();

    R3BStartrackRecTS(const char* taskName, Int_t verbose);

    virtual ~R3BStartrackRecTS();

    InitStatus Init(); // Initialisation

    void Exec(Option_t* option); // Implementation of event loop
    void FinishEvent();          // End of each event
    void FinishTask();           // End of Task

  private:
    // Data members:

    unsigned long my_tm_stp;
    Int_t my_wordtype; //
    Int_t my_hitbit;
    Int_t my_det_id;
    Int_t my_side_id;
    Int_t my_asic_id;
    Int_t my_ch_id;
    Int_t my_adc_data;
    bool my_sync_flag;
    bool my_pause_flag;
    unsigned long my_tm_stp_ext;

    Int_t my_new_wordtype; //
    Int_t my_new_hitbit;
    Int_t my_new_det_id;
    Int_t my_new_side_id;
    Int_t my_new_asic_id;
    Int_t my_new_ch_id;
    Int_t my_new_adc_data;

    int my_info_code;
    unsigned long my_info_field;
    unsigned long my_tm_stp_hb;
    unsigned long my_tm_stp_vhb;
    unsigned long my_tm_stp_lb;

    // for extarnal timestamp trigger
    unsigned long my_tm_stp_Ext_hb;
    unsigned long my_tm_stp_Ext_vhb;
    unsigned long my_tm_stp_Ext_lb;

    // arrays to check synchronization is going fine (or not!)
    unsigned long tm_stp_msb_modules[30]; // 30 = total number of ladders
    unsigned long my_tm_stp_msb;          // most significant bits of time-stamp (in info code)

    bool Info4;

    // Input/Output
    TClonesArray* fRawData;
    // Additional data members
    // TH1F *fh_tdc;
    // TH1F *fh_tdc[16]; // we will collect the distribution for each of the 16 channels

    // For Run 280-3364 (C target)
    TH1F* TS;
    TH1F* TSext;
    TH1F* TS_p;
    TH1F* TSext_p;
    TH1F* TS_n;
    TH1F* TSext_n;
    TH1F* ADC;
    TH1F* TS_TSext_diff;
    TH2F* TS_TSext;
    TH2F* TS_event;
    TH2F* TS_event_reduce;
    TH2F* TSext_event;
    TH2F* ADC_TS;
    TH2F* ADC_TS_p;
    TH2F* ADC_TS_n;
    TH2F* Asic_Side;

    // TFile* outFile;
    TTree* output_Tree;

    struct struct_entry_sort
    {
        // long long tm_stp; //reconstructed timestamp (MSB+LSB)
        long long tm_stp; // reconstructed timestamp (MSB+LSB)
        // not used *R3B* ->    long long info; //MBS info data (external timestamp), anything else(?)
        long long tm_stp_ext; // reconstructed external timestamp trigger
        Int_t nhit;           // one hit is one strip hit (word 3)
        Int_t type;
        Int_t hit;
        Int_t ModuleId;
        Int_t Side;
        Int_t AsicId; // new *R3B*
        Int_t StripId;
        // not used *R3B* ->    int type; // QQQ: 0= 20 MeV or 1 GeV (decays), 1= 20 GeV (checked pulser data only in
        // type 0) type>=10: type = info_code+10 (i.e., PAUSE, RESUME, SYNC100, etc...)
        Int_t ADCdata;
        bool sync_flag;  // check SYNC100 pulses received for this module
        bool pause_flag; // check Pause signals followed by proper Resume signal: true= SYNC100 paused...
    };

    struct_entry_sort s_entry;

    Int_t fNevents;
    Int_t fTotalHits; //

    // Added for handling calibration
    // R3BTofCalPar* fCal_Par;

  public:
    ClassDef(R3BStartrackRecTS, 1)
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

#ifndef _R3BSTARTRACK_ORDERTS_
#define _R3BSTARTRACK_ORDERTS_

#include "FairTask.h"

using namespace std;

#include <vector>

class TClonesArray; // just to indicate that this class exists and will be used
class TH1F;         // just to indicate that this class exists and will be used
class TH2F;         // just to indicate that this class exists and will be used
class TTree;

// class R3BTofCalPar;

class R3BStartrackOrderTS : public FairTask
{

  public:
    R3BStartrackOrderTS();

    R3BStartrackOrderTS(const char* taskName, Int_t verbose);

    virtual ~R3BStartrackOrderTS();

    InitStatus Init(); // Initialisation

    void Exec(Option_t* option); // Implementation of event loop
    void FinishEvent();          // End of each event
    void FinishTask();           // End of Task
    void InsertionSort(vector<long long>& v_ts, vector<long long>& v_index);
    void InsertionSort2(vector<long long>& v_ts, vector<long long>& v_block_index, vector<long long>& v_hit_index);

  private:
    // Data members:

    unsigned long my_tm_stp;
    Int_t my_wordtype; //
    Int_t my_hitbit;
    Int_t my_det_id;
    Int_t my_side_id;
    Int_t my_asic_id;
    Int_t my_ch_id;
    Int_t my_adc_data;
    bool my_sync_flag;
    bool my_pause_flag;
    unsigned long my_tm_stp_ext;

    Int_t my_new_wordtype; //
    Int_t my_new_hitbit;
    Int_t my_new_det_id;
    Int_t my_new_side_id;
    Int_t my_new_asic_id;
    Int_t my_new_ch_id;
    Int_t my_new_adc_data;

    int my_info_code;
    unsigned long my_info_field;
    unsigned long my_tm_stp_hb;
    unsigned long my_tm_stp_vhb;
    unsigned long my_tm_stp_lb;

    unsigned int tm_stp_code47_lb;

    // for extarnal timestamp trigger
    unsigned long my_tm_stp_Ext_hb;
    unsigned long my_tm_stp_Ext_vhb;
    unsigned long my_tm_stp_Ext_lb;

    unsigned long word2_rec_time;

    // arrays to check synchronization is going fine (or not!)
    unsigned long tm_stp_msb_modules[30]; // 30 = total number of ladders
    unsigned long my_tm_stp_msb;          // most significant bits of time-stamp (in info code)

    bool ts_sort_flag;
    bool FirstSort_flag;
    // bool FirstSort_flag4;
    // bool FirstSort_flag7;
    bool Word3;
    // bool Info3;
    bool Info4;

    // long long n_first;
    // long long n_loop;

    /*
    vector<long long> ts_temp;
    vector<long long> index_block_temp, index_hit_temp;
    //ts_temp.reserve(2048);
    //index_block_temp.reserve(2048);
    //index_hit_temp.reserve(2048);
    //const int MAXsort; //do we need maximum number when we do not want to sort any more!?
    int MAXsort; //do we need maximum number when we do not want to sort any more!?

    unsigned long long my_tm_stp_5;
    unsigned long my_tm_stp_lb_new;
    unsigned long my_tm_stp_lb_cor;
    unsigned long my_tm_stp_hb_cor;
    unsigned long my_tm_stp_vhb_cor;
    unsigned long ts_lb_part1;
    unsigned long ts_lb_part2;
    unsigned long ts_lb_part2_inv;
    unsigned long ts_lb_part3;

    */

    // Input/Output
    TClonesArray* fRawData;
    // Additional data members
    // TH1F *fh_tdc;
    // TH1F *fh_tdc[16]; // we will collect the distribution for each of the 16 channels

    // For Run 280-3364 (C target)
    TH1F* TS;
    TH1F* TSext;
    TH1F* TS_p;
    TH1F* TSext_p;
    TH1F* TS_n;
    TH1F* TSext_n;
    TH1F* ADC;
    TH1F* TS_TSext_diff;
    TH2F* TS_TSext;
    TH2F* TS_event;
    TH2F* TS_event_reduce;
    // TH2F *TS_4_5;
    // TH2F *TS_4_5_diff;
    TH2F* TSext_event;
    TH2F* ADC_TS;
    TH2F* ADC_TS_p;
    TH2F* ADC_TS_n;
    TH2F* Asic_Side;

    // TFile* outFile;
    TTree* output_Tree;

    struct struct_entry_sort
    {
        // long long tm_stp; //reconstructed timestamp (MSB+LSB)
        long long tm_stp; // reconstructed timestamp (MSB+LSB)
        // not used *R3B* ->    long long info; //MBS info data (external timestamp), anything else(?)
        long long tm_stp_ext; // reconstructed external timestamp trigger
        Int_t nhit;           // one hit is one strip hit (word 3)
        Int_t type;
        Int_t hit;
        Int_t ModuleId;
        Int_t Side;
        Int_t AsicId; // new *R3B*
        Int_t StripId;
        // not used *R3B* ->    int type; // QQQ: 0= 20 MeV or 1 GeV (decays), 1= 20 GeV (checked pulser data only in
        // type 0) type>=10: type = info_code+10 (i.e., PAUSE, RESUME, SYNC100, etc...)
        Int_t ADCdata;
        bool sync_flag;  // check SYNC100 pulses received for this module
        bool pause_flag; // check Pause signals followed by proper Resume signal: true= SYNC100 paused...
    };

    struct_entry_sort s_entry;

    Int_t fNevents;
    Int_t fTotalHits;      //
    Int_t fCount_45_78;    //
    Int_t fCount_rejectA;  //
    Int_t fCount_rejectB;  //
    Int_t fCount_disorder; //

    vector<double> ts_code47;
    vector<double> ts_code47_i;
    vector<double> ts_code47_diff;

    // Added for handling calibration
    // R3BTofCalPar* fCal_Par;

  public:
    ClassDef(R3BStartrackOrderTS, 1)
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                        from R3BCaloCrystalAna                     -----
// -----                    Created 18/07/14  by H.Alvarez                 -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKSTRIPANA_H
#define R3BSTARTRACKSTRIPANA_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BStartrackStripAna : public FairTask
{
  public:
    R3BStartrackStripAna();
    virtual ~R3BStartrackStripAna();

    virtual InitStatus Init();

    virtual void Exec(Option_t* option);

    virtual void FinishTask();

  private:
    Int_t fnEvents;

    TClonesArray* fSiDetData;

    // TH1F *thWordType;
    // TH1F *thHitBit;
    TH1F* thModuleID;
    TH1F* thSide;
    TH1F* thAsicID;
    TH1F* thStripID;
    TH1F* thEnergy;
    TH1F* thTime;

    void CreateHistos();

    void WriteHistos();

  public:
    ClassDef(R3BStartrackStripAna, 0)
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                           R3BCaloCalib                            -----
// -----                Created 18/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIB_H
#define R3BSTARTRACKCALIB_H

#include "FairTask.h"
#include "R3BStartrackCalibPar.h"
#include "R3BStartrackRawHit.h"
#include "R3BStartrackerDigitHit.h"

class TClonesArray;

class R3BStartrackCalib : public FairTask
{

  public:
    /** Default constructor **/
    R3BStartrackCalib();

    /** Destructor **/
    virtual ~R3BStartrackCalib();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

  protected:
    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Virtual method Finish **/
    virtual void Finish();

    virtual void Register();

  private:
    // private functions making most of the calibration work
    Int_t MapModuleID(R3BStartrackRawHit* chit);
    Int_t MapSide(R3BStartrackRawHit* chit);
    Int_t MapAsicID(R3BStartrackRawHit* chit);
    Int_t MapStripID(R3BStartrackRawHit* chit);
    Double32_t CalibrateEnergy(R3BStartrackRawHit* chit);
    Double32_t CalibrateTime(R3BStartrackRawHit* chit);

    TClonesArray* fRawHitCA;
    TClonesArray* fSiDetHitCA;

    R3BStartrackCalibPar* fStartrackCalibPar;

  public:
    // Class definition
    ClassDef(R3BStartrackCalib, 0)
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

// -----------------------------------------------------------------------------
// -----                                                                   -----
// -----                      from R3BCaloCalibPar                         -----
// -----                Created 21/07/2014 by H. Alvarez-Pol               -----
// -----                                                                   -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIBPAR_H
#define R3BSTARTRACKCALIBPAR_H

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BStartrackCalibPar : public FairParGenericSet
{
  public:
    R3BStartrackCalibPar(const char* name = "R3BStartrackCalibPar",
                         const char* title = "Si Strip det Calibration Parameters",
                         const char* context = "TestDefaultContext");
    ~R3BStartrackCalibPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    void Print(Option_t* option = "") const;
    /** Accessor functions **/
    const Double_t GetEneCalibGain(Int_t strip) { return eneCalibGain[strip]; }
    const Double_t GetEneCalibOffset(Int_t strip) { return eneCalibOffset[strip]; }
    const Double_t GetEneCalibGainUncert(Int_t strip) { return eneCalibGainUncert[strip]; }
    const Double_t GetEneCalibOffsetUncert(Int_t strip) { return eneCalibOffsetUncert[strip]; }

    const Double_t GetTimeCalib_p0(Int_t strip) { return timeCalib_p0[strip]; }
    const Double_t GetTimeCalib_p1(Int_t strip) { return timeCalib_p1[strip]; }
    const Double_t GetTimeCalib_p2(Int_t strip) { return timeCalib_p2[strip]; }
    const Double_t GetTimeCalibUncert_p0(Int_t strip) { return timeCalibUncert_p0[strip]; }
    const Double_t GetTimeCalibUncert_p1(Int_t strip) { return timeCalibUncert_p1[strip]; }
    const Double_t GetTimeCalibUncert_p2(Int_t strip) { return timeCalibUncert_p2[strip]; }

    void SetEneCalibGain(Int_t strip, Double_t value) { eneCalibGain[strip] = value; }
    void SetEneCalibOffset(Int_t strip, Double_t value) { eneCalibOffset[strip] = value; }
    void SetEneCalibGainUncert(Int_t strip, Double_t value) { eneCalibGainUncert[strip] = value; }
    void SetEneCalibOffsetUncert(Int_t strip, Double_t value) { eneCalibOffsetUncert[strip] = value; }

    void SettimeCalib_p0(Int_t strip, Double_t value) { timeCalib_p0[strip] = value; }
    void SettimeCalib_p1(Int_t strip, Double_t value) { timeCalib_p1[strip] = value; }
    void SettimeCalib_p2(Int_t strip, Double_t value) { timeCalib_p2[strip] = value; }
    void SettimeCalibUncert_p0(Int_t strip, Double_t value) { timeCalibUncert_p0[strip] = value; }
    void SettimeCalibUncert_p1(Int_t strip, Double_t value) { timeCalibUncert_p1[strip] = value; }
    void SettimeCalibUncert_p2(Int_t strip, Double_t value) { timeCalibUncert_p2[strip] = value; }

  private:
    // Polynomial (second order) parameters for high gain (gammas) calibration
    //+ uncertainty. [2×3×double×number_of_crystals].
    Double_t* eneCalibGain;
    Double_t* eneCalibOffset;
    Double_t* eneCalibGainUncert;
    Double_t* eneCalibOffsetUncert;

    // Polynomial (second order) parameters for time calibration
    //+ uncertainty.
    Double_t* timeCalib_p0;
    Double_t* timeCalib_p1;
    Double_t* timeCalib_p2;
    Double_t* timeCalibUncert_p0;
    Double_t* timeCalibUncert_p1;
    Double_t* timeCalibUncert_p2;

    TString fGeometryFileName;

    ClassDef(R3BStartrackCalibPar, 1); //
};

#endif /* !R3BStartrackCALIBPAR_H*/
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

// -------------------------------------------------------------------------
// -----           R3BStartrackCalibParFinder source file              -----
// -----           from R3BCaloCalibParFinder source file              -----
// -----              Created 22/07/14  by H.Alvarez                   -----
// -------------------------------------------------------------------------

#ifndef R3BSTARTRACKCALIBPARFINDER_H
#define R3BSTARTRACKCALIBPARFINDER_H

#include "FairTask.h"
#include "R3BStartrackCalibPar.h"
#include "R3BStartrackHit.h"
#include "R3BStartrackerHit.h"

class TClonesArray;

class R3BStartrackCalibParFinder : public FairTask
{

  public:
    /** Default constructor **/
    R3BStartrackCalibParFinder();

    /** Destructor **/
    ~R3BStartrackCalibParFinder();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method Reset **/
    virtual void Reset();

  protected:
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Register **/
    virtual void Register();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Virtual method Finish **/
    virtual void Finish();

    TClonesArray* fSiDetRawHitCA;

    // Parameter class
    R3BStartrackCalibPar* fStartrackCalibPar;

    ClassDef(R3BStartrackCalibParFinder, 1);
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
// ----- Create time calib parameters for TOFD via VFTX/Tamex -----
// -----      Adopted Apr 2016 from Neuland by R. Plag    -----
// ----------------------------------------------------------------

#ifndef R3BSTARTRACKMAPPED2TCALPAR_H
#define R3BSTARTRACKMAPPED2TCALPAR_H

#include "FairTask.h"

class TClonesArray;
class R3BTCalEngine;

/**
 * An analysis task for TCAL calibration of NeuLAND Tamex data.
 * This class fills TDC distribution for each Photomultiplier
 * of the NeuLAND detector and calculates the calibration
 * parameters using the R3BTCalEngine.
 * @author D. Kresan
 * @since September 7, 2015
 */
class R3BStartrackMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BStartrackMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BStartrackMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BStartrackMapped2CalPar();

    void SetOutputFile(const char* outFile);

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
    inline void SetNofLadder(Int_t nDetsIn, Int_t nDetsOut)
    {
        fNofInLadder = nDetsIn;
        fNofOutLadder = nDetsOut;
        fNofStrips = (nDetsIn * 12 * 128 * 2) + (nDetsOut * 16 * 128 * 2);
    }

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    UInt_t fNofInLadder;  /**< Total number of inner ladders to calibrate */
    UInt_t fNofOutLadder; /**< Total number of outer ladders to calibrate */
    UInt_t fNofStrips;    /**< Total number of Strips to calibrate */

    UInt_t* fNumEvents;
    UInt_t NEvents; /**< Event counter. */

    TClonesArray* fStartrackMappedDataCA; /**< Array with mapped data - input data. */

    R3BTCalEngine* fEngine;

    char* fOutputFile;

  public:
    ClassDef(R3BStartrackMapped2CalPar, 1)
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

#ifndef R3BSTARTRACKHITPAR_H
#define R3BSTARTRACKHITPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BStartrackHitPar : public FairParGenericSet
{
  public:
    R3BStartrackHitPar(const char* name = "R3BStartrackHitPar",
                       const char* title = "The Hit  parameter",
                       const char* context = "TestDefaultContext");
    ~R3BStartrackHitPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/
    const Double_t GetThreshold() { return fThreshold; }
    const Double_t GetEStripResolution() { return fEStripResolution; }

    void SetThreshold(Double_t value) { fThreshold = value; }
    void SetEStripResolution(Double_t value) { fEStripResolution = value; }

  private:
    // Hit. Parameters

    // Minimum energy requested in a Strip to be considered in a startrack Hit
    Double_t fThreshold;
    // Experimental resolution @ 1 MeV
    Double_t fEStripResolution;

    ClassDef(R3BStartrackHitPar, 1); //
};

#endif /* !R3BSTARTRACKHITPAR_H*/

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoStartrack", payloadCode, "@",
"R3BGeoStartrackPar", payloadCode, "@",
"R3BStartrack", payloadCode, "@",
"R3BStartrackCal2Hit", payloadCode, "@",
"R3BStartrackCalib", payloadCode, "@",
"R3BStartrackCalibPar", payloadCode, "@",
"R3BStartrackCalibParFinder", payloadCode, "@",
"R3BStartrackContFact", payloadCode, "@",
"R3BStartrackDigit", payloadCode, "@",
"R3BStartrackEvent", payloadCode, "@",
"R3BStartrackHitPar", payloadCode, "@",
"R3BStartrackMapped2Cal", payloadCode, "@",
"R3BStartrackMapped2CalPar", payloadCode, "@",
"R3BStartrackOrderTS", payloadCode, "@",
"R3BStartrackRawAna", payloadCode, "@",
"R3BStartrackRawHit", payloadCode, "@",
"R3BStartrackRecTS", payloadCode, "@",
"R3BStartrackStripAna", payloadCode, "@",
"R3BStartrackUnpack", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BStartrackDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BStartrackDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BStartrackDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BStartrackDict() {
  TriggerDictionaryInitialization_G__R3BStartrackDict_Impl();
}
