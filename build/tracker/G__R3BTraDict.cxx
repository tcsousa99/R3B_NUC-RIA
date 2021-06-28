// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddItrackerdIG__R3BTraDict

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
#include "R3BTra.h"
#include "R3BGeoTra.h"
#include "R3BGeoTraPar.h"
#include "R3BTraContFact.h"
#include "R3BTraDigiPar.h"
#include "R3BTraDigitizer.h"
#include "R3BTargetDigiPar.h"
#include "R3BTargetDigitizer.h"
#include "R3BTra2pDigiPar.h"
#include "R3BTra2pDigitizer.h"
#include "R3BTraFraDigiPar.h"
#include "R3BTraFraDigitizer.h"
#include "R3BTarget2pDigiPar.h"
#include "R3BTarget2pDigitizer.h"
#include "R3BTraHitFinder.h"
#include "unpackams/R3BAmsStripCalPar.h"
#include "unpackams/R3BAmsMappingPar.h"
#include "unpackams/R3BAmsMapped2StripCalPar.h"
#include "unpackams/R3BAmsMapped2StripCal.h"
#include "unpackams/R3BAmsStripCal2Hit.h"
#include "unpackams/R3BAmsOnlineSpectra.h"
#include "unpackams/R3BAmsCalifaCorrelatedOnlineSpectra.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BTra(void *p = 0);
   static void *newArray_R3BTra(Long_t size, void *p);
   static void delete_R3BTra(void *p);
   static void deleteArray_R3BTra(void *p);
   static void destruct_R3BTra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTra*)
   {
      ::R3BTra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTra", ::R3BTra::Class_Version(), "", 29,
                  typeid(::R3BTra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTra) );
      instance.SetNew(&new_R3BTra);
      instance.SetNewArray(&newArray_R3BTra);
      instance.SetDelete(&delete_R3BTra);
      instance.SetDeleteArray(&deleteArray_R3BTra);
      instance.SetDestructor(&destruct_R3BTra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTra*)
   {
      return GenerateInitInstanceLocal((::R3BTra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTra(void *p = 0);
   static void *newArray_R3BGeoTra(Long_t size, void *p);
   static void delete_R3BGeoTra(void *p);
   static void deleteArray_R3BGeoTra(void *p);
   static void destruct_R3BGeoTra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTra*)
   {
      ::R3BGeoTra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTra", ::R3BGeoTra::Class_Version(), "", 191,
                  typeid(::R3BGeoTra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoTra) );
      instance.SetNew(&new_R3BGeoTra);
      instance.SetNewArray(&newArray_R3BGeoTra);
      instance.SetDelete(&delete_R3BGeoTra);
      instance.SetDeleteArray(&deleteArray_R3BGeoTra);
      instance.SetDestructor(&destruct_R3BGeoTra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTra*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTraPar(void *p = 0);
   static void *newArray_R3BGeoTraPar(Long_t size, void *p);
   static void delete_R3BGeoTraPar(void *p);
   static void deleteArray_R3BGeoTraPar(void *p);
   static void destruct_R3BGeoTraPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTraPar*)
   {
      ::R3BGeoTraPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTraPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTraPar", ::R3BGeoTraPar::Class_Version(), "", 233,
                  typeid(::R3BGeoTraPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTraPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoTraPar) );
      instance.SetNew(&new_R3BGeoTraPar);
      instance.SetNewArray(&newArray_R3BGeoTraPar);
      instance.SetDelete(&delete_R3BGeoTraPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoTraPar);
      instance.SetDestructor(&destruct_R3BGeoTraPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTraPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTraPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTraPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraContFact(void *p = 0);
   static void *newArray_R3BTraContFact(Long_t size, void *p);
   static void delete_R3BTraContFact(void *p);
   static void deleteArray_R3BTraContFact(void *p);
   static void destruct_R3BTraContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraContFact*)
   {
      ::R3BTraContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraContFact", ::R3BTraContFact::Class_Version(), "", 274,
                  typeid(::R3BTraContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraContFact) );
      instance.SetNew(&new_R3BTraContFact);
      instance.SetNewArray(&newArray_R3BTraContFact);
      instance.SetDelete(&delete_R3BTraContFact);
      instance.SetDeleteArray(&deleteArray_R3BTraContFact);
      instance.SetDestructor(&destruct_R3BTraContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraContFact*)
   {
      return GenerateInitInstanceLocal((::R3BTraContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraDigiPar(void *p = 0);
   static void *newArray_R3BTraDigiPar(Long_t size, void *p);
   static void delete_R3BTraDigiPar(void *p);
   static void deleteArray_R3BTraDigiPar(void *p);
   static void destruct_R3BTraDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraDigiPar*)
   {
      ::R3BTraDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraDigiPar", ::R3BTraDigiPar::Class_Version(), "", 311,
                  typeid(::R3BTraDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraDigiPar) );
      instance.SetNew(&new_R3BTraDigiPar);
      instance.SetNewArray(&newArray_R3BTraDigiPar);
      instance.SetDelete(&delete_R3BTraDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTraDigiPar);
      instance.SetDestructor(&destruct_R3BTraDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTraDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraDigitizer(void *p = 0);
   static void *newArray_R3BTraDigitizer(Long_t size, void *p);
   static void delete_R3BTraDigitizer(void *p);
   static void deleteArray_R3BTraDigitizer(void *p);
   static void destruct_R3BTraDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraDigitizer*)
   {
      ::R3BTraDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraDigitizer", ::R3BTraDigitizer::Class_Version(), "", 360,
                  typeid(::R3BTraDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraDigitizer) );
      instance.SetNew(&new_R3BTraDigitizer);
      instance.SetNewArray(&newArray_R3BTraDigitizer);
      instance.SetDelete(&delete_R3BTraDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTraDigitizer);
      instance.SetDestructor(&destruct_R3BTraDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTraDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTargetDigiPar(void *p = 0);
   static void *newArray_R3BTargetDigiPar(Long_t size, void *p);
   static void delete_R3BTargetDigiPar(void *p);
   static void deleteArray_R3BTargetDigiPar(void *p);
   static void destruct_R3BTargetDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTargetDigiPar*)
   {
      ::R3BTargetDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTargetDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTargetDigiPar", ::R3BTargetDigiPar::Class_Version(), "", 463,
                  typeid(::R3BTargetDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTargetDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTargetDigiPar) );
      instance.SetNew(&new_R3BTargetDigiPar);
      instance.SetNewArray(&newArray_R3BTargetDigiPar);
      instance.SetDelete(&delete_R3BTargetDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTargetDigiPar);
      instance.SetDestructor(&destruct_R3BTargetDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTargetDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTargetDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTargetDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTargetDigitizer(void *p = 0);
   static void *newArray_R3BTargetDigitizer(Long_t size, void *p);
   static void delete_R3BTargetDigitizer(void *p);
   static void deleteArray_R3BTargetDigitizer(void *p);
   static void destruct_R3BTargetDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTargetDigitizer*)
   {
      ::R3BTargetDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTargetDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTargetDigitizer", ::R3BTargetDigitizer::Class_Version(), "", 512,
                  typeid(::R3BTargetDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTargetDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTargetDigitizer) );
      instance.SetNew(&new_R3BTargetDigitizer);
      instance.SetNewArray(&newArray_R3BTargetDigitizer);
      instance.SetDelete(&delete_R3BTargetDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTargetDigitizer);
      instance.SetDestructor(&destruct_R3BTargetDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTargetDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTargetDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTargetDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTra2pDigiPar(void *p = 0);
   static void *newArray_R3BTra2pDigiPar(Long_t size, void *p);
   static void delete_R3BTra2pDigiPar(void *p);
   static void deleteArray_R3BTra2pDigiPar(void *p);
   static void destruct_R3BTra2pDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTra2pDigiPar*)
   {
      ::R3BTra2pDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTra2pDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTra2pDigiPar", ::R3BTra2pDigiPar::Class_Version(), "", 595,
                  typeid(::R3BTra2pDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTra2pDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTra2pDigiPar) );
      instance.SetNew(&new_R3BTra2pDigiPar);
      instance.SetNewArray(&newArray_R3BTra2pDigiPar);
      instance.SetDelete(&delete_R3BTra2pDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTra2pDigiPar);
      instance.SetDestructor(&destruct_R3BTra2pDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTra2pDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTra2pDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTra2pDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTra2pDigitizer(void *p = 0);
   static void *newArray_R3BTra2pDigitizer(Long_t size, void *p);
   static void delete_R3BTra2pDigitizer(void *p);
   static void deleteArray_R3BTra2pDigitizer(void *p);
   static void destruct_R3BTra2pDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTra2pDigitizer*)
   {
      ::R3BTra2pDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTra2pDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTra2pDigitizer", ::R3BTra2pDigitizer::Class_Version(), "", 644,
                  typeid(::R3BTra2pDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTra2pDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTra2pDigitizer) );
      instance.SetNew(&new_R3BTra2pDigitizer);
      instance.SetNewArray(&newArray_R3BTra2pDigitizer);
      instance.SetDelete(&delete_R3BTra2pDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTra2pDigitizer);
      instance.SetDestructor(&destruct_R3BTra2pDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTra2pDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTra2pDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTra2pDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraFraDigiPar(void *p = 0);
   static void *newArray_R3BTraFraDigiPar(Long_t size, void *p);
   static void delete_R3BTraFraDigiPar(void *p);
   static void deleteArray_R3BTraFraDigiPar(void *p);
   static void destruct_R3BTraFraDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraFraDigiPar*)
   {
      ::R3BTraFraDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraFraDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraFraDigiPar", ::R3BTraFraDigiPar::Class_Version(), "", 747,
                  typeid(::R3BTraFraDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraFraDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraFraDigiPar) );
      instance.SetNew(&new_R3BTraFraDigiPar);
      instance.SetNewArray(&newArray_R3BTraFraDigiPar);
      instance.SetDelete(&delete_R3BTraFraDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTraFraDigiPar);
      instance.SetDestructor(&destruct_R3BTraFraDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraFraDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTraFraDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraFraDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraFraDigitizer(void *p = 0);
   static void *newArray_R3BTraFraDigitizer(Long_t size, void *p);
   static void delete_R3BTraFraDigitizer(void *p);
   static void deleteArray_R3BTraFraDigitizer(void *p);
   static void destruct_R3BTraFraDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraFraDigitizer*)
   {
      ::R3BTraFraDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraFraDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraFraDigitizer", ::R3BTraFraDigitizer::Class_Version(), "", 796,
                  typeid(::R3BTraFraDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraFraDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraFraDigitizer) );
      instance.SetNew(&new_R3BTraFraDigitizer);
      instance.SetNewArray(&newArray_R3BTraFraDigitizer);
      instance.SetDelete(&delete_R3BTraFraDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTraFraDigitizer);
      instance.SetDestructor(&destruct_R3BTraFraDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraFraDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTraFraDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraFraDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTarget2pDigiPar(void *p = 0);
   static void *newArray_R3BTarget2pDigiPar(Long_t size, void *p);
   static void delete_R3BTarget2pDigiPar(void *p);
   static void deleteArray_R3BTarget2pDigiPar(void *p);
   static void destruct_R3BTarget2pDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTarget2pDigiPar*)
   {
      ::R3BTarget2pDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTarget2pDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTarget2pDigiPar", ::R3BTarget2pDigiPar::Class_Version(), "", 879,
                  typeid(::R3BTarget2pDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTarget2pDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTarget2pDigiPar) );
      instance.SetNew(&new_R3BTarget2pDigiPar);
      instance.SetNewArray(&newArray_R3BTarget2pDigiPar);
      instance.SetDelete(&delete_R3BTarget2pDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTarget2pDigiPar);
      instance.SetDestructor(&destruct_R3BTarget2pDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTarget2pDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTarget2pDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTarget2pDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTarget2pDigitizer(void *p = 0);
   static void *newArray_R3BTarget2pDigitizer(Long_t size, void *p);
   static void delete_R3BTarget2pDigitizer(void *p);
   static void deleteArray_R3BTarget2pDigitizer(void *p);
   static void destruct_R3BTarget2pDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTarget2pDigitizer*)
   {
      ::R3BTarget2pDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTarget2pDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTarget2pDigitizer", ::R3BTarget2pDigitizer::Class_Version(), "", 928,
                  typeid(::R3BTarget2pDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTarget2pDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTarget2pDigitizer) );
      instance.SetNew(&new_R3BTarget2pDigitizer);
      instance.SetNewArray(&newArray_R3BTarget2pDigitizer);
      instance.SetDelete(&delete_R3BTarget2pDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTarget2pDigitizer);
      instance.SetDestructor(&destruct_R3BTarget2pDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTarget2pDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTarget2pDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTarget2pDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraHitFinder(void *p = 0);
   static void *newArray_R3BTraHitFinder(Long_t size, void *p);
   static void delete_R3BTraHitFinder(void *p);
   static void deleteArray_R3BTraHitFinder(void *p);
   static void destruct_R3BTraHitFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraHitFinder*)
   {
      ::R3BTraHitFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraHitFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraHitFinder", ::R3BTraHitFinder::Class_Version(), "", 1026,
                  typeid(::R3BTraHitFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraHitFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraHitFinder) );
      instance.SetNew(&new_R3BTraHitFinder);
      instance.SetNewArray(&newArray_R3BTraHitFinder);
      instance.SetDelete(&delete_R3BTraHitFinder);
      instance.SetDeleteArray(&deleteArray_R3BTraHitFinder);
      instance.SetDestructor(&destruct_R3BTraHitFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraHitFinder*)
   {
      return GenerateInitInstanceLocal((::R3BTraHitFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraHitFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsStripCalPar(void *p = 0);
   static void *newArray_R3BAmsStripCalPar(Long_t size, void *p);
   static void delete_R3BAmsStripCalPar(void *p);
   static void deleteArray_R3BAmsStripCalPar(void *p);
   static void destruct_R3BAmsStripCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsStripCalPar*)
   {
      ::R3BAmsStripCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsStripCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsStripCalPar", ::R3BAmsStripCalPar::Class_Version(), "", 1131,
                  typeid(::R3BAmsStripCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsStripCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsStripCalPar) );
      instance.SetNew(&new_R3BAmsStripCalPar);
      instance.SetNewArray(&newArray_R3BAmsStripCalPar);
      instance.SetDelete(&delete_R3BAmsStripCalPar);
      instance.SetDeleteArray(&deleteArray_R3BAmsStripCalPar);
      instance.SetDestructor(&destruct_R3BAmsStripCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsStripCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BAmsStripCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsStripCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsMappingPar(void *p = 0);
   static void *newArray_R3BAmsMappingPar(Long_t size, void *p);
   static void delete_R3BAmsMappingPar(void *p);
   static void deleteArray_R3BAmsMappingPar(void *p);
   static void destruct_R3BAmsMappingPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsMappingPar*)
   {
      ::R3BAmsMappingPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsMappingPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsMappingPar", ::R3BAmsMappingPar::Class_Version(), "", 1223,
                  typeid(::R3BAmsMappingPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsMappingPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsMappingPar) );
      instance.SetNew(&new_R3BAmsMappingPar);
      instance.SetNewArray(&newArray_R3BAmsMappingPar);
      instance.SetDelete(&delete_R3BAmsMappingPar);
      instance.SetDeleteArray(&deleteArray_R3BAmsMappingPar);
      instance.SetDestructor(&destruct_R3BAmsMappingPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsMappingPar*)
   {
      return GenerateInitInstanceLocal((::R3BAmsMappingPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsMappingPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsMapped2StripCalPar(void *p = 0);
   static void *newArray_R3BAmsMapped2StripCalPar(Long_t size, void *p);
   static void delete_R3BAmsMapped2StripCalPar(void *p);
   static void deleteArray_R3BAmsMapped2StripCalPar(void *p);
   static void destruct_R3BAmsMapped2StripCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsMapped2StripCalPar*)
   {
      ::R3BAmsMapped2StripCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsMapped2StripCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsMapped2StripCalPar", ::R3BAmsMapped2StripCalPar::Class_Version(), "", 1312,
                  typeid(::R3BAmsMapped2StripCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsMapped2StripCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsMapped2StripCalPar) );
      instance.SetNew(&new_R3BAmsMapped2StripCalPar);
      instance.SetNewArray(&newArray_R3BAmsMapped2StripCalPar);
      instance.SetDelete(&delete_R3BAmsMapped2StripCalPar);
      instance.SetDeleteArray(&deleteArray_R3BAmsMapped2StripCalPar);
      instance.SetDestructor(&destruct_R3BAmsMapped2StripCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsMapped2StripCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BAmsMapped2StripCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsMapped2StripCal(void *p = 0);
   static void *newArray_R3BAmsMapped2StripCal(Long_t size, void *p);
   static void delete_R3BAmsMapped2StripCal(void *p);
   static void deleteArray_R3BAmsMapped2StripCal(void *p);
   static void destruct_R3BAmsMapped2StripCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsMapped2StripCal*)
   {
      ::R3BAmsMapped2StripCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsMapped2StripCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsMapped2StripCal", ::R3BAmsMapped2StripCal::Class_Version(), "", 1442,
                  typeid(::R3BAmsMapped2StripCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsMapped2StripCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsMapped2StripCal) );
      instance.SetNew(&new_R3BAmsMapped2StripCal);
      instance.SetNewArray(&newArray_R3BAmsMapped2StripCal);
      instance.SetDelete(&delete_R3BAmsMapped2StripCal);
      instance.SetDeleteArray(&deleteArray_R3BAmsMapped2StripCal);
      instance.SetDestructor(&destruct_R3BAmsMapped2StripCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsMapped2StripCal*)
   {
      return GenerateInitInstanceLocal((::R3BAmsMapped2StripCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsStripCal2Hit(void *p = 0);
   static void *newArray_R3BAmsStripCal2Hit(Long_t size, void *p);
   static void delete_R3BAmsStripCal2Hit(void *p);
   static void deleteArray_R3BAmsStripCal2Hit(void *p);
   static void destruct_R3BAmsStripCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsStripCal2Hit*)
   {
      ::R3BAmsStripCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsStripCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsStripCal2Hit", ::R3BAmsStripCal2Hit::Class_Version(), "", 1540,
                  typeid(::R3BAmsStripCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsStripCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsStripCal2Hit) );
      instance.SetNew(&new_R3BAmsStripCal2Hit);
      instance.SetNewArray(&newArray_R3BAmsStripCal2Hit);
      instance.SetDelete(&delete_R3BAmsStripCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BAmsStripCal2Hit);
      instance.SetDestructor(&destruct_R3BAmsStripCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsStripCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BAmsStripCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsStripCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsOnlineSpectra(void *p = 0);
   static void *newArray_R3BAmsOnlineSpectra(Long_t size, void *p);
   static void delete_R3BAmsOnlineSpectra(void *p);
   static void deleteArray_R3BAmsOnlineSpectra(void *p);
   static void destruct_R3BAmsOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsOnlineSpectra*)
   {
      ::R3BAmsOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsOnlineSpectra", ::R3BAmsOnlineSpectra::Class_Version(), "", 1656,
                  typeid(::R3BAmsOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsOnlineSpectra) );
      instance.SetNew(&new_R3BAmsOnlineSpectra);
      instance.SetNewArray(&newArray_R3BAmsOnlineSpectra);
      instance.SetDelete(&delete_R3BAmsOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BAmsOnlineSpectra);
      instance.SetDestructor(&destruct_R3BAmsOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BAmsOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsCalifaCorrelatedOnlineSpectra(void *p = 0);
   static void *newArray_R3BAmsCalifaCorrelatedOnlineSpectra(Long_t size, void *p);
   static void delete_R3BAmsCalifaCorrelatedOnlineSpectra(void *p);
   static void deleteArray_R3BAmsCalifaCorrelatedOnlineSpectra(void *p);
   static void destruct_R3BAmsCalifaCorrelatedOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsCalifaCorrelatedOnlineSpectra*)
   {
      ::R3BAmsCalifaCorrelatedOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsCalifaCorrelatedOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsCalifaCorrelatedOnlineSpectra", ::R3BAmsCalifaCorrelatedOnlineSpectra::Class_Version(), "", 1797,
                  typeid(::R3BAmsCalifaCorrelatedOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsCalifaCorrelatedOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsCalifaCorrelatedOnlineSpectra) );
      instance.SetNew(&new_R3BAmsCalifaCorrelatedOnlineSpectra);
      instance.SetNewArray(&newArray_R3BAmsCalifaCorrelatedOnlineSpectra);
      instance.SetDelete(&delete_R3BAmsCalifaCorrelatedOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BAmsCalifaCorrelatedOnlineSpectra);
      instance.SetDestructor(&destruct_R3BAmsCalifaCorrelatedOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsCalifaCorrelatedOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BAmsCalifaCorrelatedOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsCalifaCorrelatedOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BTra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTra::Class_Name()
{
   return "R3BTra";
}

//______________________________________________________________________________
const char *R3BTra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTra::Class_Name()
{
   return "R3BGeoTra";
}

//______________________________________________________________________________
const char *R3BGeoTra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTraPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTraPar::Class_Name()
{
   return "R3BGeoTraPar";
}

//______________________________________________________________________________
const char *R3BGeoTraPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTraPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTraPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTraPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTraPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTraPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTraPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTraPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraContFact::Class_Name()
{
   return "R3BTraContFact";
}

//______________________________________________________________________________
const char *R3BTraContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraDigiPar::Class_Name()
{
   return "R3BTraDigiPar";
}

//______________________________________________________________________________
const char *R3BTraDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraDigitizer::Class_Name()
{
   return "R3BTraDigitizer";
}

//______________________________________________________________________________
const char *R3BTraDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTargetDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTargetDigiPar::Class_Name()
{
   return "R3BTargetDigiPar";
}

//______________________________________________________________________________
const char *R3BTargetDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTargetDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTargetDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTargetDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTargetDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTargetDigitizer::Class_Name()
{
   return "R3BTargetDigitizer";
}

//______________________________________________________________________________
const char *R3BTargetDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTargetDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTargetDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTargetDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTra2pDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTra2pDigiPar::Class_Name()
{
   return "R3BTra2pDigiPar";
}

//______________________________________________________________________________
const char *R3BTra2pDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTra2pDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTra2pDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTra2pDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTra2pDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTra2pDigitizer::Class_Name()
{
   return "R3BTra2pDigitizer";
}

//______________________________________________________________________________
const char *R3BTra2pDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTra2pDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTra2pDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTra2pDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraFraDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraFraDigiPar::Class_Name()
{
   return "R3BTraFraDigiPar";
}

//______________________________________________________________________________
const char *R3BTraFraDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraFraDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraFraDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraFraDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraFraDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraFraDigitizer::Class_Name()
{
   return "R3BTraFraDigitizer";
}

//______________________________________________________________________________
const char *R3BTraFraDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraFraDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraFraDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraFraDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTarget2pDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTarget2pDigiPar::Class_Name()
{
   return "R3BTarget2pDigiPar";
}

//______________________________________________________________________________
const char *R3BTarget2pDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTarget2pDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTarget2pDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTarget2pDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTarget2pDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTarget2pDigitizer::Class_Name()
{
   return "R3BTarget2pDigitizer";
}

//______________________________________________________________________________
const char *R3BTarget2pDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTarget2pDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTarget2pDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTarget2pDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraHitFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraHitFinder::Class_Name()
{
   return "R3BTraHitFinder";
}

//______________________________________________________________________________
const char *R3BTraHitFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHitFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraHitFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHitFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraHitFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHitFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraHitFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHitFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsStripCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsStripCalPar::Class_Name()
{
   return "R3BAmsStripCalPar";
}

//______________________________________________________________________________
const char *R3BAmsStripCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsStripCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsStripCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsStripCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsMappingPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsMappingPar::Class_Name()
{
   return "R3BAmsMappingPar";
}

//______________________________________________________________________________
const char *R3BAmsMappingPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappingPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsMappingPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappingPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsMappingPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappingPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsMappingPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappingPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsMapped2StripCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsMapped2StripCalPar::Class_Name()
{
   return "R3BAmsMapped2StripCalPar";
}

//______________________________________________________________________________
const char *R3BAmsMapped2StripCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsMapped2StripCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsMapped2StripCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsMapped2StripCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsMapped2StripCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsMapped2StripCal::Class_Name()
{
   return "R3BAmsMapped2StripCal";
}

//______________________________________________________________________________
const char *R3BAmsMapped2StripCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsMapped2StripCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsMapped2StripCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsMapped2StripCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMapped2StripCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsStripCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsStripCal2Hit::Class_Name()
{
   return "R3BAmsStripCal2Hit";
}

//______________________________________________________________________________
const char *R3BAmsStripCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsStripCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsStripCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsStripCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsOnlineSpectra::Class_Name()
{
   return "R3BAmsOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BAmsOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsCalifaCorrelatedOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsCalifaCorrelatedOnlineSpectra::Class_Name()
{
   return "R3BAmsCalifaCorrelatedOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BAmsCalifaCorrelatedOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsCalifaCorrelatedOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsCalifaCorrelatedOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsCalifaCorrelatedOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsCalifaCorrelatedOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsCalifaCorrelatedOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsCalifaCorrelatedOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsCalifaCorrelatedOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BTra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTra(void *p) {
      return  p ? new(p) ::R3BTra : new ::R3BTra;
   }
   static void *newArray_R3BTra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTra[nElements] : new ::R3BTra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTra(void *p) {
      delete ((::R3BTra*)p);
   }
   static void deleteArray_R3BTra(void *p) {
      delete [] ((::R3BTra*)p);
   }
   static void destruct_R3BTra(void *p) {
      typedef ::R3BTra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTra

//______________________________________________________________________________
void R3BGeoTra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoTra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoTra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTra(void *p) {
      return  p ? new(p) ::R3BGeoTra : new ::R3BGeoTra;
   }
   static void *newArray_R3BGeoTra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTra[nElements] : new ::R3BGeoTra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTra(void *p) {
      delete ((::R3BGeoTra*)p);
   }
   static void deleteArray_R3BGeoTra(void *p) {
      delete [] ((::R3BGeoTra*)p);
   }
   static void destruct_R3BGeoTra(void *p) {
      typedef ::R3BGeoTra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoTra

//______________________________________________________________________________
void R3BGeoTraPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTraPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoTraPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoTraPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTraPar(void *p) {
      return  p ? new(p) ::R3BGeoTraPar : new ::R3BGeoTraPar;
   }
   static void *newArray_R3BGeoTraPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTraPar[nElements] : new ::R3BGeoTraPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTraPar(void *p) {
      delete ((::R3BGeoTraPar*)p);
   }
   static void deleteArray_R3BGeoTraPar(void *p) {
      delete [] ((::R3BGeoTraPar*)p);
   }
   static void destruct_R3BGeoTraPar(void *p) {
      typedef ::R3BGeoTraPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoTraPar

//______________________________________________________________________________
void R3BTraContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraContFact(void *p) {
      return  p ? new(p) ::R3BTraContFact : new ::R3BTraContFact;
   }
   static void *newArray_R3BTraContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraContFact[nElements] : new ::R3BTraContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraContFact(void *p) {
      delete ((::R3BTraContFact*)p);
   }
   static void deleteArray_R3BTraContFact(void *p) {
      delete [] ((::R3BTraContFact*)p);
   }
   static void destruct_R3BTraContFact(void *p) {
      typedef ::R3BTraContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraContFact

//______________________________________________________________________________
void R3BTraDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraDigiPar(void *p) {
      return  p ? new(p) ::R3BTraDigiPar : new ::R3BTraDigiPar;
   }
   static void *newArray_R3BTraDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraDigiPar[nElements] : new ::R3BTraDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraDigiPar(void *p) {
      delete ((::R3BTraDigiPar*)p);
   }
   static void deleteArray_R3BTraDigiPar(void *p) {
      delete [] ((::R3BTraDigiPar*)p);
   }
   static void destruct_R3BTraDigiPar(void *p) {
      typedef ::R3BTraDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraDigiPar

//______________________________________________________________________________
void R3BTraDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraDigitizer(void *p) {
      return  p ? new(p) ::R3BTraDigitizer : new ::R3BTraDigitizer;
   }
   static void *newArray_R3BTraDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraDigitizer[nElements] : new ::R3BTraDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraDigitizer(void *p) {
      delete ((::R3BTraDigitizer*)p);
   }
   static void deleteArray_R3BTraDigitizer(void *p) {
      delete [] ((::R3BTraDigitizer*)p);
   }
   static void destruct_R3BTraDigitizer(void *p) {
      typedef ::R3BTraDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraDigitizer

//______________________________________________________________________________
void R3BTargetDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTargetDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTargetDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTargetDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTargetDigiPar(void *p) {
      return  p ? new(p) ::R3BTargetDigiPar : new ::R3BTargetDigiPar;
   }
   static void *newArray_R3BTargetDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTargetDigiPar[nElements] : new ::R3BTargetDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTargetDigiPar(void *p) {
      delete ((::R3BTargetDigiPar*)p);
   }
   static void deleteArray_R3BTargetDigiPar(void *p) {
      delete [] ((::R3BTargetDigiPar*)p);
   }
   static void destruct_R3BTargetDigiPar(void *p) {
      typedef ::R3BTargetDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTargetDigiPar

//______________________________________________________________________________
void R3BTargetDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTargetDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTargetDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTargetDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTargetDigitizer(void *p) {
      return  p ? new(p) ::R3BTargetDigitizer : new ::R3BTargetDigitizer;
   }
   static void *newArray_R3BTargetDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTargetDigitizer[nElements] : new ::R3BTargetDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTargetDigitizer(void *p) {
      delete ((::R3BTargetDigitizer*)p);
   }
   static void deleteArray_R3BTargetDigitizer(void *p) {
      delete [] ((::R3BTargetDigitizer*)p);
   }
   static void destruct_R3BTargetDigitizer(void *p) {
      typedef ::R3BTargetDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTargetDigitizer

//______________________________________________________________________________
void R3BTra2pDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTra2pDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTra2pDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTra2pDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTra2pDigiPar(void *p) {
      return  p ? new(p) ::R3BTra2pDigiPar : new ::R3BTra2pDigiPar;
   }
   static void *newArray_R3BTra2pDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTra2pDigiPar[nElements] : new ::R3BTra2pDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTra2pDigiPar(void *p) {
      delete ((::R3BTra2pDigiPar*)p);
   }
   static void deleteArray_R3BTra2pDigiPar(void *p) {
      delete [] ((::R3BTra2pDigiPar*)p);
   }
   static void destruct_R3BTra2pDigiPar(void *p) {
      typedef ::R3BTra2pDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTra2pDigiPar

//______________________________________________________________________________
void R3BTra2pDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTra2pDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTra2pDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTra2pDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTra2pDigitizer(void *p) {
      return  p ? new(p) ::R3BTra2pDigitizer : new ::R3BTra2pDigitizer;
   }
   static void *newArray_R3BTra2pDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTra2pDigitizer[nElements] : new ::R3BTra2pDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTra2pDigitizer(void *p) {
      delete ((::R3BTra2pDigitizer*)p);
   }
   static void deleteArray_R3BTra2pDigitizer(void *p) {
      delete [] ((::R3BTra2pDigitizer*)p);
   }
   static void destruct_R3BTra2pDigitizer(void *p) {
      typedef ::R3BTra2pDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTra2pDigitizer

//______________________________________________________________________________
void R3BTraFraDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraFraDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraFraDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraFraDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraFraDigiPar(void *p) {
      return  p ? new(p) ::R3BTraFraDigiPar : new ::R3BTraFraDigiPar;
   }
   static void *newArray_R3BTraFraDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraFraDigiPar[nElements] : new ::R3BTraFraDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraFraDigiPar(void *p) {
      delete ((::R3BTraFraDigiPar*)p);
   }
   static void deleteArray_R3BTraFraDigiPar(void *p) {
      delete [] ((::R3BTraFraDigiPar*)p);
   }
   static void destruct_R3BTraFraDigiPar(void *p) {
      typedef ::R3BTraFraDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraFraDigiPar

//______________________________________________________________________________
void R3BTraFraDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraFraDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraFraDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraFraDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraFraDigitizer(void *p) {
      return  p ? new(p) ::R3BTraFraDigitizer : new ::R3BTraFraDigitizer;
   }
   static void *newArray_R3BTraFraDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraFraDigitizer[nElements] : new ::R3BTraFraDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraFraDigitizer(void *p) {
      delete ((::R3BTraFraDigitizer*)p);
   }
   static void deleteArray_R3BTraFraDigitizer(void *p) {
      delete [] ((::R3BTraFraDigitizer*)p);
   }
   static void destruct_R3BTraFraDigitizer(void *p) {
      typedef ::R3BTraFraDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraFraDigitizer

//______________________________________________________________________________
void R3BTarget2pDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTarget2pDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTarget2pDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTarget2pDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTarget2pDigiPar(void *p) {
      return  p ? new(p) ::R3BTarget2pDigiPar : new ::R3BTarget2pDigiPar;
   }
   static void *newArray_R3BTarget2pDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTarget2pDigiPar[nElements] : new ::R3BTarget2pDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTarget2pDigiPar(void *p) {
      delete ((::R3BTarget2pDigiPar*)p);
   }
   static void deleteArray_R3BTarget2pDigiPar(void *p) {
      delete [] ((::R3BTarget2pDigiPar*)p);
   }
   static void destruct_R3BTarget2pDigiPar(void *p) {
      typedef ::R3BTarget2pDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTarget2pDigiPar

//______________________________________________________________________________
void R3BTarget2pDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTarget2pDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTarget2pDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTarget2pDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTarget2pDigitizer(void *p) {
      return  p ? new(p) ::R3BTarget2pDigitizer : new ::R3BTarget2pDigitizer;
   }
   static void *newArray_R3BTarget2pDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTarget2pDigitizer[nElements] : new ::R3BTarget2pDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTarget2pDigitizer(void *p) {
      delete ((::R3BTarget2pDigitizer*)p);
   }
   static void deleteArray_R3BTarget2pDigitizer(void *p) {
      delete [] ((::R3BTarget2pDigitizer*)p);
   }
   static void destruct_R3BTarget2pDigitizer(void *p) {
      typedef ::R3BTarget2pDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTarget2pDigitizer

//______________________________________________________________________________
void R3BTraHitFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraHitFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraHitFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraHitFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraHitFinder(void *p) {
      return  p ? new(p) ::R3BTraHitFinder : new ::R3BTraHitFinder;
   }
   static void *newArray_R3BTraHitFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraHitFinder[nElements] : new ::R3BTraHitFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraHitFinder(void *p) {
      delete ((::R3BTraHitFinder*)p);
   }
   static void deleteArray_R3BTraHitFinder(void *p) {
      delete [] ((::R3BTraHitFinder*)p);
   }
   static void destruct_R3BTraHitFinder(void *p) {
      typedef ::R3BTraHitFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraHitFinder

//______________________________________________________________________________
void R3BAmsStripCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsStripCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsStripCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsStripCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsStripCalPar(void *p) {
      return  p ? new(p) ::R3BAmsStripCalPar : new ::R3BAmsStripCalPar;
   }
   static void *newArray_R3BAmsStripCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsStripCalPar[nElements] : new ::R3BAmsStripCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsStripCalPar(void *p) {
      delete ((::R3BAmsStripCalPar*)p);
   }
   static void deleteArray_R3BAmsStripCalPar(void *p) {
      delete [] ((::R3BAmsStripCalPar*)p);
   }
   static void destruct_R3BAmsStripCalPar(void *p) {
      typedef ::R3BAmsStripCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsStripCalPar

//______________________________________________________________________________
void R3BAmsMappingPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsMappingPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsMappingPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsMappingPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsMappingPar(void *p) {
      return  p ? new(p) ::R3BAmsMappingPar : new ::R3BAmsMappingPar;
   }
   static void *newArray_R3BAmsMappingPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsMappingPar[nElements] : new ::R3BAmsMappingPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsMappingPar(void *p) {
      delete ((::R3BAmsMappingPar*)p);
   }
   static void deleteArray_R3BAmsMappingPar(void *p) {
      delete [] ((::R3BAmsMappingPar*)p);
   }
   static void destruct_R3BAmsMappingPar(void *p) {
      typedef ::R3BAmsMappingPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsMappingPar

//______________________________________________________________________________
void R3BAmsMapped2StripCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsMapped2StripCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsMapped2StripCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsMapped2StripCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsMapped2StripCalPar(void *p) {
      return  p ? new(p) ::R3BAmsMapped2StripCalPar : new ::R3BAmsMapped2StripCalPar;
   }
   static void *newArray_R3BAmsMapped2StripCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsMapped2StripCalPar[nElements] : new ::R3BAmsMapped2StripCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsMapped2StripCalPar(void *p) {
      delete ((::R3BAmsMapped2StripCalPar*)p);
   }
   static void deleteArray_R3BAmsMapped2StripCalPar(void *p) {
      delete [] ((::R3BAmsMapped2StripCalPar*)p);
   }
   static void destruct_R3BAmsMapped2StripCalPar(void *p) {
      typedef ::R3BAmsMapped2StripCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsMapped2StripCalPar

//______________________________________________________________________________
void R3BAmsMapped2StripCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsMapped2StripCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsMapped2StripCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsMapped2StripCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsMapped2StripCal(void *p) {
      return  p ? new(p) ::R3BAmsMapped2StripCal : new ::R3BAmsMapped2StripCal;
   }
   static void *newArray_R3BAmsMapped2StripCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsMapped2StripCal[nElements] : new ::R3BAmsMapped2StripCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsMapped2StripCal(void *p) {
      delete ((::R3BAmsMapped2StripCal*)p);
   }
   static void deleteArray_R3BAmsMapped2StripCal(void *p) {
      delete [] ((::R3BAmsMapped2StripCal*)p);
   }
   static void destruct_R3BAmsMapped2StripCal(void *p) {
      typedef ::R3BAmsMapped2StripCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsMapped2StripCal

//______________________________________________________________________________
void R3BAmsStripCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsStripCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsStripCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsStripCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsStripCal2Hit(void *p) {
      return  p ? new(p) ::R3BAmsStripCal2Hit : new ::R3BAmsStripCal2Hit;
   }
   static void *newArray_R3BAmsStripCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsStripCal2Hit[nElements] : new ::R3BAmsStripCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsStripCal2Hit(void *p) {
      delete ((::R3BAmsStripCal2Hit*)p);
   }
   static void deleteArray_R3BAmsStripCal2Hit(void *p) {
      delete [] ((::R3BAmsStripCal2Hit*)p);
   }
   static void destruct_R3BAmsStripCal2Hit(void *p) {
      typedef ::R3BAmsStripCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsStripCal2Hit

//______________________________________________________________________________
void R3BAmsOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BAmsOnlineSpectra : new ::R3BAmsOnlineSpectra;
   }
   static void *newArray_R3BAmsOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsOnlineSpectra[nElements] : new ::R3BAmsOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsOnlineSpectra(void *p) {
      delete ((::R3BAmsOnlineSpectra*)p);
   }
   static void deleteArray_R3BAmsOnlineSpectra(void *p) {
      delete [] ((::R3BAmsOnlineSpectra*)p);
   }
   static void destruct_R3BAmsOnlineSpectra(void *p) {
      typedef ::R3BAmsOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsOnlineSpectra

//______________________________________________________________________________
void R3BAmsCalifaCorrelatedOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsCalifaCorrelatedOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsCalifaCorrelatedOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsCalifaCorrelatedOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsCalifaCorrelatedOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BAmsCalifaCorrelatedOnlineSpectra : new ::R3BAmsCalifaCorrelatedOnlineSpectra;
   }
   static void *newArray_R3BAmsCalifaCorrelatedOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsCalifaCorrelatedOnlineSpectra[nElements] : new ::R3BAmsCalifaCorrelatedOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsCalifaCorrelatedOnlineSpectra(void *p) {
      delete ((::R3BAmsCalifaCorrelatedOnlineSpectra*)p);
   }
   static void deleteArray_R3BAmsCalifaCorrelatedOnlineSpectra(void *p) {
      delete [] ((::R3BAmsCalifaCorrelatedOnlineSpectra*)p);
   }
   static void destruct_R3BAmsCalifaCorrelatedOnlineSpectra(void *p) {
      typedef ::R3BAmsCalifaCorrelatedOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsCalifaCorrelatedOnlineSpectra

namespace {
  void TriggerDictionaryInitialization_G__R3BTraDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/xball",
"/work/R3BRoot/califa",
"/work/R3BRoot/tracker",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/tcal",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tracker/unpackams",
"/work/R3BRoot/r3bdata/amsData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/tracker/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BTraDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BTra;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoTra;
class R3BGeoTraPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TRA parameter containers)ATTRDUMP"))) R3BTraContFact;
class R3BTraDigiPar;
class R3BTraDigitizer;
class R3BTargetDigiPar;
class R3BTargetDigitizer;
class R3BTra2pDigiPar;
class R3BTra2pDigitizer;
class R3BTraFraDigiPar;
class R3BTraFraDigitizer;
class R3BTarget2pDigiPar;
class R3BTarget2pDigitizer;
class R3BTraHitFinder;
class R3BAmsStripCalPar;
class R3BAmsMappingPar;
class R3BAmsMapped2StripCalPar;
class R3BAmsMapped2StripCal;
class R3BAmsStripCal2Hit;
class R3BAmsOnlineSpectra;
class R3BAmsCalifaCorrelatedOnlineSpectra;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BTraDict dictionary payload"

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

#ifndef R3BTRA_H
#define R3BTRA_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BTraPoint;
class FairVolume;

class R3BTra : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BTra();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BTra(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BTra(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BTra();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BTraPoint and adds it to the
     ** collection.
     *@param vol  Pointer to the active volume
     **/
    virtual Bool_t ProcessHits(FairVolume* vol = 0);

    virtual Bool_t CheckIfSensitive(std::string name);

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

    virtual void Initialize();
    virtual void SetSpecialPhysicsCuts();

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
    Double32_t fTime_in;            //!  time when entering active volume
    Double32_t fTime_out;           //!  time when exiting active volume
    Double32_t fTime;               //!  time
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
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
    R3BTraPoint* AddHit(Int_t trackID,
                        Int_t detID,
                        Int_t detCopyID, // Int_t detCopyID added by Marc
                        TVector3 posIn,
                        TVector3 pos_out,
                        TVector3 momIn,
                        TVector3 momOut,
                        Double_t time,
                        Double_t length,
                        Double_t eLoss,
                        Int_t pdgcode);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    ClassDef(R3BTra, 3);
};

inline void R3BTra::ResetParameters()
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

#ifndef R3BGEOTRA_H
#define R3BGEOTRA_H

#include "FairGeoSet.h"

class R3BGeoTra : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoTra();
    ~R3BGeoTra() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoTra, 0) // Class for STS
};

inline Int_t R3BGeoTra::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOTRA_H */
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

#ifndef R3BGEOTRAPAR_H
#define R3BGEOTRAPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoTraPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoTraPar(const char* name = "R3BGeoTraPar",
                 const char* title = "Tra Geometry Parameters",
                 const char* context = "TestDefaultContext");
    ~R3BGeoTraPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoTraPar, 1)
};

#endif /* !R3BGEOTRAPAR_H */
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

#ifndef R3BTRACONTFACT_H
#define R3BTRACONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BTraContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BTraContFact();
    ~R3BTraContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BTraContFact, 0) // Factory for all TRA parameter containers
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

#ifndef R3BTRADIGIPAR_H
#define R3BTRADIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTraDigiPar : public FairParGenericSet
{
  public:
    R3BTraDigiPar(const char* name = "R3BTraDigiParTest",
                  const char* title = "Tutorial  parameter",
                  const char* context = "TestDefaultContext");
    ~R3BTraDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTraDigiPar, 1); //
};

#endif /* !R3BTRADIGIPAR_H*/
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

#ifndef R3BTRADIGITIZER_H
#define R3BTRADDIGITISER_H 1

#include "FairTask.h"
#include "R3BTraDigi.h"
#include "R3BTraDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTraDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTraDigitizer();

    /** Destructor **/
    ~R3BTraDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTraDigi* AddHit(Double_t ss03_se_f,
                       Double_t ss03_spos_f,
                       Double_t ss03_sbw_f,
                       Double_t ss03_sarea_f,
                       Double_t ss03_seta_f,
                       Double_t ss03_ke_f,
                       Double_t ss03_kpos_f,
                       Double_t ss03_kbw_f,
                       Double_t ss03_karea_f,
                       Double_t ss03_keta_f,
                       Double_t ss06_se_f,
                       Double_t ss06_spos_f,
                       Double_t ss06_sbw_f,
                       Double_t ss06_sarea_f,
                       Double_t ss06_seta_f,
                       Double_t ss06_ke_f,
                       Double_t ss06_kpos_f,
                       Double_t ss06_kbw_f,
                       Double_t ss06_karea_f,
                       Double_t ss06_keta_f,
                       Double_t ss03_se_p1,
                       Double_t ss03_spos_p1,
                       Double_t ss03_sbw_p1,
                       Double_t ss03_sarea_p1,
                       Double_t ss03_seta_p1,
                       Double_t ss03_ke_p1,
                       Double_t ss03_kpos_p1,
                       Double_t ss03_kbw_p1,
                       Double_t ss03_karea_p1,
                       Double_t ss03_keta_p1,
                       Double_t ss06_se_p1,
                       Double_t ss06_spos_p1,
                       Double_t ss06_sbw_p1,
                       Double_t ss06_sarea_p1,
                       Double_t ss06_seta_p1,
                       Double_t ss06_ke_p1,
                       Double_t ss06_kpos_p1,
                       Double_t ss06_kbw_p1,
                       Double_t ss06_karea_p1,
                       Double_t ss06_keta_p1);

  protected:
    TClonesArray* fTraPoints;
    TClonesArray* fTraMCTrack;
    TClonesArray* fTraDigi;
    TClonesArray* fMCTrack;

    // Parameter class
    R3BTraDigiPar* fTraDigiPar;

    //- Control Hitograms

    Int_t eventNoTra;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTraDigitizer, 1);
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

#ifndef R3BTARGETDIGIPAR_H
#define R3BTARGETDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTargetDigiPar : public FairParGenericSet
{
  public:
    R3BTargetDigiPar(const char* name = "R3BTargetDigiParTest",
                     const char* title = "Tutorial  parameter",
                     const char* context = "TestDefaultContext");
    ~R3BTargetDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTargetDigiPar, 1); //
};

#endif /* !R3BTARGETDIGIPAR_H*/
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

#ifndef R3BTARGETDIGITIZER_H
#define R3BTARGETDDIGITISER_H 1

#include "FairTask.h"
#include "R3BTargetDigi.h"
#include "R3BTargetDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTargetDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTargetDigitizer();

    /** Destructor **/
    ~R3BTargetDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTargetDigi* AddHit(Double_t ss03_smul,
                          Double_t ss03_kmul,
                          Double_t ss06_smul,
                          Double_t ss06_kmul,
                          Double_t x0,
                          Double_t y0,
                          Double_t t0,
                          Double_t estar,
                          Double_t Pxf,
                          Double_t Pyf,
                          Double_t Pzf,
                          Double_t Pf_tot,
                          Double_t f_beta,
                          Double_t Pxp1,
                          Double_t Pyp1,
                          Double_t Pzp1,
                          Double_t Pp1_tot,
                          Double_t p1_beta);

  protected:
    TClonesArray* fTargetPoints;
    TClonesArray* fTargetMCTrack;
    TClonesArray* fTargetDigi;
    TClonesArray* fMCTrack;

    // Parameter class
    R3BTargetDigiPar* fTargetDigiPar;

    //- Control Hitograms

    TH1F* ExEnIn_his;

    Int_t eventNoTra;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTargetDigitizer, 1);
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

#ifndef R3BTRA2PDIGIPAR_H
#define R3BTRA2PDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTra2pDigiPar : public FairParGenericSet
{
  public:
    R3BTra2pDigiPar(const char* name = "R3BTra2pDigiParTest",
                    const char* title = "Tutorial  parameter",
                    const char* context = "TestDefaultContext");
    ~R3BTra2pDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTra2pDigiPar, 1); //
};

#endif /* !R3BTRA2PDIGIPAR_H*/
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

#ifndef R3BTRA2PDIGITIZER_H
#define R3BTRA2PDDIGITISER_H 1

#include "FairTask.h"
#include "R3BTra2pDigi.h"
#include "R3BTra2pDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTra2pDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTra2pDigitizer();

    /** Destructor **/
    ~R3BTra2pDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTra2pDigi* AddHit(Double_t ss03_se_p1,
                         Double_t ss03_spos_p1,
                         Double_t ss03_sbw_p1,
                         Double_t ss03_sarea_p1,
                         Double_t ss03_seta_p1,
                         Double_t ss03_ke_p1,
                         Double_t ss03_kpos_p1,
                         Double_t ss03_kbw_p1,
                         Double_t ss03_karea_p1,
                         Double_t ss03_keta_p1,
                         Double_t ss06_se_p1,
                         Double_t ss06_spos_p1,
                         Double_t ss06_sbw_p1,
                         Double_t ss06_sarea_p1,
                         Double_t ss06_seta_p1,
                         Double_t ss06_ke_p1,
                         Double_t ss06_kpos_p1,
                         Double_t ss06_kbw_p1,
                         Double_t ss06_karea_p1,
                         Double_t ss06_keta_p1,
                         Double_t ss03_se_p2,
                         Double_t ss03_spos_p2,
                         Double_t ss03_sbw_p2,
                         Double_t ss03_sarea_p2,
                         Double_t ss03_seta_p2,
                         Double_t ss03_ke_p2,
                         Double_t ss03_kpos_p2,
                         Double_t ss03_kbw_p2,
                         Double_t ss03_karea_p2,
                         Double_t ss03_keta_p2,
                         Double_t ss06_se_p2,
                         Double_t ss06_spos_p2,
                         Double_t ss06_sbw_p2,
                         Double_t ss06_sarea_p2,
                         Double_t ss06_seta_p2,
                         Double_t ss06_ke_p2,
                         Double_t ss06_kpos_p2,
                         Double_t ss06_kbw_p2,
                         Double_t ss06_karea_p2,
                         Double_t ss06_keta_p2);

  protected:
    TClonesArray* fTra2pPoints;
    TClonesArray* fTra2pMCTrack;
    TClonesArray* fTra2pDigi;
    TClonesArray* fMCTrack;

    // Parameter class
    R3BTra2pDigiPar* fTra2pDigiPar;

    //- Control Hitograms

    Int_t eventNoTra;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTra2pDigitizer, 1);
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

#ifndef R3BTRAFRADIGIPAR_H
#define R3BTRAFRADIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTraFraDigiPar : public FairParGenericSet
{
  public:
    R3BTraFraDigiPar(const char* name = "R3BTraFraDigiParTest",
                     const char* title = "Tutorial  parameter",
                     const char* context = "TestDefaultContext");
    ~R3BTraFraDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTraFraDigiPar, 1); //
};

#endif /* !R3BTRAFRADIGIPAR_H*/
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

#ifndef R3BTRAFRADIGITIZER_H
#define R3BTRA2FRADIGITISER_H 1

#include "FairTask.h"
#include "R3BTraFraDigi.h"
#include "R3BTraFraDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTraFraDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTraFraDigitizer();

    /** Destructor **/
    ~R3BTraFraDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTraFraDigi* AddHit(Double_t ss03_se_f,
                          Double_t ss03_spos_f,
                          Double_t ss03_sbw_f,
                          Double_t ss03_sarea_f,
                          Double_t ss03_seta_f,
                          Double_t ss03_ke_f,
                          Double_t ss03_kpos_f,
                          Double_t ss03_kbw_f,
                          Double_t ss03_karea_f,
                          Double_t ss03_keta_f,
                          Double_t ss06_se_f,
                          Double_t ss06_spos_f,
                          Double_t ss06_sbw_f,
                          Double_t ss06_sarea_f,
                          Double_t ss06_seta_f,
                          Double_t ss06_ke_f,
                          Double_t ss06_kpos_f,
                          Double_t ss06_kbw_f,
                          Double_t ss06_karea_f,
                          Double_t ss06_keta_f);

  protected:
    TClonesArray* fTraFraPoints;
    TClonesArray* fTraFraMCTrack;
    TClonesArray* fTraFraDigi;
    TClonesArray* fMCTrack;

    // Parameter class
    R3BTraFraDigiPar* fTraFraDigiPar;

    //- Control Hitograms

    Int_t eventNoTra;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTraFraDigitizer, 1);
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

#ifndef R3BTARGET2PDIGIPAR_H
#define R3BTARGET2PDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTarget2pDigiPar : public FairParGenericSet
{
  public:
    R3BTarget2pDigiPar(const char* name = "R3BTarget2pDigiParTest",
                       const char* title = "Tutorial  parameter",
                       const char* context = "TestDefaultContext");
    ~R3BTarget2pDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTarget2pDigiPar, 1); //
};

#endif /* !R3BTARGET2PDIGIPAR_H*/
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

#ifndef R3BTARGET2PDIGITIZER_H
#define R3BTARGET2PDDIGITISER_H 1

#include "FairTask.h"
#include "R3BTarget2pDigi.h"
#include "R3BTarget2pDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTarget2pDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTarget2pDigitizer();

    /** Destructor **/
    ~R3BTarget2pDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTarget2pDigi* AddHit(Double_t ss03_smul,
                            Double_t ss03_kmul,
                            Double_t ss06_smul,
                            Double_t ss06_kmul,
                            Double_t x0,
                            Double_t y0,
                            Double_t t0,
                            Double_t estar,
                            Double_t Pxf,
                            Double_t Pyf,
                            Double_t Pzf,
                            Double_t Pf_tot,
                            Double_t f_beta,
                            Double_t Pxp1,
                            Double_t Pyp1,
                            Double_t Pzp1,
                            Double_t Pp1_tot,
                            Double_t p1_beta,
                            Double_t Pxp2,
                            Double_t Pyp2,
                            Double_t Pzp2,
                            // Double_t Pp2_tot,Double_t p2_beta);
                            Double_t Pp2_tot,
                            Double_t p2_beta,
                            Double_t alpha,
                            Int_t ppmul);

  protected:
    TClonesArray* fTarget2pPoints;
    TClonesArray* fTarget2pMCTrack;
    TClonesArray* fTarget2pDigi;
    TClonesArray* fMCTrack;

    // Parameter class
    R3BTarget2pDigiPar* fTarget2pDigiPar;

    //- Control Hitograms

    TH1F* ExEnIn_his;

    Int_t eventNoTra;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTarget2pDigitizer, 1);
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
// -----                   R3BTraHitFinder source file                 -----
// -----                  Created 01/06/11  by N.Ashwood               -----
// -------------------------------------------------------------------------

/**  R3BTraHitFinder.h
 **/

#ifndef R3BTRAHITFINDER_H
#define R3BTRAHITFINDER_H

#include "FairTask.h"
#include "R3BTrackerHit.h"

class TClonesArray;

class R3BTraHitFinder : public FairTask
{

  public:
    /** Default constructor **/
    R3BTraHitFinder();

    /** Destructor **/
    ~R3BTraHitFinder();

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

    TClonesArray* fTrackerHitCA;
    TClonesArray* fTraHitCA;

    // Minimum energy requested in a crystal to be considered in a calorimeter Hit
    Double_t fThreshold;
    // Experimental resolution @ 1 MeV
    Double_t fTrackerResolution;

  private:
    /** Private method ExpResSmearing **/
    Double_t ExpResSmearing(Double_t inputEnergy);
    /** Private method GetThetaScatZero **/
    Double_t GetThetaScatZero(Double_t x, Double_t y, Double_t z);
    /** Private method GetPhiScatZero **/
    Double_t GetPhiScatZero(Double_t x, Double_t y, Double_t z);

    // R3BTrackerHit* AddHit(Double_t ene,Int_t det);
    R3BTrackerHit* AddHit(Double_t ene,
                          Int_t det,
                          Double_t x,
                          Double_t y,
                          Double_t z,
                          Double_t px,
                          Double_t py,
                          Double_t pz,
                          Double_t th,
                          Double_t phi);

    ClassDef(R3BTraHitFinder, 1);
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
// -----         R3BAmsStripCalPar source file                  -----
// -----         Created 29/05/18  by J.L. Rodriguez-Sanchez    -----
// ------------------------------------------------------------------

#ifndef R3BAmsStripCalPar_H
#define R3BAmsStripCalPar_H

#include "FairParGenericSet.h" // for FairParGenericSet

#include "TArrayF.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BAmsStripCalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BAmsStripCalPar(const char* name = "amsStripCalPar",
                      const char* title = "AMS Strip Parameters",
                      const char* context = "AMSCalParContext");

    /** Destructor **/
    virtual ~R3BAmsStripCalPar();

    /** Method to reset all parameters **/
    virtual void clear();

    /** Method to store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Method to retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Method to print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Double_t GetNumDets() { return fNumDets; }
    const Double_t GetNumStrips() { return fNumStrips; }
    const Double_t GetNumStripsS() { return fNumStripsS; }
    const Double_t GetNumStripsK() { return fNumStripsK; }
    const Double_t GetNumParametersFit() { return fNumParamsFit; }
    TArrayF* GetStripCalParams() { return fStripCalParams; }

    void SetNumDets(Int_t numberDets) { fNumDets = numberDets; }
    void SetNumStrips(Int_t numberStrip) { fNumStrips = numberStrip; }
    void SetNumStripsS(Int_t numberStrip) { fNumStripsS = numberStrip; }
    void SetNumStripsK(Int_t numberStrip) { fNumStripsK = numberStrip; }
    void SetNumParametersFit(Int_t numberParams) { fNumParamsFit = numberParams; }
    void SetStripCalParams(Double_t cc, Int_t ii) { fStripCalParams->AddAt(cc, ii); }

    /** Create more Methods if you need them! **/

  private:
    TArrayF* fStripCalParams; // Calibration Parameters of strip
    Int_t fNumDets;           // number of detectors
    Int_t fNumStrips;         // number of strips
    Int_t fNumStripsS;        // number of strips S-side
    Int_t fNumStripsK;        // number of strips K-side
    Int_t fNumParamsFit;      /* number of cal parameters in the fit
                    gaus: A_fit & B_fit & C_fit*/

    const R3BAmsStripCalPar& operator=(const R3BAmsStripCalPar&); /*< an assignment operator>*/

    R3BAmsStripCalPar(const R3BAmsStripCalPar&); /*< a copy constructor >*/

    ClassDef(R3BAmsStripCalPar, 1);
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
// -----        R3BAmsMappingPar source file                  -----
// -----    Created 20/01/20  by J.L. Rodriguez-Sanchez       -----
// ----------------------------------------------------------------

#ifndef R3BAmsMappingPar_H
#define R3BAmsMappingPar_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"
#include <TObjString.h>

using namespace std;

class FairParamList;

class R3BAmsMappingPar : public FairParGenericSet
{
  public:
    /** Standard constructor **/
    R3BAmsMappingPar(const TString& name = "amsMappingPar",
                     const TString& title = "AMS Mapping Parameters",
                     const TString& context = "AmsMappingContext");

    /** Destructor **/
    virtual ~R3BAmsMappingPar();

    /** Reset all parameters **/
    virtual void clear();

    /** Store all parameters using FairRuntimeDB **/
    virtual void putParams(FairParamList* list);

    /** Retrieve all parameters using FairRuntimeDB**/
    Bool_t getParams(FairParamList* list);

    /** Print values of parameters to the standard output **/
    void printParams();

    /** Accessor functions **/
    const Int_t GetGeometry() { return fGeo; }
    const Int_t GetNumDets() { return fNumDet; }
    const Int_t GetSam(Int_t det) { return fSam->GetAt(det - 1); }
    const Int_t GetGtb(Int_t det) { return fGtb->GetAt(det - 1); }
    const Int_t GetSiderem(Int_t det) { return fSiderem->GetAt(det - 1); }
    const Float_t GetDist2target(Int_t det) { return fDistance2target->GetAt(det - 1); }
    const Float_t GetAngleTheta(Int_t det) { return fAngleTheta->GetAt(det - 1); }
    const Float_t GetOffsetY(Int_t det) { return fOffsetY->GetAt(det - 1); }

    void SetGeometry(Int_t geo) { fGeo = geo; }
    void SetNumDets(Int_t numberDet) { fNumDet = numberDet; }
    void SetSam(Int_t value, Int_t det) { fSam->AddAt(value, det - 1); }
    void SetGtb(Int_t value, Int_t det) { fGtb->AddAt(value, det - 1); }
    void SetSiderem(Int_t value, Int_t det) { fSiderem->AddAt(value, det - 1); }
    void SetDist2target(Float_t value, Int_t det) { fDistance2target->AddAt(value, det - 1); }
    void SetAngleTheta(Float_t value, Int_t det) { fAngleTheta->AddAt(value, det - 1); }
    void SetOffsetY(Float_t value, Int_t det) { fOffsetY->AddAt(value, det - 1); }

  private:
    Int_t fGeo;                // geometry of the ams detectors per year: 2019 or 2020
    Int_t fNumDet;             // number of ams detectors (from 1 to 6 for 2020 experiments)
    TArrayI* fSam;             // sam number (4 or 5)
    TArrayI* fGtb;             // gtb number (0 or 1)
    TArrayI* fSiderem;         // siderem number (1 or 2)
    TArrayF* fDistance2target; // Distance to target
    TArrayF* fAngleTheta;      // Angle with respect to beam direction (-45 and 45 degrees)
    TArrayF* fOffsetY;         // offset for y (-20, 0 or 20 mm)

    const R3BAmsMappingPar& operator=(const R3BAmsMappingPar&); /*< an assignment operator>*/
    R3BAmsMappingPar(const R3BAmsMappingPar&);                  /*< a copy constructor >*/

    ClassDef(R3BAmsMappingPar, 1); //
};

#endif /* !R3BAmsMappingPar_H*/
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
// -----         R3BAmsMapped2StripCalPar source file                  -----
// -----             Created 29/05/18  by J.L. Rodriguez-Sanchez       -----
// -------------------------------------------------------------------------

#ifndef R3BAmsMapped2StripCalPar_H
#define R3BAmsMapped2StripCalPar_H

#include "FairTask.h"
#include "TH1F.h"

class TClonesArray;
class R3BAmsMappingPar;
class R3BAmsStripCalPar;
class R3BEventHeader;

class R3BAmsMapped2StripCalPar : public FairTask
{

  public:
    /** Default constructor **/
    R3BAmsMapped2StripCalPar();

    /** Standard constructor **/
    R3BAmsMapped2StripCalPar(const TString& name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BAmsMapped2StripCalPar();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Virtual method Reset **/
    virtual void Reset();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Search pedestals **/
    virtual void SearchPedestals();

    /** Virtual method to print parameters **/
    virtual void PrintParamsDaq();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    void SetPrintParamsDaq(Bool_t print) { fPrint = print; }

    /** Accessor functions **/
    const Int_t GetNumDetectors() { return fNumDets; }
    const Int_t GetNumStrips() { return fNumStrips; }
    const Int_t GetNumStripsS() { return fNumStripsS; }
    const Int_t GetNumStripsK() { return fNumStripsK; }
    const Int_t GetCalRange_left() { return fMapHistos_left; }
    const Int_t GetCalRange_right() { return fMapHistos_right; }
    const Int_t GetCalRange_bins() { return fMapHistos_bins; }
    const Double_t GetSigma() { return fSigma; }
    const Double_t GetMean() { return fMean; }
    const Int_t GetMinStadistics() { return fMinStadistics; }
    const Int_t GetMaxSigma() { return fMaxSigma; }

    void SetNumDetectors(Int_t numberDet) { fNumDets = numberDet; }
    void SetNumStrips(Int_t numberStrip) { fNumStrips = numberStrip; }
    void SetNumStripsS(Int_t numberStrip) { fNumStripsS = numberStrip; }
    void SetNumStripsK(Int_t numberStrip) { fNumStripsK = numberStrip; }
    void SetCalRange_left(Int_t Histos_left) { fMapHistos_left = Histos_left; }
    void SetCalRange_right(Int_t Histos_right) { fMapHistos_right = Histos_right; }
    void SetCalRange_bins(Int_t Histos_bins) { fMapHistos_bins = Histos_bins; }
    void SetSigma(Double_t sigma) { fSigma = sigma; }
    void SetMean(Double_t mean) { fMean = mean; }
    void SetMinStadistics(Int_t minstad) { fMinStadistics = minstad; }
    void SetMaxSigma(Double_t sigma) { fMaxSigma = sigma; }

  protected:
    void SetParameter();
    // Number of histograms, limits and bining
    Int_t fNumDets;
    Int_t fNumStrips;
    Int_t fNumStripsS;
    Int_t fNumStripsK;
    Int_t fMapHistos_left;
    Int_t fMapHistos_right;
    Int_t fMapHistos_bins;
    Int_t fMaxSigma; // Maximum sigma to mark dead strips, pedestal -1
    Double_t parameters[8 * 1024][2];

    // Minimum stadistics and parameters
    Int_t fMinStadistics;
    Double_t fSigma;
    Double_t fMean;
    Bool_t fPrint;

    R3BAmsMappingPar* fMap_Par;     /**< Parameter container with mapping. >*/
    R3BAmsStripCalPar* fStrip_Par;  /**< Parameter container. >*/
    TClonesArray* fAmsMappedDataCA; /**< Array with AMS Mapped input data. >*/

    TH1F** fh_Map_energy_strip;

  public:
    ClassDef(R3BAmsMapped2StripCalPar, 1);
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

// ----------------------------------------------------------------------
// -----                                                            -----
// -----                     R3BAmsMapped2StripCal                  -----
// -----             Created 29/05/18  by J.L. Rodriguez-Sanchez    -----
// ----------------------------------------------------------------------

#ifndef R3BAmsMapped2StripCal_H
#define R3BAmsMapped2StripCal_H

#include "FairTask.h"
#include "R3BAmsMapped2StripCalPar.h"
#include "R3BAmsMappedData.h"
#include "R3BAmsStripCalData.h"
#include "TH1F.h"
#include <TRandom.h>

class TClonesArray;
class R3BAmsStripCalPar;

class R3BAmsMapped2StripCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BAmsMapped2StripCal();

    /** Standard constructor **/
    R3BAmsMapped2StripCal(const TString& name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BAmsMapped2StripCal();

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

    void SetOnline(Bool_t option) { fOnline = option; }

    /**
     * Method for setting the thresholds: Signal>sigma_strip*fTimesSigma
     */
    void SetThresholdSigma(Double_t th) { fTimesSigma = th; }

  private:
    void SetParameter();

    Int_t NumDets;
    Int_t NumStrips;
    Int_t NumStripsS;
    Int_t NumStripsK;
    Int_t NumParams;
    Int_t MaxSigma;
    Double_t fTimesSigma;
    TArrayF* CalParams;

    Bool_t fOnline; // Don't store data for online

    R3BAmsStripCalPar* fCal_Par;      /**< Parameter container. >*/
    TClonesArray* fAmsMappedDataCA;   /**< Array with AMS Mapped input data. >*/
    TClonesArray* fAmsStripCalDataCA; /**< Array with AMS Cal output data. >*/

    /** Private method AddCalData **/
    //** Adds a AmsStripCalData to the StripCalCollection
    R3BAmsStripCalData* AddCalData(Int_t detid, Int_t sideid, Int_t stripid, Double_t energy);

  public:
    // Class definition
    ClassDef(R3BAmsMapped2StripCal, 1)
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

// ----------------------------------------------------------------------
// -----                                                            -----
// -----                     R3BAmsStripCal2Hit                     -----
// -----             Created 01/06/18  by J.L. Rodriguez-Sanchez    -----
// ----------------------------------------------------------------------

#ifndef R3BAmsStripCal2Hit_H
#define R3BAmsStripCal2Hit_H

#include "FairTask.h"
#include "R3BAmsHitData.h"
#include "R3BAmsStripCal2Hit.h"
#include "R3BAmsStripCalData.h"
#include "TVector3.h"

class TClonesArray;
class R3BAmsMappingPar;

class R3BAmsStripCal2Hit : public FairTask
{

  public:
    /** Default constructor **/
    R3BAmsStripCal2Hit();

    /** Standard constructor **/
    R3BAmsStripCal2Hit(const TString& name, Int_t iVerbose = 1);

    /** Destructor **/
    virtual ~R3BAmsStripCal2Hit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method Reset **/
    virtual void Reset();

    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Finish **/
    virtual void Finish();

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /** Accessor for selecting online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

    /** Accessor for selecting max. number of clusters per ams detector **/
    void SetMaxNumClusters(Int_t max) { fMaxNumClusters = max; }

    /** Accessor to set up the threshold for the cluster energy sum **/
    void SetClusterEnergy(Float_t thsum) { fThSum = thsum; }

  private:
    void SetParameter();
    virtual void DefineClusters(Int_t* nfound, Double_t fPitch, Double_t* fChannels, TH1F* hsst, Double_t cluster[][2]);

    Double_t fPitchK, fPitchS;
    Double_t fScen, fKcen;
    Float_t fThSum;
    Int_t fMaxNumDet, fMaxNumClusters;
    TH1F* hams[16];

    R3BAmsMappingPar* fMap_Par;       /**< Parameter container with mapping. >*/
    TClonesArray* fAmsStripCalDataCA; /**< Array with AMS Cal-input data. >*/
    TClonesArray* fAmsHitDataCA;      /**< Array with AMS Hit-output data. >*/

    Bool_t fOnline; // Don't store data for online
    Double_t* fChannelPeaks;

    /** Private method AddHitData **/
    //** Adds a AmsHitData to the HitCollection
    R3BAmsHitData* AddHitData(Int_t detid,
                              Int_t numhit,
                              Double_t s,
                              Double_t k,
                              TVector3 master,
                              Double_t energy_s,
                              Double_t energy_k,
                              Int_t mulS,
                              Int_t mulK);

  public:
    // Class definition
    ClassDef(R3BAmsStripCal2Hit, 1)
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
// -----                  R3BAmsOnlineSpectra             -----
// -----    Created 22/07/18  by J.L. Rodriguez-Sanchez   -----
// -----           Fill AMS online histograms             -----
// ------------------------------------------------------------

#ifndef R3BAmsOnlineSpectra_H
#define R3BAmsOnlineSpectra_H

#include "FairTask.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

class TClonesArray;
class R3BEventHeader;
class R3BAmsMappingPar;

/**
 * This taks reads AMS data and plots online histograms
 */
class R3BAmsOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BAmsOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BAmsOnlineSpectra(const TString& name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BAmsOnlineSpectra();

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

    /** Virtual method SetParContainers **/
    virtual void SetParContainers();

    /**
     * Method to reset histograms
     */
    void Reset_AMS_Histo();

  private:
    void SetParameter();

    TClonesArray* fMappedItemsAms; /**< Array with mapped items. */
    TClonesArray* fCalItemsAms;    /**< Array with cal items. */
    TClonesArray* fHitItemsAms;    /**< Array with hit items. */

    R3BAmsMappingPar* fMap_Par; /**< Container with mapping parameters. >*/

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fNEvents;         /**< Event counter. */

    TCanvas* cMap;
    TCanvas *cCalL, *cCalR;
    TCanvas* cHit[6];
    TCanvas* cHitAngles;
    TCanvas* cHitEnergyCor;
    TCanvas* cHitThetaCor;
    TCanvas* cHitPhiCor;

    TH2F* fh_Ams_energy_allStrips[6];
    TH2F* fh_Ams_energy_allCalStrips[12];
    TH2F* fh_Ams_hit_Pos[6];
    TH2F* fh_Ams_hit_E[6];
    TH2F* fh_Ams_hit_E_theta[6];
    TH1F* fh_Ams_hit_Mul[6][2];
    TH2F* fh2_ams_theta_phi[2];
    TH2F* fh2_ams_e1_e2[2];
    TH2F* fh2_ams_theta1_theta2[4];
    TH2F* fh2_ams_phi1_phi2[2];

    // TString fAmsFile;        	      /**< Config file name. */
    Int_t fNbDet; /**< Number of AMS detectors. */

  public:
    ClassDef(R3BAmsOnlineSpectra, 1)
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
// -----       R3BAmsCalifaCorrelatedOnlineSpectra             --
// -----    Created 17/02/19  by J.L. Rodriguez-Sanchez        --
// ----- Fill AMS and CALIFA correlations in online histograms --
// --------------------------------------------------------------

#ifndef R3BAmsCalifaCorrelatedOnlineSpectra_H
#define R3BAmsCalifaCorrelatedOnlineSpectra_H

#include "FairTask.h"
#include "TCanvas.h"
#include "TH2F.h"
#include "TMath.h"
#include <array>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <sstream>

class TClonesArray;
class R3BEventHeader;

/**
 *  This taks reads hit data from AMS and califa detectors and plots
 *  online histograms
 */
class R3BAmsCalifaCorrelatedOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BAmsCalifaCorrelatedOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BAmsCalifaCorrelatedOnlineSpectra(const TString& name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BAmsCalifaCorrelatedOnlineSpectra();

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
     * Method for setting the number of AMS detectors
     */
    void SetNumDet(Int_t NbDet) { fNbDet = NbDet; }

    void Reset_AMS_CALIFA_Histo();

  private:
    TClonesArray* fHitItemsAms;    /**< Array with AMS hit items. */
    TClonesArray* fHitItemsCalifa; /**< Array with CALIFA hit items. */
    TClonesArray* fCalItemsLos;

    Double_t fClockFreq; /**< Clock cycle in [ns]. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fNEvents;         /**< Event counter. */

    TCanvas *cMap1, *cMap2;
    TCanvas *cAMSangles, *cHitone, *cHittwo, *cHitPhis;
    TCanvas *cMap1e, *cMap2e;
    // TCanvas* cCal;
    // TCanvas* cHit[4];

    TH2F *fh_Califa_coinc_petal1, *fh_Califa_coinc_petal2;
    TH2F *fh_Califa_coinc_petal1e, *fh_Califa_coinc_petal2e;
    TH2F* fh_los_pos_MCFD;
    TH2F* fh_los_pos_TAMEX;
    TH1F *fh_Ams_openangle1, *fh_Ams_openangle2;
    TH2F *fh_ams_theta_phi, *fh_ams_thetatop_thetabottom, *fh_ams_thetaright_thetaleft, *fh_ams_phis;
    // TH2F* fh_Ams_energy_allCalStrips[8];
    // TH2F* fh_Ams_hit_Pos[4];
    // TH2F* fh_Ams_hit_E[4];
    // TH1F* fh_Ams_hit_Mul[4];

    // TString fAmsFile;        	      /**< Config file name. */
    Int_t fNbDet; /**< Number of AMS detectors. */

  public:
    ClassDef(R3BAmsCalifaCorrelatedOnlineSpectra, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BAmsCalifaCorrelatedOnlineSpectra", payloadCode, "@",
"R3BAmsMapped2StripCal", payloadCode, "@",
"R3BAmsMapped2StripCalPar", payloadCode, "@",
"R3BAmsMappingPar", payloadCode, "@",
"R3BAmsOnlineSpectra", payloadCode, "@",
"R3BAmsStripCal2Hit", payloadCode, "@",
"R3BAmsStripCalPar", payloadCode, "@",
"R3BGeoTra", payloadCode, "@",
"R3BGeoTraPar", payloadCode, "@",
"R3BTarget2pDigiPar", payloadCode, "@",
"R3BTarget2pDigitizer", payloadCode, "@",
"R3BTargetDigiPar", payloadCode, "@",
"R3BTargetDigitizer", payloadCode, "@",
"R3BTra", payloadCode, "@",
"R3BTra2pDigiPar", payloadCode, "@",
"R3BTra2pDigitizer", payloadCode, "@",
"R3BTraContFact", payloadCode, "@",
"R3BTraDigiPar", payloadCode, "@",
"R3BTraDigitizer", payloadCode, "@",
"R3BTraFraDigiPar", payloadCode, "@",
"R3BTraFraDigitizer", payloadCode, "@",
"R3BTraHitFinder", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BTraDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BTraDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BTraDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BTraDict() {
  TriggerDictionaryInitialization_G__R3BTraDict_Impl();
}
