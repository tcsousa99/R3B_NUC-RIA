// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIr3bbasedIG__R3BbaseDict

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
#include "R3BModule.h"
#include "R3BDetector.h"
#include "R3BEventHeader.h"
#include "R3BEventHeaderCal2Hit.h"
#include "R3BOnlineSpectra.h"
#include "R3BOnlineSpectraDec2019.h"
#include "R3BOnlineSpectraPdc.h"
#include "R3BOnlineSpectraSfib.h"
#include "R3BGlobalAnalysis.h"
#include "R3BGlobalAnalysisS454.h"
#include "R3BTrackS454.h"
#include "R3BTrackerTestS454.h"
#include "R3BOnlineSpillAnalysis.h"
#include "R3BOnlineSpectraFiberTofds515.h"
#include "R3BOnlineSpectraLosStandalone.h"
#include "R3BOnlineSpectraSci2.h"
#include "R3BOnlineSpectraLosVsSci2.h"
#include "R3BFileSource.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BModule(void *p = 0);
   static void *newArray_R3BModule(Long_t size, void *p);
   static void delete_R3BModule(void *p);
   static void deleteArray_R3BModule(void *p);
   static void destruct_R3BModule(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BModule*)
   {
      ::R3BModule *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BModule >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BModule", ::R3BModule::Class_Version(), "", 26,
                  typeid(::R3BModule), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BModule::Dictionary, isa_proxy, 4,
                  sizeof(::R3BModule) );
      instance.SetNew(&new_R3BModule);
      instance.SetNewArray(&newArray_R3BModule);
      instance.SetDelete(&delete_R3BModule);
      instance.SetDeleteArray(&deleteArray_R3BModule);
      instance.SetDestructor(&destruct_R3BModule);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BModule*)
   {
      return GenerateInitInstanceLocal((::R3BModule*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BModule*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BDetector(void *p);
   static void deleteArray_R3BDetector(void *p);
   static void destruct_R3BDetector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDetector*)
   {
      ::R3BDetector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDetector >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDetector", ::R3BDetector::Class_Version(), "", 85,
                  typeid(::R3BDetector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BDetector::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDetector) );
      instance.SetDelete(&delete_R3BDetector);
      instance.SetDeleteArray(&deleteArray_R3BDetector);
      instance.SetDestructor(&destruct_R3BDetector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDetector*)
   {
      return GenerateInitInstanceLocal((::R3BDetector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDetector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BEventHeader(void *p = 0);
   static void *newArray_R3BEventHeader(Long_t size, void *p);
   static void delete_R3BEventHeader(void *p);
   static void deleteArray_R3BEventHeader(void *p);
   static void destruct_R3BEventHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventHeader*)
   {
      ::R3BEventHeader *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventHeader >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventHeader", ::R3BEventHeader::Class_Version(), "", 148,
                  typeid(::R3BEventHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BEventHeader::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventHeader) );
      instance.SetNew(&new_R3BEventHeader);
      instance.SetNewArray(&newArray_R3BEventHeader);
      instance.SetDelete(&delete_R3BEventHeader);
      instance.SetDeleteArray(&deleteArray_R3BEventHeader);
      instance.SetDestructor(&destruct_R3BEventHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventHeader*)
   {
      return GenerateInitInstanceLocal((::R3BEventHeader*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BEventHeaderCal2Hit(void *p);
   static void deleteArray_R3BEventHeaderCal2Hit(void *p);
   static void destruct_R3BEventHeaderCal2Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BEventHeaderCal2Hit*)
   {
      ::R3BEventHeaderCal2Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BEventHeaderCal2Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BEventHeaderCal2Hit", ::R3BEventHeaderCal2Hit::Class_Version(), "", 212,
                  typeid(::R3BEventHeaderCal2Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BEventHeaderCal2Hit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BEventHeaderCal2Hit) );
      instance.SetDelete(&delete_R3BEventHeaderCal2Hit);
      instance.SetDeleteArray(&deleteArray_R3BEventHeaderCal2Hit);
      instance.SetDestructor(&destruct_R3BEventHeaderCal2Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BEventHeaderCal2Hit*)
   {
      return GenerateInitInstanceLocal((::R3BEventHeaderCal2Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BEventHeaderCal2Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGlobalAnalysis(void *p = 0);
   static void *newArray_R3BGlobalAnalysis(Long_t size, void *p);
   static void delete_R3BGlobalAnalysis(void *p);
   static void deleteArray_R3BGlobalAnalysis(void *p);
   static void destruct_R3BGlobalAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGlobalAnalysis*)
   {
      ::R3BGlobalAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGlobalAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGlobalAnalysis", ::R3BGlobalAnalysis::Class_Version(), "R3BGlobalAnalysis.h", 52,
                  typeid(::R3BGlobalAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGlobalAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGlobalAnalysis) );
      instance.SetNew(&new_R3BGlobalAnalysis);
      instance.SetNewArray(&newArray_R3BGlobalAnalysis);
      instance.SetDelete(&delete_R3BGlobalAnalysis);
      instance.SetDeleteArray(&deleteArray_R3BGlobalAnalysis);
      instance.SetDestructor(&destruct_R3BGlobalAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGlobalAnalysis*)
   {
      return GenerateInitInstanceLocal((::R3BGlobalAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGlobalAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectra(void *p = 0);
   static void *newArray_R3BOnlineSpectra(Long_t size, void *p);
   static void delete_R3BOnlineSpectra(void *p);
   static void deleteArray_R3BOnlineSpectra(void *p);
   static void destruct_R3BOnlineSpectra(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectra*)
   {
      ::R3BOnlineSpectra *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectra >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectra", ::R3BOnlineSpectra::Class_Version(), "", 324,
                  typeid(::R3BOnlineSpectra), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectra::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectra) );
      instance.SetNew(&new_R3BOnlineSpectra);
      instance.SetNewArray(&newArray_R3BOnlineSpectra);
      instance.SetDelete(&delete_R3BOnlineSpectra);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectra);
      instance.SetDestructor(&destruct_R3BOnlineSpectra);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectra*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectra*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectra*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraDec2019(void *p = 0);
   static void *newArray_R3BOnlineSpectraDec2019(Long_t size, void *p);
   static void delete_R3BOnlineSpectraDec2019(void *p);
   static void deleteArray_R3BOnlineSpectraDec2019(void *p);
   static void destruct_R3BOnlineSpectraDec2019(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraDec2019*)
   {
      ::R3BOnlineSpectraDec2019 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraDec2019 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraDec2019", ::R3BOnlineSpectraDec2019::Class_Version(), "", 663,
                  typeid(::R3BOnlineSpectraDec2019), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraDec2019::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraDec2019) );
      instance.SetNew(&new_R3BOnlineSpectraDec2019);
      instance.SetNewArray(&newArray_R3BOnlineSpectraDec2019);
      instance.SetDelete(&delete_R3BOnlineSpectraDec2019);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraDec2019);
      instance.SetDestructor(&destruct_R3BOnlineSpectraDec2019);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraDec2019*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraDec2019*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraDec2019*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraPdc(void *p = 0);
   static void *newArray_R3BOnlineSpectraPdc(Long_t size, void *p);
   static void delete_R3BOnlineSpectraPdc(void *p);
   static void deleteArray_R3BOnlineSpectraPdc(void *p);
   static void destruct_R3BOnlineSpectraPdc(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraPdc*)
   {
      ::R3BOnlineSpectraPdc *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraPdc >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraPdc", ::R3BOnlineSpectraPdc::Class_Version(), "", 1057,
                  typeid(::R3BOnlineSpectraPdc), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraPdc::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraPdc) );
      instance.SetNew(&new_R3BOnlineSpectraPdc);
      instance.SetNewArray(&newArray_R3BOnlineSpectraPdc);
      instance.SetDelete(&delete_R3BOnlineSpectraPdc);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraPdc);
      instance.SetDestructor(&destruct_R3BOnlineSpectraPdc);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraPdc*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraPdc*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraPdc*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraSfib(void *p = 0);
   static void *newArray_R3BOnlineSpectraSfib(Long_t size, void *p);
   static void delete_R3BOnlineSpectraSfib(void *p);
   static void deleteArray_R3BOnlineSpectraSfib(void *p);
   static void destruct_R3BOnlineSpectraSfib(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraSfib*)
   {
      ::R3BOnlineSpectraSfib *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraSfib >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraSfib", ::R3BOnlineSpectraSfib::Class_Version(), "", 1186,
                  typeid(::R3BOnlineSpectraSfib), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraSfib::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraSfib) );
      instance.SetNew(&new_R3BOnlineSpectraSfib);
      instance.SetNewArray(&newArray_R3BOnlineSpectraSfib);
      instance.SetDelete(&delete_R3BOnlineSpectraSfib);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraSfib);
      instance.SetDestructor(&destruct_R3BOnlineSpectraSfib);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraSfib*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraSfib*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraSfib*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGlobalAnalysisS454(void *p = 0);
   static void *newArray_R3BGlobalAnalysisS454(Long_t size, void *p);
   static void delete_R3BGlobalAnalysisS454(void *p);
   static void deleteArray_R3BGlobalAnalysisS454(void *p);
   static void destruct_R3BGlobalAnalysisS454(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGlobalAnalysisS454*)
   {
      ::R3BGlobalAnalysisS454 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGlobalAnalysisS454 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGlobalAnalysisS454", ::R3BGlobalAnalysisS454::Class_Version(), "", 1609,
                  typeid(::R3BGlobalAnalysisS454), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGlobalAnalysisS454::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGlobalAnalysisS454) );
      instance.SetNew(&new_R3BGlobalAnalysisS454);
      instance.SetNewArray(&newArray_R3BGlobalAnalysisS454);
      instance.SetDelete(&delete_R3BGlobalAnalysisS454);
      instance.SetDeleteArray(&deleteArray_R3BGlobalAnalysisS454);
      instance.SetDestructor(&destruct_R3BGlobalAnalysisS454);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGlobalAnalysisS454*)
   {
      return GenerateInitInstanceLocal((::R3BGlobalAnalysisS454*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGlobalAnalysisS454*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackS454(void *p = 0);
   static void *newArray_R3BTrackS454(Long_t size, void *p);
   static void delete_R3BTrackS454(void *p);
   static void deleteArray_R3BTrackS454(void *p);
   static void destruct_R3BTrackS454(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackS454*)
   {
      ::R3BTrackS454 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackS454 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackS454", ::R3BTrackS454::Class_Version(), "", 1881,
                  typeid(::R3BTrackS454), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackS454::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackS454) );
      instance.SetNew(&new_R3BTrackS454);
      instance.SetNewArray(&newArray_R3BTrackS454);
      instance.SetDelete(&delete_R3BTrackS454);
      instance.SetDeleteArray(&deleteArray_R3BTrackS454);
      instance.SetDestructor(&destruct_R3BTrackS454);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackS454*)
   {
      return GenerateInitInstanceLocal((::R3BTrackS454*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackS454*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackerTestS454(void *p = 0);
   static void *newArray_R3BTrackerTestS454(Long_t size, void *p);
   static void delete_R3BTrackerTestS454(void *p);
   static void deleteArray_R3BTrackerTestS454(void *p);
   static void destruct_R3BTrackerTestS454(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackerTestS454*)
   {
      ::R3BTrackerTestS454 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackerTestS454 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackerTestS454", ::R3BTrackerTestS454::Class_Version(), "", 2243,
                  typeid(::R3BTrackerTestS454), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackerTestS454::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackerTestS454) );
      instance.SetNew(&new_R3BTrackerTestS454);
      instance.SetNewArray(&newArray_R3BTrackerTestS454);
      instance.SetDelete(&delete_R3BTrackerTestS454);
      instance.SetDeleteArray(&deleteArray_R3BTrackerTestS454);
      instance.SetDestructor(&destruct_R3BTrackerTestS454);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackerTestS454*)
   {
      return GenerateInitInstanceLocal((::R3BTrackerTestS454*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackerTestS454*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpillAnalysis(void *p = 0);
   static void *newArray_R3BOnlineSpillAnalysis(Long_t size, void *p);
   static void delete_R3BOnlineSpillAnalysis(void *p);
   static void deleteArray_R3BOnlineSpillAnalysis(void *p);
   static void destruct_R3BOnlineSpillAnalysis(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpillAnalysis*)
   {
      ::R3BOnlineSpillAnalysis *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpillAnalysis >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpillAnalysis", ::R3BOnlineSpillAnalysis::Class_Version(), "", 2579,
                  typeid(::R3BOnlineSpillAnalysis), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpillAnalysis::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpillAnalysis) );
      instance.SetNew(&new_R3BOnlineSpillAnalysis);
      instance.SetNewArray(&newArray_R3BOnlineSpillAnalysis);
      instance.SetDelete(&delete_R3BOnlineSpillAnalysis);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpillAnalysis);
      instance.SetDestructor(&destruct_R3BOnlineSpillAnalysis);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpillAnalysis*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpillAnalysis*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpillAnalysis*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraFiberTofds515(void *p = 0);
   static void *newArray_R3BOnlineSpectraFiberTofds515(Long_t size, void *p);
   static void delete_R3BOnlineSpectraFiberTofds515(void *p);
   static void deleteArray_R3BOnlineSpectraFiberTofds515(void *p);
   static void destruct_R3BOnlineSpectraFiberTofds515(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraFiberTofds515*)
   {
      ::R3BOnlineSpectraFiberTofds515 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraFiberTofds515 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraFiberTofds515", ::R3BOnlineSpectraFiberTofds515::Class_Version(), "", 3360,
                  typeid(::R3BOnlineSpectraFiberTofds515), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraFiberTofds515::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraFiberTofds515) );
      instance.SetNew(&new_R3BOnlineSpectraFiberTofds515);
      instance.SetNewArray(&newArray_R3BOnlineSpectraFiberTofds515);
      instance.SetDelete(&delete_R3BOnlineSpectraFiberTofds515);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraFiberTofds515);
      instance.SetDestructor(&destruct_R3BOnlineSpectraFiberTofds515);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraFiberTofds515*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraFiberTofds515*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraFiberTofds515*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraLosStandalone(void *p = 0);
   static void *newArray_R3BOnlineSpectraLosStandalone(Long_t size, void *p);
   static void delete_R3BOnlineSpectraLosStandalone(void *p);
   static void deleteArray_R3BOnlineSpectraLosStandalone(void *p);
   static void destruct_R3BOnlineSpectraLosStandalone(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraLosStandalone*)
   {
      ::R3BOnlineSpectraLosStandalone *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraLosStandalone >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraLosStandalone", ::R3BOnlineSpectraLosStandalone::Class_Version(), "", 3923,
                  typeid(::R3BOnlineSpectraLosStandalone), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraLosStandalone::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraLosStandalone) );
      instance.SetNew(&new_R3BOnlineSpectraLosStandalone);
      instance.SetNewArray(&newArray_R3BOnlineSpectraLosStandalone);
      instance.SetDelete(&delete_R3BOnlineSpectraLosStandalone);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraLosStandalone);
      instance.SetDestructor(&destruct_R3BOnlineSpectraLosStandalone);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraLosStandalone*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraLosStandalone*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosStandalone*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraSci2(void *p = 0);
   static void *newArray_R3BOnlineSpectraSci2(Long_t size, void *p);
   static void delete_R3BOnlineSpectraSci2(void *p);
   static void deleteArray_R3BOnlineSpectraSci2(void *p);
   static void destruct_R3BOnlineSpectraSci2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraSci2*)
   {
      ::R3BOnlineSpectraSci2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraSci2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraSci2", ::R3BOnlineSpectraSci2::Class_Version(), "", 4186,
                  typeid(::R3BOnlineSpectraSci2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraSci2::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraSci2) );
      instance.SetNew(&new_R3BOnlineSpectraSci2);
      instance.SetNewArray(&newArray_R3BOnlineSpectraSci2);
      instance.SetDelete(&delete_R3BOnlineSpectraSci2);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraSci2);
      instance.SetDestructor(&destruct_R3BOnlineSpectraSci2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraSci2*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraSci2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraSci2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BOnlineSpectraLosVsSci2(void *p = 0);
   static void *newArray_R3BOnlineSpectraLosVsSci2(Long_t size, void *p);
   static void delete_R3BOnlineSpectraLosVsSci2(void *p);
   static void deleteArray_R3BOnlineSpectraLosVsSci2(void *p);
   static void destruct_R3BOnlineSpectraLosVsSci2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BOnlineSpectraLosVsSci2*)
   {
      ::R3BOnlineSpectraLosVsSci2 *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BOnlineSpectraLosVsSci2 >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BOnlineSpectraLosVsSci2", ::R3BOnlineSpectraLosVsSci2::Class_Version(), "", 4339,
                  typeid(::R3BOnlineSpectraLosVsSci2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BOnlineSpectraLosVsSci2::Dictionary, isa_proxy, 4,
                  sizeof(::R3BOnlineSpectraLosVsSci2) );
      instance.SetNew(&new_R3BOnlineSpectraLosVsSci2);
      instance.SetNewArray(&newArray_R3BOnlineSpectraLosVsSci2);
      instance.SetDelete(&delete_R3BOnlineSpectraLosVsSci2);
      instance.SetDeleteArray(&deleteArray_R3BOnlineSpectraLosVsSci2);
      instance.SetDestructor(&destruct_R3BOnlineSpectraLosVsSci2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BOnlineSpectraLosVsSci2*)
   {
      return GenerateInitInstanceLocal((::R3BOnlineSpectraLosVsSci2*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosVsSci2*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BFileSource(void *p);
   static void deleteArray_R3BFileSource(void *p);
   static void destruct_R3BFileSource(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFileSource*)
   {
      ::R3BFileSource *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFileSource >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFileSource", ::R3BFileSource::Class_Version(), "", 4764,
                  typeid(::R3BFileSource), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFileSource::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFileSource) );
      instance.SetDelete(&delete_R3BFileSource);
      instance.SetDeleteArray(&deleteArray_R3BFileSource);
      instance.SetDestructor(&destruct_R3BFileSource);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFileSource*)
   {
      return GenerateInitInstanceLocal((::R3BFileSource*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFileSource*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BModule::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BModule::Class_Name()
{
   return "R3BModule";
}

//______________________________________________________________________________
const char *R3BModule::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BModule::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BModule::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BModule::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BModule*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDetector::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDetector::Class_Name()
{
   return "R3BDetector";
}

//______________________________________________________________________________
const char *R3BDetector::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDetector::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDetector::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDetector::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDetector*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BEventHeader::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventHeader::Class_Name()
{
   return "R3BEventHeader";
}

//______________________________________________________________________________
const char *R3BEventHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeader*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BEventHeaderCal2Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BEventHeaderCal2Hit::Class_Name()
{
   return "R3BEventHeaderCal2Hit";
}

//______________________________________________________________________________
const char *R3BEventHeaderCal2Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderCal2Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BEventHeaderCal2Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderCal2Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BEventHeaderCal2Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderCal2Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BEventHeaderCal2Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BEventHeaderCal2Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGlobalAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGlobalAnalysis::Class_Name()
{
   return "R3BGlobalAnalysis";
}

//______________________________________________________________________________
const char *R3BGlobalAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGlobalAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGlobalAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGlobalAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectra::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectra::Class_Name()
{
   return "R3BOnlineSpectra";
}

//______________________________________________________________________________
const char *R3BOnlineSpectra::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectra*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectra::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectra*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectra::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectra*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectra::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectra*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraDec2019::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraDec2019::Class_Name()
{
   return "R3BOnlineSpectraDec2019";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraDec2019::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraDec2019*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraDec2019::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraDec2019*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraDec2019::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraDec2019*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraDec2019::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraDec2019*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraPdc::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraPdc::Class_Name()
{
   return "R3BOnlineSpectraPdc";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraPdc::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraPdc*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraPdc::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraPdc*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraPdc::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraPdc*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraPdc::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraPdc*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraSfib::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraSfib::Class_Name()
{
   return "R3BOnlineSpectraSfib";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraSfib::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSfib*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraSfib::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSfib*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraSfib::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSfib*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraSfib::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSfib*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGlobalAnalysisS454::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGlobalAnalysisS454::Class_Name()
{
   return "R3BGlobalAnalysisS454";
}

//______________________________________________________________________________
const char *R3BGlobalAnalysisS454::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysisS454*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGlobalAnalysisS454::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysisS454*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGlobalAnalysisS454::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysisS454*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGlobalAnalysisS454::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGlobalAnalysisS454*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackS454::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackS454::Class_Name()
{
   return "R3BTrackS454";
}

//______________________________________________________________________________
const char *R3BTrackS454::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackS454*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackS454::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackS454*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackS454::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackS454*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackS454::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackS454*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackerTestS454::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackerTestS454::Class_Name()
{
   return "R3BTrackerTestS454";
}

//______________________________________________________________________________
const char *R3BTrackerTestS454::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerTestS454*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackerTestS454::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerTestS454*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackerTestS454::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerTestS454*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackerTestS454::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerTestS454*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpillAnalysis::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpillAnalysis::Class_Name()
{
   return "R3BOnlineSpillAnalysis";
}

//______________________________________________________________________________
const char *R3BOnlineSpillAnalysis::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpillAnalysis*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpillAnalysis::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpillAnalysis*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpillAnalysis::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpillAnalysis*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpillAnalysis::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpillAnalysis*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraFiberTofds515::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraFiberTofds515::Class_Name()
{
   return "R3BOnlineSpectraFiberTofds515";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraFiberTofds515::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraFiberTofds515*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraFiberTofds515::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraFiberTofds515*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraFiberTofds515::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraFiberTofds515*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraFiberTofds515::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraFiberTofds515*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraLosStandalone::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraLosStandalone::Class_Name()
{
   return "R3BOnlineSpectraLosStandalone";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraLosStandalone::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosStandalone*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraLosStandalone::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosStandalone*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraLosStandalone::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosStandalone*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraLosStandalone::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosStandalone*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraSci2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraSci2::Class_Name()
{
   return "R3BOnlineSpectraSci2";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraSci2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSci2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraSci2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSci2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraSci2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSci2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraSci2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraSci2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BOnlineSpectraLosVsSci2::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BOnlineSpectraLosVsSci2::Class_Name()
{
   return "R3BOnlineSpectraLosVsSci2";
}

//______________________________________________________________________________
const char *R3BOnlineSpectraLosVsSci2::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosVsSci2*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BOnlineSpectraLosVsSci2::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosVsSci2*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraLosVsSci2::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosVsSci2*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BOnlineSpectraLosVsSci2::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BOnlineSpectraLosVsSci2*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFileSource::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFileSource::Class_Name()
{
   return "R3BFileSource";
}

//______________________________________________________________________________
const char *R3BFileSource::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFileSource*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFileSource::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFileSource*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFileSource::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFileSource*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFileSource::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFileSource*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BModule::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BModule.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BModule::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BModule::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BModule(void *p) {
      return  p ? new(p) ::R3BModule : new ::R3BModule;
   }
   static void *newArray_R3BModule(Long_t nElements, void *p) {
      return p ? new(p) ::R3BModule[nElements] : new ::R3BModule[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BModule(void *p) {
      delete ((::R3BModule*)p);
   }
   static void deleteArray_R3BModule(void *p) {
      delete [] ((::R3BModule*)p);
   }
   static void destruct_R3BModule(void *p) {
      typedef ::R3BModule current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BModule

//______________________________________________________________________________
void R3BDetector::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDetector.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDetector::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDetector::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BDetector(void *p) {
      delete ((::R3BDetector*)p);
   }
   static void deleteArray_R3BDetector(void *p) {
      delete [] ((::R3BDetector*)p);
   }
   static void destruct_R3BDetector(void *p) {
      typedef ::R3BDetector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDetector

//______________________________________________________________________________
void R3BEventHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BEventHeader(void *p) {
      return  p ? new(p) ::R3BEventHeader : new ::R3BEventHeader;
   }
   static void *newArray_R3BEventHeader(Long_t nElements, void *p) {
      return p ? new(p) ::R3BEventHeader[nElements] : new ::R3BEventHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BEventHeader(void *p) {
      delete ((::R3BEventHeader*)p);
   }
   static void deleteArray_R3BEventHeader(void *p) {
      delete [] ((::R3BEventHeader*)p);
   }
   static void destruct_R3BEventHeader(void *p) {
      typedef ::R3BEventHeader current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventHeader

//______________________________________________________________________________
void R3BEventHeaderCal2Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BEventHeaderCal2Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BEventHeaderCal2Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BEventHeaderCal2Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BEventHeaderCal2Hit(void *p) {
      delete ((::R3BEventHeaderCal2Hit*)p);
   }
   static void deleteArray_R3BEventHeaderCal2Hit(void *p) {
      delete [] ((::R3BEventHeaderCal2Hit*)p);
   }
   static void destruct_R3BEventHeaderCal2Hit(void *p) {
      typedef ::R3BEventHeaderCal2Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BEventHeaderCal2Hit

//______________________________________________________________________________
void R3BGlobalAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGlobalAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGlobalAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGlobalAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGlobalAnalysis(void *p) {
      return  p ? new(p) ::R3BGlobalAnalysis : new ::R3BGlobalAnalysis;
   }
   static void *newArray_R3BGlobalAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGlobalAnalysis[nElements] : new ::R3BGlobalAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGlobalAnalysis(void *p) {
      delete ((::R3BGlobalAnalysis*)p);
   }
   static void deleteArray_R3BGlobalAnalysis(void *p) {
      delete [] ((::R3BGlobalAnalysis*)p);
   }
   static void destruct_R3BGlobalAnalysis(void *p) {
      typedef ::R3BGlobalAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGlobalAnalysis

//______________________________________________________________________________
void R3BOnlineSpectra::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectra.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectra::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectra::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectra(void *p) {
      return  p ? new(p) ::R3BOnlineSpectra : new ::R3BOnlineSpectra;
   }
   static void *newArray_R3BOnlineSpectra(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectra[nElements] : new ::R3BOnlineSpectra[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectra(void *p) {
      delete ((::R3BOnlineSpectra*)p);
   }
   static void deleteArray_R3BOnlineSpectra(void *p) {
      delete [] ((::R3BOnlineSpectra*)p);
   }
   static void destruct_R3BOnlineSpectra(void *p) {
      typedef ::R3BOnlineSpectra current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectra

//______________________________________________________________________________
void R3BOnlineSpectraDec2019::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraDec2019.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraDec2019::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraDec2019::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraDec2019(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraDec2019 : new ::R3BOnlineSpectraDec2019;
   }
   static void *newArray_R3BOnlineSpectraDec2019(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraDec2019[nElements] : new ::R3BOnlineSpectraDec2019[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraDec2019(void *p) {
      delete ((::R3BOnlineSpectraDec2019*)p);
   }
   static void deleteArray_R3BOnlineSpectraDec2019(void *p) {
      delete [] ((::R3BOnlineSpectraDec2019*)p);
   }
   static void destruct_R3BOnlineSpectraDec2019(void *p) {
      typedef ::R3BOnlineSpectraDec2019 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraDec2019

//______________________________________________________________________________
void R3BOnlineSpectraPdc::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraPdc.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraPdc::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraPdc::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraPdc(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraPdc : new ::R3BOnlineSpectraPdc;
   }
   static void *newArray_R3BOnlineSpectraPdc(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraPdc[nElements] : new ::R3BOnlineSpectraPdc[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraPdc(void *p) {
      delete ((::R3BOnlineSpectraPdc*)p);
   }
   static void deleteArray_R3BOnlineSpectraPdc(void *p) {
      delete [] ((::R3BOnlineSpectraPdc*)p);
   }
   static void destruct_R3BOnlineSpectraPdc(void *p) {
      typedef ::R3BOnlineSpectraPdc current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraPdc

//______________________________________________________________________________
void R3BOnlineSpectraSfib::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraSfib.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraSfib::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraSfib::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraSfib(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraSfib : new ::R3BOnlineSpectraSfib;
   }
   static void *newArray_R3BOnlineSpectraSfib(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraSfib[nElements] : new ::R3BOnlineSpectraSfib[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraSfib(void *p) {
      delete ((::R3BOnlineSpectraSfib*)p);
   }
   static void deleteArray_R3BOnlineSpectraSfib(void *p) {
      delete [] ((::R3BOnlineSpectraSfib*)p);
   }
   static void destruct_R3BOnlineSpectraSfib(void *p) {
      typedef ::R3BOnlineSpectraSfib current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraSfib

//______________________________________________________________________________
void R3BGlobalAnalysisS454::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGlobalAnalysisS454.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGlobalAnalysisS454::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGlobalAnalysisS454::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGlobalAnalysisS454(void *p) {
      return  p ? new(p) ::R3BGlobalAnalysisS454 : new ::R3BGlobalAnalysisS454;
   }
   static void *newArray_R3BGlobalAnalysisS454(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGlobalAnalysisS454[nElements] : new ::R3BGlobalAnalysisS454[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGlobalAnalysisS454(void *p) {
      delete ((::R3BGlobalAnalysisS454*)p);
   }
   static void deleteArray_R3BGlobalAnalysisS454(void *p) {
      delete [] ((::R3BGlobalAnalysisS454*)p);
   }
   static void destruct_R3BGlobalAnalysisS454(void *p) {
      typedef ::R3BGlobalAnalysisS454 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGlobalAnalysisS454

//______________________________________________________________________________
void R3BTrackS454::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackS454.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackS454::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackS454::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackS454(void *p) {
      return  p ? new(p) ::R3BTrackS454 : new ::R3BTrackS454;
   }
   static void *newArray_R3BTrackS454(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackS454[nElements] : new ::R3BTrackS454[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackS454(void *p) {
      delete ((::R3BTrackS454*)p);
   }
   static void deleteArray_R3BTrackS454(void *p) {
      delete [] ((::R3BTrackS454*)p);
   }
   static void destruct_R3BTrackS454(void *p) {
      typedef ::R3BTrackS454 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackS454

//______________________________________________________________________________
void R3BTrackerTestS454::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackerTestS454.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackerTestS454::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackerTestS454::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackerTestS454(void *p) {
      return  p ? new(p) ::R3BTrackerTestS454 : new ::R3BTrackerTestS454;
   }
   static void *newArray_R3BTrackerTestS454(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackerTestS454[nElements] : new ::R3BTrackerTestS454[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackerTestS454(void *p) {
      delete ((::R3BTrackerTestS454*)p);
   }
   static void deleteArray_R3BTrackerTestS454(void *p) {
      delete [] ((::R3BTrackerTestS454*)p);
   }
   static void destruct_R3BTrackerTestS454(void *p) {
      typedef ::R3BTrackerTestS454 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackerTestS454

//______________________________________________________________________________
void R3BOnlineSpillAnalysis::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpillAnalysis.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpillAnalysis::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpillAnalysis::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpillAnalysis(void *p) {
      return  p ? new(p) ::R3BOnlineSpillAnalysis : new ::R3BOnlineSpillAnalysis;
   }
   static void *newArray_R3BOnlineSpillAnalysis(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpillAnalysis[nElements] : new ::R3BOnlineSpillAnalysis[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpillAnalysis(void *p) {
      delete ((::R3BOnlineSpillAnalysis*)p);
   }
   static void deleteArray_R3BOnlineSpillAnalysis(void *p) {
      delete [] ((::R3BOnlineSpillAnalysis*)p);
   }
   static void destruct_R3BOnlineSpillAnalysis(void *p) {
      typedef ::R3BOnlineSpillAnalysis current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpillAnalysis

//______________________________________________________________________________
void R3BOnlineSpectraFiberTofds515::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraFiberTofds515.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraFiberTofds515::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraFiberTofds515::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraFiberTofds515(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraFiberTofds515 : new ::R3BOnlineSpectraFiberTofds515;
   }
   static void *newArray_R3BOnlineSpectraFiberTofds515(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraFiberTofds515[nElements] : new ::R3BOnlineSpectraFiberTofds515[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraFiberTofds515(void *p) {
      delete ((::R3BOnlineSpectraFiberTofds515*)p);
   }
   static void deleteArray_R3BOnlineSpectraFiberTofds515(void *p) {
      delete [] ((::R3BOnlineSpectraFiberTofds515*)p);
   }
   static void destruct_R3BOnlineSpectraFiberTofds515(void *p) {
      typedef ::R3BOnlineSpectraFiberTofds515 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraFiberTofds515

//______________________________________________________________________________
void R3BOnlineSpectraLosStandalone::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraLosStandalone.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraLosStandalone::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraLosStandalone::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraLosStandalone(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraLosStandalone : new ::R3BOnlineSpectraLosStandalone;
   }
   static void *newArray_R3BOnlineSpectraLosStandalone(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraLosStandalone[nElements] : new ::R3BOnlineSpectraLosStandalone[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraLosStandalone(void *p) {
      delete ((::R3BOnlineSpectraLosStandalone*)p);
   }
   static void deleteArray_R3BOnlineSpectraLosStandalone(void *p) {
      delete [] ((::R3BOnlineSpectraLosStandalone*)p);
   }
   static void destruct_R3BOnlineSpectraLosStandalone(void *p) {
      typedef ::R3BOnlineSpectraLosStandalone current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraLosStandalone

//______________________________________________________________________________
void R3BOnlineSpectraSci2::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraSci2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraSci2::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraSci2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraSci2(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraSci2 : new ::R3BOnlineSpectraSci2;
   }
   static void *newArray_R3BOnlineSpectraSci2(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraSci2[nElements] : new ::R3BOnlineSpectraSci2[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraSci2(void *p) {
      delete ((::R3BOnlineSpectraSci2*)p);
   }
   static void deleteArray_R3BOnlineSpectraSci2(void *p) {
      delete [] ((::R3BOnlineSpectraSci2*)p);
   }
   static void destruct_R3BOnlineSpectraSci2(void *p) {
      typedef ::R3BOnlineSpectraSci2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraSci2

//______________________________________________________________________________
void R3BOnlineSpectraLosVsSci2::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BOnlineSpectraLosVsSci2.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BOnlineSpectraLosVsSci2::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BOnlineSpectraLosVsSci2::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BOnlineSpectraLosVsSci2(void *p) {
      return  p ? new(p) ::R3BOnlineSpectraLosVsSci2 : new ::R3BOnlineSpectraLosVsSci2;
   }
   static void *newArray_R3BOnlineSpectraLosVsSci2(Long_t nElements, void *p) {
      return p ? new(p) ::R3BOnlineSpectraLosVsSci2[nElements] : new ::R3BOnlineSpectraLosVsSci2[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BOnlineSpectraLosVsSci2(void *p) {
      delete ((::R3BOnlineSpectraLosVsSci2*)p);
   }
   static void deleteArray_R3BOnlineSpectraLosVsSci2(void *p) {
      delete [] ((::R3BOnlineSpectraLosVsSci2*)p);
   }
   static void destruct_R3BOnlineSpectraLosVsSci2(void *p) {
      typedef ::R3BOnlineSpectraLosVsSci2 current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BOnlineSpectraLosVsSci2

//______________________________________________________________________________
void R3BFileSource::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFileSource.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFileSource::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFileSource::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BFileSource(void *p) {
      delete ((::R3BFileSource*)p);
   }
   static void deleteArray_R3BFileSource(void *p) {
      delete [] ((::R3BFileSource*)p);
   }
   static void destruct_R3BFileSource(void *p) {
      typedef ::R3BFileSource current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFileSource

namespace ROOT {
   static TClass *vectorlEULong64_tgR_Dictionary();
   static void vectorlEULong64_tgR_TClassManip(TClass*);
   static void *new_vectorlEULong64_tgR(void *p = 0);
   static void *newArray_vectorlEULong64_tgR(Long_t size, void *p);
   static void delete_vectorlEULong64_tgR(void *p);
   static void deleteArray_vectorlEULong64_tgR(void *p);
   static void destruct_vectorlEULong64_tgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ULong64_t>*)
   {
      vector<ULong64_t> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ULong64_t>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ULong64_t>", -2, "vector", 214,
                  typeid(vector<ULong64_t>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEULong64_tgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<ULong64_t>) );
      instance.SetNew(&new_vectorlEULong64_tgR);
      instance.SetNewArray(&newArray_vectorlEULong64_tgR);
      instance.SetDelete(&delete_vectorlEULong64_tgR);
      instance.SetDeleteArray(&deleteArray_vectorlEULong64_tgR);
      instance.SetDestructor(&destruct_vectorlEULong64_tgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ULong64_t> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEULong64_tgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<ULong64_t>*)0x0)->GetClass();
      vectorlEULong64_tgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEULong64_tgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEULong64_tgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t> : new vector<ULong64_t>;
   }
   static void *newArray_vectorlEULong64_tgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<ULong64_t>[nElements] : new vector<ULong64_t>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEULong64_tgR(void *p) {
      delete ((vector<ULong64_t>*)p);
   }
   static void deleteArray_vectorlEULong64_tgR(void *p) {
      delete [] ((vector<ULong64_t>*)p);
   }
   static void destruct_vectorlEULong64_tgR(void *p) {
      typedef vector<ULong64_t> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<ULong64_t>

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
  void TriggerDictionaryInitialization_G__R3BbaseDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/beammonitorData",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata/startrackData",
"/work/R3BRoot/los",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/rolu",
"/work/R3BRoot/r3bdata/roluData",
"/work/R3BRoot/sci2",
"/work/R3BRoot/r3bdata/sci2Data",
"/work/R3BRoot/sci8",
"/work/R3BRoot/r3bdata/sci8Data",
"/work/R3BRoot/tof",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/pdcData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/tcal",
"/work/R3BRoot/r3bdata/ptofData",
"/work/R3BRoot/fiber",
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/sampData",
"/work/R3BRoot/r3bdata/sfibData",
"/work/R3BRoot/r3bdata/musicData",
"/work/R3BRoot/r3bdata/frsData",
"/work/R3BRoot/tracker_rene",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/r3bbase/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BbaseDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BModule;
class R3BDetector;
class R3BEventHeader;
class R3BEventHeaderCal2Hit;
class __attribute__((annotate("$clingAutoload$R3BGlobalAnalysis.h")))  R3BGlobalAnalysis;
class R3BOnlineSpectra;
class R3BOnlineSpectraDec2019;
class R3BOnlineSpectraPdc;
class R3BOnlineSpectraSfib;
class R3BGlobalAnalysisS454;
class R3BTrackS454;
class R3BTrackerTestS454;
class R3BOnlineSpillAnalysis;
class R3BOnlineSpectraFiberTofds515;
class R3BOnlineSpectraLosStandalone;
class R3BOnlineSpectraSci2;
class R3BOnlineSpectraLosVsSci2;
class R3BFileSource;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BbaseDict dictionary payload"

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

#ifndef R3BMODULE_H
#define R3BMODULE_H

#include "FairModule.h"
#include "TGeoMatrix.h"
#include "TString.h"

class R3BModule : public FairModule
{
  public:
    R3BModule();

    R3BModule(const TString& name, const TString& title, const Bool_t active = kFALSE);

    R3BModule(const TString& name,
              const TString& title,
              const Bool_t active,
              const TString& geoFile,
              const TGeoTranslation& trans,
              const TGeoRotation& rot = TGeoRotation());

    R3BModule(const TString& name,
              const TString& title,
              const Bool_t active,
              const TString& geoFile,
              const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Construct geometry from root files */
    virtual void ConstructGeometry();     // override;
    virtual void ConstructRootGeometry(); // override;

    /** Method to setup the position of the detector-origin. */
    virtual void SetPosition(const TGeoTranslation& trans) { fCombiTrans.SetTranslation(trans); }

    /** Method to setup the rotation of the detector */
    virtual void SetRotation(const TGeoRotation& rot) { fCombiTrans.SetRotation(rot); }

  protected:
    TGeoCombiTrans fCombiTrans;

    ClassDef(R3BModule, 3)
    // ClassDefOverride(R3BModule, 3)
};

#endif // R3BMODULE_H
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

#ifndef R3BDETECTOR_H
#define R3BDETECTOR_H

#include "FairDetector.h"
#include "TGeoMatrix.h"
#include "TString.h"

class R3BDetector : public FairDetector
{
  public:
    R3BDetector();

    R3BDetector(const TString& name, const Int_t detId);

    R3BDetector(const TString& name,
                const Int_t detId,
                const TString& geoFile,
                const TGeoTranslation& trans,
                const TGeoRotation& rot = TGeoRotation());

    R3BDetector(const TString& name,
                const Int_t detId,
                const TString& geoFile,
                const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Construct geometry from root files */
    virtual void ConstructGeometry();     // override;
    virtual void ConstructRootGeometry(); // override;

    /** Method to setup the position of the detector-origin. */
    virtual void SetPosition(const TGeoTranslation& trans) { fCombiTrans.SetTranslation(trans); }

    /** Method to setup the rotation of the detector */
    virtual void SetRotation(const TGeoRotation& rot) { fCombiTrans.SetRotation(rot); }

    /** Method to setup the translation + rotation of the detector */
    virtual void SetCombiTrans(const TGeoCombiTrans& combi) { fCombiTrans = combi; }

    virtual void SetEnergyCut(const Double_t cutE) { fCutE = cutE; }

    virtual void SetActive(const Bool_t flag) { fActive = flag; }

  protected:
    TGeoCombiTrans fCombiTrans;
    Double_t fCutE;

    ClassDef(R3BDetector, 3)
    // ClassDefOverride(R3BDetector, 3)
};

#endif // R3BDETECTOR_H
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

#ifndef R3BEVENTHEADER_h
#define R3BEVENTHEADER_h

#include "FairEventHeader.h"

class R3BEventHeader : public FairEventHeader
{
  public:
    R3BEventHeader();
    virtual ~R3BEventHeader();

    void SetEventno(const Int_t eventno) { fEventno = eventno; }
    void SetTrigger(const Int_t trigger) { fTrigger = trigger; }
    void SetTimeStamp(const uint64_t timeStamp) { fTimeStamp = timeStamp; }
    void SetTpat(const Int_t tpat) { fTpat = tpat; }
    void SetTStart(const Double_t tStart) { fTStart = tStart; }

    Int_t GetEventno() const { return fEventno; }
    Int_t GetTrigger() const { return fTrigger; }
    uint64_t GetTimeStamp() const { return fTimeStamp; }
    Int_t GetTpat() const { return fTpat; }
    Double_t GetTStart() const { return fTStart; }

    virtual void Register(Bool_t Persistance = kTRUE);

  private:
    Int_t fEventno;
    Int_t fTrigger;
    uint64_t fTimeStamp;
    Int_t fTpat;
    Double_t fTStart;

    ClassDef(R3BEventHeader, 5)
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
// -----                R3BEventHeaderCal2Hit                -----
// -----            Created Jan 13th 2018 by M.Heil       -----
// ----- Convert mapped data to time calibrated data      -----
// ------------------------------------------------------------

#ifndef R3BEVENTHEADERMAPPED2CAL
#define R3BEVENTHEADERMAPPED2CAL

#include "FairTask.h"
#include "R3BEventHeader.h"

/**
 * An analysis task to apply TCAL calibration.
 * This class reads mapped items with TDC values and
 * produces time items with time in [ns]. It requires TCAL
 * calibration parameters, which are produced in a separate
 * analysis run containing R3BEventHeaderCal2HitPar task.
 */
class R3BEventHeaderCal2Hit : public FairTask
{
  public:
    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     * @param a_variant CTDC firmware variant, see R3BTCalEngine.
     * @param a_skip_spmt Don't process SPMT side for pure MAPMT tests.
     */
    R3BEventHeaderCal2Hit(int);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BEventHeaderCal2Hit();

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
    TString fName;
    R3BEventHeader* fHeader;

  public:
    ClassDef(R3BEventHeaderCal2Hit, 0)
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
// -----                  R3BOnlineSpectra                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRA
#define R3BONLINESPECTRA

#include "FairTask.h"
#include "R3BGlobalAnalysis.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectra : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectra();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectra(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectra();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosXYMCFD(Double_t offsetX, Double_t offsetY, Double_t veffX, Double_t veffY)
    {
        flosOffsetXV = offsetX;
        flosOffsetYV = offsetY;
        flosVeffXV = veffX;
        flosVeffYV = veffY;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT, Double_t offsetYT, Double_t veffXT, Double_t veffYT)
    {
        flosOffsetXT = offsetXT;
        flosOffsetYT = offsetYT;
        flosVeffXT = veffXT;
        flosVeffYT = veffYT;
    }

    inline void SetLosXYToT(Double_t offsetXQ, Double_t offsetYQ, Double_t veffXQ, Double_t veffYQ)
    {
        flosOffsetXQ = offsetXQ;
        flosOffsetYQ = offsetYQ;
        flosVeffXQ = veffXQ;
        flosVeffYQ = veffYQ;
    }
    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Methods for setting reset and readout times for Bmon
     */

    inline void SetBmon(Int_t time_range, Double_t time_step, Int_t sens_SEE, Int_t sens_IC)

    {
        reset_time = time_range;
        read_time = time_step;
        fsens_SEE = sens_SEE;
        fsens_IC = sens_IC;
    }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }
    void Reset_ROLU_Histo();
    void Reset_LOS_Histo();
    void Reset_SCI8_Histo();
    void Reset_BMON_Histo();
    void Reset_TOFD_Histo();
    void Reset_FIBERS_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;

    enum DetectorInstances
    {
        DET_AMS,
        DET_CALIFA,
        DET_BMON,
        DET_FI_FIRST,
        DET_FI1A = DET_FI_FIRST,
        DET_FI1B,
        DET_FI2A,
        DET_FI2B,
        DET_FI3A,
        DET_FI3B,
        DET_FI4,
        DET_FI5,
        DET_FI6,
        DET_FI7,
        DET_FI8,
        DET_FI9,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_L3T,
        DET_LOS,
        DET_MUSIC,
        DET_NEULAND,
        DET_PSPX,
        DET_PTOF,
        DET_ROLU,
        DET_SCI8,
        DET_STRAW,
        DET_TOFD,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Ams",  "Califa", "BeamMonitor", "Fi1a",  "Fi1b",    "Fi2a",
                                                "Fi2b", "Fi3a",   "Fi3b",        "Fi4",   "Fi5",     "Fi6",
                                                "Fi7",  "Fi8",    "Fi9",         "Fi10",  "Fi11",    "Fi12",
                                                "Fi13", "L3t",    "Los",         "Music", "Neuland", "Pspx",
                                                "Ptof", "Rolu",   "Sci8",        "Straw", "Tofd",    NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 256.,  256.,  256., 256,  512., 512.,  2048.,
                                      2048., 1024., 512., 512., 512., 1024., 1024. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */

    //   TClonesArray *fbmonMappedItems;

    Double_t flosVeffXV;
    Double_t flosVeffYV;
    Double_t flosOffsetXV;
    Double_t flosOffsetYV;
    Double_t flosVeffXT;
    Double_t flosVeffYT;
    Double_t flosOffsetXT;
    Double_t flosOffsetYT;
    Double_t flosVeffXQ;
    Double_t flosVeffYQ;
    Double_t flosOffsetXQ;
    Double_t flosOffsetYQ;

    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;

    unsigned long long time_previous_event = 0;

    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Int_t iclear_count = 1;
    UInt_t reset_time;         // time after which bmon spectra are reseted
    Double_t read_time;        // step in which scalers are read, in sec
    Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;
    TH1F* fh_IC_spill;
    TH1F* fh_SEE_spill;
    TH1F* fh_TOFDOR_spill;
    TH1F* fh_IC;
    TH1F* fh_SEE;
    TH1F* fh_TOFDOR;
    TH2F* fh_IC_cal;
    TH2F* fh_SEE_cal;

    TH2F* fh_rolu_tot;
    TH1F* fh_rolu_channels;

    TH1F* fh_sci8_channels;
    TH1F* fh_sci8_tres_MCFD;
    TH1F* fh_sci8_tres_TAMEX;
    TH1F* fh_sci8_tot_mean;
    TH1F* fh_tof_sci8;
    TH2F* fh_sci8_tot;
    TH1F* fh_sci8_dt_hits;
    TH1F* fh_sci8_dt_hits_l;
    TH1F* fh_sci8_dt_hits_t;
    TH1F* fh_sci8_multihit;
    TH2F* fh_sci8_multihitVFTX;
    TH2F* fh_sci8_multihitLEAD;
    TH2F* fh_sci8_multihitTRAI;

    TH1F* fh_los_channels;
    TH1F* fh_los_tres_MCFD;
    TH1F* fh_los_tres_TAMEX;
    TH1F* fh_los_tres_MTDC;
    TH1F* fh_los_tot_mean;
    TH2F* fh_los_tot;
    TH1F* fh_los_dt_hits;
    TH1F* fh_los_multihit;
    TH2F* fh_los_multihitVFTX;
    TH2F* fh_los_multihitLEAD;
    TH2F* fh_los_multihitTRAI;
    TH2F* fh_los_pos_MCFD;
    TH2F* fh_los_pos_TAMEX;
    TH2F* fh_los_pos_ToT;
    TH2F* fh_los_ihit_ToT;
    TH2F* fh_los_dt_hits_ToT;
    TH2F* fh_los_dt_first_ToT;
    TH2F* fh_los_dt_hits_VT;

    TH1F* fh_channels_Fib[NOF_FIB_DET];
    TH1F* fh_channels_single_Fib[NOF_FIB_DET];
    TH1F* fh_fibers_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH1F* fh_Fib_pos[NOF_FIB_DET];
    TH2F* fh_time_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_m_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_s_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_m_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_s_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToT_single_Fib[NOF_FIB_DET];

    TH1F* fh_tofd_channels[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_multihit[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_ToF[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_TotPm[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_dt[3];
    TH1F* fh_TimePreviousEvent;

    TH1F* fh_ptof_channels;
    TH1F* fh_ptof_channels_cut;
    TH1F* fh_ptof_test1;
    TH1F* fh_ptof_test2;
    TH1F* fh_ptof_TotPm1[N_PADDLE_MAX_PTOF];
    TH1F* fh_ptof_TotPm2[N_PADDLE_MAX_PTOF];

    TH1F* fh_pspx_channel_x[N_PSPX];      /**< PSPX x channel profile on mapped level */
    TH1F* fh_pspx_channel_y[N_PSPX];      /**< PSPX y channel profile on mapped level */
    TH1F* fh_pspx_multiplicity_x[N_PSPX]; /**< PSPX x multiplicity on mapped level */
    TH1F* fh_pspx_multiplicity_y[N_PSPX]; /**< PSPX y multiplicity on mapped level */
    TH1F* fh_pspx_mapped_energy[N_PSPX];  /**< PSPX energy on mapped level as first check */

    TH2F* fh_pspx_strips_position[N_PSPX];  /**< PSPX 2D position on mapped level */
    TH2F* fh_pspx_hit_position[N_PSPX];     /**< PSPX 2D position on hit level */
    TH2F* fh_pspx12_strips_position_corr_x; // correlation between x1 vs x2
    TH2F* fh_pspx12_strips_position_corr_y; // and y1 vs y2, ONLY valid for 2 detectors at the moment
    TH2F* fh_pspx12_cal_energy_corr;        // correlation between en1 und en2

    TH1F* fh_pspx_hit_energy[N_PSPX]; /**< PSPX energy on hit level */

    TH2F* fh_pspx_cal_energy_frontback[N_PSPX]; /**< PSPX energy front vs back on cal level */
    TH2F* fh_pspx_hit_multi[(N_PSPX + 1) / 2];

  public:
    ClassDef(R3BOnlineSpectra, 2)
};

#endif
// ------------------------------------------------------------
// -----              R3BOnlineSpectraDec2019             -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRADEC2019
#define R3BONLINESPECTRADEC2019

#include "FairTask.h"
#include "R3BGlobalAnalysis.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraDec2019 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraDec2019();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraDec2019(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraDec2019();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosXYMCFD(Double_t offsetX1,
                             Double_t offsetY1,
                             Double_t veffX1,
                             Double_t veffY1,
                             Double_t offsetX2,
                             Double_t offsetY2,
                             Double_t veffX2,
                             Double_t veffY2)
    {
        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT1,
                              Double_t offsetYT1,
                              Double_t veffXT1,
                              Double_t veffYT1,
                              Double_t offsetXT2,
                              Double_t offsetYT2,
                              Double_t veffXT2,
                              Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    inline void SetLosXYToT(Double_t offsetXQ1,
                            Double_t offsetYQ1,
                            Double_t veffXQ1,
                            Double_t veffYQ1,
                            Double_t offsetXQ2,
                            Double_t offsetYQ2,
                            Double_t veffXQ2,
                            Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }
    /* Method for setting number of LOS detectors */
    inline void SetNofLosModules(Int_t nDets) { fNofLosDetectors = nDets; }
    /**
     * Methods for setting condition on filling xs from LOS
     * 0 = no condition, 1 = condition from fiber
     */
    inline void SetLosPosition(Int_t optcond) { foptcond = optcond; }
    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Methods for setting reset and readout times for Bmon
     */
    inline void SetBmon(Int_t time_range, Double_t time_step, Double_t SpillLength, Double_t DAQ_dead_time)
    {
        reset_time = time_range;
        read_time = time_step;
        fDAQ_dead_time = DAQ_dead_time; // dead time in micro seconds
        fSpillLength = SpillLength;
    }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }

    void Reset_ROLU_Histo();
    void Reset_LOS_Histo();
    void Reset_SCI8_Histo();
    void Reset_BMON_Histo();
    void Reset_TOFD_Histo();
    void Reset_FIBERS_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;

    enum DetectorInstances
    {
        DET_AMS,
        DET_CALIFA,
        DET_BMON,
        DET_FI_FIRST,
        DET_FI1A = DET_FI_FIRST,
        DET_FI1B,
        DET_FI2A,
        DET_FI2B,
        DET_FI3A,
        DET_FI3B,
        DET_FI4,
        DET_FI5,
        DET_FI6,
        DET_FI7,
        DET_FI8,
        DET_FI9,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_L3T,
        DET_LOS,
        DET_MUSIC,
        DET_NEULAND,
        DET_PSPX,
        DET_PTOF,
        DET_ROLU,
        DET_SCI8,
        DET_STRAW,
        DET_TOFD,
        DET_SAMPLER,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Ams",   "Califa",  "BeamMonitor", "Fi1a", "Fi1b", "Fi2a", "Fi2b",
                                                "Fi3a",  "Fi3b",    "Fi4",         "Fi5",  "Fi6",  "Fi7",  "Fi8",
                                                "Fi9",   "Fi10",    "Fi11",        "Fi12", "Fi13", "L3t",  "Los",
                                                "Music", "Neuland", "Pspx",        "Ptof", "Rolu", "Sci8", "Straw",
                                                "Tofd",  "Sampler", NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 256.,  256.,  256., 256,  512., 512.,  2048.,
                                      2048., 1024., 512., 512., 512., 1024., 1024. };
    Double_t tof_fiber[NOF_FIB_DET] = { 2580., 2580., 256., 256,  512., 512.,  2048.,
                                        2048., 1024., 512., 512., 512., 1024., 1024. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */

    //   TClonesArray *fbmonMappedItems;

    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

#define NOF_LOS_DET 2

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;

    unsigned long long time_V_mem = 0, time_start = 0, time_mem = 0, time = 0, time_begin = 0;
    unsigned long long time_prev[NOF_LOS_DET] = { 0 };

    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    unsigned long long time_previous_event = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0, samplerBegin = 0;
    UInt_t spillCounter = 0;

    Bool_t spill_on = false;
    Bool_t spill_off = false;
    Bool_t spill_on_sampler = false;
    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Int_t iclear_count = 1;
    UInt_t reset_time;         // time after which bmon spectra are reseted
    Double_t read_time;        // step in which scalers are read, in sec
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz
    Double_t fSpillLength;
    Double_t fDAQ_dead_time;
    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;
    TH1F* fh_particle;
    TH1F* fh_particle_pois;
    TH1F* fh_TOFDOR_spill;
    TH1F* fh_spill_times;
    TH1F* fh_spill_times_zoom;
    TH1F* fh_spill_times_pois;
    TH1F* fh_spill_times_daq;
    TH1F* fh_spill_times_daq_first;
    TH1F* fh_frequencies;
    TH1F* fh_TOFDOR;
    TH1F* fh_rate;
    // TH1F *h3;
    TH1F* fh_TimePreviousEvent;

    TH1F* fh_sci8_channels;
    TH1F* fh_sci8_tres_MCFD;
    TH1F* fh_sci8_tres_TAMEX;
    TH1F* fh_sci8_tot_mean;
    TH1F* fh_tof_sci8;
    TH2F* fh_sci8_tot;
    TH1F* fh_sci8_dt_hits;
    TH1F* fh_sci8_dt_hits_l;
    TH1F* fh_sci8_dt_hits_t;
    TH1F* fh_sci8_multihit;
    TH2F* fh_sci8_multihitVFTX;
    TH2F* fh_sci8_multihitLEAD;
    TH2F* fh_sci8_multihitTRAI;

    TH2F* fh_rolu_tot;
    TH1F* fh_rolu_channels;

    TH1F* fh_los_channels[NOF_LOS_DET];
    TH1F* fh_los_tres_MCFD[NOF_LOS_DET];
    TH1F* fh_los_tres_TAMEX[NOF_LOS_DET];
    TH1F* fh_los_tres_MTDC;
    TH1F* fh_los_tot_mean[NOF_LOS_DET];
    TH2F* fh_los_tot[NOF_LOS_DET];
    TH1F* fh_los_multihit[NOF_LOS_DET];
    TH2F* fh_los_multihitVFTX[NOF_LOS_DET];
    TH2F* fh_los_multihitLEAD[NOF_LOS_DET];
    TH2F* fh_los_multihitTRAI[NOF_LOS_DET];
    TH2F* fh_los_pos_MCFD[NOF_LOS_DET];
    TH2F* fh_los_pos_TAMEX[NOF_LOS_DET];
    TH2F* fh_los_pos_ToT[NOF_LOS_DET];
    TH2F* fh_los_ihit_ToT[NOF_LOS_DET];
    TH2F* fh_los_dt_hits_ToT[NOF_LOS_DET];
    TH2F* fh_los_ToT_vs_ToT;

    TH1F* fh_los_TOF[NOF_LOS_DET];
    TH1F* fh_los_dt_hits[NOF_LOS_DET];
    TH2F* fh_los_dt_first_ToT[NOF_LOS_DET];
    TH1F* fh_dt_hits[NOF_LOS_DET];

    TH1F* fh_channels_Fib[NOF_FIB_DET];
    TH1F* fh_channels_single_Fib[NOF_FIB_DET];
    TH1F* fh_fibers_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH2F* fh_Fib_pos_xy[NOF_FIB_DET];
    TH2F* fh_time_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_m_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_s_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_m_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_s_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToT_single_Fib[NOF_FIB_DET];

    TH1F* fh_tofd_channels[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_multihit[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_ToF[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_TotPm[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_dt[3];

    TH1F* fh_ptof_channels;
    TH1F* fh_ptof_channels_cut;
    TH1F* fh_ptof_test1;
    TH1F* fh_ptof_test2;
    TH1F* fh_ptof_TotPm1[N_PADDLE_MAX_PTOF];
    TH1F* fh_ptof_TotPm2[N_PADDLE_MAX_PTOF];

    TH1F* fh_pspx_channel_x[N_PSPX];      /**< PSPX x channel profile on mapped level */
    TH1F* fh_pspx_channel_y[N_PSPX];      /**< PSPX y channel profile on mapped level */
    TH1F* fh_pspx_multiplicity_x[N_PSPX]; /**< PSPX x multiplicity on mapped level */
    TH1F* fh_pspx_multiplicity_y[N_PSPX]; /**< PSPX y multiplicity on mapped level */

    TH2F* fh_pspx_strips_position[N_PSPX];        /**< PSPX 2D position on mapped level */
    TH2F* fh_pspx_hit_position[(N_PSPX + 1) / 2]; /**< PSPX 2D position on hit level */

    TH1F* fh_pspx_hit_energy[(N_PSPX + 1) / 2]; /**< PSPX energy on hit level */
    TH2F* fh_pspx_cal_energy_frontback[N_PSPX]; /**< PSPX energy front vs back on cal level */

  public:
    ClassDef(R3BOnlineSpectraDec2019, 2)
};

#endif
// ------------------------------------------------------------
// -----              R3BOnlineSpectraPdc             -----
// -----            Created July-2020 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRAPDC
#define R3BONLINESPECTRAPDC

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

#define N_PLANE_MAX_PDC 4
/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraPdc : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraPdc();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraPdc(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraPdc();

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

    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    void Reset_PDC_Histo();

  private:
    TClonesArray* fMappedItems; /**< Array with Cal items - input data. */
    TClonesArray* fCalItems;    /**< Array with Cal items - input data. */
    TClonesArray* fHitItems;    /**< Array with Cal items - input data. */

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Int_t fNEvents;

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;

    TH1F* fh_Pdc_Wire[N_PLANE_MAX_PDC];
    TH2F* fh_Pdc_Tot[N_PLANE_MAX_PDC];
    TH2F* fh_Pdc_ToF[N_PLANE_MAX_PDC];
    TH2F* fh_Pdc_xy[N_PLANE_MAX_PDC];
    TH2F* fh_Pdc_Time[N_PLANE_MAX_PDC];
    TH2F* fh_Pdc_Wire_vs_Events[N_PLANE_MAX_PDC];

  public:
    ClassDef(R3BOnlineSpectraPdc, 2)
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
// -----                  R3BOnlineSpectraSfib                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRASFIB
#define R3BONLINESPECTRASFIB

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TF1.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraSfib : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraSfib();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraSfib(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraSfib();

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
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    void Reset_SFIB_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;

    enum DetectorInstances
    {
        DET_SFIB,
        DET_MAX
    };
    const char* fDetectorNames[DET_MAX + 1] = { "Sfib", NULL };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    TF1* xyline;

    TH2F* fh_sfib_Tot_top;
    TH1F* fh_sfib_Tot_top1d;
    TH2F* fh_sfib_Tot_top_g;
    TH1F* fh_sfib_Tot_top1d_g;

    TH2F* fh_sfib_Tot_bot;
    TH1F* fh_sfib_Tot_bot1d;
    TH2F* fh_sfib_Tot_bot_g;
    TH1F* fh_sfib_Tot_bot1d_g;

    TH1F* fh_sfib_channels;
    TH1F* fh_sfib_channels_top;
    TH1F* fh_sfib_channels_bot;
    TH2F* fh_sfib_channels_topvsbot;

    TH2F* fh_sfib_tot_tvb;

    TH1F* fh_sfib_channels_g;
    // TH2F* fh_sfib_tofd;
    // TH2F* fh_sfib_pspx;
    TH1F* fh_sfib_fmult;
    TH1F* fh_sfib_cmult;
    TH1F* fh_sfib_fmult_g;
    TH1F* fh_sfib_cmult_g;
    TH1F* fh_sfib_tot_ch_top1;
    TH1F* fh_sfib_tot_ch_top2;
    TH1F* fh_sfib_tot_ch_bot1;
    TH1F* fh_sfib_tot_ch_bot2;
    TH1F* fh_sfib_tot_max_top1;
    TH1F* fh_sfib_tot_max_top2;
    TH1F* fh_sfib_tot_max_bot1;
    TH1F* fh_sfib_tot_max_bot2;
    TH2F* fh_sfib_tot_ch_max_top1;
    TH2F* fh_sfib_tot_ch_max_top2;
    TH2F* fh_sfib_tot_ch_max_bot1;
    TH2F* fh_sfib_tot_ch_max_bot2;
    TH2F* fh_sfib_tot_ch_topbot1;
    TH1F* fh_sfib_multi;
    TH1F* fh_sfib_clus;
    TH2F* fh_sfib_multi_clus;
    TH2F* fh_sfib_multi_ch_topbot1;
    TH1F* fh_sfib_tot_top_multi1;
    TH1F* fh_sfib_tot_top_multi2;

  public:
    ClassDef(R3BOnlineSpectraSfib, 1)
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
// -----                  R3BGlobalAnalysis                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BGLOBALANALYSIS
#define R3BGLOBALANALYSIS

#define N_PLANE_MAX_TOFD 4
#define N_PADDLE_MAX_TOFD 50
#define N_PADDLE_MAX_PTOF 100
#define N_FIBER_PLOT_2019 520 // range to plot
#define N_FIBER_PLOT 1050 // range to plot

#define N_PSPX 2
#define N_STRIPS_PSPX 32
#define PSPX_SPLITTER 0   // sstorck: set this variable to 1 if signals are split into energy and position readout

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

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BGlobalAnalysis : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BGlobalAnalysis();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BGlobalAnalysis(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BGlobalAnalysis();

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

    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }

    //   virtual void SetParContainers();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;

    enum DetectorInstances
    {
        DET_AMS,
        DET_CALIFA,
        DET_FI_FIRST,
        DET_FI1A = DET_FI_FIRST,
        DET_FI1B,
        DET_FI2A,
        DET_FI2B,
        DET_FI3A,
        DET_FI3B,
        DET_FI4,
        DET_FI5,
        DET_FI6,
        DET_FI7,
        DET_FI8,
        DET_FI9,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_L3T,
        DET_LOS,
        DET_MUSIC,
        DET_NEULAND,
        DET_PSPX,
        DET_PTOF,
        DET_ROLU,
        DET_SCI8,
        DET_STRAW,
        DET_TOFD,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Ams",  "Califa", "Fi1a",  "Fi1b", "Fi2a",  "Fi2b",    "Fi3a", "Fi3b",
                                                "Fi4",  "Fi5",    "Fi6",   "Fi7",  "Fi8",   "Fi9",     "Fi10", "Fi11",
                                                "Fi12", "Fi13",   "L3t",   "Los",  "Music", "Neuland", "Pspx", "Ptof",
                                                "Rolu", "Sci8",   "Straw", "Tofd", NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 256.,  256.,  256., 256., 512., 512.,  2048.,
                                      2048., 1024., 512., 512., 512., 1024., 1024. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Double_t fClockFreq;    /**< Clock cycle in [ns]. */
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    unsigned long long t0_prev = 0;
    Double_t time_previous_event = 0;

    Int_t fNEvents = 0;   /**< Event counter. */
    Int_t fFibEvents = 0; /**< Event counter. */
    Double_t max_values[NOF_FIB_DET][2048];
    Int_t FibMax[NOF_FIB_DET];

    TH2F* fhChargeLosTofD;
    TH2F* fh_los_pos;

    TH1F* fh_channels_Fib[NOF_FIB_DET];
    TH1F* fh_fibers_Fib[NOF_FIB_DET];
    TH1F* fh_fiber_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH1F* fh_xpos_Fib[NOF_FIB_DET];
    TH1F* fh_ypos_Fib[NOF_FIB_DET];

    TH2F* fh_time_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_m_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_s_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_m_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_s_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Events[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd_y[NOF_FIB_DET];

    TH2F* fh_Fib_vs_Fib[NOF_FIB_DET][NOF_FIB_DET];
    TH2F* fh_Fib_dx[NOF_FIB_DET][NOF_FIB_DET];

    TH2F* fh_Cave_position;

    TH2F* fh_tofd_pos;
    TH1F* fh_tofd_charge;
    TH1F* fh_TimePreviousEvent;
    TH1F* fh_tofd_mult;

    TH1F* fh_ptof_channels;
    TH1F* fh_ptof_channels_cut;
    TH1F* fh_ptof_test1;
    TH1F* fh_ptof_test2;
    TH1F* fh_ptof_TotPm1[N_PADDLE_MAX_PTOF];
    TH1F* fh_ptof_TotPm2[N_PADDLE_MAX_PTOF];

    TH1F* fh_pspx_strips_psp[N_PSPX];
    TH1F* fh_pspx_energy_psp[N_PSPX];
    TH1F* fh_pspx_multiplicity_psp[N_PSPX];

    TH2F* fh_pspx_pos1_strips;
    TH2F* fh_pspx_pos2_strips;
    TH2F* fh_pspx_pos1_energy;
    TH2F* fh_pspx_pos2_energy;

    TH2F* fh_pspx_cor_x_strips;
    TH2F* fh_pspx_cor_y_strips;
    TH2F* fh_pspx_cor_x_energy;
    TH2F* fh_pspx_cor_y_energy;

    TH2F* fh_ToF_vs_events[NOF_FIB_DET];

  public:
    ClassDef(R3BGlobalAnalysis, 1)
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
// -----                  R3BGlobalAnalysisS454                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BGLOBALANALYSISS454
#define R3BGLOBALANALYSISS454

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>

#include "TClonesArray.h"
#include "TMath.h"
#include <TLorentzVector.h>
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BGlobalAnalysisS454 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BGlobalAnalysisS454();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BGlobalAnalysisS454(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BGlobalAnalysisS454();

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
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Methods for setting reset and readout times for Bmon
     */
    inline void SetBmon(Int_t sens_SEE, Int_t sens_IC)
    {
        fsens_SEE = sens_SEE;
        fsens_IC = sens_IC;
    }

    /**
     * Methods for setting cuts
     */
    inline void SetCuts(Bool_t cuts)
    {
        fCuts = cuts;
    }

    inline void SetGhost(Bool_t ghost)
    {
        fGhost = ghost;
    }

    inline void SetPairs(Bool_t p)
    {
        fPairs = p;
    }

    inline void SetBfield(Int_t B)
    {
        fB = B;
    }

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;
    TClonesArray* fMCTrack;
    TClonesArray* fTrack;


    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
	Bool_t fCuts;
	Bool_t fGhost;
	Bool_t fPairs;
	Int_t fB;
	Bool_t tracker = true;
	
    unsigned long long time_start = 0, time = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    Int_t maxevent;

    Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz
    Double_t counts_SEE = 0;
    Double_t counts_IC = 0;
    Double_t counts_TofD = 0;

	Double_t XHe, YHe, ZHe, XC, YC, ZC, THe, TC;	
	Double_t pHex, pHey, pHez, pCx, pCy, pCz;
	Double_t Pxf, Pyf, Pzf, Xf, Yf, Zf, Pf_tot;

	Double_t amu = 931.49410242;
//	Double_t mHe = 4.00260325413*amu;
//	Double_t mC = 12. * amu;
	Double_t mHe = 3727.409;
	Double_t mC = 11174.950;
	Double_t mO = 15.99065084 * amu;
	
    TLorentzVector alpha, carbon, oxygen;
    TLorentzVector alpha_cm, carbon_cm, oxygen_cm;
    TLorentzVector photon;

	Int_t Q = 0;
	Double_t tPrev[10];
	Int_t detPrev[10];
	
	Int_t counter1 = 0;
	Int_t counter2 = 0;
	Int_t counter3 = 0;
	Int_t counter4 = 0;
	Int_t countdet;
	
    UInt_t num_spills = 0;

    TH1F* fh_Tpat;
    TH1F* fh_Trigger;
    TH1F* fh_IC;
    TH1F* fh_SEE;
    TH1F* fh_TOFDOR;
    TH2F* fh_Cave_position;
    TH2F* fh_target_xy;
    TH1F* fh_target_px;
    TH1F* fh_target_py;
    TH1F* fh_target_pz;
    TH1F* fh_target_p;
    TH1F* fh_chi2;
    TH1F* fh_px_He;
    TH1F* fh_py_He;
    TH1F* fh_pz_He;
    TH1F* fh_p_He;
    TH1F* fh_px_C;
    TH1F* fh_py_C;
    TH1F* fh_pz_C;
    TH1F* fh_p_C;

    TH2F* fh_chiy_vs_chix_He;
    TH2F* fh_chiy_vs_chix_C;
    

    TH1F* fh_dx;
    TH1F* fh_dy;
    TH1F* fh_dz;
    TH1F* fh_dpx;
    TH1F* fh_dpy;
    TH1F* fh_dpz;
    TH1F* fh_dp;
    TH2F* fh_thetax_dpx;
    TH2F* fh_thetax_dpx_abs;
    TH2F* fh_thetay_dpy;
    TH2F* fh_x_dpx;
    TH2F* fh_y_dpy;
    TH2F* fh_thetax_dpy;
    TH2F* fh_thetay_dpx;
    TH2F* fh_dpy_dpx;
    TH2F* fh_px_px_cm;
    TH2F* fh_py_py_cm;
    TH2F* fh_pz_pz_cm;
    TH2F* fh_px_px;
    TH2F* fh_py_py;
    TH2F* fh_pz_pz;
    

	TH1F* fh_theta26_simu;
	TH1F* fh_Erel_simu;
	TH1F* fh_theta26;
	TH1F* fh_theta_16O;	
	TH1F* fh_phi_16O;	
	TH1F* fh_theta26_cm;	
	TH1F* fh_phi26_cm;
	TH1F* fh_theta_4He_cm;
	TH1F* fh_phi_4He_cm;
	TH1F* fh_phi_bc_cm;
	TH1F* fh_theta_bc_cm;
	TH1F* fh_theta_12C_cm;
	TH1F* fh_phi_12C_cm;
	TH1F* fh_Erel;
	TH1F* fh_ErelL;
	TH1F* fh_ErelR;
	TH1F* fh_ErelB;
	TH2F* fh_phi_bc_cm_polar;

	TH2F* fh_dErel_vs_x;
	TH2F* fh_dErel_vs_y;
	
  public:
    ClassDef(R3BGlobalAnalysisS454, 1)
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
// -----                  R3BTrackS454                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BTRACKS454
#define R3BTRACKS454
#define N_PLANE_MAX_TOFD 4
#define N_PADDLE_MAX_TOFD 50
#define N_PADDLE_MAX_PTOF 100
#define N_PSPX_S454 4

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include "TCutG.h"

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BTrackS454 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTrackS454();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTrackS454(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTrackS454();

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

    virtual void Output1(Double_t tracker[6], Double_t chi2[2]);
    virtual void Output2(Double_t tracker[6], Double_t chi2[2]);

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - onspill, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Methods for setting reset and readout times for Bmon
     */
    inline void SetBmon(Int_t sens_SEE, Int_t sens_IC)
    {
        fsens_SEE = sens_SEE;
        fsens_IC = sens_IC;
    }

    /**
     * Methods for setting cuts
     */
    inline void SetCuts(Bool_t cuts)
    {
        fCuts = cuts;
    }

    inline void SetGraphicalCuts(Bool_t graphCuts)
    {
        fGraphCuts = graphCuts;
    }

    inline void SetGhost(Bool_t ghost)
    {
        fGhost = ghost;
    }

    inline void SetPairs(Bool_t p)
    {
        fPairs = p;
    }

    inline void SetBfield(Int_t B)
    {
        fB = B;
    }
    inline void SetSimu(Int_t simu)
    {
        fSimu = simu;
    }

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;
    TClonesArray* fMCTrack;
    TClonesArray* fTrackItems;
    Int_t fNofTrackItems;


    enum DetectorInstances
    {
        DET_CALIFA,
        DET_BMON,
        DET_ROLU,
        DET_FI_FIRST,
        DET_FI3A = DET_FI_FIRST,
        DET_FI3B,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_TOFD,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Califa", "BeamMonitor", "Rolu", "Fi3a", "Fi3b", "Fi10",
                                                "Fi11",   "Fi12",        "Fi13", "Tofd", NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 512., 512., 2048., 2048., 2048., 2048. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
	Bool_t fCuts;
	Bool_t fGhost;
	Bool_t fPairs;
	Bool_t fGraphCuts;
	Bool_t fSimu;
	Int_t fB;
	Bool_t tracker = true;
	Double_t delta;

	TCutG *cut_fi11_fi3a;
	TCutG *cut_fi12_fi3b;
	TCutG *cut_Fi13vsFi11;
	TCutG *cut_Fi10vsFi12;
	
    unsigned long long time_start = 0, time = 0;
    unsigned long long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    Int_t maxevent;

    Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz
    Double_t counts_SEE = 0;
    Double_t counts_IC = 0;
    Double_t counts_TofD = 0;

	Double_t XHes, YHes, ZHes, XCs, YCs, ZCs, THes, TCs;
	Double_t pHexs, pHeys, pHezs, pCxs, pCys, pCzs, pHes, pCs;
	
	Double_t amu = 931.49410242;
	Double_t pHex, pHey, pHez, pCx, pCy, pCz;
	Double_t Pxf, Pyf, Pzf, Xf, Yf, Zf, Pf_tot;
//	Double_t mHe = 4.00260325413*amu;
//	Double_t mC = 12. * amu;
	Double_t mHe = 3727.409;
	Double_t mC = 11174.950;
	
	Int_t Q = 0;
	Double_t tPrev[10];
	Int_t detPrev[10];
	
	Int_t counter1 = 0;
	Int_t counter2 = 0;
	Int_t counter3 = 0;
	Int_t counter4 = 0;
	Int_t counterTofd = 0;
	Int_t counterTofdMulti = 0;
	Int_t counterCalifa = 0;
	Int_t counterWrongTpat = 0;
	Int_t counterWrongTrigger = 0;
	Int_t counterRolu = 0;
	Int_t counterTracker = 0;
	Int_t countdet;
	Double_t hits1 = 0;
	Double_t hits10 = 0;
	Double_t hits10bc = 0;
	Double_t hits11 = 0;
	Double_t hits11bc = 0;
	Double_t hits12 = 0;
	Double_t hits12bc = 0;
	Double_t hits13 = 0;
	Double_t hits13bc = 0;

    UInt_t num_spills = 0;

	Int_t ndet = 10;
	
    TH1F* fh_Tpat;
    TH1F* fh_Trigger;
    TH1F* fh_IC;
    TH1F* fh_SEE;
    TH1F* fh_TOFDOR;

    TH2F* fh_califa_energy;
	
    TH2F* fh_xy_Fib[NOF_FIB_DET];
    TH2F* fh_xy_Fib_ac[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib_ac[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH2F* fh_Fib_ToF_ac[NOF_FIB_DET];
    TH2F* fh_Fib_Time[NOF_FIB_DET];
    TH2F* fh_Fib_Time_ac[NOF_FIB_DET];
    TH2F* fh_ToT_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_Fib_ac[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events_ac[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd_ac[NOF_FIB_DET];
    TH2F* fh_ToF_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToF_vs_Events_ac[NOF_FIB_DET];

	TH2F* fh_Fib13_vs_Fib11;
	TH2F* fh_Fib13_vs_Fib11_dx;
	TH2F* fh_Fib11_vs_Fib3a;
	TH2F* fh_Fib11_vs_Fib3a_dx;
	TH2F* fh_Fib10_vs_Fib12;
	TH2F* fh_Fib10_vs_Fib12_dx;
	TH2F* fh_Fib12_vs_Fib3b;
	TH2F* fh_Fib12_vs_Fib3b_dx;

	TH2F* fh_Fib13_vs_Fib11_back;
	TH2F* fh_Fib13_vs_Fib11_dx_back;
	TH2F* fh_Fib11_vs_Fib3a_back;
	TH2F* fh_Fib11_vs_Fib3a_dx_back;
	TH2F* fh_Fib10_vs_Fib12_back;
	TH2F* fh_Fib10_vs_Fib12_dx_back;
	TH2F* fh_Fib12_vs_Fib3b_back;
	TH2F* fh_Fib12_vs_Fib3b_dx_back;

    TH2F* fh_Cave_position;

    TH2F* fh_xy_tofd;
    TH2F* fh_xy_tofd_ac;
    TH1F* fh_tofd_charge;
    TH1F* fh_tofd_charge_ac;
    TH1F* fh_tofd_time;
    TH1F* fh_tofd_time_ac;
    TH1F* fh_TimePreviousEvent;
    TH1F* fh_tofd_mult;
    TH1F* fh_tofd_mult_ac;
	TH2F* fh_tofd_q2_vs_q1;
	TH2F* fh_tofd_q2_vs_q1_ac;

    TH2F* fh_target_xy;
    TH1F* fh_target_px;
    TH1F* fh_target_py;
    TH1F* fh_target_pz;
    TH1F* fh_target_p;
    TH1F* fh_chi2;
    TH1F* fh_px_He;
    TH1F* fh_py_He;
    TH1F* fh_pz_He;
    TH1F* fh_p_He;
    TH1F* fh_px_C;
    TH1F* fh_py_C;
    TH1F* fh_pz_C;
    TH1F* fh_p_C;

    TH2F* fh_chiy_vs_chix;
    

    TH1F* fh_dx;
    TH1F* fh_dy;
    TH1F* fh_dz;
    TH1F* fh_dpx;
    TH1F* fh_dpy;
    TH1F* fh_dpz;
    TH1F* fh_dp;
    TH2F* fh_thetax_dpx;
    TH2F* fh_thetax_dpx_abs;
    TH2F* fh_thetay_dpy;
    TH2F* fh_x_dpx;
    TH2F* fh_y_dpy;
    TH2F* fh_thetax_dpy;
    TH2F* fh_thetay_dpx;
    TH2F* fh_dpy_dpx;

	TH1F* fh_theta26_simu;
	TH1F* fh_Erel_simu;
	TH1F* fh_theta26;
	TH1F* fh_Erel;

	TH2F* fh_dErel_vs_x;
	TH2F* fh_dErel_vs_y;
	
	TH2F* fh_xy[10];
	TH2F* fh_p_vs_x[10];
	TH2F* fh_p_vs_x_test[10];
	
  public:
    ClassDef(R3BTrackS454, 1)
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
// -----                  R3BTrackerTestS454                -----
// -----            Created 28-05-2020 by M.Heil          -----
// -----               Test Tracker with simulation             -----
// ------------------------------------------------------------

#ifndef R3BTRACKERTESTS454
#define R3BTRACKERTESTS454

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include "TCutG.h"

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BTrackerTestS454 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BTrackerTestS454();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BTrackerTestS454(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BTrackerTestS454();

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

    virtual void Output1(Double_t tracker[6], Double_t chi2[2]);
    virtual void Output2(Double_t tracker[6], Double_t chi2[2]);


    /**
     * Methods for setting reset and readout times for Bmon
     */

    /**
     * Methods for setting cuts
     */
    inline void SetCuts(Bool_t cuts)
    {
        fCuts = cuts;
    }

    inline void SetGraphicalCuts(Bool_t graphCuts)
    {
        fGraphCuts = graphCuts;
    }

    inline void SetGhost(Bool_t ghost)
    {
        fGhost = ghost;
    }

    inline void SetPairs(Bool_t p)
    {
        fPairs = p;
    }

    inline void SetBfield(Int_t B)
    {
        fB = B;
    }
    inline void SetSimu(Int_t simu)
    {
        fSimu = simu;
    }

  private:
    TClonesArray* fMCTrack;
    TClonesArray* fTofdPoints;
    TClonesArray* fFi3aPoints;
    TClonesArray* fFi3bPoints;
    TClonesArray* fFi10Points;
    TClonesArray* fFi11Points;
    TClonesArray* fFi12Points;
    TClonesArray* fFi13Points;
    TClonesArray* fTrackItems;
    Int_t fNofTrackItems;


    enum DetectorInstances
    {
        DET_CALIFA,
        DET_BMON,
        DET_ROLU,
        DET_FI_FIRST,
        DET_FI3A = DET_FI_FIRST,
        DET_FI3B,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_TOFD,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Califa", "BeamMonitor", "Rolu", "Fi3a", "Fi3b", "Fi10",
                                                "Fi11",   "Fi12",        "Fi13", "Tofd", NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 512., 512., 2048., 2048., 2048., 2048. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
	Bool_t fCuts;
	Bool_t fGhost;
	Bool_t fPairs;
	Bool_t fGraphCuts;
	Bool_t fSimu;
	Int_t fB;
	Bool_t tracker = true;

	TCutG *cut_fi11_fi3a;
	TCutG *cut_fi12_fi3b;
	TCutG *cut_Fi13vsFi11;
	TCutG *cut_Fi10vsFi12;
	
    unsigned long long time_start = 0, time = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    Int_t maxevent;

    Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz
    Double_t counts_SEE = 0;
    Double_t counts_IC = 0;
    Double_t counts_TofD = 0;

	Double_t XHes, YHes, ZHes, XCs, YCs, ZCs, THes, TCs;
	Double_t pHexs, pHeys, pHezs, pCxs, pCys, pCzs, pHes, pCs;
	
	Double_t amu = 931.49410242;
	Double_t pHex, pHey, pHez, pCx, pCy, pCz;
	Double_t Pxf, Pyf, Pzf, Xf, Yf, Zf, Pf_tot;
//	Double_t mHe = 4.00260325413*amu;
//	Double_t mC = 12. * amu;
	Double_t mHe = 3727.409;
	Double_t mC = 11174.950;
	
	Int_t Q = 0;
	Double_t tPrev[10];
	Int_t detPrev[10];
	
	Int_t counter1 = 0;
	Int_t counter2 = 0;
	Int_t counter3 = 0;
	Int_t counter4 = 0;
	Int_t counterTofd = 0;
	Int_t counterTofdMulti = 0;
	Int_t counterCalifa = 0;
	Int_t counterWrongTpat = 0;
	Int_t counterWrongTrigger = 0;
	Int_t counterRolu = 0;
	Int_t counterTracker = 0;
	Int_t countdet;
	Double_t delta;

    UInt_t num_spills = 0;

	Int_t ndet = 10;
	
    TH1F* fh_Tpat;
    TH1F* fh_Trigger;
    TH1F* fh_IC;
    TH1F* fh_SEE;
    TH1F* fh_TOFDOR;

    TH2F* fh_califa_energy;
	
    TH2F* fh_xy_Fib[NOF_FIB_DET];
    TH2F* fh_xy_Fib_ac[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib_ac[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH2F* fh_Fib_ToF_ac[NOF_FIB_DET];
    TH2F* fh_Fib_Time[NOF_FIB_DET];
    TH2F* fh_Fib_Time_ac[NOF_FIB_DET];
    TH2F* fh_ToT_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_Fib_ac[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events_ac[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd[NOF_FIB_DET];
    TH2F* fh_Fibs_vs_Tofd_ac[NOF_FIB_DET];
    TH2F* fh_ToF_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToF_vs_Events_ac[NOF_FIB_DET];

	TH2F* fh_Fib13_vs_Fib11;
	TH2F* fh_Fib13_vs_Fib11_dx;
	TH2F* fh_Fib11_vs_Fib3a;
	TH2F* fh_Fib11_vs_Fib3a_dx;
	TH2F* fh_Fib10_vs_Fib12;
	TH2F* fh_Fib10_vs_Fib12_dx;
	TH2F* fh_Fib12_vs_Fib3b;
	TH2F* fh_Fib12_vs_Fib3b_dx;

	TH2F* fh_Fib13_vs_Fib11_back;
	TH2F* fh_Fib13_vs_Fib11_dx_back;
	TH2F* fh_Fib11_vs_Fib3a_back;
	TH2F* fh_Fib11_vs_Fib3a_dx_back;
	TH2F* fh_Fib10_vs_Fib12_back;
	TH2F* fh_Fib10_vs_Fib12_dx_back;
	TH2F* fh_Fib12_vs_Fib3b_back;
	TH2F* fh_Fib12_vs_Fib3b_dx_back;

    TH2F* fh_Cave_position;

    TH2F* fh_xy_tofd;
    TH2F* fh_xy_tofd_ac;
    TH1F* fh_tofd_charge;
    TH1F* fh_tofd_charge_ac;
    TH1F* fh_tofd_time;
    TH1F* fh_tofd_time_ac;
    TH1F* fh_TimePreviousEvent;
    TH1F* fh_tofd_mult;
    TH1F* fh_tofd_mult_ac;
	TH2F* fh_tofd_q2_vs_q1;
	TH2F* fh_tofd_q2_vs_q1_ac;

    TH2F* fh_target_xy;
    TH1F* fh_target_px;
    TH1F* fh_target_py;
    TH1F* fh_target_pz;
    TH1F* fh_target_p;
    TH1F* fh_chi2;
    TH1F* fh_px_He;
    TH1F* fh_py_He;
    TH1F* fh_pz_He;
    TH1F* fh_p_He;
    TH1F* fh_px_C;
    TH1F* fh_py_C;
    TH1F* fh_pz_C;
    TH1F* fh_p_C;

    TH2F* fh_chiy_vs_chix;
    

    TH1F* fh_dx;
    TH1F* fh_dy;
    TH1F* fh_dz;
    TH1F* fh_dpx;
    TH1F* fh_dpy;
    TH1F* fh_dpz;
    TH1F* fh_dp;
    TH2F* fh_thetax_dpx;
    TH2F* fh_thetax_dpx_abs;
    TH2F* fh_thetay_dpy;
    TH2F* fh_x_dpx;
    TH2F* fh_y_dpy;
    TH2F* fh_thetax_dpy;
    TH2F* fh_thetay_dpx;
    TH2F* fh_dpy_dpx;

	TH1F* fh_theta26_simu;
	TH1F* fh_Erel_simu;
	TH1F* fh_theta26;
	TH1F* fh_Erel;

	TH2F* fh_dErel_vs_x;
	TH2F* fh_dErel_vs_y;
	
	TH2F* fh_xy[10];
	TH2F* fh_p_vs_x[10];
	TH2F* fh_p_vs_x_test[10];
	TH2F* fh_Erel_vs_xfh_Erel_vs_x;
	
  public:
    ClassDef(R3BTrackerTestS454, 1)
};

#endif
// ------------------------------------------------------------
// -----              R3BOnlineSpillAnalysis             -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPILLANALYSIS
#define R3BONLINESPILLANALYSIS

#include "FairTask.h"
#include "R3BGlobalAnalysis.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TF1;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpillAnalysis : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpillAnalysis();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpillAnalysis(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpillAnalysis();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosXYMCFD(Double_t offsetX1,
                             Double_t offsetY1,
                             Double_t veffX1,
                             Double_t veffY1,
                             Double_t offsetX2,
                             Double_t offsetY2,
                             Double_t veffX2,
                             Double_t veffY2)
    {
        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT1,
                              Double_t offsetYT1,
                              Double_t veffXT1,
                              Double_t veffYT1,
                              Double_t offsetXT2,
                              Double_t offsetYT2,
                              Double_t veffXT2,
                              Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    inline void SetLosXYToT(Double_t offsetXQ1,
                            Double_t offsetYQ1,
                            Double_t veffXQ1,
                            Double_t veffYQ1,
                            Double_t offsetXQ2,
                            Double_t offsetYQ2,
                            Double_t veffXQ2,
                            Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }
    /* Method for setting number of LOS detectors */
    inline void SetNofLosModules(Int_t nDets) { fNofLosDetectors = nDets; }
    /**
     * Methods for setting condition on filling xs from LOS
     * 0 = no condition, 1 = condition from fiber
     */
    inline void SetLosPosition(Int_t optcond) { foptcond = optcond; }
    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    /**
     * Methods for setting reset and readout times for Bmon
     */
    inline void SetBmon(Int_t time_range, Double_t time_step, Double_t SpillLength, Double_t DAQ_dead_time)
    {
        reset_time = time_range;
        read_time = time_step;
        fDAQ_dead_time = DAQ_dead_time; // dead time in micro seconds
        fSpillLength = SpillLength;
    }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }
    /* Put Custom functions here*/
    /** Function for exponential distribution*/
    double ran_expo(double lambda)
    {
        double u;

        u = rand() / (RAND_MAX + 1.0);

        return -log(1 - u) / lambda;
    }

    /** Sorting function, sorts an array and return the value of a. If a = 1 -> entries with -1.e9, these need to be
     * sorted out later.*/
    int sort_array(Int_t* entries, Double_t* array, Int_t* array2, Double_t* array3)
    {
        // array = new double[entries];
        bool sorted = false;
        // Bool_t Noise = false;
        Int_t a = 0;
        do
        {
            while (!sorted)
            { // Bubble-Sort
                sorted = true;
                for (int sorting = 0; sorting < *entries - 1; sorting++)
                {
                    if (array[sorting] == -1.e9)
                    {
                        a = 1;
                        // std::cout<<"a = "<<a<<" array[sorting]: "<<array[sorting]<<std::endl;
                    }
                    if (array[sorting] > array[sorting + 1])
                    {
                        Double_t temp = array[sorting];
                        array[sorting] = array[sorting + 1];
                        array[sorting + 1] = temp;
                        sorted = false;
                        /**Sort appending arrays */
                        Int_t temp2 = array2[sorting];
                        Double_t temp3 = array3[sorting];
                        array2[sorting] = array2[sorting + 1];
                        array3[sorting] = array3[sorting + 1];
                        array2[sorting + 1] = temp2;
                        array3[sorting + 1] = temp3;
                    }
                }
            }

        } while (!sorted);
        return a;
    }
    /**Function to merge multihits and give out mean HitTime */
    void merge_hits(Int_t* counter, Int_t maxEntries, Int_t* point, Double_t* array_read, Double_t* array_write)
    {
        Int_t merge_counter = 0;
        for (int i = *counter; i < maxEntries - 1; i++)
        {
            if (array_read[i + 1] - *(array_read + *counter) > 35.)
            {
                continue;
            }
            // std::cout<<"arr["<<*counter<<"]: "<<array_read[*counter]<<" arr["<<i+1<<"]:
            // "<<array_read[i+1]<<std::endl;
            merge_counter++;
        }
        if (merge_counter == 0)
            *(array_write + *point) = *(array_read + *counter);
        else
        {
            for (int j = 0; j < merge_counter; j++)
            {
                *(array_write + *point) += *(array_read + *counter + j) / merge_counter;
            }
        }
        *point += 1;
        *counter += merge_counter;
    }

    Int_t Fiber1_mapMatrix[16][16] = { // Fiber Mapping on MAPMT
                                       { 1, 17, 33, 49, 65, 81, 97, 113, 129, 145, 161, 177, 193, 209, 225, 241 },
                                       { 5, 21, 37, 53, 69, 85, 101, 117, 133, 149, 165, 181, 197, 213, 229, 245 },
                                       { 9, 25, 41, 57, 73, 89, 105, 121, 137, 153, 169, 185, 201, 217, 233, 249 },
                                       { 13, 29, 45, 61, 77, 93, 109, 125, 141, 157, 173, 189, 205, 221, 237, 253 },
                                       { 2, 18, 34, 50, 66, 82, 98, 114, 130, 146, 162, 178, 194, 210, 226, 242 },
                                       { 6, 22, 38, 54, 70, 86, 102, 118, 134, 150, 166, 182, 198, 214, 230, 246 },
                                       { 10, 26, 42, 58, 74, 90, 106, 122, 138, 154, 170, 186, 202, 218, 234, 250 },
                                       { 14, 30, 46, 62, 78, 94, 110, 126, 142, 158, 174, 190, 206, 222, 238, 254 },
                                       { 3, 19, 35, 51, 67, 83, 99, 115, 131, 147, 163, 179, 195, 211, 227, 243 },
                                       { 7, 23, 39, 55, 71, 87, 103, 119, 135, 151, 167, 183, 199, 215, 231, 247 },
                                       { 11, 27, 43, 59, 75, 91, 107, 123, 139, 155, 171, 187, 203, 219, 235, 251 },
                                       { 15, 31, 47, 63, 79, 95, 111, 127, 143, 159, 175, 191, 207, 223, 239, 255 },
                                       { 4, 20, 36, 52, 68, 84, 100, 116, 132, 148, 164, 180, 196, 212, 228, 244 },
                                       { 8, 24, 40, 56, 72, 88, 104, 120, 136, 152, 168, 184, 200, 216, 232, 248 },
                                       { 12, 28, 44, 60, 76, 92, 108, 124, 140, 156, 172, 188, 204, 220, 236, 252 },
                                       { 16, 32, 48, 64, 80, 96, 112, 128, 144, 160, 176, 192, 208, 224, 240, 256 }
    };

    Int_t FCTctr = 0;
    Int_t ACT_nctr = 0;
    Int_t ACT_nnctr = 0;
    Int_t CTctr = 0;
    bool check_anode_CT(int fibnum1, int fibnum2)
    {

        Int_t a = -1;
        Int_t b = -1;
        bool broken = false;
        for (int i = 0; i < 16; i++)
        {
            for (int j = 0; j < 16; j++)
            {
                if (Fiber1_mapMatrix[i][j] == fibnum1)
                {
                    a = i;
                    b = j;
                    broken = true;
                    break;
                }
            }
            if (broken)
                break;
        }
        std::cout << "AnCT" << std::endl;
        std::cout << "Fib1: " << Fiber1_mapMatrix[a][b] << " Fib2: " << fibnum2 << std::endl;

        // check neighbouring anode
        if (Fiber1_mapMatrix[a + 1][b] == fibnum2 && a + 1 < 16)
        {
            return true;
            ACT_nctr++;
        }
        else if (Fiber1_mapMatrix[a - 1][b] == fibnum2 && a != 0)
        {
            return true;
            ACT_nctr++;
        }
        else if (Fiber1_mapMatrix[a][b + 1] == fibnum2 && b + 1 < 16)
        {
            return true;
            ACT_nctr++;
        }
        else if (Fiber1_mapMatrix[a][b - 1] == fibnum2 && b != 0)
        {
            return true;
            ACT_nctr++;
        }
        // check next neighbour
        else if (Fiber1_mapMatrix[a + 1][b + 1] == fibnum2 && a + 1 < 16 && b + 1 < 16)
        {
            return true;
            ACT_nnctr++;
        }
        else if (Fiber1_mapMatrix[a - 1][b + 1] == fibnum2 && a != 0 && b + 1 < 16)
        {
            return true;
            ACT_nnctr++;
        }
        else if (Fiber1_mapMatrix[a - 1][b - 1] == fibnum2 && a != 0 && b != 0)
        {
            return true;
            ACT_nnctr++;
        }
        else if (Fiber1_mapMatrix[a + 1][b - 1] == fibnum2 && a + 1 < 16 && b != 0)
        {
            return true;
            ACT_nnctr++;
        }

        else
            return false;
    }

    bool check_fiber_CT(int fibnum1, int fibnum2)
    {
        std::cout << "FiCT" << std::endl;
        std::cout << "Fib1: " << fibnum1 << " Fib2: " << fibnum2 << std::endl;
        if (fibnum1 - fibnum2 == 1 || fibnum2 - fibnum1 == 1)
            return true;
        else
            return false;
    }

    Double_t TotZeitEichung(double SpillLength, double pps)
    {
        /* Calibration parameters from known poisson distributions. Used 10,50,100,500 kHz laserpulse. */
        Double_t DT = 18.27 * TMath::Exp(0.00319 * pps / SpillLength / 1000.) + 30.47; //µs
        return DT;
    }

    void Reset_ROLU_Histo();
    void Reset_LOS_Histo();
    void Reset_SCI8_Histo();
    void Reset_BMON_Histo();
    void Reset_SPILLMON_Histo();
    void Reset_TOFD_Histo();
    void Reset_FIBERS_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;

    enum DetectorInstances
    {
        DET_AMS,
        DET_CALIFA,
        DET_BMON,
        DET_FI_FIRST,
        DET_FI1A = DET_FI_FIRST,
        DET_FI1B,
        DET_FI2A,
        DET_FI2B,
        DET_FI3A,
        DET_FI3B,
        DET_FI4,
        DET_FI5,
        DET_FI6,
        DET_FI7,
        DET_FI8,
        DET_FI9,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_L3T,
        DET_LOS,
        DET_MUSIC,
        DET_NEULAND,
        DET_PSPX,
        DET_PTOF,
        DET_ROLU,
        DET_SCI8,
        DET_STRAW,
        DET_TOFD,
        DET_SAMPLER,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Ams",   "Califa",  "BeamMonitor", "Fi1a", "Fi1b", "Fi2a", "Fi2b",
                                                "Fi3a",  "Fi3b",    "Fi4",         "Fi5",  "Fi6",  "Fi7",  "Fi8",
                                                "Fi9",   "Fi10",    "Fi11",        "Fi12", "Fi13", "L3t",  "Los",
                                                "Music", "Neuland", "Pspx",        "Ptof", "Rolu", "Sci8", "Straw",
                                                "Tofd",  "Sampler", NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 256.,  256.,  256., 256,  512., 512.,  2048.,
                                      2048., 1024., 512., 512., 512., 1024., 1024. };
    Double_t tof_fiber[NOF_FIB_DET] = { 2580., 2580., 256., 256,  512., 512.,  2048.,
                                        2048., 1024., 512., 512., 512., 1024., 1024. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */

    //   TClonesArray *fbmonMappedItems;

    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

#define NOF_LOS_DET 2

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;

    unsigned long long time_V_mem = 0, time_start = 0, time_mem = 0, time = 0, time_begin = 0;
    unsigned long long time_prev[NOF_LOS_DET] = { 0 };

    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    unsigned long long time_previous_event = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0, samplerBegin = 0;
    UInt_t spillCounter = 0;

    Bool_t spill_on = false;
    Bool_t spill_off = false;
    Bool_t spill_on_sampler = false;
    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Int_t iclear_count = 1;
    UInt_t reset_time;         // time after which bmon spectra are reseted
    Double_t read_time;        // step in which scalers are read, in sec
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz
    Double_t fSpillLength;
    Double_t fDAQ_dead_time;
    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    // spill monitor
    Double_t fLastWindowTime[NOF_FIB_DET];
    Double_t LastWindowTime = 0.;
    Double_t tLastInWindow = 0.;
    Double_t time_global = 0.;
    Int_t FFT_Counter;
    Int_t xHits = 20;
    Double_t Schwelle = 90.;
    Double_t xmax;
    Double_t TIME_Fib_length = 0.;
    Double_t TIME_previous_FL = 0.;
    Double_t dtime_min = 80.;
    Double_t dtime_max = 95.;
    Int_t nHits_prev = 0;
    Double_t time_tmp = 0.;
    Int_t iFib_tmp = -1;
    Int_t nHit_ctr = 0;
    Int_t count_dead = 0;
    Double_t tLastPrev = 0.;
    Double_t spill_times = 0.;
    Double_t spill_times_first = 0.;
    Int_t spill_ctr = 0;
    Int_t spill_ctr_LOS = 0;
    Int_t spill_ctr_FIB = 0;
    Double_t dt_LOS = 0.;
    Double_t dt_LOS_first = 0.;
    Double_t dt_FIB_first = 0.;
    Double_t FIB_time_spill = 0.;
    Int_t hit_counter = 0;
    Int_t SPILLS = 0;
    int a_ctr = 0;
    Int_t packagectr = 0;
    Int_t pHits = 0;
    Double_t F_duty = 0.;
    Double_t F_duty_fib = 0.;
    Double_t Hans_mean = 0.;
    Bool_t MissedSpillEnd = false;
    Bool_t spill_off_calc = false;
    Int_t hans_ctr = 0;
    Double_t Hans_check = 0.;
    Int_t short_ctr = 0;
    Double_t dt_prev = 0.;
    Double_t dt_dead_mean = 0.;
    Int_t dead_ctr = 0;
    Double_t deadTime = fDAQ_dead_time;
    Double_t tt_prev = 0.;
    Bool_t skip_spill = false;
    Double_t testcounter = 0.;
    Int_t numHits1a = 0;
    Int_t numHits1b = 0;
    Bool_t first_in_spill = true;
    Double_t CTAN = 0.;
    Double_t CTANN = 0.;
    Double_t CTF = 0.;
    Int_t PPSF = 0;
    Bool_t spillon_fib = true;
    Double_t time_spill_on_fib = 0.;

    TH1F* fh_spill_times_fib_fine;
    TH1F* fh_spill_times_fib_Coarse;
    TH1F* fh_spill_times_fib_daq_first;
    TH1F* fh_spill_times_FIB_pois;
    TH1F* fh_spill_times_FIB_pois_Highstat;
    TH1F* fh_spill_hans_fib;
    TH1F* fh_spill_Q_E_real_fib;
    TH1F* fh_spill_Q_E_pois_fib;
    TH1F* fh_spill_frac_fib;
    TH1F* fh_DutyFactor_fib;
    TH1F* fh_DutyFactor_MtA_fib;
    TH1F* fh_DutyFactor_fib_pois;
    TH1F* fh_DutyFactor_MaxToAvg_fib;
    TH1F* fh_DutyFactor_MaxRun_fib;
    TH1F* fh_DutyFactor_AvgRun_fib;
    TH1F* fh_rate_sum_fib;
    TH1F* fh_rate_sum_SAMPFIB;
    TH1F* fh_rate_sum_DTmean_fib;
    TH1F* fh_rate_sum_DTmean_SAMPFIB;
    TH1F* fh_spillQuality_ppt_fib;
    TH1F* fh_spillQuality_ppt_fib_stat;

    TH1F* fh_rate_fib;
    TH1F* fh_rate_fib_adj;
    TH1F* fh_rate_fib_set;
    TH1F* fh_particle_fib;
    TH1F* fh_particle_fib_pois;

    TH1F* fh_FIB_count_t;
    TH1F* fh_FIB_TrgW_dt;
    TH1F* fh_LOS_TrgW_dt;
    TH1F* fh_SAMP_TrgW_dt;
    TH1F* fh_FIB_TrgW_dt_coarse;
    TH1F* fh_LOS_TrgW_dt_coarse;
    TH1F* fh_SAMP_TrgW_dt_coarse;
    TH1F* fh_FIB_Freq;

    TH1F* fh_FIB_tDiff_pois;

    TH1F* fh_spill_hits_vs_time;
    TH1F* fh_spill_hits_vs_time_fine;
    TH1F* fh_spill_times_fib;
    TH1F* fh_spill_times_LOS;
    TH1F* fh_spill_times_LOS_Fine;
    TH1F* fh_spill_times_LOSFIB_Fine;
    TH1F* fh_spill_times_LOSFIB_Fine_adj;
    TH1F* fh_spill_times_LOS_Fine_adj;
    TH1F* fh_spill_times_LOS_Coarse;
    TH1F* fh_spill_times_LOS_pois;
    TF1* Pois;
    TH1F* fh_r_pois_fib;
    TH1F* fh_r_pois_LOS;
    TH1F* fh_LOS_tDiff;
    TH1F* fh_SAMPFIB_tDiff;
    TH1F* fh_LOS_freq;
    TH1F* fh_LOS_tDiff_pois;
    TH1F* fh_DutyFactor_LOS;
    TH1F* fh_DutyFactor_SAMPFIB;
    TH1F* fh_DutyFactor_SAMPFIB_clean;
    TH1F* fh_DutyFactor_SAMP_clean;
    TH1F* fh_DutyFactor_MtA;
    TH1F* fh_DutyFactor_LOS_pois;
    TH1F* fh_DutyFactor_SAMPFIB_pois;
    TH1F* fh_DutyFactor_MaxToAvg;
    TH1F* fh_DutyFactor_Max;
    TH1F* fh_DutyFactor_Max_clean;
    TH1F* fh_DutyFactor_Max_SAMPFIB;
    TH1F* fh_DutyFactor_Max_SAMPFIB_clean;
    TH1F* fh_DutyFactor_Avg;
    TH1F* fh_DutyFactor_Avg_clean;
    TH1F* fh_DutyFactor_Avg_SAMPFIB;
    TH1F* fh_DutyFactor_Avg_SAMPFIB_clean;
    TH1F* fh_DutyFactor_PLD;
    TH1F* fh_rate;
    TH1F* fh_rate_SAMPFIB;
    TH1F* fh_rate_adj;
    TH1F* fh_rate_adj_SAMPFIB;
    TH1F* fh_rate_set;
    TH1F* fh_rate_set_SAMPFIB;
    TH1F* fh_spill_times_daq;
    TH1F* fh_spill_times_daq_first;
    TH1F* fh_particle;
    TH1F* fh_particle_pois;
    TH1F* fh_spill_hans;
    TH1F* fh_spill_hans_byMax;
    TH1F* fh_spill_hans_sum_byMax;
    TH1F* fh_spill_hans_SAMPFIB;
    TH1F* fh_spill_hans_SAMPFIB_byMean;
    TH1F* fh_spill_Q_E_real;
    TH1F* fh_spill_Q_E_real_SAMPFIB;
    TH1F* fh_spill_Q_E_pois;
    TH1F* fh_spill_Q_E_pois_SAMPFIB;
    TH1F* fh_spill_frac;
    TH1F* fh_spill_frac_SAMPFIB;
    TH1* fh_FFT;
    TH1* fh_FFT_adj;
    TH1* fh_FFT_adj_SAMPFIB;
    TH1* fh_FFT_add;
    TH1* fh_FFT_add_SAMPFIB;
    TH1F* fh_hans_sum;
    TH1F* fh_hans_sum_byMax;
    TH1F* fh_hans_SAMPFIB_sum;
    TH1F* fh_hans_SAMPFIB_sum_byMean;
    TH1F* fh_EL_sum;
    TH1F* fh_EL_SAMPFIB_sum;
    TH1F* fh_MtA_sum;
    TH1F* fh_rate_sum;
    TH1F* fh_rate_sum_DTmean;
    TH1F* fh_deadTime_adj;
    TH1F* fh_deadTime_mean;
    TH1F* fh_deadTime_sum;
    TH1F* fh_spillQuality_ppt;
    TH1F* fh_spillQuality_ppt_SAMPFIB;
    TH1F* fh_spillQuality_ppt_stat;
    TH1F* fh_spillQuality_ppt_stat_SAMPFIB;
    TH1F* fh_DutyFactor_MaxRun;
    TH1F* fh_DutyFactor_AvgRun;

    TH2F* fh_spill_times_Fib1;

    //------------------------------
    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;
    // TH1F* fh_particle;
    // TH1F* fh_particle_pois;
    TH1F* fh_TOFDOR_spill;
    TH1F* fh_spill_times;
    TH1F* fh_spill_times_zoom;
    TH1F* fh_spill_times_pois;
    // TH1F* fh_spill_times_daq;
    // TH1F* fh_spill_times_daq_first;
    TH1F* fh_frequencies;
    TH1F* fh_TOFDOR;
    // TH1F* fh_rate;
    // TH1F *h3;
    TH1F* fh_TimePreviousEvent;

    TH1F* fh_sci8_channels;
    TH1F* fh_sci8_tres_MCFD;
    TH1F* fh_sci8_tres_TAMEX;
    TH1F* fh_sci8_tot_mean;
    TH1F* fh_tof_sci8;
    TH2F* fh_sci8_tot;
    TH1F* fh_sci8_dt_hits;
    TH1F* fh_sci8_dt_hits_l;
    TH1F* fh_sci8_dt_hits_t;
    TH1F* fh_sci8_multihit;
    TH2F* fh_sci8_multihitVFTX;
    TH2F* fh_sci8_multihitLEAD;
    TH2F* fh_sci8_multihitTRAI;

    TH2F* fh_rolu_tot;
    TH1F* fh_rolu_channels;

    TH1F* fh_los_channels[NOF_LOS_DET];
    TH1F* fh_los_tres_MCFD[NOF_LOS_DET];
    TH1F* fh_los_tres_TAMEX[NOF_LOS_DET];
    TH1F* fh_los_tres_MTDC;
    TH1F* fh_los_tot_mean[NOF_LOS_DET];
    TH2F* fh_los_tot[NOF_LOS_DET];
    TH1F* fh_los_multihit[NOF_LOS_DET];
    TH2F* fh_los_multihitVFTX[NOF_LOS_DET];
    TH2F* fh_los_multihitLEAD[NOF_LOS_DET];
    TH2F* fh_los_multihitTRAI[NOF_LOS_DET];
    TH2F* fh_los_pos_MCFD[NOF_LOS_DET];
    TH2F* fh_los_pos_TAMEX[NOF_LOS_DET];
    TH2F* fh_los_pos_ToT[NOF_LOS_DET];
    TH2F* fh_los_ihit_ToT[NOF_LOS_DET];
    TH2F* fh_los_dt_hits_ToT[NOF_LOS_DET];
    TH2F* fh_los_ToT_vs_ToT;

    TH1F* fh_los_TOF[NOF_LOS_DET];
    TH1F* fh_los_dt_hits[NOF_LOS_DET];
    TH2F* fh_los_dt_first_ToT[NOF_LOS_DET];
    TH1F* fh_dt_hits[NOF_LOS_DET];

    TH1F* fh_channels_Fib[NOF_FIB_DET];
    TH1F* fh_channels_single_Fib[NOF_FIB_DET];
    TH1F* fh_fibers_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH2F* fh_Fib_pos_xy[NOF_FIB_DET];
    TH2F* fh_time_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_m_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_s_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_m_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_s_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToT_single_Fib[NOF_FIB_DET];

    TH1F* fh_tofd_channels[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_multihit[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_ToF[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_TotPm[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_dt[3];

    TH1F* fh_ptof_channels;
    TH1F* fh_ptof_channels_cut;
    TH1F* fh_ptof_test1;
    TH1F* fh_ptof_test2;
    TH1F* fh_ptof_TotPm1[N_PADDLE_MAX_PTOF];
    TH1F* fh_ptof_TotPm2[N_PADDLE_MAX_PTOF];

    TH1F* fh_pspx_channel_x[N_PSPX];      /**< PSPX x channel profile on mapped level */
    TH1F* fh_pspx_channel_y[N_PSPX];      /**< PSPX y channel profile on mapped level */
    TH1F* fh_pspx_multiplicity_x[N_PSPX]; /**< PSPX x multiplicity on mapped level */
    TH1F* fh_pspx_multiplicity_y[N_PSPX]; /**< PSPX y multiplicity on mapped level */

    TH2F* fh_pspx_strips_position[N_PSPX];        /**< PSPX 2D position on mapped level */
    TH2F* fh_pspx_hit_position[(N_PSPX + 1) / 2]; /**< PSPX 2D position on hit level */

    TH1F* fh_pspx_hit_energy[(N_PSPX + 1) / 2]; /**< PSPX energy on hit level */
    TH2F* fh_pspx_cal_energy_frontback[N_PSPX]; /**< PSPX energy front vs back on cal level */

  public:
    ClassDef(R3BOnlineSpillAnalysis, 2)
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
// -----                  R3BOnlineSpectra                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRAFIBERTOFDS515
#define R3BONLINESPECTRAFIBERTOFDS515
#define N_PLANE_MAX_TOFD 4
#define N_PADDLE_MAX_TOFD 50
#define N_PADDLE_MAX_PTOF 100
#define N_PSPX 2
#define N_STRIPS_PSPX 32
#define N_FIBER_PLOT 1050 // range to plot
#define PSPX_SPLITTER 0   // sstorck: set this variable to 1 if signals are split into energy and position readout

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraFiberTofds515 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraFiberTofds515();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraFiberTofds515(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraFiberTofds515();

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
     * Methods for setting position offset and effective velocity of light
     */

    inline void SetLosXYMCFD(Double_t offsetX1,
                             Double_t offsetY1,
                             Double_t veffX1,
                             Double_t veffY1,
                             Double_t offsetX2,
                             Double_t offsetY2,
                             Double_t veffX2,
                             Double_t veffY2)
    {

        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT1,
                              Double_t offsetYT1,
                              Double_t veffXT1,
                              Double_t veffYT1,
                              Double_t offsetXT2,
                              Double_t offsetYT2,
                              Double_t veffXT2,
                              Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    inline void SetLosXYToT(Double_t offsetXQ1,
                            Double_t offsetYQ1,
                            Double_t veffXQ1,
                            Double_t veffYQ1,
                            Double_t offsetXQ2,
                            Double_t offsetYQ2,
                            Double_t veffXQ2,
                            Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }

    /* Method for pile-up */
    inline void SetEpileup(Double_t Epileup) { fEpileup = Epileup; }

    /* Method for setting number of LOS detectors */
    inline void SetNofLosModules(Int_t nDets)
    {
        fNofLosDetectors = nDets;

        time_prev.resize(nDets);

        fh_los_channels.resize(nDets);
        fh_los_tres_MCFD.resize(nDets);
        fh_los_tres_TAMEX.resize(nDets);
        fh_los_tot_mean.resize(nDets);
        fh_los_tot.resize(nDets);
        fh_los_multihit.resize(nDets);
        fh_los_multihitVFTX.resize(nDets);
        fh_los_multihitLEAD.resize(nDets);
        fh_los_multihitTRAI.resize(nDets);
        fh_los_pos_MCFD.resize(nDets);
        fh_los_pos_TAMEX.resize(nDets);
        fh_los_pos_ToT.resize(nDets);
        fh_los_ihit_ToT.resize(nDets);
        fh_los_dt_hits_ToT.resize(nDets);
        fh_losToT_vs_Events.resize(nDets);
        fh_losTAMEX_vs_Events.resize(nDets);
        fh_losMCFD_vs_Events.resize(nDets);
        fh_los_vftx_tamex.resize(nDets);
    }

    /*
        inline void SetLosXYMCFD(Double_t offsetX, Double_t offsetY, Double_t veffX, Double_t veffY)
        {
            flosOffsetXV = offsetX;
            flosOffsetYV = offsetY;
            flosVeffXV = veffX;
            flosVeffYV = veffY;
        }

        inline void SetLosXYTAMEX(Double_t offsetXT, Double_t offsetYT, Double_t veffXT, Double_t veffYT)
        {
            flosOffsetXT = offsetXT;
            flosOffsetYT = offsetYT;
            flosVeffXT = veffXT;
            flosVeffYT = veffYT;
        }

        inline void SetLosXYToT(Double_t offsetXQ, Double_t offsetYQ, Double_t veffXQ, Double_t veffYQ)
        {
            flosOffsetXQ = offsetXQ;
            flosOffsetYQ = offsetYQ;
            flosVeffXQ = veffXQ;
            flosVeffYQ = veffYQ;
        }
    */
    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    void SetZcut(Double_t zcut, Double_t zcutw)
    {
        ZMUSIC_cut = zcut;
        ZMUSIC_wcut = zcutw;
    }
    void SetAcut(Double_t acut, Double_t acutw)
    {
        AoQ_cut = acut;
        AoQ_wcut = acutw;
    }

    std::vector<TH1F*> fh_los_channels;
    std::vector<TH1F*> fh_los_tres_MCFD;
    std::vector<TH1F*> fh_los_tres_TAMEX;
    std::vector<TH1F*> fh_los_tot_mean;
    std::vector<TH2F*> fh_los_tot;
    std::vector<TH1F*> fh_los_multihit;
    std::vector<TH2F*> fh_los_multihitVFTX;
    std::vector<TH2F*> fh_los_multihitLEAD;
    std::vector<TH2F*> fh_los_multihitTRAI;
    std::vector<TH2F*> fh_los_pos_MCFD;
    std::vector<TH2F*> fh_los_pos_TAMEX;
    std::vector<TH2F*> fh_los_pos_ToT;
    std::vector<TH2F*> fh_los_ihit_ToT;
    std::vector<TH2F*> fh_los_dt_hits_ToT;
    std::vector<TH2F*> fh_losToT_vs_Events;
    std::vector<TH2F*> fh_losTAMEX_vs_Events;
    std::vector<TH2F*> fh_losMCFD_vs_Events;
    std::vector<TH1F*> fh_los_vftx_tamex;

    Double_t fToFmin;
    Double_t fToFmax;
    Double_t fTof2InvV_p0;
    Double_t fTof2InvV_p1;
    Double_t fL2;
    Double_t fPos_p0;
    Double_t fPos_p1;
    Double_t fDispersionS2;
    Double_t fBrho0_S2toCC;

    // --- hard coded calibration

    void SetToFoffset(Double_t offset) { fToFoffset = offset; }
    void SetToFmin(Double_t t) { fToFmin = t; }
    void SetToFmax(Double_t t) { fToFmax = t; }
    void SetTof2InvV_p0(Double_t p) { fTof2InvV_p0 = p; }
    void SetTof2InvV_p1(Double_t p) { fTof2InvV_p1 = p; }
    void SetFlightLength(Double_t L) { fL2 = L; }
    void SetPos_p0(Double_t p) { fPos_p0 = p; }
    void SetPos_p1(Double_t p) { fPos_p1 = p; }
    void SetDispersionS2(Double_t DS2) { fDispersionS2 = DS2; }
    void SetBrho0_S2toCC(Double_t Brho0) { fBrho0_S2toCC = Brho0; }
    void SetBetaCorrectionForZ(Double_t p0, Double_t p1, Double_t p2, Double_t Zprimary, Double_t Zoffset)
    {
        fP0 = p0;
        fP1 = p1;
        fP2 = p2;
        fZprimary = Zprimary;
        fZoffset = Zoffset;
    }

    void SetPosS2_limits(Double_t min, Double_t max)
    {
        fPos2min = min;
        fPos2max = max;
    };

    /**
     * Methods for setting reset and readout times for Bmon
     */

    inline void SetBmon(Int_t time_range, Double_t time_step, Int_t sens_SEE, Int_t sens_IC)

    {
        reset_time = time_range;
        read_time = time_step;
        fsens_SEE = sens_SEE;
        fsens_IC = sens_IC;
    }
    /**
     * Methods for setting number of planes and paddles
     */
    inline void SetNofModules(Int_t planes, Int_t ppp)
    {
        fNofPlanes = planes;
        fPaddlesPerPlane = ppp;
    }
    void Reset_ROLU_Histo();
    void Reset_LOS_Histo();
    void Reset_SCI8_Histo();
    void Reset_BMON_Histo();
    void Reset_TOFD_Histo();
    void Reset_FIBERS_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    std::vector<TClonesArray*> fHitItems;
    TClonesArray* fHitItemsMus;
    TClonesArray* fTcalSci2;    /**< Array with Tcal items. */
    TClonesArray* fHitItemsFrs; /**< Array with hit items. */

    Double_t fPos2min, fPos2max;

    enum DetectorInstances
    {

        DET_AMS,
        DET_CALIFA,
        DET_BMON,
        DET_FI_FIRST,
        DET_FI1A = DET_FI_FIRST,
        DET_FI1B,
        DET_FI2A,
        DET_FI2B,
        DET_FI3A,
        DET_FI3B,
        DET_FI4,
        DET_FI5,
        DET_FI6,
        DET_FI7,
        DET_FI8,
        DET_FI9,
        DET_FI10,
        DET_FI11,
        DET_FI12,
        DET_FI13,
        DET_FI_LAST = DET_FI13,
        DET_L3T,
        DET_LOS,
        DET_MUSIC,
        DET_NEULAND,
        DET_PSPX,
        DET_PTOF,
        DET_ROLU,
        DET_SCI8,
        DET_STRAW,
        DET_TOFD,
        DET_MAX
    };

#define NOF_FIB_DET (DET_FI_LAST - DET_FI_FIRST + 1)

    const char* fDetectorNames[DET_MAX + 1] = { "Ams",  "Califa", "BeamMonitor", "Fi1a",  "Fi1b",    "Fi2a",
                                                "Fi2b", "Fi3a",   "Fi3b",        "Fi4",   "Fi5",     "Fi6",
                                                "Fi7",  "Fi8",    "Fi9",         "Fi10",  "Fi11",    "Fi12",
                                                "Fi13", "L3t",    "Los",         "Music", "Neuland", "Pspx",
                                                "Ptof", "Rolu",   "Sci8",        "Straw", "Tofd",    NULL };

    // If FiberI is present or not:
    Int_t ifibdet;
    // Number of fibers per detector
    Double_t n_fiber[NOF_FIB_DET] = { 256.,  256.,  256., 256,  512., 512.,  2048.,
                                      2048., 1024., 512., 512., 512., 1024., 1024. };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    UInt_t fNofPlanes;
    UInt_t fPaddlesPerPlane; /**< Number of paddles per plane. */
    Int_t nLosEvents = 0;

    Double_t fToFoffset;

    Double_t ZMUSIC_cut;
    Double_t ZMUSIC_wcut;

    Double_t AoQ_cut;
    Double_t AoQ_wcut;

    TClonesArray* fbmonMappedItems;

    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;
    Double_t fP0, fP1, fP2, fZprimary, fZoffset;

    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    std::vector<unsigned long long> time_prev;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0;
    unsigned long long time_previous_event = 0;

    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Double_t fEpileup;

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    /*

    Double_t flosVeffXV;
    Double_t flosVeffYV;
    Double_t flosOffsetXV;
    Double_t flosOffsetYV;
    Double_t flosVeffXT;
    Double_t flosVeffYT;
    Double_t flosOffsetXT;
    Double_t flosOffsetYT;
    Double_t flosVeffXQ;
    Double_t flosVeffYQ;
    Double_t flosOffsetXQ;
    Double_t flosOffsetYQ;


    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    */

    Int_t iclear_count = 1;
    UInt_t reset_time;         // time after which bmon spectra are reseted
    Double_t read_time;        // step in which scalers are read, in sec
    Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
    Double_t calib_SEE = 1.;   // SEETRAM calibration factor
    Double_t see_offset = 7.1; // SEETRAM offset in kHz

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;
    TH1F* fh_IC_spill;
    TH1F* fh_SEE_spill;
    TH1F* fh_TOFDOR_spill;
    TH1F* fh_IC;
    TH1F* fh_SEE;
    TH1F* fh_TOFDOR;
    TH2F* fh_IC_cal;
    TH2F* fh_SEE_cal;

    TH2F* fh_rolu_tot;
    TH1F* fh_rolu_channels;

    TH1F* fh_sci8_channels;
    TH1F* fh_sci8_tres_MCFD;
    TH1F* fh_sci8_tres_TAMEX;
    TH1F* fh_sci8_tot_mean;
    TH1F* fh_tof_sci8;
    TH2F* fh_sci8_tot;
    TH1F* fh_sci8_dt_hits;
    TH1F* fh_sci8_dt_hits_l;
    TH1F* fh_sci8_dt_hits_t;
    TH1F* fh_sci8_multihit;
    TH2F* fh_sci8_multihitVFTX;
    TH2F* fh_sci8_multihitLEAD;
    TH2F* fh_sci8_multihitTRAI;
    /*
        TH1F* fh_los_channels;
        TH1F* fh_los_tres_MCFD;
        TH1F* fh_los_tres_TAMEX;
        TH1F* fh_los_tres_MTDC;
        TH1F* fh_los_tot_mean;
        TH2F* fh_los_tot;
        TH1F* fh_los_dt_hits;
        TH1F* fh_los_multihit;
        TH2F* fh_los_multihitVFTX;
        TH2F* fh_los_multihitLEAD;
        TH2F* fh_los_multihitTRAI;
        TH2F* fh_los_pos_MCFD;
        TH2F* fh_los_pos_TAMEX;
        TH2F* fh_los_pos_ToT;
        TH2F* fh_los_ihit_ToT;
        TH2F* fh_los_dt_hits_ToT;
        TH2F* fh_los_dt_first_ToT;
        TH2F* fh_los_dt_hits_VT;
    */
    TH1F* fh_channels_Fib[NOF_FIB_DET];
    TH1F* fh_channels_single_Fib[NOF_FIB_DET];
    TH1F* fh_fibers_Fib[NOF_FIB_DET];
    TH1F* fh_mult_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_ToF[NOF_FIB_DET];
    TH1F* fh_Fib_pos[NOF_FIB_DET];
    TH2F* fh_time_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_m_Fib[NOF_FIB_DET];
    TH2F* fh_multihit_s_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_m_Fib[NOF_FIB_DET];
    TH2F* fh_ToT_s_Fib[NOF_FIB_DET];
    TH2F* fh_Fib_vs_Events[NOF_FIB_DET];
    TH2F* fh_ToT_single_Fib[NOF_FIB_DET];
    TH2F* fh_Fib10_vs_Fib13;
    TH2F* fh_Fib11_vs_Fib12;
    TH2F* fh_Fib11_vs_Fib12_cut;
    TH1F* fh_channels_Fib11_cut;

    TH1F* fh_tofd_channels[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_multihit[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_ToF[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_TotPm[N_PLANE_MAX_TOFD];
    TH2F* fh_tofd_dt[3];
    TH1F* fh_TimePreviousEvent;

    TH2F* fh_tofd_eloss[N_PLANE_MAX_TOFD];

    TH2F* tofd_side1_vs_side2[N_PLANE_MAX_TOFD];

    TH1F* fh_ptof_channels;
    TH1F* fh_ptof_channels_cut;
    TH1F* fh_ptof_test1;
    TH1F* fh_ptof_test2;
    TH1F* fh_ptof_TotPm1[N_PADDLE_MAX_PTOF];
    TH1F* fh_ptof_TotPm2[N_PADDLE_MAX_PTOF];

    TH1F* fh_pspx_channel_x[N_PSPX];      /**< PSPX x channel profile on mapped level */
    TH1F* fh_pspx_channel_y[N_PSPX];      /**< PSPX y channel profile on mapped level */
    TH1F* fh_pspx_multiplicity_x[N_PSPX]; /**< PSPX x multiplicity on mapped level */
    TH1F* fh_pspx_multiplicity_y[N_PSPX]; /**< PSPX y multiplicity on mapped level */
    TH1F* fh_pspx_mapped_energy[N_PSPX];  /**< PSPX energy on mapped level as first check */

    TH2F* fh_pspx_strips_position[N_PSPX];  /**< PSPX 2D position on mapped level */
    TH2F* fh_pspx_hit_position[N_PSPX];     /**< PSPX 2D position on hit level */
    TH2F* fh_pspx12_strips_position_corr_x; // correlation between x1 vs x2
    TH2F* fh_pspx12_strips_position_corr_y; // and y1 vs y2, ONLY valid for 2 detectors at the moment
    TH2F* fh_pspx12_cal_energy_corr;        // correlation between en1 und en2

    TH1F* fh_pspx_hit_energy[N_PSPX]; /**< PSPX energy on hit level */

    TH2F* fh_pspx_cal_energy_frontback[N_PSPX]; /**< PSPX energy front vs back on cal level */
    TH2F* fh_pspx_hit_multi[(N_PSPX + 1) / 2];

  public:
    ClassDef(R3BOnlineSpectraFiberTofds515, 2)
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
// -----                  R3BOnlineSpectra                -----
// -----            Created 13-04-2016 by M.Heil          -----
// -----               Fill online histograms             -----
// ------------------------------------------------------------

#ifndef R3BONLINESPECTRALOSSTANDALONE
#define R3BONLINESPECTRALOSSTANDALONE

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "TClonesArray.h"
#include "TFolder.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraLosStandalone : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraLosStandalone();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraLosStandalone(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraLosStandalone();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosXYMCFD(Double_t offsetX1,
                             Double_t offsetY1,
                             Double_t veffX1,
                             Double_t veffY1,
                             Double_t offsetX2,
                             Double_t offsetY2,
                             Double_t veffX2,
                             Double_t veffY2)
    {
        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT1,
                              Double_t offsetYT1,
                              Double_t veffXT1,
                              Double_t veffYT1,
                              Double_t offsetXT2,
                              Double_t offsetYT2,
                              Double_t veffXT2,
                              Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    inline void SetLosXYToT(Double_t offsetXQ1,
                            Double_t offsetYQ1,
                            Double_t veffXQ1,
                            Double_t veffYQ1,
                            Double_t offsetXQ2,
                            Double_t offsetYQ2,
                            Double_t veffXQ2,
                            Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }
    /* Method for pile-up */
    inline void SetEpileup(Double_t Epileup) { fEpileup = Epileup; }

    /* Method for setting number of LOS detectors */
    inline void SetNofLosModules(Int_t nDets)
    {
        fNofLosDetectors = nDets;

        time_prev.resize(nDets);

        fh_los_channels.resize(nDets);
        fh_los_tres_MCFD.resize(nDets);
        fh_los_tres_TAMEX.resize(nDets);
        fh_los_tot_mean.resize(nDets);
        fh_los_tot.resize(nDets);
        fh_los_multihit.resize(nDets);
        fh_los_multihitVFTX.resize(nDets);
        fh_los_multihitLEAD.resize(nDets);
        fh_los_multihitTRAI.resize(nDets);
        fh_los_pos_MCFD.resize(nDets);
        fh_los_pos_TAMEX.resize(nDets);
        fh_los_pos_ToT.resize(nDets);
        fh_los_ihit_ToT.resize(nDets);
        fh_los_dt_hits_ToT.resize(nDets);
        fh_losToT_vs_Events.resize(nDets);
        fh_losTAMEX_vs_Events.resize(nDets);
        fh_losMCFD_vs_Events.resize(nDets);
        fh_los_vftx_tamex.resize(nDets);
    }

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    void Reset_LOS_Histo();

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;

    TClonesArray* fMappedItemsTwim; /**< Array with mapped items. */
    TClonesArray* fCalItemsTwim;    /**< Array with cal items. */

    enum DetectorInstances
    {
        DET_LOS,
        DET_SAMPLER,
        DET_MAX
    };

    const char* fDetectorNames[DET_MAX + 1] = { "Los", "Sampler", NULL };

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    Int_t nLosEvents = 0;
    //   TClonesArray *fbmonMappedItems;
    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;

    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    std::vector<unsigned long long> time_prev;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0;
    unsigned long long time_previous_event = 0;

    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Double_t fEpileup;

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;

    std::vector<TH1F*> fh_los_channels;
    std::vector<TH1F*> fh_los_tres_MCFD;
    std::vector<TH1F*> fh_los_tres_TAMEX;
    std::vector<TH1F*> fh_los_tot_mean;
    std::vector<TH2F*> fh_los_tot;
    std::vector<TH1F*> fh_los_multihit;
    std::vector<TH2F*> fh_los_multihitVFTX;
    std::vector<TH2F*> fh_los_multihitLEAD;
    std::vector<TH2F*> fh_los_multihitTRAI;
    std::vector<TH2F*> fh_los_pos_MCFD;
    std::vector<TH2F*> fh_los_pos_TAMEX;
    std::vector<TH2F*> fh_los_pos_ToT;
    std::vector<TH2F*> fh_los_ihit_ToT;
    std::vector<TH2F*> fh_los_dt_hits_ToT;
    std::vector<TH2F*> fh_losToT_vs_Events;
    std::vector<TH2F*> fh_losTAMEX_vs_Events;
    std::vector<TH2F*> fh_losMCFD_vs_Events;
    std::vector<TH1F*> fh_los_vftx_tamex;

  public:
    ClassDef(R3BOnlineSpectraLosStandalone, 2)
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

#ifndef R3BOnlineSpectraSci2_H
#define R3BOnlineSpectraSci2_H

#include "FairTask.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TH2D.h"
#include "TH2F.h"

class TClonesArray;
class R3BEventHeader;

/**
 * This taks reads SCI data and plots online histograms
 */
class R3BOnlineSpectraSci2 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraSci2();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraSci2(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraSci2();

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
     * Methods to clean histograms.
     */
    virtual void Reset_Histo();

    /** Virtual method Reset **/
    virtual void Reset();

    void SetNbDetectors(Int_t ndets) { fNbDetectors = ndets; }
    void SetNbChannels(Int_t nchs) { fNbChannels = nchs; }
    Int_t GetNbDetectors() { return fNbDetectors; }
    Int_t GetNbChannels() { return fNbChannels; }

  private:
    TClonesArray* fMapped; /**< Array with R3BSofSciMappedData */
    TClonesArray* fTcal;   /**< Array with R3BSofSciTcalData */

    Int_t fNbDetectors; // fNbDetectors is also equal to fIdCaveC
    Int_t fNbChannels;

    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* fEventHeader; /**< Event header.      */
    Int_t fNEvents;               /**< Event counter.     */

    // Canvas
    TCanvas** cMapped; // [fNbDetectors]
    TCanvas** cPos;    // [fNbDetectors]

    TCanvas* cMultMap;
    TCanvas* cMultTcal;
    TCanvas* cMultMap2D;
    TCanvas* cMultMap2D_RvsL;

    // Histograms - 1D multiplicity
    TH1I** fh1_multMap;  // [fNbDetectors * fNbChannels];
    TH1I** fh1_multTcal; // [fNbDetectors * fNbChannels];
    // Histograms - 1D multiplicity with condition on Tpat
    TH1I** fh1_multMap_condTpat;  // [fNbDetectors * fNbChannels];
    TH1I** fh1_multTcal_condTpat; // [fNbDetectors * fNbChannels];

    // Histograms - 2D multiplicity
    TH2I** fh2_mult_RvsL;      // [fNbDetectors];
    TH2I** fh2_mult_TrefVsPmt; //[fNbDetectors * (NbChannels-1)]

    // Histograms - 2D multiplicity with condition on Tpat
    TH2I** fh2_mult_RvsL_condTpat;      // [fNbDetectors];
    TH2I** fh2_mult_TrefVsPmt_condTpat; //[fNbDetectors * (NbChannels-1)]

    // Histograms for Mapped data : Fine Time and Mult
    TH1I** fh1_finetime; // [fNbDetectors * NbChannels];
    TH2I** fh2_mult;     // [fNbDetectors];
    TH1D** fh1_DeltaTref;

    // Histograms for X position at Tcal
    TH1F** fh1_RawPos_TcalMult1; // [fNbDetectors];

  public:
    ClassDef(R3BOnlineSpectraSci2, 1)
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

#ifndef R3BONLINESPECTRALOSVSSCI2
#define R3BONLINESPECTRALOSVSSCI2

#include "FairTask.h"
#include <array>
#include <fstream>
#include <iostream>
#include <sstream>
#include <vector>

#include "R3BFrsData.h"
#include "TCanvas.h"
#include "TClonesArray.h"
#include "TH1.h"
#include "TMath.h"
#include <cstdlib>

class TClonesArray;
class TH1F;
class TH2F;
class R3BEventHeader;

/**
 * This taks reads all detector data items and plots histograms
 * for online checks.
 */
class R3BOnlineSpectraLosVsSci2 : public FairTask
{

  public:
    /**
     * Default constructor.
     * Creates an instance of the task with default parameters.
     */
    R3BOnlineSpectraLosVsSci2();

    /**
     * Standard constructor.
     * Creates an instance of the task.
     * @param name a name of the task.
     * @param iVerbose a verbosity level.
     */
    R3BOnlineSpectraLosVsSci2(const char* name, Int_t iVerbose = 1);

    /**
     * Destructor.
     * Frees the memory used by the object.
     */
    virtual ~R3BOnlineSpectraLosVsSci2();

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
     * Methods for setting position offset and effective velocity of light
     */
    inline void SetLosXYMCFD(Double_t offsetX1,
                             Double_t offsetY1,
                             Double_t veffX1,
                             Double_t veffY1,
                             Double_t offsetX2,
                             Double_t offsetY2,
                             Double_t veffX2,
                             Double_t veffY2)
    {
        flosOffsetXV[0] = offsetX1;
        flosOffsetYV[0] = offsetY1;
        flosVeffXV[0] = veffX1;
        flosVeffYV[0] = veffY1;
        flosOffsetXV[1] = offsetX2;
        flosOffsetYV[1] = offsetY2;
        flosVeffXV[1] = veffX2;
        flosVeffYV[1] = veffY2;
    }

    inline void SetLosXYTAMEX(Double_t offsetXT1,
                              Double_t offsetYT1,
                              Double_t veffXT1,
                              Double_t veffYT1,
                              Double_t offsetXT2,
                              Double_t offsetYT2,
                              Double_t veffXT2,
                              Double_t veffYT2)
    {
        flosOffsetXT[0] = offsetXT1;
        flosOffsetYT[0] = offsetYT1;
        flosVeffXT[0] = veffXT1;
        flosVeffYT[0] = veffYT1;
        flosOffsetXT[1] = offsetXT2;
        flosOffsetYT[1] = offsetYT2;
        flosVeffXT[1] = veffXT2;
        flosVeffYT[1] = veffYT2;
    }

    inline void SetLosXYToT(Double_t offsetXQ1,
                            Double_t offsetYQ1,
                            Double_t veffXQ1,
                            Double_t veffYQ1,
                            Double_t offsetXQ2,
                            Double_t offsetYQ2,
                            Double_t veffXQ2,
                            Double_t veffYQ2)
    {
        flosOffsetXQ[0] = offsetXQ1;
        flosOffsetYQ[0] = offsetYQ1;
        flosVeffXQ[0] = veffXQ1;
        flosVeffYQ[0] = veffYQ1;
        flosOffsetXQ[1] = offsetXQ2;
        flosOffsetYQ[1] = offsetYQ2;
        flosVeffXQ[1] = veffXQ2;
        flosVeffYQ[1] = veffYQ2;
    }
    /* Method for pile-up */
    inline void SetEpileup(Double_t Epileup) { fEpileup = Epileup; }

    void SetZcut(Double_t zcut, Double_t zcutw)
    {
        ZMUSIC_cut = zcut;
        ZMUSIC_wcut = zcutw;
    }
    void SetAcut(Double_t acut, Double_t acutw)
    {
        AoQ_cut = acut;
        AoQ_wcut = acutw;
    }

    /* Method for setting number of LOS detectors */
    inline void SetNofLosModules(Int_t nDets)
    {
        fNofLosDetectors = nDets;

        time_prev.resize(nDets);

        fh_los_channels.resize(nDets);
        fh_los_tres_MCFD.resize(nDets);
        fh_los_tres_TAMEX.resize(nDets);
        fh_los_tot_mean.resize(nDets);
        fh_los_tot.resize(nDets);
        fh_los_multihit.resize(nDets);
        fh_los_multihitVFTX.resize(nDets);
        fh_los_multihitLEAD.resize(nDets);
        fh_los_multihitTRAI.resize(nDets);
        fh_los_pos_MCFD.resize(nDets);
        fh_los_pos_TAMEX.resize(nDets);
        fh_los_pos_ToT.resize(nDets);
        fh_los_ihit_ToT.resize(nDets);
        fh_los_dt_hits_ToT.resize(nDets);
        fh_losToT_vs_Events.resize(nDets);
        fh_losTAMEX_vs_Events.resize(nDets);
        fh_losMCFD_vs_Events.resize(nDets);
        fh_los_vftx_tamex.resize(nDets);
    }

    /**
     * Method for setting the trigger value.
     * @param trigger 1 - physics, 2 - offspill, -1 - all events.
     */
    inline void SetTrigger(Int_t trigger) { fTrigger = trigger; }
    inline void SetTpat(Int_t tpat) { fTpat = tpat; }

    void Reset_LosVsSci2_Histo();

    // --- hard coded calibration
    void SetToFoffset(Double_t offset) { fToFoffset = offset; }
    void SetToFmin(Double_t t) { fToFmin = t; }
    void SetToFmax(Double_t t) { fToFmax = t; }
    void SetTof2InvV_p0(Double_t p) { fTof2InvV_p0 = p; }
    void SetTof2InvV_p1(Double_t p) { fTof2InvV_p1 = p; }
    void SetFlightLength(Double_t L) { fL2 = L; }
    void SetPos_p0(Double_t p) { fPos_p0 = p; }
    void SetPos_p1(Double_t p) { fPos_p1 = p; }
    void SetDispersionS2(Double_t DS2) { fDispersionS2 = DS2; }
    void SetBrho0_S2toCC(Double_t Brho0) { fBrho0_S2toCC = Brho0; }
    void SetBetaCorrectionForZ(Double_t p0, Double_t p1, Double_t p2, Double_t Zprimary, Double_t Zoffset)
    {
        fP0 = p0;
        fP1 = p1;
        fP2 = p2;
        fZprimary = Zprimary;
        fZoffset = Zoffset;
    }

    void SetPosS2_limits(Double_t min, Double_t max)
    {
        fPos2min = min;
        fPos2max = max;
    }

    /** Accessor to select online mode **/
    void SetOnline(Bool_t option) { fOnline = option; }

  private:
    std::vector<TClonesArray*> fMappedItems;
    std::vector<TClonesArray*> fCalItems;
    TClonesArray* fHitItemsMus;
    TClonesArray* fFrsDataCA; /**< Array with FRS-output data. >*/

    Double_t fPos2min, fPos2max;

    TClonesArray* fTcalSci2; /**< Array with Tcal items. */

    enum DetectorInstances
    {
        DET_LOS,
        DET_SAMPLER,
        DET_MAX
    };

    const char* fDetectorNames[DET_MAX + 1] = { "Los", "Sampler", NULL };
    /*
        Double_t flosVeffXV;
        Double_t flosVeffYV;
        Double_t flosOffsetXV;
        Double_t flosOffsetYV;
        Double_t flosVeffXT;
        Double_t flosVeffYT;
        Double_t flosOffsetXT;
        Double_t flosOffsetYT;
        Double_t flosVeffXQ;
        Double_t flosVeffYQ;
        Double_t flosOffsetXQ;
        Double_t flosOffsetYQ;

        unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
        unsigned long long time_prev_read = 0, time_to_read = 0;
        unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
        unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
        unsigned long long time_spill_start = 0, time_spill_end = 0;

        unsigned long long time_previous_event = 0;

        Double_t time_clear = -1.;
        Double_t tdiff = 0.;
        Double_t fNorm = 1.;
        Int_t iclear_count = 1;
        UInt_t reset_time;         // time after which bmon spectra are reseted
        Double_t read_time;        // step in which scalers are read, in sec
        Int_t fsens_SEE, fsens_IC; // SEETRAM and IC sensitivity, between -4 and -10
        Double_t calib_SEE = 1.;   // SEETRAM calibration factor
        Double_t see_offset = 7.1; // SEETRAM offset in kHz
    */
    // check for trigger should be done globablly (somewhere else)
    R3BEventHeader* header; /**< Event header. */
    Int_t fTrigger;         /**< Trigger value. */
    Int_t fTpat;
    Int_t fSamp;
    Double_t fClockFreq; /**< Clock cycle in [ns]. */
    Int_t nLosEvents = 0;
    // Adjust the offset when a DAQ subsystem restarts
    Double_t fToFoffset;
    Bool_t fOnline; // Don't store data for online

    //   TClonesArray *fbmonMappedItems;
    Int_t fNofLosDetectors; /**< Number of LOS detectors. */

    Double_t flosVeffXV[2];
    Double_t flosVeffYV[2];
    Double_t flosOffsetXV[2];
    Double_t flosOffsetYV[2];
    Double_t flosVeffXT[2];
    Double_t flosVeffYT[2];
    Double_t flosOffsetXT[2];
    Double_t flosOffsetYT[2];
    Double_t flosVeffXQ[2];
    Double_t flosVeffYQ[2];
    Double_t flosOffsetXQ[2];
    Double_t flosOffsetYQ[2];
    Int_t foptcond;
    Double_t fP0, fP1, fP2, fZprimary, fZoffset;

    unsigned long long time_V_mem = 0, time_start = 0, time = 0, time_mem = 0;
    std::vector<unsigned long long> time_prev;
    unsigned long long time_prev_read = 0, time_to_read = 0;
    unsigned long ic_mem = 0, see_mem = 0, tofdor_mem = 0;
    unsigned long ic_start = 0, see_start = 0, tofdor_start = 0;
    unsigned long long time_spill_start = 0, time_spill_end = 0;
    long samplerPrev = 0, samplerCurr = 0, samplerSpill = 0;
    unsigned long long time_previous_event = 0;

    Double_t time_clear = -1.;
    Double_t tdiff = 0.;
    Double_t fNorm = 1.;
    Double_t fEpileup;

    unsigned long fNEvents = 0, fNEvents_start = 0; /**< Event counter. */

    TH1F* fhTpat;
    TH1F* fh_spill_length;
    TH1F* fhTrigger;

    std::vector<TH1F*> fh_los_channels;
    std::vector<TH1F*> fh_los_tres_MCFD;
    std::vector<TH1F*> fh_los_tres_TAMEX;
    std::vector<TH1F*> fh_los_tot_mean;
    std::vector<TH2F*> fh_los_tot;
    std::vector<TH1F*> fh_los_multihit;
    std::vector<TH2F*> fh_los_multihitVFTX;
    std::vector<TH2F*> fh_los_multihitLEAD;
    std::vector<TH2F*> fh_los_multihitTRAI;
    std::vector<TH2F*> fh_los_pos_MCFD;
    std::vector<TH2F*> fh_los_pos_TAMEX;
    std::vector<TH2F*> fh_los_pos_ToT;
    std::vector<TH2F*> fh_los_ihit_ToT;
    std::vector<TH2F*> fh_los_dt_hits_ToT;
    std::vector<TH2F*> fh_losToT_vs_Events;
    std::vector<TH2F*> fh_losTAMEX_vs_Events;
    std::vector<TH2F*> fh_losMCFD_vs_Events;
    std::vector<TH1F*> fh_los_vftx_tamex;

    // --- hard coded calibration

    // --- 1/ select the good hit from the ToF from S2 to Cave C:
    Double_t fToFmin;
    Double_t fToFmax;

    // --- 2/ calibration in beta and ToF
    Double_t fTof2InvV_p0;
    Double_t fTof2InvV_p1;
    Double_t fL2;

    // --- 3/ calibration in position
    Double_t fPos_p0;
    Double_t fPos_p1;

    // --- 4/ AoQ calculation
    Double_t fDispersionS2;
    Double_t fBrho0_S2toCC;

    Double_t ZMUSIC_cut;
    Double_t ZMUSIC_wcut;

    Double_t AoQ_cut;
    Double_t AoQ_wcut;

    // --- end of declaration of calibration parameters for AoQ

    // --- TCanvas
    TCanvas* cTofFromS2;
    TCanvas* cBeta;
    TCanvas* cZvsAoQ;
    TCanvas* cTofFromS2vsZ;
    TCanvas* cPos;

    // --- HISTOGRAMS for mult==1
    TH1D* fh1_RawTofFromS2_TcalMult1;
    TH2F* fh1_RawTofFromS2_TcalMult1vsZ;
    TH1F* fh1_Beta_m1;
    TH2F* fh2_ZvsBeta_m1;
    TH2F* fh2_ZcorvsBeta_m1;
    TH2F* fh2_ZvsAoQ_m1;
    TH2F* fh2_ZvsAoQ_m1_cor;
    TH2F* fh2_ZvsAoQ_m1_cor_tpat;
    TH2F* fh2_ZvsAoQ_m1_cor_tpat_los;
    TH2F* fh2_ZvsAoQ_m1_cor_tpat_tofd;
    TH2F* fh2_ZvsAoQ_m1_cor_tpat_islos;
    TH1F* fh2_AoQ_cut;
    TH1F* fh1_RawPos_m1;
    TH1F* fh1_CalPos_m1;

    // --- HSITOGRAMS with the selection of the good hit
    TH1D* fh1_RawTofFromS2;
    TH1F* fh1_Mushit_z;
    TH1F* fh1_Beta;
    TH2F* fh2_ZvsAoQ;
    TH1F* fh1_RawPos;
    TH1F* fh1_CalPos;
    TH2F* fh2_Pos2vsAoQ_m1;
    TH2F* fh2_EvsBeta_m1;
    TH2F* fh2_MusZcorvsAng;

    /** Private method FrsData **/
    //** Adds a FrsData to the analysis
    R3BFrsData* AddData(Int_t StaId,
                        Int_t StoId,
                        Double_t z,
                        Double_t aq,
                        Double_t betaval,
                        Double_t brhoval,
                        Double_t xs2,
                        Double_t xc);

  public:
    ClassDef(R3BOnlineSpectraLosVsSci2, 2)
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

/* R3BFileSource.h
 * R3BROOT
 *
 * Author: J.L. Rodriguez-Sanchez
 * Date: 12/05/21
 * */

#ifndef R3BFileSource_H
#define R3BFileSource_H

#include "FairSource.h"
#include "TChain.h"
#include "TF1.h"
#include "TFile.h"
#include "TFolder.h"
#include <fstream>
#include <list>

class FairEventHeader;
class FairFileHeader;
class FairMCEventHeader;
class TString;
class FairLogger;
class FairRuntimeDb;
class R3BEventHeader;

class R3BFileSource : public FairSource
{
  public:
    R3BFileSource(TFile* f, const char* Title = "InputRootFile", UInt_t identifier = 0);
    R3BFileSource(const TString* RootFileName, const char* Title = "InputRootFile", UInt_t identifier = 0);
    R3BFileSource(const TString RootFileName, const char* Title = "InputRootFile", UInt_t identifier = 0);
    //  R3BFileSource(const R3BFileSource& file);
    virtual ~R3BFileSource();

    Bool_t Init();
    Int_t ReadEvent(UInt_t i = 0);
    void Close();
    void Reset();

    virtual Source_Type GetSourceType() { return kFILE; }

    virtual void SetParUnpackers() {}

    virtual Bool_t InitUnpackers() { return kTRUE; }

    virtual Bool_t ReInitUnpackers() { return kTRUE; }

    /**Check the maximum event number we can run to*/
    virtual Int_t CheckMaxEventNo(Int_t EvtEnd = 0);
    /**Read the tree entry on one branch**/
    virtual void ReadBranchEvent(const char* BrName);
    /**Read specific tree entry on one branch**/
    virtual void ReadBranchEvent(const char* BrName, Int_t Entry);
    virtual void FillEventHeader(R3BEventHeader* feh);

    const TFile* GetRootFile() { return fRootFile; }
    /** Add a friend file (input) by name)*/
    void AddFriend(TString FileName);
    /**Add ROOT file to input, the file will be chained to already added files*/
    void AddFile(TString FileName);
    void AddFriendsToChain();
    void PrintFriendList();
    Bool_t CompareBranchList(TFile* fileHandle, TString inputLevel);
    void CheckFriendChains();
    void CreateNewFriendChain(TString inputFile, TString inputLevel);
    TTree* GetInTree() { return fInChain->GetTree(); }
    TChain* GetInChain() { return fInChain; }
    TFile* GetInFile() { return fRootFile; }
    void CloseInFile()
    {
        if (fRootFile)
        {
            fRootFile->Close();
        }
    }
    /**Set the input tree when running on PROOF worker*/
    void SetInTree(TTree* tempTree);
    TObjArray* GetListOfFolders() { return fListFolder; }
    TFolder* GetBranchDescriptionFolder() { return fCbmroot; }
    UInt_t GetEntries() { return fNoOfEntries; }

    //    TList*              GetBranchNameList() {return fBranchNameList;}

    void SetInputFile(TString name);

    /** Set the repetition time of the beam when it can interact (beamTime) and when no interaction happen (gapTime).
     * The total repetition time is beamTime + gapTime */
    void SetBeamTime(Double_t beamTime, Double_t gapTime);
    /** Set the min and max limit for event time in ns */
    void SetEventTimeInterval(Double_t min, Double_t max);
    /** Set the mean time for the event in ns */
    void SetEventMeanTime(Double_t mean);
    void SetEventTime();
    Double_t GetDeltaEventTime();
    void SetFileHeader(FairFileHeader* f) { fFileHeader = f; }
    Double_t GetEventTime();

    //    virtual Bool_t   SetObject(TObject* obj, const char* ObjType);
    //    virtual void     SetObjectName(const char* ObjName, const char* ObjType);

    virtual Bool_t ActivateObject(TObject** obj, const char* BrName);
    virtual Bool_t ActivateObjectAny(void**, const std::type_info&, const char*);

    /**Set the status of the EvtHeader
     *@param Status:  True: The header was creatged in this session and has to be filled
              FALSE: We use an existing header from previous data level
     */
    void SetEvtHeaderNew(Bool_t Status) { fEvtHeaderIsNew = Status; }
    Bool_t IsEvtHeaderNew() { return fEvtHeaderIsNew; }

    /** Allow to disable the testing the file layout when adding files to a chain.
     */
    void SetCheckFileLayout(Bool_t enable) { fCheckFileLayout = enable; }

    void SetInputFileName(TString tstr) { fInputFileName = tstr; }

  private:
    /** Title of input source, could be input, background or signal*/
    TString fInputTitle;
    /**ROOT file*/
    TFile* fRootFile;
    /** Current Entry number */
    Int_t fCurrentEntryNr; //!
    /** List of all files added with AddFriend */
    std::list<TString> fFriendFileList;                               //!
    std::list<TString> fInputChainList;                               //!
    std::map<TString, TChain*> fFriendTypeList;                       //!
    std::map<TString, std::list<TString>*> fCheckInputBranches;       //!
    std::list<TString> fInputLevel;                                   //!
    std::map<TString, std::multimap<TString, TArrayI>> fRunIdInfoAll; //!
    /**Input Chain */
    TChain* fInChain;
    /**Input Tree */
    TTree* fInTree;
    /** list of folders from all input (and friends) files*/
    TObjArray* fListFolder; //!
    /** RuntimeDb*/
    FairRuntimeDb* fRtdb;
    /**folder structure of output*/
    TFolder* fCbmout;
    /**folder structure of input*/
    TFolder* fCbmroot;
    /***/
    UInt_t fSourceIdentifier;
    /**No of Entries in this source*/
    UInt_t fNoOfEntries;
    /**Initialization flag, true if initialized*/
    Bool_t IsInitialized;

    R3BFileSource(const R3BFileSource&);
    R3BFileSource operator=(const R3BFileSource&);

    /** MC Event header */
    FairMCEventHeader* fMCHeader; //!

    /**Event Header*/
    FairEventHeader* fEvtHeader; //!

    /**File Header*/
    FairFileHeader* fFileHeader; //!

    /** This is true if the event time used, came from simulation*/
    Bool_t fEventTimeInMCHeader; //!
    /**This flag is true if the event header was created in this session
     * otherwise it is false which means the header was created in a previous data
     * level and used here (e.g. in the digi)
     */
    Bool_t fEvtHeaderIsNew; //!

    /** for internal use, to return the same event time for the same entry*/
    UInt_t fCurrentEntryNo; //!
    /** for internal use, to return the same event time for the same entry*/
    UInt_t fTimeforEntryNo; //!

    /** min time for one event (ns) */
    Double_t fEventTimeMin; //!
    /** max time for one Event (ns) */
    Double_t fEventTimeMax; //!
    /** Time of event since th start (ns) */
    Double_t fEventTime; //!
    /** Time of particles in beam (ns) */
    Double_t fBeamTime; //!
    /** Time without particles in beam (gap) (ns) */
    Double_t fGapTime; //!
    /** EventMean time used (P(t)=1/fEventMeanTime*Exp(-t/fEventMeanTime) */
    Double_t fEventMeanTime; //!
    /** used to generate random numbers for event time; */
    TF1* fTimeProb; //!
    /** True if the file layout should be checked when adding files to a chain.
     *  Default value is true.
     */
    Bool_t fCheckFileLayout; //!

    std::ifstream fInputFile;
    TString fInputFileName;
    Int_t ReadIntFromString(const std::string& wholestr, const std::string& pattern);
    R3BEventHeader* fEventHeader;
    Int_t fEntryMax;

    ClassDef(R3BFileSource, 0)
};

#endif /* defined(__R3BROOT__R3BFileSource__) */

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BDetector", payloadCode, "@",
"R3BEventHeader", payloadCode, "@",
"R3BEventHeaderCal2Hit", payloadCode, "@",
"R3BFileSource", payloadCode, "@",
"R3BGlobalAnalysis", payloadCode, "@",
"R3BGlobalAnalysisS454", payloadCode, "@",
"R3BModule", payloadCode, "@",
"R3BOnlineSpectra", payloadCode, "@",
"R3BOnlineSpectraDec2019", payloadCode, "@",
"R3BOnlineSpectraFiberTofds515", payloadCode, "@",
"R3BOnlineSpectraLosStandalone", payloadCode, "@",
"R3BOnlineSpectraLosVsSci2", payloadCode, "@",
"R3BOnlineSpectraPdc", payloadCode, "@",
"R3BOnlineSpectraSci2", payloadCode, "@",
"R3BOnlineSpectraSfib", payloadCode, "@",
"R3BOnlineSpillAnalysis", payloadCode, "@",
"R3BTrackS454", payloadCode, "@",
"R3BTrackerTestS454", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BbaseDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BbaseDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BbaseDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BbaseDict() {
  TriggerDictionaryInitialization_G__R3BbaseDict_Impl();
}
