// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddItofdIG__R3BTofDict

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
#include "R3BTof.h"
#include "R3BGeoTof.h"
#include "R3BGeoTofPar.h"
#include "R3BTofContFact.h"
#include "R3BTofDigiPar.h"
#include "R3BTofDigitizer.h"
#include "R3BTof2pDigiPar.h"
#include "R3BTof2pDigitizer.h"
#include "R3BTofdMapped2Cal.h"
#include "R3BTofdMapped2CalPar.h"
#include "R3BTofdCal2HitPar.h"
#include "R3BTofdCal2Histo.h"
#include "R3BTofdCal2HistoPar.h"
#include "R3BTofdChangePar.h"
#include "R3BTofdCal2Hit.h"
#include "R3BTofdCal2HitS454.h"
#include "R3BTofdHitModulePar.h"
#include "R3BTofdHitPar.h"
#include "R3BTofd.h"
#include "R3BTofdDigitizer.h"
#include "R3BTofdDigitizerCal.h"
#include "R3BGeoTofd.h"
#include "R3BGeoTofdPar.h"
#include "R3BTofdContFact.h"
#include "R3BTofdDigiPar.h"
#include "R3BPtofMapped2CalPar.h"
#include "R3BPtofMapped2Cal.h"
#include "calibration/R3BPtofCal2HitPar.h"
#include "calibration/R3BPtofCal2Hit.h"
#include "calibration/R3BPtofHitPar.h"
#include "calibration/R3BPtofParFact.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BTof(void *p = 0);
   static void *newArray_R3BTof(Long_t size, void *p);
   static void delete_R3BTof(void *p);
   static void deleteArray_R3BTof(void *p);
   static void destruct_R3BTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof*)
   {
      ::R3BTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof", ::R3BTof::Class_Version(), "", 29,
                  typeid(::R3BTof), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof) );
      instance.SetNew(&new_R3BTof);
      instance.SetNewArray(&newArray_R3BTof);
      instance.SetDelete(&delete_R3BTof);
      instance.SetDeleteArray(&deleteArray_R3BTof);
      instance.SetDestructor(&destruct_R3BTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof*)
   {
      return GenerateInitInstanceLocal((::R3BTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTof*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTof(void *p = 0);
   static void *newArray_R3BGeoTof(Long_t size, void *p);
   static void delete_R3BGeoTof(void *p);
   static void deleteArray_R3BGeoTof(void *p);
   static void destruct_R3BGeoTof(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTof*)
   {
      ::R3BGeoTof *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTof >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTof", ::R3BGeoTof::Class_Version(), "", 187,
                  typeid(::R3BGeoTof), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTof::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoTof) );
      instance.SetNew(&new_R3BGeoTof);
      instance.SetNewArray(&newArray_R3BGeoTof);
      instance.SetDelete(&delete_R3BGeoTof);
      instance.SetDeleteArray(&deleteArray_R3BGeoTof);
      instance.SetDestructor(&destruct_R3BGeoTof);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTof*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTof*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTofPar(void *p = 0);
   static void *newArray_R3BGeoTofPar(Long_t size, void *p);
   static void delete_R3BGeoTofPar(void *p);
   static void deleteArray_R3BGeoTofPar(void *p);
   static void destruct_R3BGeoTofPar(void *p);
   static void streamer_R3BGeoTofPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTofPar*)
   {
      ::R3BGeoTofPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTofPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTofPar", ::R3BGeoTofPar::Class_Version(), "", 229,
                  typeid(::R3BGeoTofPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTofPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoTofPar) );
      instance.SetNew(&new_R3BGeoTofPar);
      instance.SetNewArray(&newArray_R3BGeoTofPar);
      instance.SetDelete(&delete_R3BGeoTofPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoTofPar);
      instance.SetDestructor(&destruct_R3BGeoTofPar);
      instance.SetStreamerFunc(&streamer_R3BGeoTofPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTofPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTofPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofContFact(void *p = 0);
   static void *newArray_R3BTofContFact(Long_t size, void *p);
   static void delete_R3BTofContFact(void *p);
   static void deleteArray_R3BTofContFact(void *p);
   static void destruct_R3BTofContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofContFact*)
   {
      ::R3BTofContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofContFact", ::R3BTofContFact::Class_Version(), "", 270,
                  typeid(::R3BTofContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofContFact) );
      instance.SetNew(&new_R3BTofContFact);
      instance.SetNewArray(&newArray_R3BTofContFact);
      instance.SetDelete(&delete_R3BTofContFact);
      instance.SetDeleteArray(&deleteArray_R3BTofContFact);
      instance.SetDestructor(&destruct_R3BTofContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofContFact*)
   {
      return GenerateInitInstanceLocal((::R3BTofContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigiPar(void *p = 0);
   static void *newArray_R3BTofDigiPar(Long_t size, void *p);
   static void delete_R3BTofDigiPar(void *p);
   static void deleteArray_R3BTofDigiPar(void *p);
   static void destruct_R3BTofDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigiPar*)
   {
      ::R3BTofDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigiPar", ::R3BTofDigiPar::Class_Version(), "", 307,
                  typeid(::R3BTofDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigiPar) );
      instance.SetNew(&new_R3BTofDigiPar);
      instance.SetNewArray(&newArray_R3BTofDigiPar);
      instance.SetDelete(&delete_R3BTofDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTofDigiPar);
      instance.SetDestructor(&destruct_R3BTofDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigitizer(void *p = 0);
   static void *newArray_R3BTofDigitizer(Long_t size, void *p);
   static void delete_R3BTofDigitizer(void *p);
   static void deleteArray_R3BTofDigitizer(void *p);
   static void destruct_R3BTofDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigitizer*)
   {
      ::R3BTofDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigitizer", ::R3BTofDigitizer::Class_Version(), "", 356,
                  typeid(::R3BTofDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigitizer) );
      instance.SetNew(&new_R3BTofDigitizer);
      instance.SetNewArray(&newArray_R3BTofDigitizer);
      instance.SetDelete(&delete_R3BTofDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTofDigitizer);
      instance.SetDestructor(&destruct_R3BTofDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigiPar(void *p = 0);
   static void *newArray_R3BTof2pDigiPar(Long_t size, void *p);
   static void delete_R3BTof2pDigiPar(void *p);
   static void deleteArray_R3BTof2pDigiPar(void *p);
   static void destruct_R3BTof2pDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigiPar*)
   {
      ::R3BTof2pDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigiPar", ::R3BTof2pDigiPar::Class_Version(), "", 434,
                  typeid(::R3BTof2pDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigiPar) );
      instance.SetNew(&new_R3BTof2pDigiPar);
      instance.SetNewArray(&newArray_R3BTof2pDigiPar);
      instance.SetDelete(&delete_R3BTof2pDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigiPar);
      instance.SetDestructor(&destruct_R3BTof2pDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigitizer(void *p = 0);
   static void *newArray_R3BTof2pDigitizer(Long_t size, void *p);
   static void delete_R3BTof2pDigitizer(void *p);
   static void deleteArray_R3BTof2pDigitizer(void *p);
   static void destruct_R3BTof2pDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigitizer*)
   {
      ::R3BTof2pDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigitizer", ::R3BTof2pDigitizer::Class_Version(), "", 483,
                  typeid(::R3BTof2pDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigitizer) );
      instance.SetNew(&new_R3BTof2pDigitizer);
      instance.SetNewArray(&newArray_R3BTof2pDigitizer);
      instance.SetDelete(&delete_R3BTof2pDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigitizer);
      instance.SetDestructor(&destruct_R3BTof2pDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdMapped2Cal(void *p = 0);
   static void *newArray_R3BTofdMapped2Cal(Long_t size, void *p);
   static void delete_R3BTofdMapped2Cal(void *p);
   static void deleteArray_R3BTofdMapped2Cal(void *p);
   static void destruct_R3BTofdMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdMapped2Cal*)
   {
      ::R3BTofdMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdMapped2Cal", ::R3BTofdMapped2Cal::Class_Version(), "", 587,
                  typeid(::R3BTofdMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdMapped2Cal) );
      instance.SetNew(&new_R3BTofdMapped2Cal);
      instance.SetNewArray(&newArray_R3BTofdMapped2Cal);
      instance.SetDelete(&delete_R3BTofdMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BTofdMapped2Cal);
      instance.SetDestructor(&destruct_R3BTofdMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BTofdMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdMapped2CalPar(void *p = 0);
   static void *newArray_R3BTofdMapped2CalPar(Long_t size, void *p);
   static void delete_R3BTofdMapped2CalPar(void *p);
   static void deleteArray_R3BTofdMapped2CalPar(void *p);
   static void destruct_R3BTofdMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdMapped2CalPar*)
   {
      ::R3BTofdMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdMapped2CalPar", ::R3BTofdMapped2CalPar::Class_Version(), "", 727,
                  typeid(::R3BTofdMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdMapped2CalPar) );
      instance.SetNew(&new_R3BTofdMapped2CalPar);
      instance.SetNewArray(&newArray_R3BTofdMapped2CalPar);
      instance.SetDelete(&delete_R3BTofdMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BTofdMapped2CalPar);
      instance.SetDestructor(&destruct_R3BTofdMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCal2HitPar(void *p = 0);
   static void *newArray_R3BTofdCal2HitPar(Long_t size, void *p);
   static void delete_R3BTofdCal2HitPar(void *p);
   static void deleteArray_R3BTofdCal2HitPar(void *p);
   static void destruct_R3BTofdCal2HitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCal2HitPar*)
   {
      ::R3BTofdCal2HitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCal2HitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCal2HitPar", ::R3BTofdCal2HitPar::Class_Version(), "", 865,
                  typeid(::R3BTofdCal2HitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCal2HitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCal2HitPar) );
      instance.SetNew(&new_R3BTofdCal2HitPar);
      instance.SetNewArray(&newArray_R3BTofdCal2HitPar);
      instance.SetDelete(&delete_R3BTofdCal2HitPar);
      instance.SetDeleteArray(&deleteArray_R3BTofdCal2HitPar);
      instance.SetDestructor(&destruct_R3BTofdCal2HitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCal2HitPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCal2HitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCal2HitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCal2Histo(void *p = 0);
   static void *newArray_R3BTofdCal2Histo(Long_t size, void *p);
   static void delete_R3BTofdCal2Histo(void *p);
   static void deleteArray_R3BTofdCal2Histo(void *p);
   static void destruct_R3BTofdCal2Histo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCal2Histo*)
   {
      ::R3BTofdCal2Histo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCal2Histo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCal2Histo", ::R3BTofdCal2Histo::Class_Version(), "", 1069,
                  typeid(::R3BTofdCal2Histo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCal2Histo::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCal2Histo) );
      instance.SetNew(&new_R3BTofdCal2Histo);
      instance.SetNewArray(&newArray_R3BTofdCal2Histo);
      instance.SetDelete(&delete_R3BTofdCal2Histo);
      instance.SetDeleteArray(&deleteArray_R3BTofdCal2Histo);
      instance.SetDestructor(&destruct_R3BTofdCal2Histo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCal2Histo*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCal2Histo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCal2Histo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCal2HistoPar(void *p = 0);
   static void *newArray_R3BTofdCal2HistoPar(Long_t size, void *p);
   static void delete_R3BTofdCal2HistoPar(void *p);
   static void deleteArray_R3BTofdCal2HistoPar(void *p);
   static void destruct_R3BTofdCal2HistoPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCal2HistoPar*)
   {
      ::R3BTofdCal2HistoPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCal2HistoPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCal2HistoPar", ::R3BTofdCal2HistoPar::Class_Version(), "", 1270,
                  typeid(::R3BTofdCal2HistoPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCal2HistoPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCal2HistoPar) );
      instance.SetNew(&new_R3BTofdCal2HistoPar);
      instance.SetNewArray(&newArray_R3BTofdCal2HistoPar);
      instance.SetDelete(&delete_R3BTofdCal2HistoPar);
      instance.SetDeleteArray(&deleteArray_R3BTofdCal2HistoPar);
      instance.SetDestructor(&destruct_R3BTofdCal2HistoPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCal2HistoPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCal2HistoPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCal2HistoPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdChangePar(void *p = 0);
   static void *newArray_R3BTofdChangePar(Long_t size, void *p);
   static void delete_R3BTofdChangePar(void *p);
   static void deleteArray_R3BTofdChangePar(void *p);
   static void destruct_R3BTofdChangePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdChangePar*)
   {
      ::R3BTofdChangePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdChangePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdChangePar", ::R3BTofdChangePar::Class_Version(), "", 1492,
                  typeid(::R3BTofdChangePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdChangePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdChangePar) );
      instance.SetNew(&new_R3BTofdChangePar);
      instance.SetNewArray(&newArray_R3BTofdChangePar);
      instance.SetDelete(&delete_R3BTofdChangePar);
      instance.SetDeleteArray(&deleteArray_R3BTofdChangePar);
      instance.SetDestructor(&destruct_R3BTofdChangePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdChangePar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdChangePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdChangePar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCal2Hit(void *p = 0);
   static void *newArray_R3BTofdCal2Hit(Long_t size, void *p);
   static void delete_R3BTofdCal2Hit(void *p);
   static void deleteArray_R3BTofdCal2Hit(void *p);
   static void destruct_R3BTofdCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCal2Hit*)
   {
      ::R3BTofdCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCal2Hit", ::R3BTofdCal2Hit::Class_Version(), "", 1659,
                  typeid(::R3BTofdCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCal2Hit) );
      instance.SetNew(&new_R3BTofdCal2Hit);
      instance.SetNewArray(&newArray_R3BTofdCal2Hit);
      instance.SetDelete(&delete_R3BTofdCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BTofdCal2Hit);
      instance.SetDestructor(&destruct_R3BTofdCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCal2HitS454(void *p = 0);
   static void *newArray_R3BTofdCal2HitS454(Long_t size, void *p);
   static void delete_R3BTofdCal2HitS454(void *p);
   static void deleteArray_R3BTofdCal2HitS454(void *p);
   static void destruct_R3BTofdCal2HitS454(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCal2HitS454*)
   {
      ::R3BTofdCal2HitS454 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCal2HitS454 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCal2HitS454", ::R3BTofdCal2HitS454::Class_Version(), "", 1882,
                  typeid(::R3BTofdCal2HitS454), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCal2HitS454::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCal2HitS454) );
      instance.SetNew(&new_R3BTofdCal2HitS454);
      instance.SetNewArray(&newArray_R3BTofdCal2HitS454);
      instance.SetDelete(&delete_R3BTofdCal2HitS454);
      instance.SetDeleteArray(&deleteArray_R3BTofdCal2HitS454);
      instance.SetDestructor(&destruct_R3BTofdCal2HitS454);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCal2HitS454*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCal2HitS454*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCal2HitS454*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdHitModulePar(void *p = 0);
   static void *newArray_R3BTofdHitModulePar(Long_t size, void *p);
   static void delete_R3BTofdHitModulePar(void *p);
   static void deleteArray_R3BTofdHitModulePar(void *p);
   static void destruct_R3BTofdHitModulePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdHitModulePar*)
   {
      ::R3BTofdHitModulePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdHitModulePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdHitModulePar", ::R3BTofdHitModulePar::Class_Version(), "", 2066,
                  typeid(::R3BTofdHitModulePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdHitModulePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdHitModulePar) );
      instance.SetNew(&new_R3BTofdHitModulePar);
      instance.SetNewArray(&newArray_R3BTofdHitModulePar);
      instance.SetDelete(&delete_R3BTofdHitModulePar);
      instance.SetDeleteArray(&deleteArray_R3BTofdHitModulePar);
      instance.SetDestructor(&destruct_R3BTofdHitModulePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdHitModulePar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdHitModulePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdHitModulePar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdHitPar(void *p = 0);
   static void *newArray_R3BTofdHitPar(Long_t size, void *p);
   static void delete_R3BTofdHitPar(void *p);
   static void deleteArray_R3BTofdHitPar(void *p);
   static void destruct_R3BTofdHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdHitPar*)
   {
      ::R3BTofdHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdHitPar", ::R3BTofdHitPar::Class_Version(), "", 2228,
                  typeid(::R3BTofdHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdHitPar) );
      instance.SetNew(&new_R3BTofdHitPar);
      instance.SetNewArray(&newArray_R3BTofdHitPar);
      instance.SetDelete(&delete_R3BTofdHitPar);
      instance.SetDeleteArray(&deleteArray_R3BTofdHitPar);
      instance.SetDestructor(&destruct_R3BTofdHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofd(void *p = 0);
   static void *newArray_R3BTofd(Long_t size, void *p);
   static void delete_R3BTofd(void *p);
   static void deleteArray_R3BTofd(void *p);
   static void destruct_R3BTofd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofd*)
   {
      ::R3BTofd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofd", ::R3BTofd::Class_Version(), "", 2355,
                  typeid(::R3BTofd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofd::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofd) );
      instance.SetNew(&new_R3BTofd);
      instance.SetNewArray(&newArray_R3BTofd);
      instance.SetDelete(&delete_R3BTofd);
      instance.SetDeleteArray(&deleteArray_R3BTofd);
      instance.SetDestructor(&destruct_R3BTofd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofd*)
   {
      return GenerateInitInstanceLocal((::R3BTofd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdDigitizer(void *p = 0);
   static void *newArray_R3BTofdDigitizer(Long_t size, void *p);
   static void delete_R3BTofdDigitizer(void *p);
   static void deleteArray_R3BTofdDigitizer(void *p);
   static void destruct_R3BTofdDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdDigitizer*)
   {
      ::R3BTofdDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdDigitizer", ::R3BTofdDigitizer::Class_Version(), "", 2525,
                  typeid(::R3BTofdDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdDigitizer) );
      instance.SetNew(&new_R3BTofdDigitizer);
      instance.SetNewArray(&newArray_R3BTofdDigitizer);
      instance.SetDelete(&delete_R3BTofdDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BTofdDigitizer);
      instance.SetDestructor(&destruct_R3BTofdDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BTofdDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdDigiPar(void *p = 0);
   static void *newArray_R3BTofdDigiPar(Long_t size, void *p);
   static void delete_R3BTofdDigiPar(void *p);
   static void deleteArray_R3BTofdDigiPar(void *p);
   static void destruct_R3BTofdDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdDigiPar*)
   {
      ::R3BTofdDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdDigiPar", ::R3BTofdDigiPar::Class_Version(), "R3BTofdDigiPar.h", 23,
                  typeid(::R3BTofdDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdDigiPar) );
      instance.SetNew(&new_R3BTofdDigiPar);
      instance.SetNewArray(&newArray_R3BTofdDigiPar);
      instance.SetDelete(&delete_R3BTofdDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BTofdDigiPar);
      instance.SetDestructor(&destruct_R3BTofdDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BTofdDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdDigitizerCal(void *p = 0);
   static void *newArray_R3BTofdDigitizerCal(Long_t size, void *p);
   static void delete_R3BTofdDigitizerCal(void *p);
   static void deleteArray_R3BTofdDigitizerCal(void *p);
   static void destruct_R3BTofdDigitizerCal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdDigitizerCal*)
   {
      ::R3BTofdDigitizerCal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdDigitizerCal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdDigitizerCal", ::R3BTofdDigitizerCal::Class_Version(), "", 2607,
                  typeid(::R3BTofdDigitizerCal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdDigitizerCal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdDigitizerCal) );
      instance.SetNew(&new_R3BTofdDigitizerCal);
      instance.SetNewArray(&newArray_R3BTofdDigitizerCal);
      instance.SetDelete(&delete_R3BTofdDigitizerCal);
      instance.SetDeleteArray(&deleteArray_R3BTofdDigitizerCal);
      instance.SetDestructor(&destruct_R3BTofdDigitizerCal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdDigitizerCal*)
   {
      return GenerateInitInstanceLocal((::R3BTofdDigitizerCal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdDigitizerCal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTofd(void *p = 0);
   static void *newArray_R3BGeoTofd(Long_t size, void *p);
   static void delete_R3BGeoTofd(void *p);
   static void deleteArray_R3BGeoTofd(void *p);
   static void destruct_R3BGeoTofd(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTofd*)
   {
      ::R3BGeoTofd *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTofd >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTofd", ::R3BGeoTofd::Class_Version(), "", 2681,
                  typeid(::R3BGeoTofd), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTofd::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoTofd) );
      instance.SetNew(&new_R3BGeoTofd);
      instance.SetNewArray(&newArray_R3BGeoTofd);
      instance.SetDelete(&delete_R3BGeoTofd);
      instance.SetDeleteArray(&deleteArray_R3BGeoTofd);
      instance.SetDestructor(&destruct_R3BGeoTofd);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTofd*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTofd*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTofd*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoTofdPar(void *p = 0);
   static void *newArray_R3BGeoTofdPar(Long_t size, void *p);
   static void delete_R3BGeoTofdPar(void *p);
   static void deleteArray_R3BGeoTofdPar(void *p);
   static void destruct_R3BGeoTofdPar(void *p);
   static void streamer_R3BGeoTofdPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoTofdPar*)
   {
      ::R3BGeoTofdPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoTofdPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoTofdPar", ::R3BGeoTofdPar::Class_Version(), "", 2723,
                  typeid(::R3BGeoTofdPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoTofdPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoTofdPar) );
      instance.SetNew(&new_R3BGeoTofdPar);
      instance.SetNewArray(&newArray_R3BGeoTofdPar);
      instance.SetDelete(&delete_R3BGeoTofdPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoTofdPar);
      instance.SetDestructor(&destruct_R3BGeoTofdPar);
      instance.SetStreamerFunc(&streamer_R3BGeoTofdPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoTofdPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoTofdPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoTofdPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdContFact(void *p = 0);
   static void *newArray_R3BTofdContFact(Long_t size, void *p);
   static void delete_R3BTofdContFact(void *p);
   static void deleteArray_R3BTofdContFact(void *p);
   static void destruct_R3BTofdContFact(void *p);
   static void streamer_R3BTofdContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdContFact*)
   {
      ::R3BTofdContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdContFact", ::R3BTofdContFact::Class_Version(), "", 2764,
                  typeid(::R3BTofdContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BTofdContFact) );
      instance.SetNew(&new_R3BTofdContFact);
      instance.SetNewArray(&newArray_R3BTofdContFact);
      instance.SetDelete(&delete_R3BTofdContFact);
      instance.SetDeleteArray(&deleteArray_R3BTofdContFact);
      instance.SetDestructor(&destruct_R3BTofdContFact);
      instance.SetStreamerFunc(&streamer_R3BTofdContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdContFact*)
   {
      return GenerateInitInstanceLocal((::R3BTofdContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofMapped2CalPar(void *p = 0);
   static void *newArray_R3BPtofMapped2CalPar(Long_t size, void *p);
   static void delete_R3BPtofMapped2CalPar(void *p);
   static void deleteArray_R3BPtofMapped2CalPar(void *p);
   static void destruct_R3BPtofMapped2CalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofMapped2CalPar*)
   {
      ::R3BPtofMapped2CalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofMapped2CalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofMapped2CalPar", ::R3BPtofMapped2CalPar::Class_Version(), "", 2850,
                  typeid(::R3BPtofMapped2CalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofMapped2CalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofMapped2CalPar) );
      instance.SetNew(&new_R3BPtofMapped2CalPar);
      instance.SetNewArray(&newArray_R3BPtofMapped2CalPar);
      instance.SetDelete(&delete_R3BPtofMapped2CalPar);
      instance.SetDeleteArray(&deleteArray_R3BPtofMapped2CalPar);
      instance.SetDestructor(&destruct_R3BPtofMapped2CalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofMapped2CalPar*)
   {
      return GenerateInitInstanceLocal((::R3BPtofMapped2CalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofMapped2CalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofMapped2Cal(void *p = 0);
   static void *newArray_R3BPtofMapped2Cal(Long_t size, void *p);
   static void delete_R3BPtofMapped2Cal(void *p);
   static void deleteArray_R3BPtofMapped2Cal(void *p);
   static void destruct_R3BPtofMapped2Cal(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofMapped2Cal*)
   {
      ::R3BPtofMapped2Cal *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofMapped2Cal >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofMapped2Cal", ::R3BPtofMapped2Cal::Class_Version(), "", 2971,
                  typeid(::R3BPtofMapped2Cal), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofMapped2Cal::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofMapped2Cal) );
      instance.SetNew(&new_R3BPtofMapped2Cal);
      instance.SetNewArray(&newArray_R3BPtofMapped2Cal);
      instance.SetDelete(&delete_R3BPtofMapped2Cal);
      instance.SetDeleteArray(&deleteArray_R3BPtofMapped2Cal);
      instance.SetDestructor(&destruct_R3BPtofMapped2Cal);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofMapped2Cal*)
   {
      return GenerateInitInstanceLocal((::R3BPtofMapped2Cal*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofMapped2Cal*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofCal2HitPar(void *p = 0);
   static void *newArray_R3BPtofCal2HitPar(Long_t size, void *p);
   static void delete_R3BPtofCal2HitPar(void *p);
   static void deleteArray_R3BPtofCal2HitPar(void *p);
   static void destruct_R3BPtofCal2HitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofCal2HitPar*)
   {
      ::R3BPtofCal2HitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofCal2HitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofCal2HitPar", ::R3BPtofCal2HitPar::Class_Version(), "", 3075,
                  typeid(::R3BPtofCal2HitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofCal2HitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofCal2HitPar) );
      instance.SetNew(&new_R3BPtofCal2HitPar);
      instance.SetNewArray(&newArray_R3BPtofCal2HitPar);
      instance.SetDelete(&delete_R3BPtofCal2HitPar);
      instance.SetDeleteArray(&deleteArray_R3BPtofCal2HitPar);
      instance.SetDestructor(&destruct_R3BPtofCal2HitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofCal2HitPar*)
   {
      return GenerateInitInstanceLocal((::R3BPtofCal2HitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofCal2HitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofCal2Hit(void *p = 0);
   static void *newArray_R3BPtofCal2Hit(Long_t size, void *p);
   static void delete_R3BPtofCal2Hit(void *p);
   static void deleteArray_R3BPtofCal2Hit(void *p);
   static void destruct_R3BPtofCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofCal2Hit*)
   {
      ::R3BPtofCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofCal2Hit", ::R3BPtofCal2Hit::Class_Version(), "", 3188,
                  typeid(::R3BPtofCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofCal2Hit) );
      instance.SetNew(&new_R3BPtofCal2Hit);
      instance.SetNewArray(&newArray_R3BPtofCal2Hit);
      instance.SetDelete(&delete_R3BPtofCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BPtofCal2Hit);
      instance.SetDestructor(&destruct_R3BPtofCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BPtofCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofHitPar(void *p = 0);
   static void *newArray_R3BPtofHitPar(Long_t size, void *p);
   static void delete_R3BPtofHitPar(void *p);
   static void deleteArray_R3BPtofHitPar(void *p);
   static void destruct_R3BPtofHitPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofHitPar*)
   {
      ::R3BPtofHitPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofHitPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofHitPar", ::R3BPtofHitPar::Class_Version(), "", 3293,
                  typeid(::R3BPtofHitPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofHitPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofHitPar) );
      instance.SetNew(&new_R3BPtofHitPar);
      instance.SetNewArray(&newArray_R3BPtofHitPar);
      instance.SetDelete(&delete_R3BPtofHitPar);
      instance.SetDeleteArray(&deleteArray_R3BPtofHitPar);
      instance.SetDestructor(&destruct_R3BPtofHitPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofHitPar*)
   {
      return GenerateInitInstanceLocal((::R3BPtofHitPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofHitPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofParFact(void *p = 0);
   static void *newArray_R3BPtofParFact(Long_t size, void *p);
   static void delete_R3BPtofParFact(void *p);
   static void deleteArray_R3BPtofParFact(void *p);
   static void destruct_R3BPtofParFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofParFact*)
   {
      ::R3BPtofParFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofParFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofParFact", ::R3BPtofParFact::Class_Version(), "", 3383,
                  typeid(::R3BPtofParFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofParFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofParFact) );
      instance.SetNew(&new_R3BPtofParFact);
      instance.SetNewArray(&newArray_R3BPtofParFact);
      instance.SetDelete(&delete_R3BPtofParFact);
      instance.SetDeleteArray(&deleteArray_R3BPtofParFact);
      instance.SetDestructor(&destruct_R3BPtofParFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofParFact*)
   {
      return GenerateInitInstanceLocal((::R3BPtofParFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofParFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof::Class_Name()
{
   return "R3BTof";
}

//______________________________________________________________________________
const char *R3BTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTof::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTof::Class_Name()
{
   return "R3BGeoTof";
}

//______________________________________________________________________________
const char *R3BGeoTof::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTof::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTof::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTof::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTof*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTofPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTofPar::Class_Name()
{
   return "R3BGeoTofPar";
}

//______________________________________________________________________________
const char *R3BGeoTofPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTofPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTofPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTofPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofContFact::Class_Name()
{
   return "R3BTofContFact";
}

//______________________________________________________________________________
const char *R3BTofContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigiPar::Class_Name()
{
   return "R3BTofDigiPar";
}

//______________________________________________________________________________
const char *R3BTofDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigitizer::Class_Name()
{
   return "R3BTofDigitizer";
}

//______________________________________________________________________________
const char *R3BTofDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigiPar::Class_Name()
{
   return "R3BTof2pDigiPar";
}

//______________________________________________________________________________
const char *R3BTof2pDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigitizer::Class_Name()
{
   return "R3BTof2pDigitizer";
}

//______________________________________________________________________________
const char *R3BTof2pDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdMapped2Cal::Class_Name()
{
   return "R3BTofdMapped2Cal";
}

//______________________________________________________________________________
const char *R3BTofdMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdMapped2CalPar::Class_Name()
{
   return "R3BTofdMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BTofdMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCal2HitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCal2HitPar::Class_Name()
{
   return "R3BTofdCal2HitPar";
}

//______________________________________________________________________________
const char *R3BTofdCal2HitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCal2HitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCal2HitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCal2HitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCal2Histo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCal2Histo::Class_Name()
{
   return "R3BTofdCal2Histo";
}

//______________________________________________________________________________
const char *R3BTofdCal2Histo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Histo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCal2Histo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Histo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCal2Histo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Histo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCal2Histo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Histo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCal2HistoPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCal2HistoPar::Class_Name()
{
   return "R3BTofdCal2HistoPar";
}

//______________________________________________________________________________
const char *R3BTofdCal2HistoPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HistoPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCal2HistoPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HistoPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCal2HistoPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HistoPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCal2HistoPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HistoPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdChangePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdChangePar::Class_Name()
{
   return "R3BTofdChangePar";
}

//______________________________________________________________________________
const char *R3BTofdChangePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdChangePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdChangePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdChangePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdChangePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdChangePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdChangePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdChangePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCal2Hit::Class_Name()
{
   return "R3BTofdCal2Hit";
}

//______________________________________________________________________________
const char *R3BTofdCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCal2HitS454::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCal2HitS454::Class_Name()
{
   return "R3BTofdCal2HitS454";
}

//______________________________________________________________________________
const char *R3BTofdCal2HitS454::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitS454*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCal2HitS454::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitS454*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCal2HitS454::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitS454*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCal2HitS454::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCal2HitS454*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdHitModulePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdHitModulePar::Class_Name()
{
   return "R3BTofdHitModulePar";
}

//______________________________________________________________________________
const char *R3BTofdHitModulePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitModulePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdHitModulePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitModulePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdHitModulePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitModulePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdHitModulePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitModulePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdHitPar::Class_Name()
{
   return "R3BTofdHitPar";
}

//______________________________________________________________________________
const char *R3BTofdHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofd::Class_Name()
{
   return "R3BTofd";
}

//______________________________________________________________________________
const char *R3BTofd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdDigitizer::Class_Name()
{
   return "R3BTofdDigitizer";
}

//______________________________________________________________________________
const char *R3BTofdDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdDigiPar::Class_Name()
{
   return "R3BTofdDigiPar";
}

//______________________________________________________________________________
const char *R3BTofdDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdDigitizerCal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdDigitizerCal::Class_Name()
{
   return "R3BTofdDigitizerCal";
}

//______________________________________________________________________________
const char *R3BTofdDigitizerCal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizerCal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdDigitizerCal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizerCal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdDigitizerCal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizerCal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdDigitizerCal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigitizerCal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTofd::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTofd::Class_Name()
{
   return "R3BGeoTofd";
}

//______________________________________________________________________________
const char *R3BGeoTofd::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofd*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTofd::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofd*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTofd::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofd*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTofd::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofd*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoTofdPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoTofdPar::Class_Name()
{
   return "R3BGeoTofdPar";
}

//______________________________________________________________________________
const char *R3BGeoTofdPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofdPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoTofdPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofdPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoTofdPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofdPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoTofdPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoTofdPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdContFact::Class_Name()
{
   return "R3BTofdContFact";
}

//______________________________________________________________________________
const char *R3BTofdContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofMapped2CalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofMapped2CalPar::Class_Name()
{
   return "R3BPtofMapped2CalPar";
}

//______________________________________________________________________________
const char *R3BPtofMapped2CalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2CalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofMapped2CalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2CalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofMapped2CalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2CalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofMapped2CalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2CalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofMapped2Cal::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofMapped2Cal::Class_Name()
{
   return "R3BPtofMapped2Cal";
}

//______________________________________________________________________________
const char *R3BPtofMapped2Cal::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2Cal*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofMapped2Cal::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2Cal*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofMapped2Cal::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2Cal*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofMapped2Cal::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofMapped2Cal*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofCal2HitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofCal2HitPar::Class_Name()
{
   return "R3BPtofCal2HitPar";
}

//______________________________________________________________________________
const char *R3BPtofCal2HitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2HitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofCal2HitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2HitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofCal2HitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2HitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofCal2HitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2HitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofCal2Hit::Class_Name()
{
   return "R3BPtofCal2Hit";
}

//______________________________________________________________________________
const char *R3BPtofCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofHitPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofHitPar::Class_Name()
{
   return "R3BPtofHitPar";
}

//______________________________________________________________________________
const char *R3BPtofHitPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHitPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofHitPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHitPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofHitPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHitPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofHitPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHitPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofParFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofParFact::Class_Name()
{
   return "R3BPtofParFact";
}

//______________________________________________________________________________
const char *R3BPtofParFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofParFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofParFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofParFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofParFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofParFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofParFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofParFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof(void *p) {
      return  p ? new(p) ::R3BTof : new ::R3BTof;
   }
   static void *newArray_R3BTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof[nElements] : new ::R3BTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof(void *p) {
      delete ((::R3BTof*)p);
   }
   static void deleteArray_R3BTof(void *p) {
      delete [] ((::R3BTof*)p);
   }
   static void destruct_R3BTof(void *p) {
      typedef ::R3BTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof

//______________________________________________________________________________
void R3BGeoTof::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTof.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoTof::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoTof::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTof(void *p) {
      return  p ? new(p) ::R3BGeoTof : new ::R3BGeoTof;
   }
   static void *newArray_R3BGeoTof(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTof[nElements] : new ::R3BGeoTof[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTof(void *p) {
      delete ((::R3BGeoTof*)p);
   }
   static void deleteArray_R3BGeoTof(void *p) {
      delete [] ((::R3BGeoTof*)p);
   }
   static void destruct_R3BGeoTof(void *p) {
      typedef ::R3BGeoTof current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoTof

//______________________________________________________________________________
void R3BGeoTofPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTofPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoTofPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoTofPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTofPar(void *p) {
      return  p ? new(p) ::R3BGeoTofPar : new ::R3BGeoTofPar;
   }
   static void *newArray_R3BGeoTofPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTofPar[nElements] : new ::R3BGeoTofPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTofPar(void *p) {
      delete ((::R3BGeoTofPar*)p);
   }
   static void deleteArray_R3BGeoTofPar(void *p) {
      delete [] ((::R3BGeoTofPar*)p);
   }
   static void destruct_R3BGeoTofPar(void *p) {
      typedef ::R3BGeoTofPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoTofPar(TBuffer &buf, void *obj) {
      ((::R3BGeoTofPar*)obj)->::R3BGeoTofPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoTofPar

//______________________________________________________________________________
void R3BTofContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofContFact(void *p) {
      return  p ? new(p) ::R3BTofContFact : new ::R3BTofContFact;
   }
   static void *newArray_R3BTofContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofContFact[nElements] : new ::R3BTofContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofContFact(void *p) {
      delete ((::R3BTofContFact*)p);
   }
   static void deleteArray_R3BTofContFact(void *p) {
      delete [] ((::R3BTofContFact*)p);
   }
   static void destruct_R3BTofContFact(void *p) {
      typedef ::R3BTofContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofContFact

//______________________________________________________________________________
void R3BTofDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigiPar(void *p) {
      return  p ? new(p) ::R3BTofDigiPar : new ::R3BTofDigiPar;
   }
   static void *newArray_R3BTofDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigiPar[nElements] : new ::R3BTofDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigiPar(void *p) {
      delete ((::R3BTofDigiPar*)p);
   }
   static void deleteArray_R3BTofDigiPar(void *p) {
      delete [] ((::R3BTofDigiPar*)p);
   }
   static void destruct_R3BTofDigiPar(void *p) {
      typedef ::R3BTofDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigiPar

//______________________________________________________________________________
void R3BTofDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigitizer(void *p) {
      return  p ? new(p) ::R3BTofDigitizer : new ::R3BTofDigitizer;
   }
   static void *newArray_R3BTofDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigitizer[nElements] : new ::R3BTofDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigitizer(void *p) {
      delete ((::R3BTofDigitizer*)p);
   }
   static void deleteArray_R3BTofDigitizer(void *p) {
      delete [] ((::R3BTofDigitizer*)p);
   }
   static void destruct_R3BTofDigitizer(void *p) {
      typedef ::R3BTofDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigitizer

//______________________________________________________________________________
void R3BTof2pDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigiPar(void *p) {
      return  p ? new(p) ::R3BTof2pDigiPar : new ::R3BTof2pDigiPar;
   }
   static void *newArray_R3BTof2pDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigiPar[nElements] : new ::R3BTof2pDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigiPar(void *p) {
      delete ((::R3BTof2pDigiPar*)p);
   }
   static void deleteArray_R3BTof2pDigiPar(void *p) {
      delete [] ((::R3BTof2pDigiPar*)p);
   }
   static void destruct_R3BTof2pDigiPar(void *p) {
      typedef ::R3BTof2pDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigiPar

//______________________________________________________________________________
void R3BTof2pDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigitizer(void *p) {
      return  p ? new(p) ::R3BTof2pDigitizer : new ::R3BTof2pDigitizer;
   }
   static void *newArray_R3BTof2pDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigitizer[nElements] : new ::R3BTof2pDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigitizer(void *p) {
      delete ((::R3BTof2pDigitizer*)p);
   }
   static void deleteArray_R3BTof2pDigitizer(void *p) {
      delete [] ((::R3BTof2pDigitizer*)p);
   }
   static void destruct_R3BTof2pDigitizer(void *p) {
      typedef ::R3BTof2pDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigitizer

//______________________________________________________________________________
void R3BTofdMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdMapped2Cal(void *p) {
      return  p ? new(p) ::R3BTofdMapped2Cal : new ::R3BTofdMapped2Cal;
   }
   static void *newArray_R3BTofdMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdMapped2Cal[nElements] : new ::R3BTofdMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdMapped2Cal(void *p) {
      delete ((::R3BTofdMapped2Cal*)p);
   }
   static void deleteArray_R3BTofdMapped2Cal(void *p) {
      delete [] ((::R3BTofdMapped2Cal*)p);
   }
   static void destruct_R3BTofdMapped2Cal(void *p) {
      typedef ::R3BTofdMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdMapped2Cal

//______________________________________________________________________________
void R3BTofdMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BTofdMapped2CalPar : new ::R3BTofdMapped2CalPar;
   }
   static void *newArray_R3BTofdMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdMapped2CalPar[nElements] : new ::R3BTofdMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdMapped2CalPar(void *p) {
      delete ((::R3BTofdMapped2CalPar*)p);
   }
   static void deleteArray_R3BTofdMapped2CalPar(void *p) {
      delete [] ((::R3BTofdMapped2CalPar*)p);
   }
   static void destruct_R3BTofdMapped2CalPar(void *p) {
      typedef ::R3BTofdMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdMapped2CalPar

//______________________________________________________________________________
void R3BTofdCal2HitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCal2HitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCal2HitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCal2HitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCal2HitPar(void *p) {
      return  p ? new(p) ::R3BTofdCal2HitPar : new ::R3BTofdCal2HitPar;
   }
   static void *newArray_R3BTofdCal2HitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCal2HitPar[nElements] : new ::R3BTofdCal2HitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCal2HitPar(void *p) {
      delete ((::R3BTofdCal2HitPar*)p);
   }
   static void deleteArray_R3BTofdCal2HitPar(void *p) {
      delete [] ((::R3BTofdCal2HitPar*)p);
   }
   static void destruct_R3BTofdCal2HitPar(void *p) {
      typedef ::R3BTofdCal2HitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCal2HitPar

//______________________________________________________________________________
void R3BTofdCal2Histo::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCal2Histo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCal2Histo::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCal2Histo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCal2Histo(void *p) {
      return  p ? new(p) ::R3BTofdCal2Histo : new ::R3BTofdCal2Histo;
   }
   static void *newArray_R3BTofdCal2Histo(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCal2Histo[nElements] : new ::R3BTofdCal2Histo[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCal2Histo(void *p) {
      delete ((::R3BTofdCal2Histo*)p);
   }
   static void deleteArray_R3BTofdCal2Histo(void *p) {
      delete [] ((::R3BTofdCal2Histo*)p);
   }
   static void destruct_R3BTofdCal2Histo(void *p) {
      typedef ::R3BTofdCal2Histo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCal2Histo

//______________________________________________________________________________
void R3BTofdCal2HistoPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCal2HistoPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCal2HistoPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCal2HistoPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCal2HistoPar(void *p) {
      return  p ? new(p) ::R3BTofdCal2HistoPar : new ::R3BTofdCal2HistoPar;
   }
   static void *newArray_R3BTofdCal2HistoPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCal2HistoPar[nElements] : new ::R3BTofdCal2HistoPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCal2HistoPar(void *p) {
      delete ((::R3BTofdCal2HistoPar*)p);
   }
   static void deleteArray_R3BTofdCal2HistoPar(void *p) {
      delete [] ((::R3BTofdCal2HistoPar*)p);
   }
   static void destruct_R3BTofdCal2HistoPar(void *p) {
      typedef ::R3BTofdCal2HistoPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCal2HistoPar

//______________________________________________________________________________
void R3BTofdChangePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdChangePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdChangePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdChangePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdChangePar(void *p) {
      return  p ? new(p) ::R3BTofdChangePar : new ::R3BTofdChangePar;
   }
   static void *newArray_R3BTofdChangePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdChangePar[nElements] : new ::R3BTofdChangePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdChangePar(void *p) {
      delete ((::R3BTofdChangePar*)p);
   }
   static void deleteArray_R3BTofdChangePar(void *p) {
      delete [] ((::R3BTofdChangePar*)p);
   }
   static void destruct_R3BTofdChangePar(void *p) {
      typedef ::R3BTofdChangePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdChangePar

//______________________________________________________________________________
void R3BTofdCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCal2Hit(void *p) {
      return  p ? new(p) ::R3BTofdCal2Hit : new ::R3BTofdCal2Hit;
   }
   static void *newArray_R3BTofdCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCal2Hit[nElements] : new ::R3BTofdCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCal2Hit(void *p) {
      delete ((::R3BTofdCal2Hit*)p);
   }
   static void deleteArray_R3BTofdCal2Hit(void *p) {
      delete [] ((::R3BTofdCal2Hit*)p);
   }
   static void destruct_R3BTofdCal2Hit(void *p) {
      typedef ::R3BTofdCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCal2Hit

//______________________________________________________________________________
void R3BTofdCal2HitS454::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCal2HitS454.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCal2HitS454::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCal2HitS454::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCal2HitS454(void *p) {
      return  p ? new(p) ::R3BTofdCal2HitS454 : new ::R3BTofdCal2HitS454;
   }
   static void *newArray_R3BTofdCal2HitS454(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCal2HitS454[nElements] : new ::R3BTofdCal2HitS454[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCal2HitS454(void *p) {
      delete ((::R3BTofdCal2HitS454*)p);
   }
   static void deleteArray_R3BTofdCal2HitS454(void *p) {
      delete [] ((::R3BTofdCal2HitS454*)p);
   }
   static void destruct_R3BTofdCal2HitS454(void *p) {
      typedef ::R3BTofdCal2HitS454 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCal2HitS454

//______________________________________________________________________________
void R3BTofdHitModulePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdHitModulePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdHitModulePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdHitModulePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdHitModulePar(void *p) {
      return  p ? new(p) ::R3BTofdHitModulePar : new ::R3BTofdHitModulePar;
   }
   static void *newArray_R3BTofdHitModulePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdHitModulePar[nElements] : new ::R3BTofdHitModulePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdHitModulePar(void *p) {
      delete ((::R3BTofdHitModulePar*)p);
   }
   static void deleteArray_R3BTofdHitModulePar(void *p) {
      delete [] ((::R3BTofdHitModulePar*)p);
   }
   static void destruct_R3BTofdHitModulePar(void *p) {
      typedef ::R3BTofdHitModulePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdHitModulePar

//______________________________________________________________________________
void R3BTofdHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdHitPar(void *p) {
      return  p ? new(p) ::R3BTofdHitPar : new ::R3BTofdHitPar;
   }
   static void *newArray_R3BTofdHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdHitPar[nElements] : new ::R3BTofdHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdHitPar(void *p) {
      delete ((::R3BTofdHitPar*)p);
   }
   static void deleteArray_R3BTofdHitPar(void *p) {
      delete [] ((::R3BTofdHitPar*)p);
   }
   static void destruct_R3BTofdHitPar(void *p) {
      typedef ::R3BTofdHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdHitPar

//______________________________________________________________________________
void R3BTofd::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofd::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofd(void *p) {
      return  p ? new(p) ::R3BTofd : new ::R3BTofd;
   }
   static void *newArray_R3BTofd(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofd[nElements] : new ::R3BTofd[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofd(void *p) {
      delete ((::R3BTofd*)p);
   }
   static void deleteArray_R3BTofd(void *p) {
      delete [] ((::R3BTofd*)p);
   }
   static void destruct_R3BTofd(void *p) {
      typedef ::R3BTofd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofd

//______________________________________________________________________________
void R3BTofdDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdDigitizer(void *p) {
      return  p ? new(p) ::R3BTofdDigitizer : new ::R3BTofdDigitizer;
   }
   static void *newArray_R3BTofdDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdDigitizer[nElements] : new ::R3BTofdDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdDigitizer(void *p) {
      delete ((::R3BTofdDigitizer*)p);
   }
   static void deleteArray_R3BTofdDigitizer(void *p) {
      delete [] ((::R3BTofdDigitizer*)p);
   }
   static void destruct_R3BTofdDigitizer(void *p) {
      typedef ::R3BTofdDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdDigitizer

//______________________________________________________________________________
void R3BTofdDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdDigiPar(void *p) {
      return  p ? new(p) ::R3BTofdDigiPar : new ::R3BTofdDigiPar;
   }
   static void *newArray_R3BTofdDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdDigiPar[nElements] : new ::R3BTofdDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdDigiPar(void *p) {
      delete ((::R3BTofdDigiPar*)p);
   }
   static void deleteArray_R3BTofdDigiPar(void *p) {
      delete [] ((::R3BTofdDigiPar*)p);
   }
   static void destruct_R3BTofdDigiPar(void *p) {
      typedef ::R3BTofdDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdDigiPar

//______________________________________________________________________________
void R3BTofdDigitizerCal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdDigitizerCal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdDigitizerCal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdDigitizerCal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdDigitizerCal(void *p) {
      return  p ? new(p) ::R3BTofdDigitizerCal : new ::R3BTofdDigitizerCal;
   }
   static void *newArray_R3BTofdDigitizerCal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdDigitizerCal[nElements] : new ::R3BTofdDigitizerCal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdDigitizerCal(void *p) {
      delete ((::R3BTofdDigitizerCal*)p);
   }
   static void deleteArray_R3BTofdDigitizerCal(void *p) {
      delete [] ((::R3BTofdDigitizerCal*)p);
   }
   static void destruct_R3BTofdDigitizerCal(void *p) {
      typedef ::R3BTofdDigitizerCal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdDigitizerCal

//______________________________________________________________________________
void R3BGeoTofd::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTofd.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoTofd::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoTofd::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTofd(void *p) {
      return  p ? new(p) ::R3BGeoTofd : new ::R3BGeoTofd;
   }
   static void *newArray_R3BGeoTofd(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTofd[nElements] : new ::R3BGeoTofd[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTofd(void *p) {
      delete ((::R3BGeoTofd*)p);
   }
   static void deleteArray_R3BGeoTofd(void *p) {
      delete [] ((::R3BGeoTofd*)p);
   }
   static void destruct_R3BGeoTofd(void *p) {
      typedef ::R3BGeoTofd current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoTofd

//______________________________________________________________________________
void R3BGeoTofdPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoTofdPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoTofdPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoTofdPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoTofdPar(void *p) {
      return  p ? new(p) ::R3BGeoTofdPar : new ::R3BGeoTofdPar;
   }
   static void *newArray_R3BGeoTofdPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoTofdPar[nElements] : new ::R3BGeoTofdPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoTofdPar(void *p) {
      delete ((::R3BGeoTofdPar*)p);
   }
   static void deleteArray_R3BGeoTofdPar(void *p) {
      delete [] ((::R3BGeoTofdPar*)p);
   }
   static void destruct_R3BGeoTofdPar(void *p) {
      typedef ::R3BGeoTofdPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoTofdPar(TBuffer &buf, void *obj) {
      ((::R3BGeoTofdPar*)obj)->::R3BGeoTofdPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoTofdPar

//______________________________________________________________________________
void R3BTofdContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdContFact(void *p) {
      return  p ? new(p) ::R3BTofdContFact : new ::R3BTofdContFact;
   }
   static void *newArray_R3BTofdContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdContFact[nElements] : new ::R3BTofdContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdContFact(void *p) {
      delete ((::R3BTofdContFact*)p);
   }
   static void deleteArray_R3BTofdContFact(void *p) {
      delete [] ((::R3BTofdContFact*)p);
   }
   static void destruct_R3BTofdContFact(void *p) {
      typedef ::R3BTofdContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BTofdContFact(TBuffer &buf, void *obj) {
      ((::R3BTofdContFact*)obj)->::R3BTofdContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BTofdContFact

//______________________________________________________________________________
void R3BPtofMapped2CalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofMapped2CalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofMapped2CalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofMapped2CalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofMapped2CalPar(void *p) {
      return  p ? new(p) ::R3BPtofMapped2CalPar : new ::R3BPtofMapped2CalPar;
   }
   static void *newArray_R3BPtofMapped2CalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofMapped2CalPar[nElements] : new ::R3BPtofMapped2CalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofMapped2CalPar(void *p) {
      delete ((::R3BPtofMapped2CalPar*)p);
   }
   static void deleteArray_R3BPtofMapped2CalPar(void *p) {
      delete [] ((::R3BPtofMapped2CalPar*)p);
   }
   static void destruct_R3BPtofMapped2CalPar(void *p) {
      typedef ::R3BPtofMapped2CalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofMapped2CalPar

//______________________________________________________________________________
void R3BPtofMapped2Cal::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofMapped2Cal.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofMapped2Cal::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofMapped2Cal::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofMapped2Cal(void *p) {
      return  p ? new(p) ::R3BPtofMapped2Cal : new ::R3BPtofMapped2Cal;
   }
   static void *newArray_R3BPtofMapped2Cal(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofMapped2Cal[nElements] : new ::R3BPtofMapped2Cal[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofMapped2Cal(void *p) {
      delete ((::R3BPtofMapped2Cal*)p);
   }
   static void deleteArray_R3BPtofMapped2Cal(void *p) {
      delete [] ((::R3BPtofMapped2Cal*)p);
   }
   static void destruct_R3BPtofMapped2Cal(void *p) {
      typedef ::R3BPtofMapped2Cal current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofMapped2Cal

//______________________________________________________________________________
void R3BPtofCal2HitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofCal2HitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofCal2HitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofCal2HitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofCal2HitPar(void *p) {
      return  p ? new(p) ::R3BPtofCal2HitPar : new ::R3BPtofCal2HitPar;
   }
   static void *newArray_R3BPtofCal2HitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofCal2HitPar[nElements] : new ::R3BPtofCal2HitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofCal2HitPar(void *p) {
      delete ((::R3BPtofCal2HitPar*)p);
   }
   static void deleteArray_R3BPtofCal2HitPar(void *p) {
      delete [] ((::R3BPtofCal2HitPar*)p);
   }
   static void destruct_R3BPtofCal2HitPar(void *p) {
      typedef ::R3BPtofCal2HitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofCal2HitPar

//______________________________________________________________________________
void R3BPtofCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofCal2Hit(void *p) {
      return  p ? new(p) ::R3BPtofCal2Hit : new ::R3BPtofCal2Hit;
   }
   static void *newArray_R3BPtofCal2Hit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofCal2Hit[nElements] : new ::R3BPtofCal2Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofCal2Hit(void *p) {
      delete ((::R3BPtofCal2Hit*)p);
   }
   static void deleteArray_R3BPtofCal2Hit(void *p) {
      delete [] ((::R3BPtofCal2Hit*)p);
   }
   static void destruct_R3BPtofCal2Hit(void *p) {
      typedef ::R3BPtofCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofCal2Hit

//______________________________________________________________________________
void R3BPtofHitPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofHitPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofHitPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofHitPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofHitPar(void *p) {
      return  p ? new(p) ::R3BPtofHitPar : new ::R3BPtofHitPar;
   }
   static void *newArray_R3BPtofHitPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofHitPar[nElements] : new ::R3BPtofHitPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofHitPar(void *p) {
      delete ((::R3BPtofHitPar*)p);
   }
   static void deleteArray_R3BPtofHitPar(void *p) {
      delete [] ((::R3BPtofHitPar*)p);
   }
   static void destruct_R3BPtofHitPar(void *p) {
      typedef ::R3BPtofHitPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofHitPar

//______________________________________________________________________________
void R3BPtofParFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofParFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofParFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofParFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofParFact(void *p) {
      return  p ? new(p) ::R3BPtofParFact : new ::R3BPtofParFact;
   }
   static void *newArray_R3BPtofParFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofParFact[nElements] : new ::R3BPtofParFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofParFact(void *p) {
      delete ((::R3BPtofParFact*)p);
   }
   static void deleteArray_R3BPtofParFact(void *p) {
      delete [] ((::R3BPtofParFact*)p);
   }
   static void destruct_R3BPtofParFact(void *p) {
      typedef ::R3BPtofParFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofParFact

namespace ROOT {
   static TClass *vectorlEvectorlER3BTofdCalDatamUgRsPgR_Dictionary();
   static void vectorlEvectorlER3BTofdCalDatamUgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p = 0);
   static void *newArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR(Long_t size, void *p);
   static void delete_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p);
   static void deleteArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p);
   static void destruct_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<vector<R3BTofdCalData*> >*)
   {
      vector<vector<R3BTofdCalData*> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<vector<R3BTofdCalData*> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<vector<R3BTofdCalData*> >", -2, "vector", 214,
                  typeid(vector<vector<R3BTofdCalData*> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvectorlER3BTofdCalDatamUgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<vector<R3BTofdCalData*> >) );
      instance.SetNew(&new_vectorlEvectorlER3BTofdCalDatamUgRsPgR);
      instance.SetNewArray(&newArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR);
      instance.SetDelete(&delete_vectorlEvectorlER3BTofdCalDatamUgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR);
      instance.SetDestructor(&destruct_vectorlEvectorlER3BTofdCalDatamUgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<vector<R3BTofdCalData*> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<vector<R3BTofdCalData*> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvectorlER3BTofdCalDatamUgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<vector<R3BTofdCalData*> >*)0x0)->GetClass();
      vectorlEvectorlER3BTofdCalDatamUgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvectorlER3BTofdCalDatamUgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BTofdCalData*> > : new vector<vector<R3BTofdCalData*> >;
   }
   static void *newArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<vector<R3BTofdCalData*> >[nElements] : new vector<vector<R3BTofdCalData*> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p) {
      delete ((vector<vector<R3BTofdCalData*> >*)p);
   }
   static void deleteArray_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p) {
      delete [] ((vector<vector<R3BTofdCalData*> >*)p);
   }
   static void destruct_vectorlEvectorlER3BTofdCalDatamUgRsPgR(void *p) {
      typedef vector<vector<R3BTofdCalData*> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<vector<R3BTofdCalData*> >

namespace ROOT {
   static TClass *vectorlER3BTofdCalDatamUgR_Dictionary();
   static void vectorlER3BTofdCalDatamUgR_TClassManip(TClass*);
   static void *new_vectorlER3BTofdCalDatamUgR(void *p = 0);
   static void *newArray_vectorlER3BTofdCalDatamUgR(Long_t size, void *p);
   static void delete_vectorlER3BTofdCalDatamUgR(void *p);
   static void deleteArray_vectorlER3BTofdCalDatamUgR(void *p);
   static void destruct_vectorlER3BTofdCalDatamUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BTofdCalData*>*)
   {
      vector<R3BTofdCalData*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BTofdCalData*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BTofdCalData*>", -2, "vector", 214,
                  typeid(vector<R3BTofdCalData*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BTofdCalDatamUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BTofdCalData*>) );
      instance.SetNew(&new_vectorlER3BTofdCalDatamUgR);
      instance.SetNewArray(&newArray_vectorlER3BTofdCalDatamUgR);
      instance.SetDelete(&delete_vectorlER3BTofdCalDatamUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BTofdCalDatamUgR);
      instance.SetDestructor(&destruct_vectorlER3BTofdCalDatamUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BTofdCalData*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BTofdCalData*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BTofdCalDatamUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BTofdCalData*>*)0x0)->GetClass();
      vectorlER3BTofdCalDatamUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BTofdCalDatamUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BTofdCalDatamUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTofdCalData*> : new vector<R3BTofdCalData*>;
   }
   static void *newArray_vectorlER3BTofdCalDatamUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BTofdCalData*>[nElements] : new vector<R3BTofdCalData*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BTofdCalDatamUgR(void *p) {
      delete ((vector<R3BTofdCalData*>*)p);
   }
   static void deleteArray_vectorlER3BTofdCalDatamUgR(void *p) {
      delete [] ((vector<R3BTofdCalData*>*)p);
   }
   static void destruct_vectorlER3BTofdCalDatamUgR(void *p) {
      typedef vector<R3BTofdCalData*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BTofdCalData*>

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = 0);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 96,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,int>*)0x0)->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete ((map<int,int>*)p);
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] ((map<int,int>*)p);
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_G__R3BTofDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/tof",
"/work/R3BRoot/los",
"/work/R3BRoot/tcal",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/calData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/r3bdata/ptofData",
"/work/R3BRoot/tracking",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/tof/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BTofDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BTof;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoTof;
class R3BGeoTofPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all TOF parameter containers)ATTRDUMP"))) R3BTofContFact;
class R3BTofDigiPar;
class R3BTofDigitizer;
class R3BTof2pDigiPar;
class R3BTof2pDigitizer;
class R3BTofdMapped2Cal;
class R3BTofdMapped2CalPar;
class R3BTofdCal2HitPar;
class R3BTofdCal2Histo;
class R3BTofdCal2HistoPar;
class R3BTofdChangePar;
class R3BTofdCal2Hit;
class R3BTofdCal2HitS454;
class R3BTofdHitModulePar;
class R3BTofdHitPar;
class R3BTofd;
class R3BTofdDigitizer;
class __attribute__((annotate("$clingAutoload$R3BTofdDigiPar.h")))  R3BTofdDigiPar;
class R3BTofdDigitizerCal;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoTofd;
class R3BGeoTofdPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all Tofd parameter containers)ATTRDUMP"))) R3BTofdContFact;
class R3BPtofMapped2CalPar;
class R3BPtofMapped2Cal;
class R3BPtofCal2HitPar;
class R3BPtofCal2Hit;
class R3BPtofHitPar;
class R3BPtofParFact;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BTofDict dictionary payload"

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

#ifndef R3BTOF_H
#define R3BTOF_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BTofPoint;
class FairVolume;

class R3BTof : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BTof();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BTof(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BTof(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BTof();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BTofPoint and adds it to the
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
    Double32_t fTime;               //!  time average in detector active volume
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length average in detector
    Double32_t fELoss;              //!  energy loss

    Int_t fPosIndex;              //!
    TClonesArray* fTofCollection; //!  The hit collection
    Bool_t kGeoSaved;             //!
    TList* flGeoPar;              //!

    /** Private method AddHit
     **
     ** Adds a TofPoint to the HitCollection
     **/
    R3BTofPoint* AddHit(Int_t trackID,
                        Int_t detID,
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

    ClassDef(R3BTof, 3);
};

inline void R3BTof::ResetParameters()
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

#ifndef R3BGEOTOF_H
#define R3BGEOTOF_H

#include "FairGeoSet.h"

class R3BGeoTof : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoTof();
    ~R3BGeoTof() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoTof, 0) // Class for STS
};

inline Int_t R3BGeoTof::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOTOF_H */
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

#ifndef R3BGEOTOFPAR_H
#define R3BGEOTOFPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoTofPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoTofPar(const char* name = "R3BGeoTofPar",
                 const char* title = "Tof Geometry Parameters",
                 const char* context = "TestDefaultContext");
    ~R3BGeoTofPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoTofPar, 1)
};

#endif /* !R3BGEOTOFPAR_H */
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

#ifndef R3BTOFCONTFACT_H
#define R3BTOFCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BTofContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BTofContFact();
    ~R3BTofContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BTofContFact, 0) // Factory for all TOF parameter containers
};

#endif /* !R3BTOFCONTFACT_H */
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

#ifndef R3BTOFDIGIPAR_H
#define R3BTOFDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTofDigiPar : public FairParGenericSet
{
  public:
    R3BTofDigiPar(const char* name = "R3BTofDigiParTest",
                  const char* title = "Tutorial  parameter",
                  const char* context = "TestDefaultContext");
    ~R3BTofDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTofDigiPar, 1); //
};

#endif /* !R3BDTOFDIGIPAR_H*/
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

#ifndef R3BTOFDIGITIZER_H
#define R3BTOFDDIGITISER_H 1

#include "FairTask.h"
#include "R3BTofDigi.h"
#include "R3BTofDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTofDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTofDigitizer();

    /** Destructor **/
    ~R3BTofDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTofDigi* AddHit(Int_t tfmul,
                       Double_t tfwx_p1,
                       Double_t tfwy_p1,
                       Double_t tfwt_p1,
                       Double_t tfwpath_p1,
                       // Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1);
                       Double_t tfwpx_p1,
                       Double_t tfwpy_p1,
                       Double_t tfwpz_p1,
                       Double_t tfwe_p1);

  protected:
    TClonesArray* fTofDigi;
    TClonesArray* fTofPoints;
    TClonesArray* fTofMCTrack;

    // Parameter class
    R3BTofDigiPar* fTofDigiPar;

    //- Control Hitograms

    TH1F* TOFelosshis;

    TH1F* TfwXhis;
    TH1F* TfwYhis;
    TH1F* TfwThis;

    Int_t eventNoTof;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTofDigitizer, 1);
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

#ifndef R3BTOF2PDIGIPAR_H
#define R3BTOF2PDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTof2pDigiPar : public FairParGenericSet
{
  public:
    R3BTof2pDigiPar(const char* name = "R3BTof2pDigiParTest",
                    const char* title = "Tutorial  parameter",
                    const char* context = "TestDefaultContext");
    ~R3BTof2pDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTof2pDigiPar, 1); //
};

#endif /* !R3BDTOFDIGIPAR_H*/
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

#ifndef R3BTOF2PDIGITIZER_H
#define R3BTOF2PDDIGITISER_H 1

#include "FairTask.h"
#include "R3BTof2pDigi.h"
#include "R3BTof2pDigiPar.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;

class R3BTof2pDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTof2pDigitizer();

    /** Destructor **/
    ~R3BTof2pDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    R3BTof2pDigi* AddHit(
        Int_t tfmul,
        Double_t tfwx_p1,
        Double_t tfwy_p1,
        Double_t tfwt_p1,
        Double_t tfwx_p2,
        Double_t tfwy_p2,
        Double_t tfwt_p2,
        Double_t tfwpath_p1,
        Double_t tfwpath_p2,
        // Double_t tfwpx_p1,Double_t tfwpy_p1,Double_t tfwpz_p1,Double_t tfwpx_p2,Double_t tfwpy_p2,Double_t tfwpz_p2);
        Double_t tfwpx_p1,
        Double_t tfwpy_p1,
        Double_t tfwpz_p1,
        Double_t tfwpx_p2,
        Double_t tfwpy_p2,
        Double_t tfwpz_p2,
        Double_t tfwe_p1,
        Double_t tfwe_p2);

  protected:
    TClonesArray* fTof2pDigi;
    TClonesArray* fTofPoints;
    TClonesArray* fTofMCTrack;

    // Parameter class
    R3BTof2pDigiPar* fTof2pDigiPar;

    //- Control Hitograms

    TH1F* TOFelosshis;

    TH1F* TfwXhis;
    TH1F* TfwYhis;
    TH1F* TfwThis;

    Int_t eventNoTof;

  private:
    virtual void SetParContainers();

    ClassDef(R3BTof2pDigitizer, 1);
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
// -----                R3BTofdMapped2Cal                -----
// -----            Created Apr 2016 by R.Plag            -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BTOFDMAPPED2TCAL
#define R3BTOFDMAPPED2TCAL

#include <vector>

#include "FairTask.h"

class TClonesArray;
class R3BTCalPar;
class R3BTofdMappedData;
class R3BTofdCalData;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration for NeuLAND.
 * This class reads NeuLAND mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BTofdMapped2CalFill task.
 */
class R3BTofdMapped2Cal : public FairTask
{
  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdMapped2Cal(const char*, Int_t = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdMapped2Cal();

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
    void SetNofModules(Int_t, Int_t);

  private:
    size_t GetCalLookupIndex(R3BTofdMappedData const&) const;

    TClonesArray* fMappedItems;        /**< Array with mapped items - input data. */
    TClonesArray* fMappedTriggerItems; /**< Array with mapped items - input data. */
    TClonesArray* fCalItems;           /**< Array with cal items - output data. */
    TClonesArray* fCalTriggerItems;    /**< Array with cal trigger items - output data. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    Double_t fClockFreq;     /**< Clock cycle in [ns]. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */

    // Fast lookup for matching mapped data.
    std::vector<std::vector<R3BTofdCalData*>> fCalLookup;

  public:
    ClassDef(R3BTofdMapped2Cal, 1)
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

#ifndef R3BTOFDMAPPED2TCALPAR_H
#define R3BTOFDMAPPED2TCALPAR_H

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
class R3BTofdMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdMapped2CalPar(const char*, Int_t = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdMapped2CalPar();

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

    /**
     * Method for setting number of LOS detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    void SetNofModules(Int_t, Int_t);

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */

    UInt_t fNofPlanes;       /**< Number of planes. */
    UInt_t fPaddlesPerPlane; /**< Number of bars per plane. */
    UInt_t fNofModules;      /**< Total number of modules (=edges) to calibrate */

    R3BTCalPar* fCalPar;          /**< Parameter container. */
    TClonesArray* fMapped;        /**< Array with mapped data - input data. */
    TClonesArray* fMappedTrigger; /**< Array with mapped trigger data - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BTofdMapped2CalPar, 1)
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

// ----------------------------------------------------------
// ----- Create hit parameters for TOFD        -----
// -----       Mai 2016 from M.Heil                  -----
// ---------------------------------------------------------

#ifndef R3BTOFDCAL2HITPAR_H
#define R3BTOFDCAL2HITPAR_H

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include "FairTask.h"
#include "R3BTCalEngine.h"
#include "TObject.h"

class R3BTofdHitPar;
class TClonesArray;
class R3BEventHeader;
class TH1F;
class TH2F;

/**
 * An analysis task for position and Z calibration of Tofd data.
 * This class fills time differences of the 2 PMTs of every paddle
 * and calculates the calibration parameters.
 * M.Heil in May 2016
 */
#ifdef __CINT__
// strange place for cint stuff, but whatever
#pragma link C++ class R3BTofdHitModulePar + ;
#endif
class R3BTofdCal2HitPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdCal2HitPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdCal2HitPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdCal2HitPar();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    virtual void SetParContainers();

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
        fNofPlanes = nDets;
        fPaddlesPerPlane = nCh;
        fNofModules = nDets * nCh * 1; // 1 edge per channel
    }
    /**
     * Method for setting the y-position of a horizonzal sweep run for calibration of effective velocity of light
     */
    inline void SetTofdPos(Double_t Y) { fTofdY = Y; }
    /**
     * Method for setting the nuclear charge of main beam
     */
    inline void SetTofdQ(Double_t Q) { fTofdQ = Q; }
    /**
     * Method for setting the y-position of a horizonzal sweep run for calibration of effective velocity of light
     */
    inline void ReadParaFile(TString file) { fParaFile = file; }
    /**
     * Method for walk calculation.
     */
    virtual Double_t walk(Double_t Q);

    virtual void CreateHistograms(Int_t iPlane, Int_t iBar);

    /**
     * Method for calculation of saturation.
     */
    virtual Double_t saturation(Double_t x);

    /**
     * Method for calculation of offset.
     */
    virtual void calcOffset();

    /**
     * Method for calculation of veff.
     */
    virtual void calcVeff();

    /**
     * Method for calculation of position dependence of scintillator.
     */
    virtual void doubleExp(TH2F* histo, Double_t min, Double_t max, Double_t*);
    //    virtual void doubleExp2(TH2F *histo, Double_t min,Double_t max, Double_t *);

    /**
     * Method for calculation of sync offset between paddles.
     */
    virtual void calcSync();

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */

    UInt_t fNofPlanes;       /**< Number of planes. */
    UInt_t fPaddlesPerPlane; /**< Number of bars per plane. */
    UInt_t fNofModules;      /**< Total number of modules (=edges) to calibrate */

    Int_t fNEvents;             /**< Event counter. */
    R3BTofdHitPar* fCal_Par;    /**< Parameter container. */
    TClonesArray* fCalItemsLos; /**< Array with cal items. */
    TClonesArray* fCalData;     /**< Array with mapped data - input data. */
    R3BEventHeader* header;     /**< Event header - input data. */
    Double_t fClockFreq;        /**< Clock cycle in [ns]. */
    Double_t fTofdY;
    Double_t fTofdQ;
    TString fParaFile;

    // arrays of control histograms
    TH2F* fhTdiff[N_TOFD_HIT_PLANE_MAX];
    TH1F* fhTotPm1[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH1F* fhTotPm2[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTsync[N_TOFD_HIT_PLANE_MAX];

    TH2F* fhTot1vsTot2[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTot1vsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTot2vsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];

  public:
    ClassDef(R3BTofdCal2HitPar, 1)
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
// ----------------------------------------------------------
// ----- Create histograms for parameters for TOFD      -----
// -----     Created July 2019 by L.Bott                -----
// ----------------------------------------------------------

#ifndef R3BTOFDCAL2HISTO_H
#define R3BTOFDCAL2HISTO_H

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include <map>

#include "FairTask.h"
#include "R3BTCalEngine.h"
#include "TObject.h"

class R3BTofdHitPar;
class TClonesArray;
class R3BEventHeader;
class TH1F;
class TH2F;
#ifdef __CINT__
#pragma link C++ class R3BTofdHitModulePar + ;
#endif

class R3BTofdCal2Histo : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdCal2Histo();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdCal2Histo(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdCal2Histo();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    virtual void SetParContainers();

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
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Method for setting number of LOS detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    inline void SetNofModules(Int_t nDets, Int_t nCh)
    {
        fNofPlanes = nDets;
        fPaddlesPerPlane = nCh;
        fNofModules = nDets * nCh * 1; // 1 edge per channel
    }
    /**
     * Method for setting the y-position of a horizonzal sweep run for calibration of effective velocity of light
     */
    inline void SetTofdPos(Double_t Y) { fTofdY = Y; }
    /**
     * Method for setting the nuclear charge of main beam
     */
    inline void SetTofdQ(Double_t Q) { fTofdQ = Q; }
    /**
     * Method for setting charge correction
     */
    inline void SetTofdZ(Bool_t Z) { fTofdZ = Z; }
    /**
     * Method for using smiley or double exponential charge correction
     */
    inline void SetTofdSmiley(Bool_t Smiley) { fTofdSmiley = Smiley; }
    /**
     *
     */
    inline void ReadParaFile(TString file) { fParaFile = file; }
    /**
     * old Method for walk calculation.
     */
    /// virtual Double_t walk(Double_t Q);
    /**
     * new Method for walk calculation.
     */
    virtual Double_t walk(Double_t Q, Double_t par1, Double_t par2, Double_t par3, Double_t par4, Double_t par5);
    /**
     * Method for creating histograms.
     */
    virtual void CreateHistograms(Int_t iPlane, Int_t iBar);

    /**
     * Method for calculation of saturation.
     */
    virtual Double_t saturation(Double_t x);

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */
    Int_t fTpat;

    UInt_t fNofPlanes;       /**< Number of planes. */
    UInt_t fPaddlesPerPlane; /**< Number of bars per plane. */
    UInt_t fNofModules;      /**< Total number of modules (=edges) to calibrate */

    UInt_t fNEvents;                /**< Event counter. */
    R3BTofdHitPar* fCal_Par;        /**< Parameter container. */
    TClonesArray* fCalData;         /**< Array with mapped data - input data. */
    TClonesArray* fCalTriggerItems; /**< Array with trigger Cal items - input data. */
    R3BEventHeader* header;         /**< Event header - input data. */
    Double_t fClockFreq;            /**< Clock cycle in [ns]. */
    Double_t fTofdY;
    Double_t fTofdQ;
    Bool_t fTofdSmiley;
    Bool_t fTofdZ;
    TString fParaFile;
    UInt_t maxevent;

    // arrays of control histograms
    TH2F* fh_tofd_TotPm[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhTdiff[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhTsync[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhLogTot1vsLogTot2[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhSqrtQvsPosToT[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhQvsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    // TH2F* fhTot1vsTot2[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTot1vsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTot2vsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];

  public:
    ClassDef(R3BTofdCal2Histo, 1)
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
// ----------------------------------------------------
// -----      Create hit parameters for TOFD      -----
// -----        Created Jul 2019 by L.Bott        -----
// ----------------------------------------------------

#ifndef R3BTOFDCAL2HISTOPAR_H
#define R3BTOFDCAL2HISTOPAR_H

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include "FairTask.h"
#include "R3BTCalEngine.h"
#include "TObject.h"

class R3BTofdHitPar;
class TClonesArray;
class R3BEventHeader;
class TH1F;
class TH2F;

#ifdef __CINT__
#pragma link C++ class R3BTofdHitModulePar + ;
#endif
class R3BTofdCal2HistoPar : public FairTask
{
  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdCal2HistoPar();
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdCal2HistoPar(const char* name, Int_t iVerbose = 1);
    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdCal2HistoPar();
    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    virtual void SetParContainers();

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
     * Method for selecting a certain paramter calculation.
     */
    inline void SetParameter(Int_t parameter) { fParameter = parameter; }

    /**
     * Method for setting number of LOS detectors and channels.
     * @param nDets number of detectors.
     * @param nCh number of channels per detector (4+master trigger?)
     */
    inline void SetNofModules(Int_t nDets, Int_t nCh)
    {
        fNofPlanes = nDets;
        fPaddlesPerPlane = nCh;
        fNofModules = nDets * nCh * 1; // 1 edge per channel
    }
    /**
     * Method for setting the y-position of a horizonzal sweep run for calibration of effective velocity of light
     */
    inline void SetTofdPos(Double_t Y) { fTofdY = Y; }
    /**
     * Method for setting the nuclear charge of main beam
     */
    inline void SetTofdQ(Double_t Q) { fTofdQ = Q; }
    /**
     * Method for setting the lower range of ToT for offset calibration
     */
    inline void SetTofdTotLow(Double_t TotLow) { fTofdTotLow = TotLow; }
    /**
     * Method for setting the upper range of ToT for offset calibration
     */
    inline void SetTofdTotHigh(Double_t TotHigh) { fTofdTotHigh = TotHigh; }
    /**
     * Method for using smiley or double exponential charge correction
     */
    inline void SetTofdSmiley(Bool_t Smiley) { fTofdSmiley = Smiley; }
    /**
     *
     */
    inline void ReadParaFile(TString file) { fParaFile = file; }
    /**
     *
     */
    inline void ReadHistoFile(TString file) { fHistoFile = file; }

    /**
     * Method for calculation of offset.
     */
    virtual void calcOffset();

    /**
     * Method for calculation of ToT offset.
     */
    virtual void calcToTOffset(Double_t TotLow, Double_t TotHigh);

    /**
     * Method for calculation of sync offset between paddles.
     */
    virtual void calcSync();

    /**
     * Method for calculation of effective speed of light.
     */
    virtual void calcVeff();

    /**
     * Method for calculation of light attenuation factor.
     */
    virtual void calcLambda(Double_t TotLow, Double_t TotHigh);

    /**
     * Method for calculation of position dependence charge of scintillator.
     */
    virtual void doubleExp(TH2F* histo, Double_t min, Double_t max, Double_t*);

    /**
     * Method for calculation of position dependent charge of scintillator.
     */
    virtual void smiley(TH2F* histo, Double_t min, Double_t max, Double_t*);

    /**
     * Method for calculation of z correction.
     */
    virtual void zcorr(TH2F* histo, Int_t min, Int_t max, Double_t*);

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */
    Int_t fTrigger;    /**< Trigger value. */
    Int_t fParameter;  /**< Parameter #. */

    UInt_t fNofPlanes;       /**< Number of planes. */
    UInt_t fPaddlesPerPlane; /**< Number of bars per plane. */
    UInt_t fNofModules;      /**< Total number of modules (=edges) to calibrate */

    Int_t fNEvents;             /**< Event counter. */
    R3BTofdHitPar* fCal_Par;    /**< Parameter container. */
    TClonesArray* fCalItemsLos; /**< Array with cal items. */
    TClonesArray* fCalData;     /**< Array with mapped data - input data. */
    R3BEventHeader* header;     /**< Event header - input data. */
    Double_t fClockFreq;        /**< Clock cycle in [ns]. */
    Double_t fTofdY;
    Double_t fTofdQ;
    Double_t fTofdTotLow;
    Double_t fTofdTotHigh;
    Bool_t fTofdSmiley;
    TString fParaFile;
    TString fHistoFile;

  public:
    ClassDef(R3BTofdCal2HistoPar, 1)
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
// ------------------------------------------------------
// -----       Change hit parameters for TOFD       -----
// -----         Created Sep 2019 by L.Bott         -----
// ------------------------------------------------------

#ifndef R3BTOFDCHANGEPAR_H
#define R3BTOFDCHANGEPAR_H

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include "FairTask.h"
#include "R3BTCalEngine.h"
#include "TObject.h"

class R3BTofdHitPar;
class TClonesArray;
class R3BEventHeader;
class TH1F;
class TH2F;

#ifdef __CINT__
#pragma link C++ class R3BTofdHitModulePar + ;
#endif
class R3BTofdChangePar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdChangePar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdChangePar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdChangePar();

    /**
     * Method for task initialization.
     * This function is called by the framework before
     * the event loop.
     * @return Initialization status. kSUCCESS, kERROR or kFATAL.
     */
    virtual InitStatus Init();

    virtual void SetParContainers();

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
        fNofPlanes = nDets;
        fPaddlesPerPlane = nCh;
        fNofModules = nDets * nCh * 1; // 1 edge per channel
    }

    /**
     *
     */
    inline void ReadParaFile(TString file) { fParaFile = file; }

    /**
     * Methods for parameter changes.
     */
    virtual void changeAll0(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeOffset(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeToTOffset(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeSync(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeVeff(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeLambda(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeDoubleExp(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeZ(Int_t plane, Int_t bar, Int_t pm, Double_t*);
    virtual void changeWalk(Int_t plane, Int_t bar, Int_t pm, Double_t*);

  private:
    Int_t fUpdateRate;          /**< An update rate. */
    Int_t fMinStats;            /**< Minimum statistics required per module. */
    Int_t fTrigger;             /**< Trigger value. */
    UInt_t fNofPlanes;          /**< Number of planes. */
    UInt_t fPaddlesPerPlane;    /**< Number of bars per plane. */
    UInt_t fNofModules;         /**< Total number of modules (=edges) to calibrate */
    Int_t fNEvents;             /**< Event counter. */
    R3BTofdHitPar* fCal_Par;    /**< Parameter container. */
    TClonesArray* fCalItemsLos; /**< Array with cal items. */
    TClonesArray* fCalData;     /**< Array with mapped data - input data. */
    R3BEventHeader* header;     /**< Event header - input data. */
    Double_t fClockFreq;        /**< Clock cycle in [ns]. */
    TString fParaFile;

  public:
    ClassDef(R3BTofdChangePar, 1)
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
// -----                 R3BTofdCal2Hit                   -----
// -----         Created May 30th 2016 by M.Heil          -----
// -----           Modified Dec 2019 by L.Bott            -----
// ------------------------------------------------------------

#ifndef R3BTOFDCAL2HIT
#define R3BTOFDCAL2HIT

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include <map>

#include "FairTask.h"
#include "THnSparse.h"

class TClonesArray;
class R3BTofdHitModulePar;
class R3BTofdHitPar;
class R3BEventHeader;
class TH1F;
class TH2F;

/**
 * An analysis task to apply HIT calibration for ToFd.
 * it also applies walk corrections and Z-calibration
 */
class R3BTofdCal2Hit : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdCal2Hit();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdCal2Hit(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdCal2Hit();

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

    virtual void CreateHistograms(Int_t iPlane, Int_t iBar);

    /**
     * Method for setting the nuclear charge of main beam
     */
    inline void SetTofdQ(Double_t Q) { fTofdQ = Q; }

    /**
     * Method for setting histograms
     */
    inline void SetTofdHisto(Bool_t Histo) { fTofdHisto = Histo; }
    /**
     * Method for setting y calculation via ToT instead of tdiff
     */
    inline void SetTofdTotPos(Bool_t ToTy) { fTofdTotPos = ToTy; }

    /**
     * Old Method for walk calculation.
     */
    /// virtual Double_t walk(Double_t Q);
    /**
     * new Method for walk calculation.
     */
    virtual Double_t walk(Double_t Q, Double_t par1, Double_t par2, Double_t par3, Double_t par4, Double_t par5);
    /**
     * Method for beta correction.
     */
    virtual Double_t betaCorr(Double_t delta);
    /**
     * Method for calculation of saturation.
     */
    virtual Double_t saturation(Double_t x);
    /**
     * Method for insert.
     */
    virtual Double_t* insertX(Int_t n, Double_t arr[], Double_t x, Int_t pos);

    /**
     * Method for selecting events with certain trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }

  private:
    TClonesArray* fCalItems;    /**< Array with Cal items - input data. */
    TClonesArray* fHitItems;    /**< Array with Hit items - output data. */
    TClonesArray* fCalItemsLos; /**< Array with cal items. */
    TClonesArray* fHitItemsLos; /**< Array with cal items. */
    UInt_t fNofHitItems;        /**< Number of hit items for cur event. */
    R3BTofdHitPar* fHitPar;     /**< Hit parameter container. */
    UInt_t fNofHitPars;         /**< Number of modules in parameter file. */
    R3BEventHeader* header;     /**< Event header - input data. */
    Double_t fClockFreq;        /**< Clock cycle in [ns]. */
    Int_t fTrigger;             /**< Trigger value. */
    Int_t fTpat;
    Double_t fTofdQ;
    Bool_t fTofdHisto;
    Bool_t fTofdTotPos;
    UInt_t fnEvents;
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    UInt_t maxevent;
    UInt_t countloshit;
    UInt_t wrongtrigger;
    UInt_t wrongtpat;
    UInt_t headertpat;
    UInt_t events_in_cal_level;
    UInt_t inbarcoincidence;
    UInt_t countreset;
    UInt_t hitsbeforereset;
    UInt_t eventstore;
    UInt_t incoincidence;
    UInt_t inaverage12;
    UInt_t inaverage34;
    UInt_t singlehit;
    UInt_t multihit;
    UInt_t bars_with_multihit;
    UInt_t events_wo_tofd_hits;

    // arrays of control histograms
    TH2F* fhTdiffvsQ[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX * 2 + 1];
    TH2F* fhQvsQ[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX * 2 + 1];
    TH2F* fhQvsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhQvsTof[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhTvsTof[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhToTvsTofw[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhQ[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhQM[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhMvsQ[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhxy[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhQvsEvent[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhTdiff[N_TOFD_HIT_PLANE_MAX];
    // TH2F* fhTof[N_TOFD_HIT_PLANE_MAX];
    // TH2F* fhTsync[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhxy12;
    TH2F* fhxy34;
    TH2F* fhxy12tot;
    TH2F* fhxy34tot;
    TH1F* fhCharge;
    TH2F* fhChargeLosTofD;
    TH2F* fhLosXYP;
    TH2F* fh_los_pos;
    // TH2F* fhChargevsTof;
    // TH2F* fhChargevsPos;
    // TH2F* fhQp12;
    // TH2F* fhQp34;
    TH2F* fhAverageCharge;

  public:
    ClassDef(R3BTofdCal2Hit, 1)
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
// -----                 R3BTofdCal2HitS454                   -----
// -----         Created May 30th 2016 by M.Heil          -----
// -----           Modified Mar 2020 by L.Bott            -----
// ------------------------------------------------------------

#ifndef R3BTOFDCAL2HITS454
#define R3BTOFDCAL2HITS454

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44

#include <map>

#include "FairTask.h"
#include "THnSparse.h"

class TClonesArray;
class R3BTofdHitModulePar;
class R3BTofdHitPar;
class R3BEventHeader;
class TH1F;
class TH2F;

/**
 * An analysis task to apply HIT calibration for ToFd.
 * it also applies walk corrections and Z-calibration
 */
class R3BTofdCal2HitS454 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTofdCal2HitS454();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTofdCal2HitS454(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTofdCal2HitS454();

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

    virtual void CreateHistograms(Int_t iPlane, Int_t iBar);

    /**
     * Method for setting the nuclear charge of main beam
     */
    inline void SetTofdQ(Double_t Q) { fTofdQ = Q; }

    /**
     * Method for setting histograms
     */
    inline void SetTofdHisto(Bool_t Histo) { fTofdHisto = Histo; }
    /**
     * Method for setting y calculation via ToT instead of tdiff
     */
    inline void SetTofdTotPos(Bool_t ToTy) { fTofdTotPos = ToTy; }

    /**
     * Old Method for walk calculation.
     */
    /// virtual Double_t walk(Double_t Q);
    /**
     * new Method for walk calculation.
     */
    virtual Double_t walk(Double_t Q, Double_t par1, Double_t par2, Double_t par3, Double_t par4, Double_t par5);
    /**
     * Method for beta correction.
     */
    virtual Double_t betaCorr(Double_t delta);
    /**
     * Method for calculation of saturation.
     */
    virtual Double_t saturation(Double_t x);
    /**
     * Method for insert.
     */
    virtual Double_t* insertX(Int_t n, Double_t arr[], Double_t x, Int_t pos);

    /**
     * Method for selecting events with certain trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }

  private:
    TClonesArray* fCalItems;        /**< Array with Cal items - input data. */
    TClonesArray* fCalTriggerItems; /**< Array with trigger Cal items - input data. */
    TClonesArray* fHitItems;        /**< Array with Hit items - output data. */
    UInt_t fNofHitItems;            /**< Number of hit items for cur event. */
    R3BTofdHitPar* fHitPar;         /**< Hit parameter container. */
    UInt_t fNofHitPars;             /**< Number of modules in parameter file. */
    R3BEventHeader* header;         /**< Event header - input data. */
    Double_t fClockFreq;            /**< Clock cycle in [ns]. */
    Int_t fTrigger;                 /**< Trigger value. */
    Int_t fTpat;
    Double_t fTofdQ;
    Bool_t fTofdHisto;
    Bool_t fTofdTotPos;
    UInt_t fnEvents;
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    UInt_t maxevent;
    UInt_t wrongtrigger;
    UInt_t wrongtpat;
    UInt_t headertpat;
    UInt_t events_in_cal_level;
    UInt_t inbarcoincidence;
    UInt_t eventstore;
    UInt_t singlehit;
    UInt_t multihit;
    UInt_t bars_with_multihit;
    UInt_t events_wo_tofd_hits;

    // arrays of control histograms
    TH2F* fhQvsPos[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    // TH2F* fhQvsTHit[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    // TH2F* fhTvsTHit[N_TOFD_HIT_PLANE_MAX][N_TOFD_HIT_PADDLE_MAX];
    TH2F* fhQ[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhxy[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhQvsEvent[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhTdiff[N_TOFD_HIT_PLANE_MAX];
    TH2F* fhTsync[N_TOFD_HIT_PLANE_MAX];

  public:
    ClassDef(R3BTofdCal2HitS454, 1)
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

#ifndef R3BTOFDHITMODULEPAR_H
#define R3BTOFDHITMODULEPAR_H

#include "FairParGenericSet.h"

#define NCHMAX 5000

class FairParamList;

/**
 * Container for time calibration of a single module. This class is used for
 * storage of Tofd hit parameter
 */

class R3BTofdHitModulePar : public FairParGenericSet
{
  public:
    /**
     * Standard constructor.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BTofdHitModulePar(const char* name = "TofdHitModulePar",
                        const char* title = "TOFd hit calibration of a module",
                        const char* context = "TestDefaultContext",
                        Bool_t own = kTRUE);

    /**
     * Destructor.
     * Frees the memory allocated by the object.
     */
    virtual ~R3BTofdHitModulePar(void);

    /**
     * A method to reset the parameter values. Sets all parameters to 0.
     */
    void clear(void);

    /**
     * A method to write parameters using RuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

    /**
     * A method to read parameters using RuntimeDB.
     * @param list a list of parameters.
     * @return kTRUE if successfull, else kFALSE.
     */
    Bool_t getParams(FairParamList* list);

    /**
     * A method to print value of parameters to the standard
     * output using FairLogger.
     */
    void printParams();

    /**
     * A method to draw vaues of parameters on the current Canvas.
     */
    void DrawParams();

    /** Accessor functions **/
    Int_t GetPlane() const { return fPlane; }
    Int_t GetPaddle() const { return fPaddle; }
    Double_t GetSync() const { return fSync; }
    Double_t GetOffset1() const { return fOffset1; }
    Double_t GetOffset2() const { return fOffset2; }
    Double_t GetToTOffset1() const { return fToTOffset1; }
    Double_t GetToTOffset2() const { return fToTOffset2; }
    Double_t GetVeff() const { return fVeff; }
    Double_t GetLambda() const { return fLambda; }
    Double_t GetPar1a() const { return fPar1a; }
    Double_t GetPar1b() const { return fPar1b; }
    Double_t GetPar1c() const { return fPar1c; }
    Double_t GetPar1d() const { return fPar1d; }
    Double_t GetPar2a() const { return fPar2a; }
    Double_t GetPar2b() const { return fPar2b; }
    Double_t GetPar2c() const { return fPar2c; }
    Double_t GetPar2d() const { return fPar2d; }
    Double_t GetPar1za() const { return fPar1za; }
    Double_t GetPar1zb() const { return fPar1zb; }
    Double_t GetPar1zc() const { return fPar1zc; }
    Double_t GetPar1Walk() const { return fPar1walk; }
    Double_t GetPar2Walk() const { return fPar2walk; }
    Double_t GetPar3Walk() const { return fPar3walk; }
    Double_t GetPar4Walk() const { return fPar4walk; }
    Double_t GetPar5Walk() const { return fPar5walk; }
    void SetPlane(Int_t i) { fPlane = i; }
    void SetPaddle(Int_t i) { fPaddle = i; }
    void SetSync(Double_t t) { fSync = t; }
    void SetOffset1(Double_t t) { fOffset1 = t; }
    void SetOffset2(Double_t t) { fOffset2 = t; }
    void SetToTOffset1(Double_t t) { fToTOffset1 = t; }
    void SetToTOffset2(Double_t t) { fToTOffset2 = t; }
    void SetVeff(Double_t v) { fVeff = v; }
    void SetLambda(Double_t v) { fLambda = v; }
    void SetPar1a(Double_t par1a) { fPar1a = par1a; }
    void SetPar1b(Double_t par1b) { fPar1b = par1b; }
    void SetPar1c(Double_t par1c) { fPar1c = par1c; }
    void SetPar1d(Double_t par1d) { fPar1d = par1d; }
    void SetPar2a(Double_t par2a) { fPar2a = par2a; }
    void SetPar2b(Double_t par2b) { fPar2b = par2b; }
    void SetPar2c(Double_t par2c) { fPar2c = par2c; }
    void SetPar2d(Double_t par2d) { fPar2d = par2d; }
    void SetPar1za(Double_t par1za) { fPar1za = par1za; }
    void SetPar1zb(Double_t par1zb) { fPar1zb = par1zb; }
    void SetPar1zc(Double_t par1zc) { fPar1zc = par1zc; }
    void SetPar1Walk(Double_t par1Walk) { fPar1walk = par1Walk; }
    void SetPar2Walk(Double_t par2Walk) { fPar2walk = par2Walk; }
    void SetPar3Walk(Double_t par3Walk) { fPar3walk = par3Walk; }
    void SetPar4Walk(Double_t par4Walk) { fPar4walk = par4Walk; }
    void SetPar5Walk(Double_t par5Walk) { fPar5walk = par5Walk; }

  private:
    Int_t fPlane;         /**< Index of a plane. */
    Int_t fPaddle;        /**< Index of a paddle. */
    Double_t fOffset1;    /**< time offset of PM1 */
    Double_t fOffset2;    /**< time offset of PM2 */
    Double_t fToTOffset1; /**< ToT offset of PM1 */
    Double_t fToTOffset2; /**< ToT offset of PM2 */
    Double_t fVeff;       /**< effective velocity of light in paddle for position determination */
    Double_t fLambda;     /**< light attenuation in paddle for position determination */
    Double_t fSync;       /**< time offset between paddles */
    Double_t fPar1a, fPar1b, fPar1c, fPar1d;
    Double_t fPar2a, fPar2b, fPar2c, fPar2d;
    Double_t fPar1za, fPar1zb, fPar1zc, fPar1zd;
    Double_t fPar1walk, fPar2walk, fPar3walk, fPar4walk, fPar5walk;

    ClassDef(R3BTofdHitModulePar, 1);
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

#ifndef R3BTOFDHITPAR_H
#define R3BTOFDHITPAR_H

#define NMODULEMAX 6000

#define N_TOFD_HIT_PLANE_MAX 4
#define N_TOFD_HIT_PADDLE_MAX 44
#define N_TOFD_HIT_SIDE_MAX 10

#include "FairParGenericSet.h" // for FairParGenericSet
#include "R3BTofdHitModulePar.h"
#include "TObjArray.h"
#include <map>

using namespace std;

class FairParamList;

/**
 * Parameter container for storing time calibration of a detector.
 * This class contains array of time calibration containers for each
 * module (of type R3BTCalModulePar). Instance of this class has to be
 * created using FairRuntimeDB::getContainer("name") method. Supported
 * names: LandTCalPar, LosTCalPar.
 * @author D. Kresan
 * @since September 3, 2015
 */
class R3BTofdHitPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BTofdHitPar(const char* name = "TofdHitPar",
                  const char* title = "TOFd HIT calibration",
                  const char* context = "TestDefaultContext",
                  Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BTofdHitPar(void);

    /**
     * Method to reset the values of parameters.
     */
    void clear(void);

    /**
     * Method to store parameters using FairRuntimeDB.
     * @param list a list of parameters.
     */
    void putParams(FairParamList* list);

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

    /**
     * Method to print value of parameters for a specific module.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * Accessible from Context menu in TBrowser.
     */
    void PrintModuleParams(Int_t plane, Int_t paddle); // *MENU*

    /**
     * Method to draw value of parameters for a specific module on a current Canvas.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * Accessible from Context menu in TBrowser.
     */
    void DrawModuleParams(Int_t plane, Int_t paddle); // *MENU*

    /**
     * Method to add parameter container for a module.
     * Extends the array.
     * @param tch a parameter container for a detector module.
     */
    void AddModulePar(R3BTofdHitModulePar* tch);

    /**
     * Method to retrieve the arrray with module containers.
     * @return an array with parameter containers of type R3BTCalModulePar.
     */
    TObjArray* GetListOfModulePar() { return fHitParams; }

    /**
     * Method to get number of modules storred in array.
     * @return size of array.
     */
    Int_t GetNumModulePar() { return fHitParams->GetEntries(); }

    /**
     * Method to get single parameter container for a specific module.
     * @param idx an index of a module.
     * @return parameter container of this module.
     */
    R3BTofdHitModulePar* GetModuleParAt(Int_t plane, Int_t paddle);

  private:
    const R3BTofdHitPar& operator=(const R3BTofdHitPar&); /**< an assignment operator */
    R3BTofdHitPar(const R3BTofdHitPar&);                  /**< a copy constructor */

    TObjArray* fHitParams; /**< an array with parameter containers of all modules */

    Bool_t fMapInit;             /**< a boolean flag for indication whether the indexing map is initialized */
    map<Int_t, Int_t> fIndexMap; /**< a map between index of a container in array and plane,paddle,side */

    ClassDef(R3BTofdHitPar, 1);
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

#ifndef R3BTOFD_H
#define R3BTOFD_H

#include "R3BDetector.h"
#include "TLorentzVector.h"

class TClonesArray;
class R3BTofdPoint;
class FairVolume;
class R3BTGeoPar;

class R3BTofd : public R3BDetector
{
  public:
    /** Default constructor **/
    R3BTofd();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BTofd(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BTofd(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BTofd();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BTofdPoint and adds it to the
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
    Double32_t fTime;               //!  time average in detector
    Double32_t fLength_in;          //!  length when entering active volume
    Double32_t fLength_out;         //!  length when exiting active volume
    Double32_t fLength;             //!  length average in detector
    Double32_t fELoss;              //!  energy loss

    Int_t fPosIndex;               //!
    TClonesArray* fTofdCollection; //!  The hit collection
    Bool_t kGeoSaved;              //!
    TList* flGeoPar;               //!

    R3BTGeoPar* fTGeoPar;  //!
    R3BTGeoPar* fTGeoPar2; //!

    /** Private method AddHit
     **
     ** Adds a TofdPoint to the HitCollection
     **/
    R3BTofdPoint* AddHit(Int_t trackID,
                         Int_t detID,
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

    ClassDef(R3BTofd, 2);
};

inline void R3BTofd::ResetParameters()
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

// TofdDigitzer 07 aug 2017 created by Alicia Wongel

#ifndef R3BTOFDDIGITIZER_H
#define R3BTOFDDIGITIZER_H 1

#include "FairTask.h"
#include "R3BTofdHitData.h"
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;
class TRandom3;

class R3BTofdDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BTofdDigitizer();

    /** Destructor **/
    ~R3BTofdDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    /** Setters for sigmas **/
    void SetSigma_y(Float_t sigma_y) { fsigma_y = sigma_y; }
    void SetSigma_t(Float_t sigma_t) { fsigma_t = sigma_t; }
    void SetSigma_ELoss(Float_t sigma_ELoss) { fsigma_ELoss = sigma_ELoss; }

  protected:
    TClonesArray* fTofdPoints;
    TClonesArray* fMCTrack;
    TClonesArray* fTofdHits;
    TRandom3* fRnd;
    TH1F* fHist1;
    TH1F* fHist2;
    TH1F* fHist3;

    Float_t fsigma_y;
    Float_t fsigma_t;
    Float_t fsigma_ELoss;

    // detector parameter
    Int_t number_layers = 2;
    Int_t number_paddles = 44; // per layer
    Float_t paddle_width = 2.70000;
    Float_t paddle_thickness = 0.50000;
    Float_t air_gap_paddles = 0.04;
    Float_t air_gap_layer = 5.;

    Float_t detector_width = number_paddles * paddle_width + (number_paddles - 1) * air_gap_paddles + paddle_width;
    Float_t detector_thickness = (number_layers - 1) * air_gap_layer + number_layers * paddle_thickness;

    ClassDef(R3BTofdDigitizer, 1);
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

#ifndef R3BTOFDDIGITIZERCAL_H
#define R3BTOFDDIGITIZERCAL_H 1

#include "FairTask.h"
#include "R3BTofdCalData.h"
#include "R3BTofdDigi.h"
#include "R3BTofdDigiPar.h"
#include "R3BTofdPoint.h"
#include <map>
#include <string>

class TClonesArray;
class TH1F;
class TH2F;
class TRandom3;

class R3BTofdDigitizerCal : public FairTask
{

  public:
    /** Default constructor **/
    R3BTofdDigitizerCal();

    /** Destructor **/
    ~R3BTofdDigitizerCal();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    /** Setters for sigmas **/
    void SetSigma_y(Float_t sigma_y) { ysigma = sigma_y; }
    void SetSigma_t(Float_t sigma_t) { tsigma = sigma_t; }
    void SetSigma_ELoss(Float_t sigma_ELoss) { esigma = sigma_ELoss; }

  protected:
    TClonesArray* fTofdPoints;
    TClonesArray* fMCTrack;
    TClonesArray* fTofdCals;
    TClonesArray* fCalTriggerItems;

  private:
    TRandom3* prnd;
    Float_t ysigma;
    Float_t tsigma;
    Float_t esigma;

    Int_t maxevent;
    Int_t counter = 0;
    // detector parameter
    Int_t number_layers = 2;
    Int_t number_paddles = 44; // per layer
    Int_t number_sides = 2;
    Int_t number_channels = number_layers * 100 + 50;
    Float_t paddle_width = 2.70000;
    Float_t paddle_thickness = 0.50000;
    Float_t air_gap_paddles = 0.04;
    Float_t air_gap_layer = 5.;

    Float_t detector_width = number_paddles * paddle_width + (number_paddles - 1) * air_gap_paddles + paddle_width;
    Float_t detector_thickness = (number_layers - 1) * air_gap_layer + number_layers * paddle_thickness;

    ClassDef(R3BTofdDigitizerCal, 1);
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

#ifndef R3BGEOTOFD_H
#define R3BGEOTOFD_H

#include "FairGeoSet.h"

class R3BGeoTofd : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoTofd();
    ~R3BGeoTofd() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoTofd, 0) // Class for STS
};

inline Int_t R3BGeoTofd::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOTOFD_H */
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

#ifndef R3BGEOTOFDPAR_H
#define R3BGEOTOFDPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoTofdPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoTofdPar(const char* name = "R3BGeoTofdPar",
                  const char* title = "Tofd Geometry Parameters",
                  const char* context = "TestDefaultContext");
    ~R3BGeoTofdPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoTofdPar, 1)
};

#endif /* !R3BGEOTOFDPAR_H */
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

#ifndef R3BTOFDCONTFACT_H
#define R3BTOFDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BTofdContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BTofdContFact();
    ~R3BTofdContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BTofdContFact, 0) // Factory for all Tofd parameter containers
};

#endif /* !R3BTOFDCONTFACT_H */
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

#ifndef R3BTOFDDIGIPAR_H
#define R3BTOFDDIGIPAR_H 1

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BTofdDigiPar : public FairParGenericSet
{
  public:
    R3BTofdDigiPar(const char* name = "R3BTofdDigiParTest",
                   const char* title = "Tutorial  parameter",
                   const char* context = "TestDefaultContext");
    ~R3BTofdDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

  private:
    // Digi. Parameters

    ClassDef(R3BTofdDigiPar, 1); //
};

#endif /* !R3BTOFDDIGIPAR_H*/
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
// ----- Create time calib parameters for PTOF via Tamex      -----
// ----------------------------------------------------------------

#ifndef R3BPTOFMAPPED2CALPAR_H
#define R3BPTOFMAPPED2CALPAR_H

#include "FairTask.h"

class R3BTCalPar;
class TClonesArray;
class R3BEventHeader;
class R3BTCalEngine;

class R3BPtofMapped2CalPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPtofMapped2CalPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPtofMapped2CalPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPtofMapped2CalPar();

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

  private:
    Int_t fUpdateRate; /**< An update rate. */
    Int_t fMinStats;   /**< Minimum statistics required per module. */

    R3BTCalPar* fCal_Par;  /**< Parameter container. */
    TClonesArray* fMapped; /**< Array with mapped data - input data. */

    R3BTCalEngine* fEngine; /**< Instance of the TCAL engine. */

  public:
    ClassDef(R3BPtofMapped2CalPar, 1)
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
// -----                R3BPtofMapped2Cal                -----
// -----            Created Feb 9th 2017 by R.Plag            -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BPTOFMAPPED2CAL
#define R3BPTOFMAPPED2CAL

#include <map>

#include "FairTask.h"
#include "R3BPaddleCalData.h"

class TClonesArray;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BEventHeader;

/**
 * An analysis task to apply TCAL calibration.
 * This class reads mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BPtofMapped2CalPar task.
 */
class R3BPtofMapped2Cal : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPtofMapped2Cal();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPtofMapped2Cal(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPtofMapped2Cal();

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

  private:
    TClonesArray* fMappedItems; /**< Array with MAPPED items - input data. */
    TClonesArray* fCalItems;    /**< Array with CAL items - output data. */
    Int_t fNofCalItems;         /**< Number of CAL items per event. */

    R3BTCalPar* fTcalPar; /**< TCAL parameter container. */
    UInt_t fNofTcalPars;  /**< Number of modules in parameter file. */

    Double_t fClockFreq; /**< Clock cycle in [ns]. */

  public:
    ClassDef(R3BPtofMapped2Cal, 1)
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

#ifndef R3BPTOFCAL2HITPAR_H
#define R3BPTOFCAL2HITPAR_H

#include "FairTask.h"

#define PtofPaddlesPerPlane 8

class TClonesArray;
class R3BPtofHitPar;
class TH1D;

class R3BPtofCal2HitPar : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPtofCal2HitPar();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPtofCal2HitPar(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPtofCal2HitPar();

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
     * Method for setting the beam charge
     * @param charge the charge in terms of e
     */
    void SetBeamCharge(Int_t charge) { fBeamCharge = charge; }

    /**
     * Method for setting the y-position of the sweep.
     * If y != 0 this run will determine veff.
     * @param yPositon the y-position of the sweep
     */
    void SetYPosition(Double_t yPosition) { fYPosition = yPosition; }

  private:
    Int_t fBeamCharge;
    Int_t fYPosition;

    TH1D* fZScaleHistos[2 * PtofPaddlesPerPlane];
    TH1D* fTOffsetHistos[2 * PtofPaddlesPerPlane];

    R3BPtofHitPar* fPar;

    Int_t fNEvents;         /**< Event counter. */
    TClonesArray* fCalData; /**< Array with cal data - input data. */

  public:
    ClassDef(R3BPtofCal2HitPar, 1)
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
// -----              R3BPtofCal2Hit                      -----
// -----          Created Mar 1st 2017 by V. Wagner       -----
// -----       Convert cal data to detector hit data      -----
// ------------------------------------------------------------

#ifndef R3BPTOFCAL2HIT_H
#define R3BPTOFCAL2HIT_H

#include "FairTask.h"

#define PtofPaddlesPerPlane 8

class TClonesArray;
class R3BPtofHitPar;
class TArrayD;

class R3BPtofCal2Hit : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BPtofCal2Hit();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BPtofCal2Hit(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BPtofCal2Hit();

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

  private:
    void SetParameter();

    TClonesArray* fCalItems; /**< Array with CAL items - input data. */
    TClonesArray* fHitItems; /**< Array with HIT items - output data. */

    R3BPtofHitPar* fHitPar; /**< HIT parameter container. */

    Int_t fNEvents; /**< Event counter. */

    TArrayD fTOffset1; /**< an array with timeoffset parameters of modules */
    TArrayD fTOffset2; /**< an array with timeoffset parameters of modules */
    TArrayD fZScale;   /**< an array with zscale parameters of all modules */
    TArrayD fVEff;     /**< an array with veff parameters of all modules */

  public:
    ClassDef(R3BPtofCal2Hit, 1)
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

#ifndef R3BPTOFHITPAR_H
#define R3BPTOFHITPAR_H

#include "FairParGenericSet.h"
#include "FairParamList.h"
#include "TArrayD.h"

class R3BPtofHitPar : public FairParGenericSet
{
  public:
    R3BPtofHitPar(const char* name = "PtofHitPar",
                  const char* title = "Ptof Hit Calibration",
                  const char* context = "TestDefaultContext");
    ~R3BPtofHitPar(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    virtual void Print(Option_t* option = "") const;
    /** Accessor functions **/

    /**
     * Method to set the parameter of a module.
     * @param paddle the paddle index [1,12]
     * @param tOffset1 the first time offset
     * @param tOffset2 the second time offset
     * @param vEff the effective speed of light
     * @param zScale the charge scale
     */
    void SetParAt(Int_t paddle, Double_t tOffset1, Double_t tOffset2, Double_t zScale, Double_t vEff)
    {
        fTOffset1[paddle - 1] = tOffset1;
        fTOffset2[paddle - 1] = tOffset2;
        fZScale[paddle - 1] = zScale;
        fVEff[paddle - 1] = vEff;
    }

    /**
     * Method to get the time offset of a module.
     * @param paddle the paddle index [1,12]
     * @param side the side {1;2}
     * @return the time offset
     */
    Double_t GetTOffsetAt(Int_t paddle, Int_t side)
    {
        if (side == 1)
            return fTOffset1[paddle - 1];
        else
            return fTOffset2[paddle - 1];
    }

    /**
     * Method to get the z-scale of a module.
     * @param paddle the paddle index [1,12]
     * @return the z-scale offset
     */
    Double_t GetZScaletAt(Int_t paddle) { return fZScale[paddle - 1]; }

    /**
     * Method to get the effective speed of light of a module.
     * @param paddle the paddle index [1,12]
     * @return the effective speed of light
     */
    Double_t GetVEfftAt(Int_t paddle) { return fVEff[paddle - 1]; }

  private:
    TArrayD fTOffset1; /**< an array with timeoffset parameters of modules */
    TArrayD fTOffset2; /**< an array with timeoffset parameters of modules */
    TArrayD fZScale;   /**< an array with zscale parameters of all modules */
    TArrayD fVEff;     /**< an array with veff parameters of all modules */

    ClassDef(R3BPtofHitPar, 1);
};

#endif /* !R3BPTOFHITPAR_H*/
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

#ifndef R3BPTOFPARFACT_H
#define R3BPTOFPARFACT_H

#include "FairContFact.h"

#include "Rtypes.h"

class FairParSet;

class R3BPtofParFact : public FairContFact
{
  public:
    /**
     * Default constructor.
     */
    R3BPtofParFact();

    /**
     * Destructor.
     */
    ~R3BPtofParFact() {}

    /**
     * Method to create a parameter container.
     * Called by FairRuntimeDB singleton class.
     * @param c a parameter container.
     * @return an instance of created parameter set.
     */
    FairParSet* createContainer(FairContainer* c);

  private:
    /**
     * Method to specify a list of parameter containers managed by this factory.
     * Support for additional detrectors has to be implemented in this function.
     */
    void setAllContainers();

    ClassDef(R3BPtofParFact, 0);
};

#endif /* !R3BPTOFPARFACT_H */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoTof", payloadCode, "@",
"R3BGeoTofPar", payloadCode, "@",
"R3BGeoTofd", payloadCode, "@",
"R3BGeoTofdPar", payloadCode, "@",
"R3BPtofCal2Hit", payloadCode, "@",
"R3BPtofCal2HitPar", payloadCode, "@",
"R3BPtofHitPar", payloadCode, "@",
"R3BPtofMapped2Cal", payloadCode, "@",
"R3BPtofMapped2CalPar", payloadCode, "@",
"R3BPtofParFact", payloadCode, "@",
"R3BTof", payloadCode, "@",
"R3BTof2pDigiPar", payloadCode, "@",
"R3BTof2pDigitizer", payloadCode, "@",
"R3BTofContFact", payloadCode, "@",
"R3BTofDigiPar", payloadCode, "@",
"R3BTofDigitizer", payloadCode, "@",
"R3BTofd", payloadCode, "@",
"R3BTofdCal2Histo", payloadCode, "@",
"R3BTofdCal2HistoPar", payloadCode, "@",
"R3BTofdCal2Hit", payloadCode, "@",
"R3BTofdCal2HitPar", payloadCode, "@",
"R3BTofdCal2HitS454", payloadCode, "@",
"R3BTofdChangePar", payloadCode, "@",
"R3BTofdContFact", payloadCode, "@",
"R3BTofdDigiPar", payloadCode, "@",
"R3BTofdDigitizer", payloadCode, "@",
"R3BTofdDigitizerCal", payloadCode, "@",
"R3BTofdHitModulePar", payloadCode, "@",
"R3BTofdHitPar", payloadCode, "@",
"R3BTofdMapped2Cal", payloadCode, "@",
"R3BTofdMapped2CalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BTofDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BTofDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BTofDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BTofDict() {
  TriggerDictionaryInitialization_G__R3BTofDict_Impl();
}
