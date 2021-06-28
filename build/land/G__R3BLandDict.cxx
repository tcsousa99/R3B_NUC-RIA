// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIlanddIG__R3BLandDict

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
#include "R3BLand.h"
#include "R3BGeoLand.h"
#include "R3BGeoLandPar.h"
#include "R3BLandContFact.h"
#include "R3BLandDigitizer.h"
#include "R3BLandDigitizerQA.h"
#include "R3BNeutronTracker.h"
#include "R3BLandDigiPar.h"
#include "R3BNeuLandCluster.h"
#include "R3BNeuLandClusterFinder.h"
#include "R3BNeutronCalibr2D.h"
#include "R3BPrimPart.h"
#include "R3BNeutronTracker2D.h"
#include "R3BNeutHit.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BLand(void *p = 0);
   static void *newArray_R3BLand(Long_t size, void *p);
   static void delete_R3BLand(void *p);
   static void deleteArray_R3BLand(void *p);
   static void destruct_R3BLand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLand*)
   {
      ::R3BLand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLand", ::R3BLand::Class_Version(), "", 36,
                  typeid(::R3BLand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLand::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLand) );
      instance.SetNew(&new_R3BLand);
      instance.SetNewArray(&newArray_R3BLand);
      instance.SetDelete(&delete_R3BLand);
      instance.SetDeleteArray(&deleteArray_R3BLand);
      instance.SetDestructor(&destruct_R3BLand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLand*)
   {
      return GenerateInitInstanceLocal((::R3BLand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoLand(void *p = 0);
   static void *newArray_R3BGeoLand(Long_t size, void *p);
   static void delete_R3BGeoLand(void *p);
   static void deleteArray_R3BGeoLand(void *p);
   static void destruct_R3BGeoLand(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoLand*)
   {
      ::R3BGeoLand *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoLand >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoLand", ::R3BGeoLand::Class_Version(), "", 238,
                  typeid(::R3BGeoLand), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoLand::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGeoLand) );
      instance.SetNew(&new_R3BGeoLand);
      instance.SetNewArray(&newArray_R3BGeoLand);
      instance.SetDelete(&delete_R3BGeoLand);
      instance.SetDeleteArray(&deleteArray_R3BGeoLand);
      instance.SetDestructor(&destruct_R3BGeoLand);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoLand*)
   {
      return GenerateInitInstanceLocal((::R3BGeoLand*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGeoLandPar(void *p = 0);
   static void *newArray_R3BGeoLandPar(Long_t size, void *p);
   static void delete_R3BGeoLandPar(void *p);
   static void deleteArray_R3BGeoLandPar(void *p);
   static void destruct_R3BGeoLandPar(void *p);
   static void streamer_R3BGeoLandPar(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGeoLandPar*)
   {
      ::R3BGeoLandPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGeoLandPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGeoLandPar", ::R3BGeoLandPar::Class_Version(), "", 280,
                  typeid(::R3BGeoLandPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGeoLandPar::Dictionary, isa_proxy, 16,
                  sizeof(::R3BGeoLandPar) );
      instance.SetNew(&new_R3BGeoLandPar);
      instance.SetNewArray(&newArray_R3BGeoLandPar);
      instance.SetDelete(&delete_R3BGeoLandPar);
      instance.SetDeleteArray(&deleteArray_R3BGeoLandPar);
      instance.SetDestructor(&destruct_R3BGeoLandPar);
      instance.SetStreamerFunc(&streamer_R3BGeoLandPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGeoLandPar*)
   {
      return GenerateInitInstanceLocal((::R3BGeoLandPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandContFact(void *p = 0);
   static void *newArray_R3BLandContFact(Long_t size, void *p);
   static void delete_R3BLandContFact(void *p);
   static void deleteArray_R3BLandContFact(void *p);
   static void destruct_R3BLandContFact(void *p);
   static void streamer_R3BLandContFact(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandContFact*)
   {
      ::R3BLandContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandContFact", ::R3BLandContFact::Class_Version(), "", 321,
                  typeid(::R3BLandContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandContFact::Dictionary, isa_proxy, 16,
                  sizeof(::R3BLandContFact) );
      instance.SetNew(&new_R3BLandContFact);
      instance.SetNewArray(&newArray_R3BLandContFact);
      instance.SetDelete(&delete_R3BLandContFact);
      instance.SetDeleteArray(&deleteArray_R3BLandContFact);
      instance.SetDestructor(&destruct_R3BLandContFact);
      instance.SetStreamerFunc(&streamer_R3BLandContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandContFact*)
   {
      return GenerateInitInstanceLocal((::R3BLandContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigiPar(void *p = 0);
   static void *newArray_R3BLandDigiPar(Long_t size, void *p);
   static void delete_R3BLandDigiPar(void *p);
   static void deleteArray_R3BLandDigiPar(void *p);
   static void destruct_R3BLandDigiPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigiPar*)
   {
      ::R3BLandDigiPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigiPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigiPar", ::R3BLandDigiPar::Class_Version(), "R3BLandDigiPar.h", 26,
                  typeid(::R3BLandDigiPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandDigiPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigiPar) );
      instance.SetNew(&new_R3BLandDigiPar);
      instance.SetNewArray(&newArray_R3BLandDigiPar);
      instance.SetDelete(&delete_R3BLandDigiPar);
      instance.SetDeleteArray(&deleteArray_R3BLandDigiPar);
      instance.SetDestructor(&destruct_R3BLandDigiPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigiPar*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigiPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigitizer(void *p = 0);
   static void *newArray_R3BLandDigitizer(Long_t size, void *p);
   static void delete_R3BLandDigitizer(void *p);
   static void deleteArray_R3BLandDigitizer(void *p);
   static void destruct_R3BLandDigitizer(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigitizer*)
   {
      ::R3BLandDigitizer *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigitizer >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigitizer", ::R3BLandDigitizer::Class_Version(), "", 368,
                  typeid(::R3BLandDigitizer), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandDigitizer::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigitizer) );
      instance.SetNew(&new_R3BLandDigitizer);
      instance.SetNewArray(&newArray_R3BLandDigitizer);
      instance.SetDelete(&delete_R3BLandDigitizer);
      instance.SetDeleteArray(&deleteArray_R3BLandDigitizer);
      instance.SetDestructor(&destruct_R3BLandDigitizer);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigitizer*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigitizer*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigitizerQA(void *p = 0);
   static void *newArray_R3BLandDigitizerQA(Long_t size, void *p);
   static void delete_R3BLandDigitizerQA(void *p);
   static void deleteArray_R3BLandDigitizerQA(void *p);
   static void destruct_R3BLandDigitizerQA(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigitizerQA*)
   {
      ::R3BLandDigitizerQA *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigitizerQA >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigitizerQA", ::R3BLandDigitizerQA::Class_Version(), "", 500,
                  typeid(::R3BLandDigitizerQA), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandDigitizerQA::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigitizerQA) );
      instance.SetNew(&new_R3BLandDigitizerQA);
      instance.SetNewArray(&newArray_R3BLandDigitizerQA);
      instance.SetDelete(&delete_R3BLandDigitizerQA);
      instance.SetDeleteArray(&deleteArray_R3BLandDigitizerQA);
      instance.SetDestructor(&destruct_R3BLandDigitizerQA);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigitizerQA*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigitizerQA*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTracker(void *p = 0);
   static void *newArray_R3BNeutronTracker(Long_t size, void *p);
   static void delete_R3BNeutronTracker(void *p);
   static void deleteArray_R3BNeutronTracker(void *p);
   static void destruct_R3BNeutronTracker(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTracker*)
   {
      ::R3BNeutronTracker *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTracker >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTracker", ::R3BNeutronTracker::Class_Version(), "", 614,
                  typeid(::R3BNeutronTracker), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeutronTracker::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTracker) );
      instance.SetNew(&new_R3BNeutronTracker);
      instance.SetNewArray(&newArray_R3BNeutronTracker);
      instance.SetDelete(&delete_R3BNeutronTracker);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTracker);
      instance.SetDestructor(&destruct_R3BNeutronTracker);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTracker*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTracker*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeuLandCluster(void *p = 0);
   static void *newArray_R3BNeuLandCluster(Long_t size, void *p);
   static void delete_R3BNeuLandCluster(void *p);
   static void deleteArray_R3BNeuLandCluster(void *p);
   static void destruct_R3BNeuLandCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuLandCluster*)
   {
      ::R3BNeuLandCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuLandCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuLandCluster", ::R3BNeuLandCluster::Class_Version(), "", 823,
                  typeid(::R3BNeuLandCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeuLandCluster::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeuLandCluster) );
      instance.SetNew(&new_R3BNeuLandCluster);
      instance.SetNewArray(&newArray_R3BNeuLandCluster);
      instance.SetDelete(&delete_R3BNeuLandCluster);
      instance.SetDeleteArray(&deleteArray_R3BNeuLandCluster);
      instance.SetDestructor(&destruct_R3BNeuLandCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuLandCluster*)
   {
      return GenerateInitInstanceLocal((::R3BNeuLandCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeuLandClusterFinder(void *p = 0);
   static void *newArray_R3BNeuLandClusterFinder(Long_t size, void *p);
   static void delete_R3BNeuLandClusterFinder(void *p);
   static void deleteArray_R3BNeuLandClusterFinder(void *p);
   static void destruct_R3BNeuLandClusterFinder(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeuLandClusterFinder*)
   {
      ::R3BNeuLandClusterFinder *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeuLandClusterFinder >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeuLandClusterFinder", ::R3BNeuLandClusterFinder::Class_Version(), "", 903,
                  typeid(::R3BNeuLandClusterFinder), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeuLandClusterFinder::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeuLandClusterFinder) );
      instance.SetNew(&new_R3BNeuLandClusterFinder);
      instance.SetNewArray(&newArray_R3BNeuLandClusterFinder);
      instance.SetDelete(&delete_R3BNeuLandClusterFinder);
      instance.SetDeleteArray(&deleteArray_R3BNeuLandClusterFinder);
      instance.SetDestructor(&destruct_R3BNeuLandClusterFinder);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeuLandClusterFinder*)
   {
      return GenerateInitInstanceLocal((::R3BNeuLandClusterFinder*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronCalibr2D(void *p = 0);
   static void *newArray_R3BNeutronCalibr2D(Long_t size, void *p);
   static void delete_R3BNeutronCalibr2D(void *p);
   static void deleteArray_R3BNeutronCalibr2D(void *p);
   static void destruct_R3BNeutronCalibr2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronCalibr2D*)
   {
      ::R3BNeutronCalibr2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronCalibr2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronCalibr2D", ::R3BNeutronCalibr2D::Class_Version(), "", 975,
                  typeid(::R3BNeutronCalibr2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeutronCalibr2D::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronCalibr2D) );
      instance.SetNew(&new_R3BNeutronCalibr2D);
      instance.SetNewArray(&newArray_R3BNeutronCalibr2D);
      instance.SetDelete(&delete_R3BNeutronCalibr2D);
      instance.SetDeleteArray(&deleteArray_R3BNeutronCalibr2D);
      instance.SetDestructor(&destruct_R3BNeutronCalibr2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronCalibr2D*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronCalibr2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPrimPart(void *p = 0);
   static void *newArray_R3BPrimPart(Long_t size, void *p);
   static void delete_R3BPrimPart(void *p);
   static void deleteArray_R3BPrimPart(void *p);
   static void destruct_R3BPrimPart(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPrimPart*)
   {
      ::R3BPrimPart *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPrimPart >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPrimPart", ::R3BPrimPart::Class_Version(), "", 1034,
                  typeid(::R3BPrimPart), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPrimPart::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPrimPart) );
      instance.SetNew(&new_R3BPrimPart);
      instance.SetNewArray(&newArray_R3BPrimPart);
      instance.SetDelete(&delete_R3BPrimPart);
      instance.SetDeleteArray(&deleteArray_R3BPrimPart);
      instance.SetDestructor(&destruct_R3BPrimPart);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPrimPart*)
   {
      return GenerateInitInstanceLocal((::R3BPrimPart*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTracker2D(void *p = 0);
   static void *newArray_R3BNeutronTracker2D(Long_t size, void *p);
   static void delete_R3BNeutronTracker2D(void *p);
   static void deleteArray_R3BNeutronTracker2D(void *p);
   static void destruct_R3BNeutronTracker2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTracker2D*)
   {
      ::R3BNeutronTracker2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTracker2D >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTracker2D", ::R3BNeutronTracker2D::Class_Version(), "", 1127,
                  typeid(::R3BNeutronTracker2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeutronTracker2D::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTracker2D) );
      instance.SetNew(&new_R3BNeutronTracker2D);
      instance.SetNewArray(&newArray_R3BNeutronTracker2D);
      instance.SetDelete(&delete_R3BNeutronTracker2D);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTracker2D);
      instance.SetDestructor(&destruct_R3BNeutronTracker2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTracker2D*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTracker2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutHit(void *p = 0);
   static void *newArray_R3BNeutHit(Long_t size, void *p);
   static void delete_R3BNeutHit(void *p);
   static void deleteArray_R3BNeutHit(void *p);
   static void destruct_R3BNeutHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutHit*)
   {
      ::R3BNeutHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutHit", ::R3BNeutHit::Class_Version(), "", 1310,
                  typeid(::R3BNeutHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeutHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutHit) );
      instance.SetNew(&new_R3BNeutHit);
      instance.SetNewArray(&newArray_R3BNeutHit);
      instance.SetDelete(&delete_R3BNeutHit);
      instance.SetDeleteArray(&deleteArray_R3BNeutHit);
      instance.SetDestructor(&destruct_R3BNeutHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutHit*)
   {
      return GenerateInitInstanceLocal((::R3BNeutHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BLand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLand::Class_Name()
{
   return "R3BLand";
}

//______________________________________________________________________________
const char *R3BLand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoLand::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoLand::Class_Name()
{
   return "R3BGeoLand";
}

//______________________________________________________________________________
const char *R3BGeoLand::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoLand::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoLand::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoLand::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLand*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGeoLandPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGeoLandPar::Class_Name()
{
   return "R3BGeoLandPar";
}

//______________________________________________________________________________
const char *R3BGeoLandPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGeoLandPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGeoLandPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGeoLandPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGeoLandPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandContFact::Class_Name()
{
   return "R3BLandContFact";
}

//______________________________________________________________________________
const char *R3BLandContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigiPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigiPar::Class_Name()
{
   return "R3BLandDigiPar";
}

//______________________________________________________________________________
const char *R3BLandDigiPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigiPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigiPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigiPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigiPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigitizer::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigitizer::Class_Name()
{
   return "R3BLandDigitizer";
}

//______________________________________________________________________________
const char *R3BLandDigitizer::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigitizer::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigitizer::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigitizer::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizer*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigitizerQA::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigitizerQA::Class_Name()
{
   return "R3BLandDigitizerQA";
}

//______________________________________________________________________________
const char *R3BLandDigitizerQA::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigitizerQA::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigitizerQA::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigitizerQA::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigitizerQA*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTracker::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTracker::Class_Name()
{
   return "R3BNeutronTracker";
}

//______________________________________________________________________________
const char *R3BNeutronTracker::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTracker::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTracker::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTracker::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuLandCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuLandCluster::Class_Name()
{
   return "R3BNeuLandCluster";
}

//______________________________________________________________________________
const char *R3BNeuLandCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuLandCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuLandCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuLandCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeuLandClusterFinder::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeuLandClusterFinder::Class_Name()
{
   return "R3BNeuLandClusterFinder";
}

//______________________________________________________________________________
const char *R3BNeuLandClusterFinder::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeuLandClusterFinder::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeuLandClusterFinder::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeuLandClusterFinder::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeuLandClusterFinder*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronCalibr2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronCalibr2D::Class_Name()
{
   return "R3BNeutronCalibr2D";
}

//______________________________________________________________________________
const char *R3BNeutronCalibr2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronCalibr2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronCalibr2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronCalibr2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronCalibr2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPrimPart::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPrimPart::Class_Name()
{
   return "R3BPrimPart";
}

//______________________________________________________________________________
const char *R3BPrimPart::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPrimPart::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPrimPart::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPrimPart::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPrimPart*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTracker2D::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTracker2D::Class_Name()
{
   return "R3BNeutronTracker2D";
}

//______________________________________________________________________________
const char *R3BNeutronTracker2D::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTracker2D::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTracker2D::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTracker2D::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTracker2D*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutHit::Class_Name()
{
   return "R3BNeutHit";
}

//______________________________________________________________________________
const char *R3BNeutHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BLand::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLand::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLand(void *p) {
      return  p ? new(p) ::R3BLand : new ::R3BLand;
   }
   static void *newArray_R3BLand(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLand[nElements] : new ::R3BLand[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLand(void *p) {
      delete ((::R3BLand*)p);
   }
   static void deleteArray_R3BLand(void *p) {
      delete [] ((::R3BLand*)p);
   }
   static void destruct_R3BLand(void *p) {
      typedef ::R3BLand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLand

//______________________________________________________________________________
void R3BGeoLand::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoLand.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGeoLand::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGeoLand::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoLand(void *p) {
      return  p ? new(p) ::R3BGeoLand : new ::R3BGeoLand;
   }
   static void *newArray_R3BGeoLand(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoLand[nElements] : new ::R3BGeoLand[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoLand(void *p) {
      delete ((::R3BGeoLand*)p);
   }
   static void deleteArray_R3BGeoLand(void *p) {
      delete [] ((::R3BGeoLand*)p);
   }
   static void destruct_R3BGeoLand(void *p) {
      typedef ::R3BGeoLand current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGeoLand

//______________________________________________________________________________
void R3BGeoLandPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGeoLandPar.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      FairParGenericSet::Streamer(R__b);
      R__b >> fGeoSensNodes;
      R__b >> fGeoPassNodes;
      R__b.CheckByteCount(R__s, R__c, R3BGeoLandPar::IsA());
   } else {
      R__c = R__b.WriteVersion(R3BGeoLandPar::IsA(), kTRUE);
      FairParGenericSet::Streamer(R__b);
      R__b << fGeoSensNodes;
      R__b << fGeoPassNodes;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGeoLandPar(void *p) {
      return  p ? new(p) ::R3BGeoLandPar : new ::R3BGeoLandPar;
   }
   static void *newArray_R3BGeoLandPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGeoLandPar[nElements] : new ::R3BGeoLandPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGeoLandPar(void *p) {
      delete ((::R3BGeoLandPar*)p);
   }
   static void deleteArray_R3BGeoLandPar(void *p) {
      delete [] ((::R3BGeoLandPar*)p);
   }
   static void destruct_R3BGeoLandPar(void *p) {
      typedef ::R3BGeoLandPar current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BGeoLandPar(TBuffer &buf, void *obj) {
      ((::R3BGeoLandPar*)obj)->::R3BGeoLandPar::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BGeoLandPar

//______________________________________________________________________________
void R3BLandContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandContFact.

   FairContFact::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandContFact(void *p) {
      return  p ? new(p) ::R3BLandContFact : new ::R3BLandContFact;
   }
   static void *newArray_R3BLandContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandContFact[nElements] : new ::R3BLandContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandContFact(void *p) {
      delete ((::R3BLandContFact*)p);
   }
   static void deleteArray_R3BLandContFact(void *p) {
      delete [] ((::R3BLandContFact*)p);
   }
   static void destruct_R3BLandContFact(void *p) {
      typedef ::R3BLandContFact current_t;
      ((current_t*)p)->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_R3BLandContFact(TBuffer &buf, void *obj) {
      ((::R3BLandContFact*)obj)->::R3BLandContFact::Streamer(buf);
   }
} // end of namespace ROOT for class ::R3BLandContFact

//______________________________________________________________________________
void R3BLandDigiPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigiPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigiPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigiPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigiPar(void *p) {
      return  p ? new(p) ::R3BLandDigiPar : new ::R3BLandDigiPar;
   }
   static void *newArray_R3BLandDigiPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigiPar[nElements] : new ::R3BLandDigiPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigiPar(void *p) {
      delete ((::R3BLandDigiPar*)p);
   }
   static void deleteArray_R3BLandDigiPar(void *p) {
      delete [] ((::R3BLandDigiPar*)p);
   }
   static void destruct_R3BLandDigiPar(void *p) {
      typedef ::R3BLandDigiPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigiPar

//______________________________________________________________________________
void R3BLandDigitizer::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigitizer.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigitizer::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigitizer::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigitizer(void *p) {
      return  p ? new(p) ::R3BLandDigitizer : new ::R3BLandDigitizer;
   }
   static void *newArray_R3BLandDigitizer(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigitizer[nElements] : new ::R3BLandDigitizer[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigitizer(void *p) {
      delete ((::R3BLandDigitizer*)p);
   }
   static void deleteArray_R3BLandDigitizer(void *p) {
      delete [] ((::R3BLandDigitizer*)p);
   }
   static void destruct_R3BLandDigitizer(void *p) {
      typedef ::R3BLandDigitizer current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigitizer

//______________________________________________________________________________
void R3BLandDigitizerQA::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigitizerQA.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigitizerQA::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigitizerQA::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigitizerQA(void *p) {
      return  p ? new(p) ::R3BLandDigitizerQA : new ::R3BLandDigitizerQA;
   }
   static void *newArray_R3BLandDigitizerQA(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigitizerQA[nElements] : new ::R3BLandDigitizerQA[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigitizerQA(void *p) {
      delete ((::R3BLandDigitizerQA*)p);
   }
   static void deleteArray_R3BLandDigitizerQA(void *p) {
      delete [] ((::R3BLandDigitizerQA*)p);
   }
   static void destruct_R3BLandDigitizerQA(void *p) {
      typedef ::R3BLandDigitizerQA current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigitizerQA

//______________________________________________________________________________
void R3BNeutronTracker::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTracker.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTracker::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTracker::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTracker(void *p) {
      return  p ? new(p) ::R3BNeutronTracker : new ::R3BNeutronTracker;
   }
   static void *newArray_R3BNeutronTracker(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTracker[nElements] : new ::R3BNeutronTracker[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTracker(void *p) {
      delete ((::R3BNeutronTracker*)p);
   }
   static void deleteArray_R3BNeutronTracker(void *p) {
      delete [] ((::R3BNeutronTracker*)p);
   }
   static void destruct_R3BNeutronTracker(void *p) {
      typedef ::R3BNeutronTracker current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTracker

//______________________________________________________________________________
void R3BNeuLandCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuLandCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeuLandCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeuLandCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuLandCluster(void *p) {
      return  p ? new(p) ::R3BNeuLandCluster : new ::R3BNeuLandCluster;
   }
   static void *newArray_R3BNeuLandCluster(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuLandCluster[nElements] : new ::R3BNeuLandCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuLandCluster(void *p) {
      delete ((::R3BNeuLandCluster*)p);
   }
   static void deleteArray_R3BNeuLandCluster(void *p) {
      delete [] ((::R3BNeuLandCluster*)p);
   }
   static void destruct_R3BNeuLandCluster(void *p) {
      typedef ::R3BNeuLandCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeuLandCluster

//______________________________________________________________________________
void R3BNeuLandClusterFinder::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeuLandClusterFinder.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeuLandClusterFinder::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeuLandClusterFinder::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeuLandClusterFinder(void *p) {
      return  p ? new(p) ::R3BNeuLandClusterFinder : new ::R3BNeuLandClusterFinder;
   }
   static void *newArray_R3BNeuLandClusterFinder(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeuLandClusterFinder[nElements] : new ::R3BNeuLandClusterFinder[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeuLandClusterFinder(void *p) {
      delete ((::R3BNeuLandClusterFinder*)p);
   }
   static void deleteArray_R3BNeuLandClusterFinder(void *p) {
      delete [] ((::R3BNeuLandClusterFinder*)p);
   }
   static void destruct_R3BNeuLandClusterFinder(void *p) {
      typedef ::R3BNeuLandClusterFinder current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeuLandClusterFinder

//______________________________________________________________________________
void R3BNeutronCalibr2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronCalibr2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronCalibr2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronCalibr2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronCalibr2D(void *p) {
      return  p ? new(p) ::R3BNeutronCalibr2D : new ::R3BNeutronCalibr2D;
   }
   static void *newArray_R3BNeutronCalibr2D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronCalibr2D[nElements] : new ::R3BNeutronCalibr2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronCalibr2D(void *p) {
      delete ((::R3BNeutronCalibr2D*)p);
   }
   static void deleteArray_R3BNeutronCalibr2D(void *p) {
      delete [] ((::R3BNeutronCalibr2D*)p);
   }
   static void destruct_R3BNeutronCalibr2D(void *p) {
      typedef ::R3BNeutronCalibr2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronCalibr2D

//______________________________________________________________________________
void R3BPrimPart::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPrimPart.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPrimPart::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPrimPart::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPrimPart(void *p) {
      return  p ? new(p) ::R3BPrimPart : new ::R3BPrimPart;
   }
   static void *newArray_R3BPrimPart(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPrimPart[nElements] : new ::R3BPrimPart[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPrimPart(void *p) {
      delete ((::R3BPrimPart*)p);
   }
   static void deleteArray_R3BPrimPart(void *p) {
      delete [] ((::R3BPrimPart*)p);
   }
   static void destruct_R3BPrimPart(void *p) {
      typedef ::R3BPrimPart current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPrimPart

//______________________________________________________________________________
void R3BNeutronTracker2D::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTracker2D.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTracker2D::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTracker2D::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTracker2D(void *p) {
      return  p ? new(p) ::R3BNeutronTracker2D : new ::R3BNeutronTracker2D;
   }
   static void *newArray_R3BNeutronTracker2D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTracker2D[nElements] : new ::R3BNeutronTracker2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTracker2D(void *p) {
      delete ((::R3BNeutronTracker2D*)p);
   }
   static void deleteArray_R3BNeutronTracker2D(void *p) {
      delete [] ((::R3BNeutronTracker2D*)p);
   }
   static void destruct_R3BNeutronTracker2D(void *p) {
      typedef ::R3BNeutronTracker2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTracker2D

//______________________________________________________________________________
void R3BNeutHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutHit(void *p) {
      return  p ? new(p) ::R3BNeutHit : new ::R3BNeutHit;
   }
   static void *newArray_R3BNeutHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutHit[nElements] : new ::R3BNeutHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutHit(void *p) {
      delete ((::R3BNeutHit*)p);
   }
   static void deleteArray_R3BNeutHit(void *p) {
      delete [] ((::R3BNeutHit*)p);
   }
   static void destruct_R3BNeutHit(void *p) {
      typedef ::R3BNeutHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutHit

namespace ROOT {
   static TClass *vectorlER3BNeuLandClustermUgR_Dictionary();
   static void vectorlER3BNeuLandClustermUgR_TClassManip(TClass*);
   static void *new_vectorlER3BNeuLandClustermUgR(void *p = 0);
   static void *newArray_vectorlER3BNeuLandClustermUgR(Long_t size, void *p);
   static void delete_vectorlER3BNeuLandClustermUgR(void *p);
   static void deleteArray_vectorlER3BNeuLandClustermUgR(void *p);
   static void destruct_vectorlER3BNeuLandClustermUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BNeuLandCluster*>*)
   {
      vector<R3BNeuLandCluster*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BNeuLandCluster*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BNeuLandCluster*>", -2, "vector", 214,
                  typeid(vector<R3BNeuLandCluster*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BNeuLandClustermUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BNeuLandCluster*>) );
      instance.SetNew(&new_vectorlER3BNeuLandClustermUgR);
      instance.SetNewArray(&newArray_vectorlER3BNeuLandClustermUgR);
      instance.SetDelete(&delete_vectorlER3BNeuLandClustermUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BNeuLandClustermUgR);
      instance.SetDestructor(&destruct_vectorlER3BNeuLandClustermUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BNeuLandCluster*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BNeuLandCluster*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BNeuLandClustermUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BNeuLandCluster*>*)0x0)->GetClass();
      vectorlER3BNeuLandClustermUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BNeuLandClustermUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BNeuLandClustermUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BNeuLandCluster*> : new vector<R3BNeuLandCluster*>;
   }
   static void *newArray_vectorlER3BNeuLandClustermUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BNeuLandCluster*>[nElements] : new vector<R3BNeuLandCluster*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BNeuLandClustermUgR(void *p) {
      delete ((vector<R3BNeuLandCluster*>*)p);
   }
   static void deleteArray_vectorlER3BNeuLandClustermUgR(void *p) {
      delete [] ((vector<R3BNeuLandCluster*>*)p);
   }
   static void destruct_vectorlER3BNeuLandClustermUgR(void *p) {
      typedef vector<R3BNeuLandCluster*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BNeuLandCluster*>

namespace ROOT {
   static TClass *vectorlER3BLandDigimUgR_Dictionary();
   static void vectorlER3BLandDigimUgR_TClassManip(TClass*);
   static void *new_vectorlER3BLandDigimUgR(void *p = 0);
   static void *newArray_vectorlER3BLandDigimUgR(Long_t size, void *p);
   static void delete_vectorlER3BLandDigimUgR(void *p);
   static void deleteArray_vectorlER3BLandDigimUgR(void *p);
   static void destruct_vectorlER3BLandDigimUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BLandDigi*>*)
   {
      vector<R3BLandDigi*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BLandDigi*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BLandDigi*>", -2, "vector", 214,
                  typeid(vector<R3BLandDigi*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BLandDigimUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BLandDigi*>) );
      instance.SetNew(&new_vectorlER3BLandDigimUgR);
      instance.SetNewArray(&newArray_vectorlER3BLandDigimUgR);
      instance.SetDelete(&delete_vectorlER3BLandDigimUgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BLandDigimUgR);
      instance.SetDestructor(&destruct_vectorlER3BLandDigimUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BLandDigi*> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BLandDigi*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BLandDigimUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BLandDigi*>*)0x0)->GetClass();
      vectorlER3BLandDigimUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BLandDigimUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BLandDigimUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BLandDigi*> : new vector<R3BLandDigi*>;
   }
   static void *newArray_vectorlER3BLandDigimUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BLandDigi*>[nElements] : new vector<R3BLandDigi*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BLandDigimUgR(void *p) {
      delete ((vector<R3BLandDigi*>*)p);
   }
   static void deleteArray_vectorlER3BLandDigimUgR(void *p) {
      delete [] ((vector<R3BLandDigi*>*)p);
   }
   static void destruct_vectorlER3BLandDigimUgR(void *p) {
      typedef vector<R3BLandDigi*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BLandDigi*>

namespace {
  void TriggerDictionaryInitialization_G__R3BLandDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bbase",
"/work/R3BRoot/passive",
"/work/R3BRoot/land",
"/work/R3BRoot/los",
"/work/R3BRoot/r3bdata/",
"/work/R3BRoot/r3bdata/caloData",
"/work/R3BRoot/r3bdata/dchData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/tcal",
"/work/R3BRoot/neuland/unpack",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/land/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BLandDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BLand;
class __attribute__((annotate(R"ATTRDUMP(Class for STS)ATTRDUMP"))) R3BGeoLand;
class R3BGeoLandPar;
class __attribute__((annotate(R"ATTRDUMP(Factory for all LAND parameter containers)ATTRDUMP"))) R3BLandContFact;
class __attribute__((annotate("$clingAutoload$R3BLandDigiPar.h")))  R3BLandDigiPar;
class R3BLandDigitizer;
class R3BLandDigitizerQA;
class R3BNeutronTracker;
class R3BNeuLandCluster;
class R3BNeuLandClusterFinder;
class R3BNeutronCalibr2D;
class R3BPrimPart;
class R3BNeutronTracker2D;
class R3BNeutHit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BLandDict dictionary payload"

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

#ifndef R3BLAND_H
#define R3BLAND_H

#include "R3BDetector.h"
#include "R3BLandFirstHits.h"
#include "TGeoMedium.h"
#include "TLorentzVector.h"
#include <iostream>
#include <map>
#include <string>

using namespace std;

class TClonesArray;
class R3BLandPoint;
class FairVolume;

class R3BLand : public R3BDetector
{
  public:
    /** Default constructor */
    R3BLand();

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param trans   position
     *@param rot     rotation
     */
    R3BLand(const TString& geoFile, const TGeoTranslation& trans, const TGeoRotation& rot = TGeoRotation());

    /** Standard constructor.
     *@param geoFile name of the ROOT geometry file
     *@param combi   position + rotation
     */
    R3BLand(const TString& geoFile, const TGeoCombiTrans& combi = TGeoCombiTrans());

    /** Destructor **/
    ~R3BLand();

    /** Virtual method ProcessHits
     **
     ** Defines the action to be taken when a step is inside the
     ** active volume. Creates a R3BLandPoint and adds it to the
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

    virtual void FinishEvent();

    /** Virtual method Register
     **
     ** Registers the hit collection in the ROOT manager.
     **/
    virtual void Register();

    virtual void FinishRun();

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

    virtual void SetSpecialPhysicsCuts() {}

    virtual Bool_t CheckIfSensitive(std::string name);

  private:
    /** Track information to be stored until the track leaves the
     active volume. **/
    Int_t fTrackID;                 //!  track index
    Int_t fVolumeID;                //!  volume id
    Int_t fCopyNo;                  //!  copy no
    Int_t fPaddleTyp;               //!  box number
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime;               //!  time
    Double32_t fLength;             //!  length
    Double32_t fELoss;              //!  energy loss
    Double32_t fLightYield;         //!  light yield

    Int_t fPosIndex;                    //!
    TClonesArray* fLandCollection;      //!  The hit collection
    TClonesArray* fLandFirstHits;       //!  First Hits
    Bool_t kGeoSaved;                   //!
    TList* flGeoPar;                    //!
    Double_t fBirkC0, fBirkC1, fBirkC2; //!

    Int_t fMotherID; //!  Mother ID
    Int_t fNprim;    //!  Number of primaries

    Double_t firstHitX[6]; //! position and time of first our hits
    Double_t firstHitY[6]; //!
    Double_t firstHitZ[6]; //!
    Double_t firstT[6];    //!

    /** Private method AddHit
     **
     ** Adds a LandPoint to the HitCollection
     **/
    R3BLandPoint* AddHit(Int_t trackID,
                         Int_t detID,
                         Int_t box,
                         Int_t id1,
                         Int_t id2,
                         TVector3 posIn,
                         TVector3 pos_out,
                         TVector3 momIn,
                         TVector3 momOut,
                         Double_t time,
                         Double_t length,
                         Double_t eLoss,
                         Double_t lightYield);

    R3BLandFirstHits* AddHit1(Double_t x0,
                              Double_t y0,
                              Double_t z0,
                              Double_t T0,
                              Double_t x1,
                              Double_t y1,
                              Double_t z1,
                              Double_t T1,
                              Double_t x2,
                              Double_t y2,
                              Double_t z2,
                              Double_t T2,
                              Double_t x3,
                              Double_t y3,
                              Double_t z3,
                              Double_t T3,
                              Double_t x4,
                              Double_t y4,
                              Double_t z4,
                              Double_t T4,
                              Double_t x5,
                              Double_t y5,
                              Double_t z5,
                              Double_t T5);

    /** Private method ResetParameters
     **
     ** Resets the private members for the track parameters
     **/
    void ResetParameters();

    /** Map of MCis with fixed VolID */
    map<Int_t, Int_t> fMapMcId; //!

    void StepHistory();

    ClassDef(R3BLand, 5);
};

inline void R3BLand::ResetParameters()
{
    fTrackID = fVolumeID = 0;
    fPosIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fPosOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomIn.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fMomOut.SetXYZM(0.0, 0.0, 0.0, 0.0);
    fTime = fLength = fELoss = fLightYield = 0;
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

#ifndef R3BGEOLAND_H
#define R3BGEOLAND_H

#include "FairGeoSet.h"

class R3BGeoLand : public FairGeoSet
{
  protected:
    char modName[30]; // name of module
    char eleName[20]; // substring for elements in module
  public:
    R3BGeoLand();
    ~R3BGeoLand() {}
    const char* getModuleName(Int_t);
    const char* getEleName(Int_t);
    inline Int_t getModNumInMod(const TString&);
    ClassDef(R3BGeoLand, 0) // Class for STS
};

inline Int_t R3BGeoLand::getModNumInMod(const TString& name)
{
    // returns the module index from module name
    return (Int_t)(name[3] - '0') - 1;
}

#endif /* !R3BGEOLAND_H */
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

#ifndef R3BGEOLANDPAR_H
#define R3BGEOLANDPAR_H

#include "FairParGenericSet.h"

#include "TH1F.h"

class R3BGeoLandPar : public FairParGenericSet
{
  public:
    TObjArray* fGeoSensNodes; // List of FairGeoNodes for sensitive volumes
    TObjArray* fGeoPassNodes; // List of FairGeoNodes for sensitive volumes

    R3BGeoLandPar(const char* name = "R3BGeoLandPar",
                  const char* title = "Land Geometry Parameters",
                  const char* context = "TestDefaultContext");
    ~R3BGeoLandPar(void);
    void clear(void);
    void putParams(FairParamList*);
    Bool_t getParams(FairParamList*);
    TObjArray* GetGeoSensitiveNodes() { return fGeoSensNodes; }
    TObjArray* GetGeoPassiveNodes() { return fGeoPassNodes; }

    ClassDef(R3BGeoLandPar, 1)
};

#endif /* !R3BGEOLANDPAR_H */
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

#ifndef R3BLANDCONTFACT_H
#define R3BLANDCONTFACT_H

#include "FairContFact.h"

class FairContainer;

class R3BLandContFact : public FairContFact
{
  private:
    void setAllContainers();

  public:
    R3BLandContFact();
    ~R3BLandContFact() {}
    FairParSet* createContainer(FairContainer*);
    void activateParIo(FairParIo* io);
    ClassDef(R3BLandContFact, 0) // Factory for all LAND parameter containers
};

#endif /* !R3BLANDCONTFACT_H */
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

#ifndef R3BLANDDIGITIZER_H
#define R3BLANDDIGITIZER_H 1

#include "FairTask.h"
#include "R3BLandDigi.h"
#include "R3BLandDigiPar.h"

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;
class TF1;
class TRandom3;

struct PM_RES
{
    Double_t Ltime, Rtime, LlightCFD, RlightCFD, LlightQDC, RlightQDC, Lenergy, Renergy;
};

class R3BLandDigitizer : public FairTask
{

  public:
    /** Default constructor **/
    R3BLandDigitizer();

    /** Constructor **/
    R3BLandDigitizer(Int_t verbose);

    /** Destructor **/
    ~R3BLandDigitizer();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();

    virtual void Reset();

    // Allow change of the PMT Saturation at runtime. R3BLandDigitizer is initialized with the default value
    inline void SetSaturationCoefficient(const Double_t& saturationCoefficient)
    {
        fSaturationCoefficient = saturationCoefficient;
    }
    inline Double_t GetSaturationCoefficient() const { return fSaturationCoefficient; }

    // Allow change of length of time gate for QDC ("Integration time") at runtime
    inline void SetTOFRange(const Double_t& TOFRange) { fTOFRange = TOFRange; }
    inline Double_t GetTOFRange() const { return fTOFRange; }

    Double_t BuildTOFRangeFromBeamEnergy(const Double_t& e);
    // Compatibility to not break existing code
    inline void UseBeam(const Double_t& beamEnergy) { fBeamEnergy = beamEnergy; }

    inline void UseThresholds(const char* fileName, const Int_t nChannels)
    {
        fThreshFileName = TString(fileName);
        fNChannels = nChannels;
    }

    R3BLandDigi* AddHit(Int_t paddleNr,
                        Double_t tdcL,
                        Double_t tdcR,
                        Double_t tdc,
                        Double_t qdcL,
                        Double_t qdcR,
                        Double_t qdc,
                        Double_t xx,
                        Double_t yy,
                        Double_t zz);

  protected:
    TF1* f1;
    TRandom3* fRnd;

    TString fThreshFileName;
    Int_t fNChannels;

    TClonesArray* fLandPoints;
    TClonesArray* fLandMCTrack;
    TClonesArray* fLandDigi;

    // Parameter class
    R3BLandDigiPar* fLandDigiPar;

    // Control Hitograms
    TH1F* hPMl;
    TH1F* hPMr;
    TH1F* hMult1;
    TH1F* hMult2;
    TH1F* hRLTimeToTrig;

    Double_t threshL[5000];
    Double_t threshR[5000];

    Int_t eventNo;
    Int_t npaddles;
    Int_t nplanes;
    Int_t paddle_per_plane;
    Double_t plength; // half length of paddle
    Double_t att;     // light attenuation factor [1/cm]
    Double_t c;
    Double_t cMedia; // speed of light in material in cm/ns
    Double_t fBeamEnergy;
    PM_RES** PM_res;

    static const Double_t DEFAULT_SATURATION_COEFFICIENT;
    Double_t fSaturationCoefficient;

    Double_t fTOFRange;

  private:
    virtual void SetParContainers();

    ClassDef(R3BLandDigitizer, 1)
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

#ifndef _R3B_LAND_DIGITIZER_QA_H_
#define _R3B_LAND_DIGITIZER_QA_H_

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

/**
 * \brief R3BLandDigitizerQA task.
 *
 * Task for filling controll histograms of R3BLandDigitizer
 * performance. Plots are stored in the output file.
 */

class R3BLandDigitizerQA : public FairTask
{

  public:
    /** Default constructor. */
    R3BLandDigitizerQA();

    /** Copy constructor. */
    R3BLandDigitizerQA(const R3BLandDigitizerQA&);

    /** Destructor. */
    virtual ~R3BLandDigitizerQA();

    /** Assignment operator. */
    R3BLandDigitizerQA& operator=(const R3BLandDigitizerQA&) { return *this; }

    /** Initialization of task. */
    virtual InitStatus Init();

    /** Execute one event. */
    virtual void Exec(Option_t* option);

    /** Finish event. */
    virtual void FinishEvent();

    /** Finish task. */
    virtual void Finish();

    /** Specify beam energy to be used. */
    inline void SetBeamEnergy(const Double_t& beamEnergy) { fBeamEnergy = beamEnergy; }

  private:
    Int_t fEvent;
    TClonesArray* fTracks;
    TClonesArray* fPoints;
    TClonesArray* fDigis;

    Double_t fBeamEnergy;

    TH1F* fhTotEnergy;
    TH1F* fhTotLight;
    TH1F* fhTotEnergyRel;
    TH1F* fhTotLightRel;
    TH2F* fhElossLight;
    TH1F* fhTotEnergyReco;
    TH1F* fhPaddleE;
    TH1F* fhFirstTvsBar;
    TH1F* fhFirstBvsBar;
    TH1F* fhFirstE;
    TH2F* fhElossTime;
    TH2F* fhElossPdg;
    TH2F* fhQdcXL;
    TH2F* fhQdcXR;
    TH2F* fhThresh;
    TH1F* fhQdcRatio;

    void CreateHisto();

    ClassDef(R3BLandDigitizerQA, 1)
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

#ifndef R3BNEUTRONTRACKER_H
#define R3BNEUTRONTRACKER_H 1

#include "FairTask.h"
#include "R3BLandDigi.h"
#include "R3BLandDigiPar.h"
#include "R3BLandFirstHits.h"
#include "TLorentzVector.h"
#include <map>
#include <string>

class TClonesArray;
class TObjectArray;
class TH1F;
class TH2F;
class R3BNeutronTrack;

struct PM_HIT
{
    Double_t paddle, tdcL, tdcR, tdc, qdcL, qdcR, qdc, x, y, z, x0, y0, z0, t0;
};
struct PRIM_PART
{
    Double_t pdg, px, py, pz, pt, p, x, y, z, t, A, M;
};
struct NEUT1_HIT
{
    Double_t x, y, z, t, px, py, pz, p;
};
struct NEUT2_HIT
{
    Double_t x, y, z, t, px, py, pz, p;
};
struct CLUSTER
{
    Double_t xStart, yStart, zStart, xEnd, yEnd, zEnd, tStart, tStop, e, size;
};

class R3BNeutronTracker : public FairTask
{

  public:
    /** Default constructor **/
    R3BNeutronTracker();

    /** Destructor **/
    ~R3BNeutronTracker();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    void UseBeam(Double_t _beam_energy, Double_t _beam_beta);

  private:
    TLorentzVector fPosIn, fPosOut; //!  position
    TLorentzVector fMomIn, fMomOut; //!  momentum
    Double32_t fTime;               //!  time

    R3BNeutronTrack* AddHit(TVector3 pos_in, TVector3 pos_out, TVector3 momOut, Double_t time);

  protected:
    // Reused structure from previous
    // Algorithm
    TClonesArray* fLandPoints;
    TClonesArray* fLandMCTrack;
    TClonesArray* fLandDigi;
    TClonesArray* fLandFirstHits;

    // Parameter class
    R3BLandDigiPar* fLandDigiPar;

    // Created structure from this
    // Algorithm
    TClonesArray* fNeutronTracks;

    // Add here control hist for tracker
    TH1F* hNeutmult;
    TH1F* hErel1;
    TH1F* hErel2;
    TH1F* hErel3;
    TH1F* hErel4;

    TH1F* hMinv;
    TH1F* hMinv0;
    TH1F* hMinv1;
    TH1F* hMinv2;
    TH1F* hDeltaPx1;
    TH1F* hDeltaPy1;
    TH1F* hDeltaPz1;
    TH1F* hDeltaPx2;
    TH1F* hDeltaPy2;
    TH1F* hDeltaPz2;
    TH1F* hClusterSize;
    TH1F* hClusterEnergy;
    TH1F* hClusters;
    TH1F* hClusters1;
    TH1F* hClusters2;
    TH1F* hHits;
    TH2F* hClusterNo_vs_Size;

    TH1F* hDeltaX;
    TH1F* hDeltaY;
    TH1F* hDeltaZ;
    TH1F* hDeltaT;

    TH1F* hFirstHitZ;

    TH1F* hDeltaP1;
    TH1F* hDeltaP2;
    TH1F* hDeltaP3;
    TH1F* hDeltaP4;
    TH1F* hDeltaP5;
    TH1F* hDeltaP6;

    TH1F* hDelta;

    Int_t npaddles;
    Int_t nplanes;
    Int_t printing;

    Double_t beamEnergy;
    Double_t beamBeta;
    Double_t plength;  // half length of paddle
    Double_t att;      // light attenuation factor [1/cm]
    Double_t amu;      // atomic mass unit in MeV/c**2
    Double_t mNeutron; // mass of neutron in amu
    Double_t c;
    Double_t cMedia;    // speed of light in material in cm/ns
    Double_t calFactor; // calibration factor energy of LAND paddles
    Int_t eventNo;
    PM_HIT* PM_hit;
    PRIM_PART* PRIM_part;
    PRIM_PART* PRIM_frag;
    PRIM_PART* PRIM_gamma;
    NEUT1_HIT* NEUT1_hit;
    NEUT2_HIT* NEUT2_hit;
    CLUSTER* Cluster;

  private:
    virtual void SetParContainers();

    ClassDef(R3BNeutronTracker, 1);
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

//
// C++ Interface: PndTutPar
//
#ifndef R3BLANDDIGIPAR_H
#define R3BLANDDIGIPAR_H

#include <TObjString.h>
#include <TVector3.h>

#include "FairParGenericSet.h"
#include "FairParamList.h"

class R3BLandDigiPar : public FairParGenericSet
{
  public:
    R3BLandDigiPar(const char* name = "R3BLandDigiParTest",
                   const char* title = "Tutorial  parameter",
                   const char* context = "TestDefaultContext");
    ~R3BLandDigiPar(void){};
    void clear(void){};
    void putParams(FairParamList* list);
    Bool_t getParams(FairParamList* list);

    void Print(Option_t* option = "") const;
    /** Accessor functions **/
    const Int_t GetMaxPaddle() { return nMaxPaddle; }
    const Int_t GetMaxPlane() { return nMaxPlane; }
    const Double_t GetPaddleLength() { return paddleLength; }
    const Double_t GetPaddleHeight() { return paddleHeight; }
    const Double_t GetPaddleDepth() { return paddleDepth; }
    const Double_t GetPaddleSpacing() { return paddleSpacing; }
    const Double_t GetPaddleWrapping() { return paddleWrapping; }
    const TString GetGeometryFileName() { return fGeometryFileName; }
    void SetMaxPaddle(Int_t paddle) { nMaxPaddle = paddle; }
    void SetMaxPlane(Int_t pla) { nMaxPlane = pla; }
    void SetPaddleLength(Double_t length) { paddleLength = length; }
    void SetPaddleHeight(Double_t height) { paddleHeight = height; }
    void SetPaddleDepth(Double_t depth) { paddleDepth = depth; }
    void SetPaddleSpacing(Double_t space) { paddleSpacing = space; }
    void SetPaddleWrapping(Double_t wrap) { paddleWrapping = wrap; }
    void SetGeometryFileName(TString name) { fGeometryFileName = name; }

  private:
    // Digi. Parameters
    Int_t nMaxPaddle;
    Int_t nMaxPlane;
    Double_t paddleLength;
    Double_t paddleHeight;
    Double_t paddleDepth;
    Double_t paddleSpacing;
    Double_t paddleWrapping;
    TString fGeometryFileName;

    ClassDef(R3BLandDigiPar, 2); //
};

#endif /* !R3BLANDDIGIPAR_H*/
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
// -----                       R3BNeuLandCluster                           -----
// -----                 Created 12-07-2011 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BNEULANDCLUSTER
#define R3BNEULANDCLUSTER

#include "TObject.h"
#include "TVector3.h"

class R3BNeuLandCluster : public TObject
{
  public:
    R3BNeuLandCluster();
    R3BNeuLandCluster(Double_t startX,
                      Double_t startY,
                      Double_t startZ,
                      Double_t startT,
                      Double_t stopX,
                      Double_t stopY,
                      Double_t stopZ,
                      Double_t stopT,
                      Double_t e,
                      Double_t size);
    virtual ~R3BNeuLandCluster();

    void SetStartPosition(Double_t startX, Double_t startY, Double_t startZ);
    void SetStopPosition(Double_t stopX, Double_t stopY, Double_t stopZ);
    void SetStartT(Double_t startT);
    void SetStopT(Double_t stopT);
    void SetE(Double_t e);
    void SetSize(Double_t size);
    void Mark();

    void StartPosition(TVector3& pos) const;
    void StopPosition(TVector3& pos) const;
    Double_t GetStartT() const;
    Double_t GetStopT() const;
    Double_t GetE() const;
    Double_t GetSize() const;
    Bool_t IsMarked() const;

  private:
    Double32_t fStartX;
    Double32_t fStartY;
    Double32_t fStartZ;
    Double32_t fStartT;
    Double32_t fStopX;
    Double32_t fStopY;
    Double32_t fStopZ;
    Double32_t fStopT;
    Double32_t fE;
    Double32_t fSize;
    Bool_t fMarked;

  public:
    ClassDef(R3BNeuLandCluster, 1)
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
// -----                    R3BNeuLandClusterFinder                        -----
// -----                Created 21-02-2012 by D.Kresan                     -----
// -----------------------------------------------------------------------------

#ifndef R3BNEULANDCLUSTERFINDER_H
#define R3BNEULANDCLUSTERFINDER_H

#include <vector>

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BNeuLandClusterFinder : public FairTask
{

  public:
    // Default constructor
    R3BNeuLandClusterFinder();

    // Standard constructor
    R3BNeuLandClusterFinder(Int_t verbose);

    // Destructor
    virtual ~R3BNeuLandClusterFinder();

    // Task initialization
    virtual InitStatus Init();

    // Process an event
    virtual void Exec(Option_t* option);

    // Finish of task
    virtual void Finish();

    // Reset the containers
    void Reset();

  private:
    TClonesArray* fArrayDigi;              // Array of digis - input
    TClonesArray* fArrayCluster;           // Array of clusters - output
    std::vector<R3BLandDigi*> fVectorDigi; // Vector of digis (for sorting in time)

    // Control histograms
    TH1F* fhClusterSize;
    TH1F* fhClusterEnergy;
    TH1F* fhClusters;
    TH1F* fhHits;
    TH2F* fhClusterNo_vs_Size;

    // Initialization of control histograms
    void CreateHistograms();

    ClassDef(R3BNeuLandClusterFinder, 1);
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
// -----                       R3BNeutronCalibr2D                          -----
// -----                 Created 27-02-2012 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BNEUTRONCALIBR2D_H
#define R3BNEUTRONCALIBR2D_H

#include "FairTask.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BNeutronCalibr2D : public FairTask
{
  public:
    /** Default constructor **/
    R3BNeutronCalibr2D();

    /** Destructor **/
    ~R3BNeutronCalibr2D();

    /** Virtual method Init **/
    virtual InitStatus Init();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();

    inline void UseBeam(Int_t beamEnergy) { fBeamEnergy = beamEnergy; }

  private:
    Int_t fEventNo;
    Int_t fBeamEnergy;
    TClonesArray* fArrayDigi;
    TClonesArray* fArrayCluster;
    TH1F* fh_etot;
    TH2F* fh_ncl_etot;

    void CreateHistograms();

  public:
    ClassDef(R3BNeutronCalibr2D, 1)
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
// -----                        R3BPrimPart                                -----
// -----                 Created 12-07-2011 by D.Kresan                    -----
// -----------------------------------------------------------------------------

#ifndef R3BPRIMPART
#define R3BPRIMPART

#include "TObject.h"
#include "TVector3.h"

class R3BPrimPart : public TObject
{
  public:
    R3BPrimPart();
    R3BPrimPart(Int_t pdg,
                Double_t px,
                Double_t py,
                Double_t pz,
                Double_t x,
                Double_t y,
                Double_t z,
                Double_t t,
                Double_t A,
                Double_t M);
    virtual ~R3BPrimPart();

    Int_t GetPdgCode() const { return fPdg; }
    void Momentum(TVector3& mom) const { mom.SetXYZ(fPx, fPy, fPz); }
    void Position(TVector3& pos) const { pos.SetXYZ(fX, fY, fZ); }
    Double_t GetT() const { return fT; }
    Double_t GetA() const { return fA; }
    Double_t GetM() const { return fM; }
    Double_t GetE() const
    {
        TVector3 mom;
        Momentum(mom);
        return sqrt(mom.Mag2() + GetM2());
    }
    Double_t GetM2() const { return fM * fM; }
    Double_t GetBeta() const
    {
        TVector3 mom;
        Momentum(mom);
        return mom.Mag() / GetE();
    }
    Double_t GetGamma() const { return 1. / sqrt(1. - pow(GetBeta(), 2)); }

    void SetPz(const Double_t& pz) { fPz = pz; }
    void SetA(const Double_t& a) { fA = a; }
    void SetM(const Double_t& m) { fM = m; }

  private:
    Int_t fPdg;
    Double_t fPx;
    Double_t fPy;
    Double_t fPz;
    Double_t fX;
    Double_t fY;
    Double_t fZ;
    Double_t fT;
    Double_t fA;
    Double_t fM;

  public:
    ClassDef(R3BPrimPart, 1)
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
// -----                      R3BNeutronTracker2D                          -----
// -----                Created 29-02-2012 by D.Kresan                     -----
// -----            Based on algorithm developed by M.Heil                 -----
// -----------------------------------------------------------------------------

#ifndef R3BNEUTRONTRACKER2D_H
#define R3BNEUTRONTRACKER2D_H

#include <map>
#include <vector>

#include "FairTask.h"

#include "R3BNeuLandCluster.h"
#include "R3BPrimPart.h"

class TClonesArray;
class TH1F;
class TH2F;

class R3BNeutronTracker2D : public FairTask
{
  public:
    /** Default constructor **/
    R3BNeutronTracker2D();

    /** Destructor **/
    ~R3BNeutronTracker2D();

    /** Virtual method Init **/
    virtual InitStatus Init();

    virtual void SetParContainers();

    /** Virtual method Exec **/
    virtual void Exec(Option_t* opt);

    virtual void Finish();
    virtual void Reset();

    inline void Disable2DEventCut(Int_t nNeutrons)
    {
        fNNeutrons = nNeutrons;
        f2DCutEnabled = kFALSE;
    }

    void UseBeam(Double_t beam_energy, Double_t beam_beta);

    void ReadCalibrFile(char* name);

    inline Int_t GetNTracks4() { return h_ntracks->GetBinContent(5); }

  private:
    TClonesArray* fLandPoints;
    TClonesArray* fLandMCTrack;
    TClonesArray* fLandDigi;
    TClonesArray* fLandFirstHits;
    TClonesArray* fNeutHits;

    // Parameter class
    R3BLandDigiPar* fLandDigiPar;

    // Add here control hist for tracker
    TH1F* hNeutmult;
    TH1F* hErel1;
    TH1F* hErel2;
    TH1F* hErel3;
    TH1F* hErel4;

    TH1F* hMinv;
    TH1F* hMinv0;
    TH1F* hExce;
    TH1F* hExce0;
    TH1F* hMinv1;
    TH1F* hMinv2;
    TH1F* hDeltaPx1;
    TH1F* hDeltaPy1;
    TH1F* hDeltaPz1;
    TH1F* hDeltaPx2;
    TH1F* hDeltaPy2;
    TH1F* hDeltaPz2;
    TH1F* hClusters1;

    TH1F* hDeltaX;
    TH1F* hDeltaY;
    TH1F* hDeltaZ;
    TH1F* hDeltaT;

    TH1F* hFirstHitZ;

    TH1F* hDeltaP1;
    TH1F* hDeltaP2;
    TH1F* hDeltaP3;
    TH1F* hDeltaP4;
    TH1F* hDeltaP5;
    TH1F* hDeltaP6;

    TH1F* hDelta;

    TH1F* h_theta_cand;
    TH1F* h_beta_min;
    TH1F* h_beta_max;
    TH1F* h_ntracks;
    TH1F* h_nhits;
    TH1F* h_theta;

    TH1F* h_nofclusters;
    TH1F* h_etot;
    TH2F* h_ncl_etot;
    TH2F* h_ncl_etot_1;
    TH2F* h_ndigi_etot;
    TH2F* h_ncl1_etot;

    Int_t npaddles;
    Int_t nplanes;
    Int_t printing;

    Bool_t f2DCutEnabled;
    Int_t fNNeutrons;
    Double_t beamEnergy;
    Double_t beamBeta;
    Double_t plength;   // half length of paddle
    Double_t att;       // light attenuation factor [1/cm]
    Double_t amu;       // atomic mass unit in MeV/c**2
    Double_t mNeutron;  // mass of neutron in amu
    Double_t cMedia;    // speed of light in material in cm/ns
    Double_t calFactor; // calibration factor energy of LAND paddles
    Int_t eventNo;
    R3BPrimPart** PRIM_part;
    R3BPrimPart** PRIM_prot;
    R3BPrimPart** PRIM_frag;
    R3BPrimPart** PRIM_gamma;

    Int_t Nclusters;
    Double_t dio;
    Double_t sumTotalEnergy;

    Float_t fKappa;
    Float_t fCuts[5];

    Int_t fNofClusters;
    Double_t fEtot;
    TClonesArray* fArrayCluster;
    std::vector<R3BNeuLandCluster*> fVectorCluster;
    Int_t fNofClusters1;
    Int_t fNofTracks;
    Int_t fTracks[1000][300];
    Int_t fNofHits[1000];
    Bool_t fMapTracks[1000];
    Int_t nTemp;
    Int_t nNeut;
    Double_t fMinvTrue;
    Double_t fMinv;
    Double_t fExceTrue;
    Double_t fExce;
    Int_t fNPrimNeut;
    Int_t fNPrimProt;
    Int_t fNPrimGamma;
    Int_t fNofFrag;

    Int_t nPrim;
    Int_t nAboveThresh;
    Double_t temp[3000][14];
    Int_t nentries;

    void CreateHistograms();
    Int_t AdvancedMethod();
    void CalculateMassInv();
    void CalculateExce();
    void SortClustersBeta();
    void NextIteration(Int_t curIndex, R3BNeuLandCluster* curClus);
    Bool_t IsElastic(R3BNeuLandCluster* c1, R3BNeuLandCluster* c2);

  public:
    ClassDef(R3BNeutronTracker2D, 1)
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

// ------------------------------------------------------------------------
// -----                        R3BNeutHit                            -----
// -----              Created 21.05.2012 by D.Kresan                  -----
// ------------------------------------------------------------------------

#ifndef R3BNEUTHIT_H
#define R3BNEUTHIT_H

#include "TMath.h"
#include "TObject.h"

class R3BNeutHit : public TObject
{

  public:
    R3BNeutHit();
    R3BNeutHit(Double_t x, Double_t y, Double_t z, Double_t t);
    virtual ~R3BNeutHit();

  private:
    Double32_t fX;
    Double32_t fY;
    Double32_t fZ;
    Double32_t fT;

  public:
    inline Double_t GetX() const { return fX; }
    inline Double_t GetY() const { return fY; }
    inline Double_t GetZ() const { return fZ; }
    inline Double_t GetT() const { return fT; }
    inline Double_t GetD() const { return TMath::Sqrt(fX * fX + fY * fY + fZ * fZ); }
    Double_t GetP() const;

    ClassDef(R3BNeutHit, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BGeoLand", payloadCode, "@",
"R3BGeoLandPar", payloadCode, "@",
"R3BLand", payloadCode, "@",
"R3BLandContFact", payloadCode, "@",
"R3BLandDigiPar", payloadCode, "@",
"R3BLandDigitizer", payloadCode, "@",
"R3BLandDigitizerQA", payloadCode, "@",
"R3BNeuLandCluster", payloadCode, "@",
"R3BNeuLandClusterFinder", payloadCode, "@",
"R3BNeutHit", payloadCode, "@",
"R3BNeutronCalibr2D", payloadCode, "@",
"R3BNeutronTracker", payloadCode, "@",
"R3BNeutronTracker2D", payloadCode, "@",
"R3BPrimPart", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BLandDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BLandDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BLandDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BLandDict() {
  TriggerDictionaryInitialization_G__R3BLandDict_Impl();
}
