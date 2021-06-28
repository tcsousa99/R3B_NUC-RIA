// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIpspdIG__R3BPspDict

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
#include "R3BPsp.h"
#include "R3BGeoPsp.h"
#include "R3BPspDigiPar.h"
#include "R3BPspDigitizer.h"
#include "R3BPspxMapped2Precal.h"
#include "R3BPspxPrecal2Cal.h"
#include "R3BPspxCal2Hit.h"
#include "R3BPspxOnlineSpectra.h"
#include "par/R3BPspxMappedPar.h"
#include "par/R3BPspxPrecalPar.h"
#include "par/R3BPspxCalPar.h"
#include "par/R3BPspxHitPar.h"
#include "par/R3BPspxContFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BPsp(void *p = 0);
   static void *newArray_R3BPsp(Long_t size, void *p);
   static void delete_R3BPsp(void *p);
   static void deleteArray_R3BPsp(void *p);
   static void destruct_R3BPsp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPsp*)
   {
      ::R3BPsp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPsp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPsp", ::R3BPsp::Class_Version(), "", 30,
                  typeid(::R3BPsp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPsp::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPsp) );
      instance.SetNew(&new_R3BPsp);
      instance.SetNewArray(&newArray_R3BPsp);
      instance.SetDelete(&delete_R3BPsp);
      instance.SetDeleteArray(&deleteArray_R3BPsp);
      instance.SetDestructor(&destruct_R3BPsp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPsp*)
   {
      return GenerateInitInstanceLocal((::R3BPsp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPsp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoPsp(void *p = 0);
   static void *newArray_R3BGeoPsp(Long_t size, void *p);
   static void delete_R3BGeoPsp(void *p);
   static void deleteArray_R3BGeoPsp(void *p);
   static void destruct_R3BGeoPsp(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoPsp*)
   {
      ::R3BGeoPsp *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoPsp >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoPsp", ::R3BGeoPsp::Class_Version(), "", 212,
                  typeid(::R3BGeoPsp), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoPsp::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoPsp) );
      instance.SetNew(&new_R3BGeoPsp);
      instance.SetNewArray(&newArray_R3BGeoPsp);
      instance.SetDelete(&delete_R3BGeoPsp);
      instance.SetDeleteArray(&deleteArray_R3BGeoPsp);
      instance.SetDestructor(&destruct_R3BGeoPsp);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoPsp*)
   {
      return GenerateInitInstanceLocal((::R3BGeoPsp*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigiPar(void *p = 0);
   static void *newArray_R3BPspDigiPar(Long_t size, void *p);
   static void delete_R3BPspDigiPar(void *p);
   static void deleteArray_R3BPspDigiPar(void *p);
   static void destruct_R3BPspDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigiPar*)
   {
      ::R3BPspDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigiPar", ::R3BPspDigiPar::Class_Version(), "", 256,
                  typeid(::R3BPspDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigiPar) );
      instance.SetNew(&new_R3BPspDigiPar);
      instance.SetNewArray(&newArray_R3BPspDigiPar);
      instance.SetDelete(&delete_R3BPspDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BPspDigiPar);
      instance.SetDestructor(&destruct_R3BPspDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigitizer(void *p = 0);
   static void *newArray_R3BPspDigitizer(Long_t size, void *p);
   static void delete_R3BPspDigitizer(void *p);
   static void deleteArray_R3BPspDigitizer(void *p);
   static void destruct_R3BPspDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigitizer*)
   {
      ::R3BPspDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigitizer", ::R3BPspDigitizer::Class_Version(), "", 305,
                  typeid(::R3BPspDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigitizer) );
      instance.SetNew(&new_R3BPspDigitizer);
      instance.SetNewArray(&newArray_R3BPspDigitizer);
      instance.SetDelete(&delete_R3BPspDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BPspDigitizer);
      instance.SetDestructor(&destruct_R3BPspDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxMapped2Precal(void *p = 0);
   static void *newArray_R3BPspxMapped2Precal(Long_t size, void *p);
   static void delete_R3BPspxMapped2Precal(void *p);
   static void deleteArray_R3BPspxMapped2Precal(void *p);
   static void destruct_R3BPspxMapped2Precal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxMapped2Precal*)
   {
      ::R3BPspxMapped2Precal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxMapped2Precal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxMapped2Precal", ::R3BPspxMapped2Precal::Class_Version(), "", 386,
                  typeid(::R3BPspxMapped2Precal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxMapped2Precal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxMapped2Precal) );
      instance.SetNew(&new_R3BPspxMapped2Precal);
      instance.SetNewArray(&newArray_R3BPspxMapped2Precal);
      instance.SetDelete(&delete_R3BPspxMapped2Precal);
      instance.SetDeleteArray(&deleteArray_R3BPspxMapped2Precal);
      instance.SetDestructor(&destruct_R3BPspxMapped2Precal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxMapped2Precal*)
   {
      return GenerateInitInstanceLocal((::R3BPspxMapped2Precal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxMapped2Precal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxPrecal2Cal(void *p = 0);
   static void *newArray_R3BPspxPrecal2Cal(Long_t size, void *p);
   static void delete_R3BPspxPrecal2Cal(void *p);
   static void deleteArray_R3BPspxPrecal2Cal(void *p);
   static void destruct_R3BPspxPrecal2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxPrecal2Cal*)
   {
      ::R3BPspxPrecal2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxPrecal2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxPrecal2Cal", ::R3BPspxPrecal2Cal::Class_Version(), "", 478,
                  typeid(::R3BPspxPrecal2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxPrecal2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxPrecal2Cal) );
      instance.SetNew(&new_R3BPspxPrecal2Cal);
      instance.SetNewArray(&newArray_R3BPspxPrecal2Cal);
      instance.SetDelete(&delete_R3BPspxPrecal2Cal);
      instance.SetDeleteArray(&deleteArray_R3BPspxPrecal2Cal);
      instance.SetDestructor(&destruct_R3BPspxPrecal2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxPrecal2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BPspxPrecal2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxPrecal2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxCal2Hit(void *p = 0);
   static void *newArray_R3BPspxCal2Hit(Long_t size, void *p);
   static void delete_R3BPspxCal2Hit(void *p);
   static void deleteArray_R3BPspxCal2Hit(void *p);
   static void destruct_R3BPspxCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxCal2Hit*)
   {
      ::R3BPspxCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxCal2Hit", ::R3BPspxCal2Hit::Class_Version(), "", 568,
                  typeid(::R3BPspxCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxCal2Hit) );
      instance.SetNew(&new_R3BPspxCal2Hit);
      instance.SetNewArray(&newArray_R3BPspxCal2Hit);
      instance.SetDelete(&delete_R3BPspxCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BPspxCal2Hit);
      instance.SetDestructor(&destruct_R3BPspxCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BPspxCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxOnlineSpectra(void *p = 0);
   static void *newArray_R3BPspxOnlineSpectra(Long_t size, void *p);
   static void delete_R3BPspxOnlineSpectra(void *p);
   static void deleteArray_R3BPspxOnlineSpectra(void *p);
   static void destruct_R3BPspxOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxOnlineSpectra*)
   {
      ::R3BPspxOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxOnlineSpectra", ::R3BPspxOnlineSpectra::Class_Version(), "", 670,
                  typeid(::R3BPspxOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxOnlineSpectra) );
      instance.SetNew(&new_R3BPspxOnlineSpectra);
      instance.SetNewArray(&newArray_R3BPspxOnlineSpectra);
      instance.SetDelete(&delete_R3BPspxOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BPspxOnlineSpectra);
      instance.SetDestructor(&destruct_R3BPspxOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BPspxOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxMappedPar(void *p = 0);
   static void *newArray_R3BPspxMappedPar(Long_t size, void *p);
   static void delete_R3BPspxMappedPar(void *p);
   static void deleteArray_R3BPspxMappedPar(void *p);
   static void destruct_R3BPspxMappedPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxMappedPar*)
   {
      ::R3BPspxMappedPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxMappedPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxMappedPar", ::R3BPspxMappedPar::Class_Version(), "", 798,
                  typeid(::R3BPspxMappedPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxMappedPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxMappedPar) );
      instance.SetNew(&new_R3BPspxMappedPar);
      instance.SetNewArray(&newArray_R3BPspxMappedPar);
      instance.SetDelete(&delete_R3BPspxMappedPar);
      instance.SetDeleteArray(&deleteArray_R3BPspxMappedPar);
      instance.SetDestructor(&destruct_R3BPspxMappedPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxMappedPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspxMappedPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxMappedPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxPrecalPar(void *p = 0);
   static void *newArray_R3BPspxPrecalPar(Long_t size, void *p);
   static void delete_R3BPspxPrecalPar(void *p);
   static void deleteArray_R3BPspxPrecalPar(void *p);
   static void destruct_R3BPspxPrecalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxPrecalPar*)
   {
      ::R3BPspxPrecalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxPrecalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxPrecalPar", ::R3BPspxPrecalPar::Class_Version(), "", 873,
                  typeid(::R3BPspxPrecalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxPrecalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxPrecalPar) );
      instance.SetNew(&new_R3BPspxPrecalPar);
      instance.SetNewArray(&newArray_R3BPspxPrecalPar);
      instance.SetDelete(&delete_R3BPspxPrecalPar);
      instance.SetDeleteArray(&deleteArray_R3BPspxPrecalPar);
      instance.SetDestructor(&destruct_R3BPspxPrecalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxPrecalPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspxPrecalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxPrecalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxCalPar(void *p = 0);
   static void *newArray_R3BPspxCalPar(Long_t size, void *p);
   static void delete_R3BPspxCalPar(void *p);
   static void deleteArray_R3BPspxCalPar(void *p);
   static void destruct_R3BPspxCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxCalPar*)
   {
      ::R3BPspxCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxCalPar", ::R3BPspxCalPar::Class_Version(), "", 950,
                  typeid(::R3BPspxCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxCalPar) );
      instance.SetNew(&new_R3BPspxCalPar);
      instance.SetNewArray(&newArray_R3BPspxCalPar);
      instance.SetDelete(&delete_R3BPspxCalPar);
      instance.SetDeleteArray(&deleteArray_R3BPspxCalPar);
      instance.SetDestructor(&destruct_R3BPspxCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspxCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxHitPar(void *p = 0);
   static void *newArray_R3BPspxHitPar(Long_t size, void *p);
   static void delete_R3BPspxHitPar(void *p);
   static void deleteArray_R3BPspxHitPar(void *p);
   static void destruct_R3BPspxHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxHitPar*)
   {
      ::R3BPspxHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxHitPar", ::R3BPspxHitPar::Class_Version(), "", 1026,
                  typeid(::R3BPspxHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxHitPar) );
      instance.SetNew(&new_R3BPspxHitPar);
      instance.SetNewArray(&newArray_R3BPspxHitPar);
      instance.SetDelete(&delete_R3BPspxHitPar);
      instance.SetDeleteArray(&deleteArray_R3BPspxHitPar);
      instance.SetDestructor(&destruct_R3BPspxHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BPspxHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxContFact(void *p = 0);
   static void *newArray_R3BPspxContFact(Long_t size, void *p);
   static void delete_R3BPspxContFact(void *p);
   static void deleteArray_R3BPspxContFact(void *p);
   static void destruct_R3BPspxContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxContFact*)
   {
      ::R3BPspxContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxContFact", ::R3BPspxContFact::Class_Version(), "", 1104,
                  typeid(::R3BPspxContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxContFact) );
      instance.SetNew(&new_R3BPspxContFact);
      instance.SetNewArray(&newArray_R3BPspxContFact);
      instance.SetDelete(&delete_R3BPspxContFact);
      instance.SetDeleteArray(&deleteArray_R3BPspxContFact);
      instance.SetDestructor(&destruct_R3BPspxContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxContFact*)
   {
      return GenerateInitInstanceLocal((::R3BPspxContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BPsp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPsp::Class_Name()
{
   return "R3BPsp";
}

//______________________________________________________________________________
const char *R3BPsp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPsp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPsp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPsp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPsp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoPsp::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoPsp::Class_Name()
{
   return "R3BGeoPsp";
}

//______________________________________________________________________________
const char *R3BGeoPsp::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoPsp::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoPsp::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoPsp::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoPsp*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigiPar::Class_Name()
{
   return "R3BPspDigiPar";
}

//______________________________________________________________________________
const char *R3BPspDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigitizer::Class_Name()
{
   return "R3BPspDigitizer";
}

//______________________________________________________________________________
const char *R3BPspDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxMapped2Precal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxMapped2Precal::Class_Name()
{
   return "R3BPspxMapped2Precal";
}

//______________________________________________________________________________
const char *R3BPspxMapped2Precal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMapped2Precal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxMapped2Precal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMapped2Precal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxMapped2Precal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMapped2Precal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxMapped2Precal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMapped2Precal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxPrecal2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxPrecal2Cal::Class_Name()
{
   return "R3BPspxPrecal2Cal";
}

//______________________________________________________________________________
const char *R3BPspxPrecal2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecal2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxPrecal2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecal2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxPrecal2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecal2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxPrecal2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecal2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxCal2Hit::Class_Name()
{
   return "R3BPspxCal2Hit";
}

//______________________________________________________________________________
const char *R3BPspxCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxOnlineSpectra::Class_Name()
{
   return "R3BPspxOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BPspxOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxMappedPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxMappedPar::Class_Name()
{
   return "R3BPspxMappedPar";
}

//______________________________________________________________________________
const char *R3BPspxMappedPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxMappedPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxMappedPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxMappedPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxPrecalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxPrecalPar::Class_Name()
{
   return "R3BPspxPrecalPar";
}

//______________________________________________________________________________
const char *R3BPspxPrecalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxPrecalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxPrecalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxPrecalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxCalPar::Class_Name()
{
   return "R3BPspxCalPar";
}

//______________________________________________________________________________
const char *R3BPspxCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxHitPar::Class_Name()
{
   return "R3BPspxHitPar";
}

//______________________________________________________________________________
const char *R3BPspxHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxContFact::Class_Name()
{
   return "R3BPspxContFact";
}

//______________________________________________________________________________
const char *R3BPspxContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BPsp::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPsp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPsp::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPsp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPsp(void *p) {
      return  p ? new(p) ::R3BPsp : new ::R3BPsp;
   }
   static void *newArray_R3BPsp(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPsp[nElements] : new ::R3BPsp[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPsp(void *p) {
      delete ((::R3BPsp*)p);
   }
   static void deleteArray_R3BPsp(void *p) {
      delete [] ((::R3BPsp*)p);
   }
   static void destruct_R3BPsp(void *p) {
      typedef ::R3BPsp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPsp

//______________________________________________________________________________
void R3BGeoPsp::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoPsp.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoPsp::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoPsp::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoPsp(void *p) {
      return  p ? new(p) ::R3BGeoPsp : new ::R3BGeoPsp;
   }
   static void *newArray_R3BGeoPsp(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoPsp[nElements] : new ::R3BGeoPsp[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoPsp(void *p) {
      delete ((::R3BGeoPsp*)p);
   }
   static void deleteArray_R3BGeoPsp(void *p) {
      delete [] ((::R3BGeoPsp*)p);
   }
   static void destruct_R3BGeoPsp(void *p) {
      typedef ::R3BGeoPsp current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoPsp

//______________________________________________________________________________
void R3BPspDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigiPar(void *p) {
      return  p ? new(p) ::R3BPspDigiPar : new ::R3BPspDigiPar;
   }
   static void *newArray_R3BPspDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigiPar[nElements] : new ::R3BPspDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigiPar(void *p) {
      delete ((::R3BPspDigiPar*)p);
   }
   static void deleteArray_R3BPspDigiPar(void *p) {
      delete [] ((::R3BPspDigiPar*)p);
   }
   static void destruct_R3BPspDigiPar(void *p) {
      typedef ::R3BPspDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigiPar

//______________________________________________________________________________
void R3BPspDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigitizer(void *p) {
      return  p ? new(p) ::R3BPspDigitizer : new ::R3BPspDigitizer;
   }
   static void *newArray_R3BPspDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigitizer[nElements] : new ::R3BPspDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigitizer(void *p) {
      delete ((::R3BPspDigitizer*)p);
   }
   static void deleteArray_R3BPspDigitizer(void *p) {
      delete [] ((::R3BPspDigitizer*)p);
   }
   static void destruct_R3BPspDigitizer(void *p) {
      typedef ::R3BPspDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigitizer

//______________________________________________________________________________
void R3BPspxMapped2Precal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxMapped2Precal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxMapped2Precal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxMapped2Precal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxMapped2Precal(void *p) {
      return  p ? new(p) ::R3BPspxMapped2Precal : new ::R3BPspxMapped2Precal;
   }
   static void *newArray_R3BPspxMapped2Precal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxMapped2Precal[nElements] : new ::R3BPspxMapped2Precal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxMapped2Precal(void *p) {
      delete ((::R3BPspxMapped2Precal*)p);
   }
   static void deleteArray_R3BPspxMapped2Precal(void *p) {
      delete [] ((::R3BPspxMapped2Precal*)p);
   }
   static void destruct_R3BPspxMapped2Precal(void *p) {
      typedef ::R3BPspxMapped2Precal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxMapped2Precal

//______________________________________________________________________________
void R3BPspxPrecal2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxPrecal2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxPrecal2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxPrecal2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxPrecal2Cal(void *p) {
      return  p ? new(p) ::R3BPspxPrecal2Cal : new ::R3BPspxPrecal2Cal;
   }
   static void *newArray_R3BPspxPrecal2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxPrecal2Cal[nElements] : new ::R3BPspxPrecal2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxPrecal2Cal(void *p) {
      delete ((::R3BPspxPrecal2Cal*)p);
   }
   static void deleteArray_R3BPspxPrecal2Cal(void *p) {
      delete [] ((::R3BPspxPrecal2Cal*)p);
   }
   static void destruct_R3BPspxPrecal2Cal(void *p) {
      typedef ::R3BPspxPrecal2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxPrecal2Cal

//______________________________________________________________________________
void R3BPspxCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxCal2Hit(void *p) {
      return  p ? new(p) ::R3BPspxCal2Hit : new ::R3BPspxCal2Hit;
   }
   static void *newArray_R3BPspxCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxCal2Hit[nElements] : new ::R3BPspxCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxCal2Hit(void *p) {
      delete ((::R3BPspxCal2Hit*)p);
   }
   static void deleteArray_R3BPspxCal2Hit(void *p) {
      delete [] ((::R3BPspxCal2Hit*)p);
   }
   static void destruct_R3BPspxCal2Hit(void *p) {
      typedef ::R3BPspxCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxCal2Hit

//______________________________________________________________________________
void R3BPspxOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BPspxOnlineSpectra : new ::R3BPspxOnlineSpectra;
   }
   static void *newArray_R3BPspxOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxOnlineSpectra[nElements] : new ::R3BPspxOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxOnlineSpectra(void *p) {
      delete ((::R3BPspxOnlineSpectra*)p);
   }
   static void deleteArray_R3BPspxOnlineSpectra(void *p) {
      delete [] ((::R3BPspxOnlineSpectra*)p);
   }
   static void destruct_R3BPspxOnlineSpectra(void *p) {
      typedef ::R3BPspxOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxOnlineSpectra

//______________________________________________________________________________
void R3BPspxMappedPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxMappedPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxMappedPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxMappedPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxMappedPar(void *p) {
      return  p ? new(p) ::R3BPspxMappedPar : new ::R3BPspxMappedPar;
   }
   static void *newArray_R3BPspxMappedPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxMappedPar[nElements] : new ::R3BPspxMappedPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxMappedPar(void *p) {
      delete ((::R3BPspxMappedPar*)p);
   }
   static void deleteArray_R3BPspxMappedPar(void *p) {
      delete [] ((::R3BPspxMappedPar*)p);
   }
   static void destruct_R3BPspxMappedPar(void *p) {
      typedef ::R3BPspxMappedPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxMappedPar

//______________________________________________________________________________
void R3BPspxPrecalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxPrecalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxPrecalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxPrecalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxPrecalPar(void *p) {
      return  p ? new(p) ::R3BPspxPrecalPar : new ::R3BPspxPrecalPar;
   }
   static void *newArray_R3BPspxPrecalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxPrecalPar[nElements] : new ::R3BPspxPrecalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxPrecalPar(void *p) {
      delete ((::R3BPspxPrecalPar*)p);
   }
   static void deleteArray_R3BPspxPrecalPar(void *p) {
      delete [] ((::R3BPspxPrecalPar*)p);
   }
   static void destruct_R3BPspxPrecalPar(void *p) {
      typedef ::R3BPspxPrecalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxPrecalPar

//______________________________________________________________________________
void R3BPspxCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxCalPar(void *p) {
      return  p ? new(p) ::R3BPspxCalPar : new ::R3BPspxCalPar;
   }
   static void *newArray_R3BPspxCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxCalPar[nElements] : new ::R3BPspxCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxCalPar(void *p) {
      delete ((::R3BPspxCalPar*)p);
   }
   static void deleteArray_R3BPspxCalPar(void *p) {
      delete [] ((::R3BPspxCalPar*)p);
   }
   static void destruct_R3BPspxCalPar(void *p) {
      typedef ::R3BPspxCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxCalPar

//______________________________________________________________________________
void R3BPspxHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxHitPar(void *p) {
      return  p ? new(p) ::R3BPspxHitPar : new ::R3BPspxHitPar;
   }
   static void *newArray_R3BPspxHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxHitPar[nElements] : new ::R3BPspxHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxHitPar(void *p) {
      delete ((::R3BPspxHitPar*)p);
   }
   static void deleteArray_R3BPspxHitPar(void *p) {
      delete [] ((::R3BPspxHitPar*)p);
   }
   static void destruct_R3BPspxHitPar(void *p) {
      typedef ::R3BPspxHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxHitPar

//______________________________________________________________________________
void R3BPspxContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxContFact(void *p) {
      return  p ? new(p) ::R3BPspxContFact : new ::R3BPspxContFact;
   }
   static void *newArray_R3BPspxContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxContFact[nElements] : new ::R3BPspxContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxContFact(void *p) {
      delete ((::R3BPspxContFact*)p);
   }
   static void deleteArray_R3BPspxContFact(void *p) {
      delete [] ((::R3BPspxContFact*)p);
   }
   static void destruct_R3BPspxContFact(void *p) {
      typedef ::R3BPspxContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxContFact

namespace ROOT {
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary();
   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEintgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEintgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p);
   static void destruct_vectorlEvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<int> >*)
   {
      vector<vector<int> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<int> >", -2, "vector", 214,
                  typeid(vector<vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<int> >) );
      instance.SetNew(&new_vectorlEvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEintgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<int> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<int> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<int> >*)0x0)->GetClass();
      vectorlEvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEintgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> > : new vector<vector<int> >;
   }
   static void *newArray_vectorlEvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<int> >[nElements] : new vector<vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEintgRsPgR(void *p) {
      delete ((vector<vector<int> >*)p);
   }
   static void deleteArray_vectorlEvectorlEintgRsPgR(void *p) {
      delete [] ((vector<vector<int> >*)p);
   }
   static void destruct_vectorlEvectorlEintgRsPgR(void *p) {
      typedef vector<vector<int> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<int> >

namespace ROOT {
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary();
   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p);
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<float> >*)
   {
      vector<vector<float> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<float> >", -2, "vector", 214,
                  typeid(vector<vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlEfloatgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<float> >) );
      instance.SetNew(&new_vectorlEvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<float> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<float> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<float> >*)0x0)->GetClass();
      vectorlEvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> > : new vector<vector<float> >;
   }
   static void *newArray_vectorlEvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<float> >[nElements] : new vector<vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete ((vector<vector<float> >*)p);
   }
   static void deleteArray_vectorlEvectorlEfloatgRsPgR(void *p) {
      delete [] ((vector<vector<float> >*)p);
   }
   static void destruct_vectorlEvectorlEfloatgRsPgR(void *p) {
      typedef vector<vector<float> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<float> >

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = 0);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 214,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<int>*)0x0)->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete ((vector<int>*)p);
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] ((vector<int>*)p);
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = 0);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 214,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<float>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<float>*)0x0)->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete ((vector<float>*)p);
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] ((vector<float>*)p);
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlETH2FmUgR_Dictionary();
   static void vectorlETH2FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH2FmUgR(void *p = 0);
   static void *newArray_vectorlETH2FmUgR(Long_t size, void *p);
   static void delete_vectorlETH2FmUgR(void *p);
   static void deleteArray_vectorlETH2FmUgR(void *p);
   static void destruct_vectorlETH2FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH2F*>*)
   {
      vector<TH2F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH2F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH2F*>", -2, "vector", 214,
                  typeid(vector<TH2F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH2FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH2F*>) );
      instance.SetNew(&new_vectorlETH2FmUgR);
      instance.SetNewArray(&newArray_vectorlETH2FmUgR);
      instance.SetDelete(&delete_vectorlETH2FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH2FmUgR);
      instance.SetDestructor(&destruct_vectorlETH2FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH2F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH2F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH2FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH2F*>*)0x0)->GetClass();
      vectorlETH2FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH2FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH2FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*> : new vector<TH2F*>;
   }
   static void *newArray_vectorlETH2FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH2F*>[nElements] : new vector<TH2F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH2FmUgR(void *p) {
      delete ((vector<TH2F*>*)p);
   }
   static void deleteArray_vectorlETH2FmUgR(void *p) {
      delete [] ((vector<TH2F*>*)p);
   }
   static void destruct_vectorlETH2FmUgR(void *p) {
      typedef vector<TH2F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH2F*>

namespace ROOT {
   static TClass *vectorlETH1FmUgR_Dictionary();
   static void vectorlETH1FmUgR_TClassManip(TClass*);
   static void *new_vectorlETH1FmUgR(void *p = 0);
   static void *newArray_vectorlETH1FmUgR(Long_t size, void *p);
   static void delete_vectorlETH1FmUgR(void *p);
   static void deleteArray_vectorlETH1FmUgR(void *p);
   static void destruct_vectorlETH1FmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TH1F*>*)
   {
      vector<TH1F*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TH1F*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TH1F*>", -2, "vector", 214,
                  typeid(vector<TH1F*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETH1FmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TH1F*>) );
      instance.SetNew(&new_vectorlETH1FmUgR);
      instance.SetNewArray(&newArray_vectorlETH1FmUgR);
      instance.SetDelete(&delete_vectorlETH1FmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETH1FmUgR);
      instance.SetDestructor(&destruct_vectorlETH1FmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TH1F*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TH1F*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETH1FmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TH1F*>*)0x0)->GetClass();
      vectorlETH1FmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETH1FmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETH1FmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*> : new vector<TH1F*>;
   }
   static void *newArray_vectorlETH1FmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TH1F*>[nElements] : new vector<TH1F*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETH1FmUgR(void *p) {
      delete ((vector<TH1F*>*)p);
   }
   static void deleteArray_vectorlETH1FmUgR(void *p) {
      delete [] ((vector<TH1F*>*)p);
   }
   static void destruct_vectorlETH1FmUgR(void *p) {
      typedef vector<TH1F*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TH1F*>

namespace ROOT {
   static TClass *vectorlETClonesArraymUgR_Dictionary();
   static void vectorlETClonesArraymUgR_TClassManip(TClass*);
   static void *new_vectorlETClonesArraymUgR(void *p = 0);
   static void *newArray_vectorlETClonesArraymUgR(Long_t size, void *p);
   static void delete_vectorlETClonesArraymUgR(void *p);
   static void deleteArray_vectorlETClonesArraymUgR(void *p);
   static void destruct_vectorlETClonesArraymUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<TClonesArray*>*)
   {
      vector<TClonesArray*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<TClonesArray*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<TClonesArray*>", -2, "vector", 214,
                  typeid(vector<TClonesArray*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlETClonesArraymUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<TClonesArray*>) );
      instance.SetNew(&new_vectorlETClonesArraymUgR);
      instance.SetNewArray(&newArray_vectorlETClonesArraymUgR);
      instance.SetDelete(&delete_vectorlETClonesArraymUgR);
      instance.SetDeleteArray(&deleteArray_vectorlETClonesArraymUgR);
      instance.SetDestructor(&destruct_vectorlETClonesArraymUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<TClonesArray*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlETClonesArraymUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<TClonesArray*>*)0x0)->GetClass();
      vectorlETClonesArraymUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlETClonesArraymUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlETClonesArraymUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*> : new vector<TClonesArray*>;
   }
   static void *newArray_vectorlETClonesArraymUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<TClonesArray*>[nElements] : new vector<TClonesArray*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlETClonesArraymUgR(void *p) {
      delete ((vector<TClonesArray*>*)p);
   }
   static void deleteArray_vectorlETClonesArraymUgR(void *p) {
      delete [] ((vector<TClonesArray*>*)p);
   }
   static void destruct_vectorlETClonesArraymUgR(void *p) {
      typedef vector<TClonesArray*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<TClonesArray*>

namespace {
  void TriggerDictionaryInitialization_G__R3BPspDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/psp",
"/work/R3BRoot/psp/par",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tracking",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/psp/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BPspDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BPsp;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoPsp;
class R3BPspDigiPar;
class R3BPspDigitizer;
class R3BPspxMapped2Precal;
class R3BPspxPrecal2Cal;
class R3BPspxCal2Hit;
class R3BPspxOnlineSpectra;
class R3BPspxMappedPar;
class R3BPspxPrecalPar;
class R3BPspxCalPar;
class R3BPspxHitPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Pspx parameter containers)ATTRDUMP"))) R3BPspxContFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BPspDict dictionary payload"

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

#ifndef R3BPSP_H
#define R3BPSP_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BPspPoint;
class R3BTGeoPar;
class FairVolume;

class R3BPsp : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BPsp();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     *@param z1      psp1 z position
     *@param z2      psp2 z position
     *@param z2      psp2 z position
     */
    R3BPsp(const TString& geoFile,
           const TGeoTranslation& trans,
           const TGeoRotation& rot = TGeoRotation(),
           const Float_t z1 = -221.,
           const Float_t z2 = -89.,
           const Float_t z3 = 94.1);

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     *@param z1      psp1 z position
     *@param z2      psp2 z position
     *@param z2      psp2 z position
     */
    R3BPsp(const TString& geoFile,
           const TGeoCombiTrans& combi = TGeoCombiTrans(),
           const Float_t z1 = -221.,
           const Float_t z2 = -89.,
           const Float_t z3 = 94.1);

    /** Destructor **/
    ~R3BPsp();

    /** Virtual method ProcessHits
    **
    ** Defines the action to be taken when a step is inside the
    ** active volume. Creates a R3BPspPoint and adds it to the
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

    /** Virtual method Construct geometry
     **
     ** Constructs the STS geometry
     **/
    virtual void ConstructGeometry();
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
    TClonesArray* fPspCollection;   //!  The hit collection
    Bool_t kGeoSaved;               //!
    TList* flGeoPar;                //!
    R3BTGeoPar* fTGeoPar;           //!

    Float_t fZ1; //! z position of PSP1
    Float_t fZ2; //! z position of PSP2
    Float_t fZ3; //! z position of PSP3

    /** Private method AddHit
     **
     ** Adds a PspPoint to the HitCollection
     **/
    R3BPspPoint* AddHit(Int_t trackID,
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

    ClassDef(R3BPsp, 3);
};

inline void R3BPsp::ResetParameters()
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

#ifndef R3BGEOPSP_H
#define R3BGEOPSP_H

#include "FairGeoSet.h"

class R3BGeoPsp : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoPsp();
    ~R3BGeoPsp() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoPsp, 0) // Class for STS
};

inline Int_t R3BGeoPsp::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOGFI_H */
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

#ifndef R3BPSPDIGIPAR_H
#define R3BPSPDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BPspDigiPar : public FairParGenericSet
{
  public:
    R3BPspDigiPar(const char* name = "R3BPspDigiParTest",
                  const char* title = "Tutorial  parameter",
                  const char* context = "TestDefaultContext");
    ~R3BPspDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BPspDigiPar, 1); //
};

#endif /* !R3BMTOFDIGIPAR_H*/
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

#ifndef R3BPSPDIGITIZER_H
#define R3BPSPDIGITISER_H 1

#include "FairTask.h"
#include "R3BPspDigi.h"
#include "R3BPspDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BPspDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BPspDigitizer();

    /** Destructor **/
    ~R3BPspDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BPspDigi* AddHit(Int_t psp3mul, Double_t psp3x, Double_t psp3y, Double_t psp3e);

  protected:
    TClonesArray* fPspPoints;
    TClonesArray* fPspMCTrack;
    TClonesArray* fPspDigi;

    // Parameter class
    R3BPspDigiPar* fPspDigiPar;

    //- Control Hitograms

    //   TH1F* PSPXhis;

    Int_t eventNoPsp;

  private:
    virtual void SetParContainers();

    ClassDef(R3BPspDigitizer, 1);
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
// -----                   R3BPspxMapped2Precal               -----
// -----            Created  13-03-2017 by I. Syndikus        -----
// -----              Modified  Dec 2019  by M. Holl	        -----
// ----------------------------------------------------------------

#ifndef R3BPSPXMAPPED2PRECAL_H
#define R3BPSPXMAPPED2PRECAL_H

#include "FairTask.h"

class TClonesArray;
class R3BEventHeader;
class R3BPspxPrecalPar;

/**
 * Class to convert Mapped data to Precal data for PSPX detector data.
 * Thresholds are applied to signal from both sides of each strip
 * Signal from side 2 of each strip is multiplied by gain for position calibration
 * @author Ina Syndikus
 * @since March 13, 2016
 * Modified Dec 2019 by M.Holl
 * Modified April 2021 by J.L.Rodriguez
 */

class R3BPspxMapped2Precal : public FairTask
{
  public:
    /** Default Constructor **/
    R3BPspxMapped2Precal();

    /** Standard Constructor **/
    R3BPspxMapped2Precal(const char* name, Int_t iVerbose);

    /** Destructor **/
    virtual ~R3BPspxMapped2Precal();

    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Method SetParContainers **/
    void SetParContainers();

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    void SetParameters();

    R3BEventHeader* fHeader;                 // do we need that?
    std::vector<TClonesArray*> fMappedItems; /**< Arrays holding input (Mapped) data */
    std::vector<TClonesArray*> fPrecalItems; /**< Arrays holding output (Precal) data */

    R3BPspxPrecalPar* fPrecalPar; /**< Parameter instance holding thresholds and gains for position correction */
    std::vector<std::vector<Float_t>> gain;
    std::vector<std::vector<Int_t>> threshold1;
    std::vector<std::vector<Int_t>> threshold2;

    Bool_t fOnline; // Don't store data for online

  public:
    ClassDef(R3BPspxMapped2Precal, 3)
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
// -----                    R3BPspxPrecal2Cal                 -----
// -----            Created  20-03-2017 by I. Syndikus	-----
// -----              Modified  Dec 2019  by M. Holl	        -----
// ----------------------------------------------------------------

#ifndef R3BPSPXPRECAL2CAL_H
#define R3BPSPXPRECAL2CAL_H

#include "FairTask.h"

class TClonesArray;
class R3BEventHeader;
class R3BPspxCalPar;

/**
 * Class to convert Precal data to Cal data for PSPX detector data.
 * Gains for energy matching of all strips are applied
 * Total deposited energt and position in internal coordinates is calculated
 * @author Ina Syndikus
 * @since March 20, 2016
 * Modified Dec 2019 by M.Holl
 * Modified April 2021 by J.L.Rodriguez
 */

class R3BPspxPrecal2Cal : public FairTask
{
  public:
    /** Default Constructor **/
    R3BPspxPrecal2Cal();

    /** Standard Constructor **/
    R3BPspxPrecal2Cal(const char* name, Int_t iVerbose);

    /** Destructor **/
    virtual ~R3BPspxPrecal2Cal();

    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Method SetParContainers **/
    void SetParContainers();

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    void SetParameters();

    R3BEventHeader* fHeader;                 // do we need that?
    std::vector<TClonesArray*> fPrecalItems; /**< Arrays holding input (Precal) data */
    std::vector<TClonesArray*> fCalItems;    /**< Arrays holding output (Cal) data */

    R3BPspxCalPar* fCalPar; /**< Parameter instance holding gain for energy correction */
    std::vector<std::vector<Float_t>> gain;

    Bool_t fOnline; // Don't store data for online

  public:
    ClassDef(R3BPspxPrecal2Cal, 4)
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
// -----                    R3BPspxCal2Hit                    -----
// -----	     created 09-03-2016 by I. Syndikus         -----
// -----              Modified  Dec 2019  by M. Holl		 -----
// ----------------------------------------------------------------

#ifndef R3BPSPXCAL2HIT_H
#define R3BPSPXCAL2HIT_H

#include "FairTask.h"

class TClonesArray;
class R3BEventHeader;
class R3BPspxHitPar;

/**
 * Class to convert Cal data to Hit data for PSPX detector data.
 * Total deposited energy is converted to MeV
 * Positions are converted to global coordinates in centimetres
 * @author Ina Syndikus
 * @since March 9, 2016
 * Modified Dec 2019 by M.Holl
 * Modified April 2021 by J.L.Rodriguez
 */

class R3BPspxCal2Hit : public FairTask
{
  public:
    /** Default Constructor **/
    R3BPspxCal2Hit();

    /**
     * Standard Constructor
     **/
    R3BPspxCal2Hit(const char* name, Int_t iVerbose);

    /** Destructor **/
    virtual ~R3BPspxCal2Hit();

    // Fair specific
    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method ReInit **/
    virtual InitStatus ReInit();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* option);

    /** Virtual method FinishEvent **/
    virtual void FinishEvent();

    /** Virtual method FinishTask **/
    virtual void FinishTask();

    /** Method SetParContainers **/
    void SetParContainers();

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    void SetParameters();

    R3BEventHeader* fHeader;              // do we need that?
    std::vector<TClonesArray*> fCalItems; /**< Array holding input (Cal) data */
    std::vector<TClonesArray*> fHitItems; /**< Array holding output (Hit) data */

    Bool_t fOnline; // Don't store data for online

    R3BPspxHitPar* fHitPar; /**< Parameter instance holding slopes, offsets and signs */
    std::vector<Float_t> orientation;
    std::vector<Float_t> detSize;
    std::vector<Float_t> posOffset;
    std::vector<Float_t> posSlope;
    std::vector<Float_t> eOffset;
    std::vector<Float_t> eGain;
    std::vector<Float_t> eRange;

  public:
    ClassDef(R3BPspxCal2Hit, 4)
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
// -----                  R3BPspxOnlineSpectra            -----
// -----          Created Feb 23th 2019 by J.L. Rodriguez -----
// -----              Modified Dec 2019 by M. Holl        -----
// ------------------------------------------------------------

#ifndef R3BPspxOnlineSpectra_H
#define R3BPspxOnlineSpectra_H

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>
class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

#define PSPX 3

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BPspxOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPspxOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPspxOnlineSpectra(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPspxOnlineSpectra();

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
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }

    void Reset_PSPX_Histo();

  private:
    std::vector<TClonesArray*> fMappedItemsPspx; /**< Array with Mapped items for Pspx. */
    std::vector<TClonesArray*> fPrecalItemsPspx; /**< Array with Precal items for Pspx. */
    std::vector<TClonesArray*> fCalItemsPspx;    /**< Array with Cal items for Pspx. */
    std::vector<TClonesArray*> fHitItemsPspx;    /**< Array with Hit items for Pspx. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fNEvents;         /**< Event counter. */

    std::vector<TH1F*> fh_pspx_multiplicity;   /**< PSPX multiplicity on mapped level */
    std::vector<TH1F*> fh_pspx_strip_1;        /**< PSPX channel profile on mapped level */
    std::vector<TH1F*> fh_pspx_strip_2;        /**< PSPX channel profile on mapped level */
    std::vector<TH2F*> fh_pspx_energy_strip_1; /**< PSPX energy vs strip on mapped level */
    std::vector<TH2F*> fh_pspx_energy_strip_2; /**< PSPX energy vs strip on mapped level */

    std::vector<TH2F*> fh_pspx_cal_strip_frontback;  /**< PSPX strip front vs back on cal level */
    std::vector<TH2F*> fh_pspx_cal_pos_frontback;    /**< PSPX position front vs back on cal level */
    std::vector<TH2F*> fh_pspx_cal_energy_frontback; /**< PSPX energy front vs back on cal level */
    std::vector<TH1F*> fh_pspx_cal_energyfront;      /**< PSPX energy front vs back on cal level */
    std::vector<TH1F*> fh_pspx_cal_energyback;       /**< PSPX energy front vs back on cal level */

    std::vector<TH1F*> fh_pspx_cal_strip; /**< PSPX precal strip*/
  public:
    ClassDef(R3BPspxOnlineSpectra, 2)
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
// -----------------------------------------------------------------
// -----           R3BPspxMappedPar header file                -----
// -----           Created 16/05/12  by I.Syndikus             -----
// -----           Modified Dec 2019 by M. Holl                -----
// -----------------------------------------------------------------

#ifndef R3BPSPXMAPPEDPAR_H
#define R3BPSPXMAPPEDPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"

class FairParIo;
class FairParamList;

/**
 * Class for Parameters for unpacking with PspxReader for PSPX detector data.
 * @author Ina Syndikus
 * @since May 12, 2016
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxMappedPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BPspxMappedPar(const char* name = "R3BPspxMappedPar",
                     const char* title = "Pspx MAPPED parameters",
                     const char* context = "Default");

    /** Destructor **/
    virtual ~R3BPspxMappedPar();

    // Getter & Setter
    inline const Int_t& GetPspxParDetector() const { return pspxmappedpardetector; }
    inline const TArrayI& GetPspxParStrip() const { return pspxmappedparstrip; }

    /** Print parameters **/
    virtual void printparams();

    /** Reset all parameters **/
    virtual void clear();

    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);

  private:
    TArrayI pspxmappedparstrip;  // Number of strips per detector
    Int_t pspxmappedpardetector; // Number of detectors

    R3BPspxMappedPar(const R3BPspxMappedPar&);
    R3BPspxMappedPar& operator=(const R3BPspxMappedPar&);

    ClassDef(R3BPspxMappedPar, 1);
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
// -----           R3BPspxPrecalPar header file           -----
// -----           Created 17/03/13  by I.Syndikus        -----
// -----           Modified Dec 2019 by M. Holl           -----
// ------------------------------------------------------------

#ifndef R3BPSPXPRECALPAR_H
#define R3BPSPXPRECALPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"

class FairParIo;
class FairParamList;

/**
 * Class for Parameters for Mapped2Precal Conversion for PSPX detector data.
 * @author Ina Syndikus
 * @since March 13, 2017
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxPrecalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BPspxPrecalPar(const char* name = "R3BPspxPrecalPar",
                     const char* title = "Pspx PRECAL parameters",
                     const char* context = "Default");

    /** Destructor **/
    virtual ~R3BPspxPrecalPar();

    // Getter & Setter
    inline const Int_t& GetNumDetectors() const { return fNumDetectors; }
    inline const TArrayI& GetNumStrips() const { return fNumStrips; }
    inline const TArrayF& GetPrecalPar() const { return fPrecalPar; }

    /** Print parameters **/
    virtual void printParams();

    /** Reset all parameters **/
    virtual void clear();

    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);

  private:
    Int_t fNumDetectors; // number of detectors
    TArrayI fNumStrips;  // number of strips per detector
    TArrayF fPrecalPar;  // calibration parameters for each strip

    R3BPspxPrecalPar(const R3BPspxPrecalPar&);
    R3BPspxPrecalPar& operator=(const R3BPspxPrecalPar&);

    ClassDef(R3BPspxPrecalPar, 3);
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
// -----------------------------------------------------------------
// -----           R3BPspxMappedPar header file                -----
// -----           Created 16/05/12  by I.Syndikus             -----
// -----           Modified Dec 2019 by M. Holl                -----
// -----------------------------------------------------------------

#ifndef R3BPSPXCALPAR_H
#define R3BPSPXCALPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TArrayI.h"
#include "TObjArray.h"
#include "TObject.h"

class FairParIo;
class FairParamList;

/**
 * Class for Parameters for Precal2Cal Conversion for PSPX detector data.
 * @author Ina Syndikus
 * @since May 12, 2016
 * Modified Dec 2019 by M.Holl
 */

class R3BPspxCalPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BPspxCalPar(const char* name = "R3BPspxCalPar",
                  const char* title = "Pspx CAL parameters",
                  const char* context = "Default");

    /** Destructor **/
    virtual ~R3BPspxCalPar();

    // Getter & Setter
    inline const Int_t& GetNumDetectors() const { return fNumDetectors; }
    inline const TArrayI& GetNumStrips() const { return fNumStrips; }
    inline const TArrayF& GetCalPar() const { return fCalPar; }

    /** Print parameters **/
    virtual void printParams();

    /** Reset all parameters **/
    virtual void clear();

    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);

  private:
    Int_t fNumDetectors; // number of detectors
    TArrayI fNumStrips;  // number of strips per detector
    TArrayF fCalPar;     // calibration parameters for each strip

    R3BPspxCalPar(const R3BPspxCalPar&);
    R3BPspxCalPar& operator=(const R3BPspxCalPar&);

    ClassDef(R3BPspxCalPar, 5);
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
// -----------------------------------------------------------------
// -----           R3BPspxMappedPar header file                -----
// -----           Created 16/06/22  by I.Syndikus             -----
// -----           Modified Dec 2019 by M. Holl                -----
// -----------------------------------------------------------------

#ifndef R3BPSPXHITPAR_H
#define R3BPSPXHITPAR_H

#include "FairParGenericSet.h"

#include "TArrayF.h"
#include "TObjArray.h"
#include "TObject.h"

class FairParIo;
class FairParamList;

/**
 * Class for Parameters for Cal2Hit Conversion for PSPX detector data.
 * @author Ina Syndikus
 * @since June 22, 2016
 * Modified Dec 2019 by M.Holl
 */

class R3BPspxHitPar : public FairParGenericSet
{

  public:
    /** Standard constructor **/
    R3BPspxHitPar(const char* name = "R3BPspxHitPar",
                  const char* title = "Pspx HIT parameters",
                  const char* context = "Default");

    /** Destructor **/
    virtual ~R3BPspxHitPar();

    // Getter & Setter
    inline const Int_t& GetNumDetectors() const { return fNumDetectors; }
    inline const TArrayF& GetHitPosPar() const { return fHitPosPar; }
    inline const TArrayF& GetHitEPar() const { return fHitEPar; }

    /** Print parameters **/
    virtual void printParams();

    /** Reset all parameters **/
    virtual void clear();

    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);

  private:
    Int_t fNumDetectors; // number of detectors
    TArrayF fHitPosPar;  // parameters for position
    TArrayF fHitEPar;    // parameters for energy

    R3BPspxHitPar(const R3BPspxHitPar&);
    R3BPspxHitPar& operator=(const R3BPspxHitPar&);

    ClassDef(R3BPspxHitPar, 5);
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

/********************************************************************************
 *    Copyright (C) 2014 GSI Helmholtzzentrum fuer Schwerionenforschung GmbH    *
 *                                                                              *
 *              This software is distributed under the terms of the             *
 *         GNU Lesser General Public Licence version 3 (LGPL) version 3,        *
 *                  copied verbatim in the file "LICENSE"                       *
 ********************************************************************************/

// -------------------------------------------------------------------------
// -----               R3BPspxContFact header file                   -----
// -----                 Created 16/05/12  by I.Syndikus               -----
// -------------------------------------------------------------------------

#ifndef R3BPSPXCONTFACT_H
#define R3BPSPXCONTFACT_H

#include "FairContFact.h"

class FairContainer;

/**
 * Container Factory for Parameters of PSPX detectors.
 * @author Ina Syndikus
 * @since May 12, 2016
 */

class R3BPspxContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    /** Default Constructor (called when the library is loaded) **/
    R3BPspxContFact();
    /** Destructor **/
    ~R3BPspxContFact() {}

    FairParSet* createContainer(FairContainer*);

    ClassDef(R3BPspxContFact, 1) // Factory for all Pspx parameter containers
};

#endif /* !R3BPSPXCONTFACT_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoPsp", payloadCode, "@",
"R3BPsp", payloadCode, "@",
"R3BPspDigiPar", payloadCode, "@",
"R3BPspDigitizer", payloadCode, "@",
"R3BPspxCal2Hit", payloadCode, "@",
"R3BPspxCalPar", payloadCode, "@",
"R3BPspxContFact", payloadCode, "@",
"R3BPspxHitPar", payloadCode, "@",
"R3BPspxMapped2Precal", payloadCode, "@",
"R3BPspxMappedPar", payloadCode, "@",
"R3BPspxOnlineSpectra", payloadCode, "@",
"R3BPspxPrecal2Cal", payloadCode, "@",
"R3BPspxPrecalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BPspDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BPspDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BPspDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BPspDict() {
  TriggerDictionaryInitialization_G__R3BPspDict_Impl();
}
