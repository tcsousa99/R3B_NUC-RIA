// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIr3bgendIG__R3BGenDict

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
#include "R3BSpecificGenerator.h"
#include "R3BReadKinematics.h"
#include "R3BCDGenerator.h"
#include "R3BBeamInfo.h"
#include "R3BBackTracking.h"
#include "R3BBackTrackingStorageState.h"
#include "R3BAsciiGenerator.h"
#include "R3BCosmicGenerator.h"
#include "R3BCryAsciiGenerator.h"
#include "R3Bp2pGenerator.h"
#include "R3BLandGenerator.h"
#include "R3BCALIFATestGenerator.h"
#include "R3BParticleGenerator.h"
#include "R3BIonGenerator.h"
#include "R3BGammaGenerator.h"
#include "R3BPhaseSpaceGenerator.h"
#include "R3BDistribution1D.h"
#include "R3BDistribution2D.h"
#include "R3BDistribution3D.h"
#include "R3Bp2pevtGenerator.h"
#include "R3BParticleSelector.h"
#include "R3BBeamProperties.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BBackTracking(void *p = 0);
   static void *newArray_R3BBackTracking(Long_t size, void *p);
   static void delete_R3BBackTracking(void *p);
   static void deleteArray_R3BBackTracking(void *p);
   static void destruct_R3BBackTracking(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBackTracking*)
   {
      ::R3BBackTracking *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBackTracking >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBackTracking", ::R3BBackTracking::Class_Version(), "R3BBackTracking.h", 42,
                  typeid(::R3BBackTracking), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBackTracking::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBackTracking) );
      instance.SetNew(&new_R3BBackTracking);
      instance.SetNewArray(&newArray_R3BBackTracking);
      instance.SetDelete(&delete_R3BBackTracking);
      instance.SetDeleteArray(&deleteArray_R3BBackTracking);
      instance.SetDestructor(&destruct_R3BBackTracking);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBackTracking*)
   {
      return GenerateInitInstanceLocal((::R3BBackTracking*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCDGenerator(void *p = 0);
   static void *newArray_R3BCDGenerator(Long_t size, void *p);
   static void delete_R3BCDGenerator(void *p);
   static void deleteArray_R3BCDGenerator(void *p);
   static void destruct_R3BCDGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCDGenerator*)
   {
      ::R3BCDGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCDGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCDGenerator", ::R3BCDGenerator::Class_Version(), "R3BCDGenerator.h", 44,
                  typeid(::R3BCDGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCDGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCDGenerator) );
      instance.SetNew(&new_R3BCDGenerator);
      instance.SetNewArray(&newArray_R3BCDGenerator);
      instance.SetDelete(&delete_R3BCDGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCDGenerator);
      instance.SetDestructor(&destruct_R3BCDGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCDGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCDGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BReadKinematics(void *p = 0);
   static void *newArray_R3BReadKinematics(Long_t size, void *p);
   static void delete_R3BReadKinematics(void *p);
   static void deleteArray_R3BReadKinematics(void *p);
   static void destruct_R3BReadKinematics(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BReadKinematics*)
   {
      ::R3BReadKinematics *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BReadKinematics >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BReadKinematics", ::R3BReadKinematics::Class_Version(), "R3BReadKinematics.h", 37,
                  typeid(::R3BReadKinematics), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BReadKinematics::Dictionary, isa_proxy, 4,
                  sizeof(::R3BReadKinematics) );
      instance.SetNew(&new_R3BReadKinematics);
      instance.SetNewArray(&newArray_R3BReadKinematics);
      instance.SetDelete(&delete_R3BReadKinematics);
      instance.SetDeleteArray(&deleteArray_R3BReadKinematics);
      instance.SetDestructor(&destruct_R3BReadKinematics);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BReadKinematics*)
   {
      return GenerateInitInstanceLocal((::R3BReadKinematics*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSpecificGenerator(void *p = 0);
   static void *newArray_R3BSpecificGenerator(Long_t size, void *p);
   static void delete_R3BSpecificGenerator(void *p);
   static void deleteArray_R3BSpecificGenerator(void *p);
   static void destruct_R3BSpecificGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSpecificGenerator*)
   {
      ::R3BSpecificGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSpecificGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSpecificGenerator", ::R3BSpecificGenerator::Class_Version(), "", 58,
                  typeid(::R3BSpecificGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSpecificGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSpecificGenerator) );
      instance.SetNew(&new_R3BSpecificGenerator);
      instance.SetNewArray(&newArray_R3BSpecificGenerator);
      instance.SetDelete(&delete_R3BSpecificGenerator);
      instance.SetDeleteArray(&deleteArray_R3BSpecificGenerator);
      instance.SetDestructor(&destruct_R3BSpecificGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSpecificGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BSpecificGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBeamInfo(void *p = 0);
   static void *newArray_R3BBeamInfo(Long_t size, void *p);
   static void delete_R3BBeamInfo(void *p);
   static void deleteArray_R3BBeamInfo(void *p);
   static void destruct_R3BBeamInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBeamInfo*)
   {
      ::R3BBeamInfo *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBeamInfo >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBeamInfo", ::R3BBeamInfo::Class_Version(), "", 409,
                  typeid(::R3BBeamInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBeamInfo::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBeamInfo) );
      instance.SetNew(&new_R3BBeamInfo);
      instance.SetNewArray(&newArray_R3BBeamInfo);
      instance.SetDelete(&delete_R3BBeamInfo);
      instance.SetDeleteArray(&deleteArray_R3BBeamInfo);
      instance.SetDestructor(&destruct_R3BBeamInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBeamInfo*)
   {
      return GenerateInitInstanceLocal((::R3BBeamInfo*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBackTrackingStorageState(void *p = 0);
   static void *newArray_R3BBackTrackingStorageState(Long_t size, void *p);
   static void delete_R3BBackTrackingStorageState(void *p);
   static void deleteArray_R3BBackTrackingStorageState(void *p);
   static void destruct_R3BBackTrackingStorageState(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBackTrackingStorageState*)
   {
      ::R3BBackTrackingStorageState *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBackTrackingStorageState >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBackTrackingStorageState", ::R3BBackTrackingStorageState::Class_Version(), "", 584,
                  typeid(::R3BBackTrackingStorageState), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBackTrackingStorageState::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBackTrackingStorageState) );
      instance.SetNew(&new_R3BBackTrackingStorageState);
      instance.SetNewArray(&newArray_R3BBackTrackingStorageState);
      instance.SetDelete(&delete_R3BBackTrackingStorageState);
      instance.SetDeleteArray(&deleteArray_R3BBackTrackingStorageState);
      instance.SetDestructor(&destruct_R3BBackTrackingStorageState);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBackTrackingStorageState*)
   {
      return GenerateInitInstanceLocal((::R3BBackTrackingStorageState*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAsciiGenerator(void *p = 0);
   static void *newArray_R3BAsciiGenerator(Long_t size, void *p);
   static void delete_R3BAsciiGenerator(void *p);
   static void deleteArray_R3BAsciiGenerator(void *p);
   static void destruct_R3BAsciiGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAsciiGenerator*)
   {
      ::R3BAsciiGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAsciiGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAsciiGenerator", ::R3BAsciiGenerator::Class_Version(), "", 680,
                  typeid(::R3BAsciiGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAsciiGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAsciiGenerator) );
      instance.SetNew(&new_R3BAsciiGenerator);
      instance.SetNewArray(&newArray_R3BAsciiGenerator);
      instance.SetDelete(&delete_R3BAsciiGenerator);
      instance.SetDeleteArray(&deleteArray_R3BAsciiGenerator);
      instance.SetDestructor(&destruct_R3BAsciiGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAsciiGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BAsciiGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCosmicGenerator(void *p = 0);
   static void *newArray_R3BCosmicGenerator(Long_t size, void *p);
   static void delete_R3BCosmicGenerator(void *p);
   static void deleteArray_R3BCosmicGenerator(void *p);
   static void destruct_R3BCosmicGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCosmicGenerator*)
   {
      ::R3BCosmicGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCosmicGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCosmicGenerator", ::R3BCosmicGenerator::Class_Version(), "", 768,
                  typeid(::R3BCosmicGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCosmicGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCosmicGenerator) );
      instance.SetNew(&new_R3BCosmicGenerator);
      instance.SetNewArray(&newArray_R3BCosmicGenerator);
      instance.SetDelete(&delete_R3BCosmicGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCosmicGenerator);
      instance.SetDestructor(&destruct_R3BCosmicGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCosmicGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCosmicGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCryAsciiGenerator(void *p = 0);
   static void *newArray_R3BCryAsciiGenerator(Long_t size, void *p);
   static void delete_R3BCryAsciiGenerator(void *p);
   static void deleteArray_R3BCryAsciiGenerator(void *p);
   static void destruct_R3BCryAsciiGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCryAsciiGenerator*)
   {
      ::R3BCryAsciiGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCryAsciiGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCryAsciiGenerator", ::R3BCryAsciiGenerator::Class_Version(), "", 845,
                  typeid(::R3BCryAsciiGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCryAsciiGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCryAsciiGenerator) );
      instance.SetNew(&new_R3BCryAsciiGenerator);
      instance.SetNewArray(&newArray_R3BCryAsciiGenerator);
      instance.SetDelete(&delete_R3BCryAsciiGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCryAsciiGenerator);
      instance.SetDestructor(&destruct_R3BCryAsciiGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCryAsciiGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCryAsciiGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCryAsciiGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3Bp2pGenerator(void *p = 0);
   static void *newArray_R3Bp2pGenerator(Long_t size, void *p);
   static void delete_R3Bp2pGenerator(void *p);
   static void deleteArray_R3Bp2pGenerator(void *p);
   static void destruct_R3Bp2pGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3Bp2pGenerator*)
   {
      ::R3Bp2pGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3Bp2pGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3Bp2pGenerator", ::R3Bp2pGenerator::Class_Version(), "", 918,
                  typeid(::R3Bp2pGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3Bp2pGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3Bp2pGenerator) );
      instance.SetNew(&new_R3Bp2pGenerator);
      instance.SetNewArray(&newArray_R3Bp2pGenerator);
      instance.SetDelete(&delete_R3Bp2pGenerator);
      instance.SetDeleteArray(&deleteArray_R3Bp2pGenerator);
      instance.SetDestructor(&destruct_R3Bp2pGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3Bp2pGenerator*)
   {
      return GenerateInitInstanceLocal((::R3Bp2pGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandGenerator(void *p = 0);
   static void *newArray_R3BLandGenerator(Long_t size, void *p);
   static void delete_R3BLandGenerator(void *p);
   static void deleteArray_R3BLandGenerator(void *p);
   static void destruct_R3BLandGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandGenerator*)
   {
      ::R3BLandGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandGenerator", ::R3BLandGenerator::Class_Version(), "", 1003,
                  typeid(::R3BLandGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandGenerator) );
      instance.SetNew(&new_R3BLandGenerator);
      instance.SetNewArray(&newArray_R3BLandGenerator);
      instance.SetDelete(&delete_R3BLandGenerator);
      instance.SetDeleteArray(&deleteArray_R3BLandGenerator);
      instance.SetDestructor(&destruct_R3BLandGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BLandGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCALIFATestGenerator(void *p = 0);
   static void *newArray_R3BCALIFATestGenerator(Long_t size, void *p);
   static void delete_R3BCALIFATestGenerator(void *p);
   static void deleteArray_R3BCALIFATestGenerator(void *p);
   static void destruct_R3BCALIFATestGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCALIFATestGenerator*)
   {
      ::R3BCALIFATestGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCALIFATestGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCALIFATestGenerator", ::R3BCALIFATestGenerator::Class_Version(), "", 1093,
                  typeid(::R3BCALIFATestGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCALIFATestGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCALIFATestGenerator) );
      instance.SetNew(&new_R3BCALIFATestGenerator);
      instance.SetNewArray(&newArray_R3BCALIFATestGenerator);
      instance.SetDelete(&delete_R3BCALIFATestGenerator);
      instance.SetDeleteArray(&deleteArray_R3BCALIFATestGenerator);
      instance.SetDestructor(&destruct_R3BCALIFATestGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCALIFATestGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BCALIFATestGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BDistribution1D_Dictionary();
   static void R3BDistribution1D_TClassManip(TClass*);
   static void *new_R3BDistribution1D(void *p = 0);
   static void *newArray_R3BDistribution1D(Long_t size, void *p);
   static void delete_R3BDistribution1D(void *p);
   static void deleteArray_R3BDistribution1D(void *p);
   static void destruct_R3BDistribution1D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDistribution1D*)
   {
      ::R3BDistribution1D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BDistribution1D));
      static ::ROOT::TGenericClassInfo 
         instance("R3BDistribution1D", "R3BDistribution1D.h", 23,
                  typeid(::R3BDistribution1D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BDistribution1D_Dictionary, isa_proxy, 4,
                  sizeof(::R3BDistribution1D) );
      instance.SetNew(&new_R3BDistribution1D);
      instance.SetNewArray(&newArray_R3BDistribution1D);
      instance.SetDelete(&delete_R3BDistribution1D);
      instance.SetDeleteArray(&deleteArray_R3BDistribution1D);
      instance.SetDestructor(&destruct_R3BDistribution1D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDistribution1D*)
   {
      return GenerateInitInstanceLocal((::R3BDistribution1D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDistribution1D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BDistribution1D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BDistribution1D*)0x0)->GetClass();
      R3BDistribution1D_TClassManip(theClass);
   return theClass;
   }

   static void R3BDistribution1D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BBeamProperties_Dictionary();
   static void R3BBeamProperties_TClassManip(TClass*);
   static void *new_R3BBeamProperties(void *p = 0);
   static void *newArray_R3BBeamProperties(Long_t size, void *p);
   static void delete_R3BBeamProperties(void *p);
   static void deleteArray_R3BBeamProperties(void *p);
   static void destruct_R3BBeamProperties(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBeamProperties*)
   {
      ::R3BBeamProperties *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BBeamProperties));
      static ::ROOT::TGenericClassInfo 
         instance("R3BBeamProperties", "R3BBeamProperties.h", 20,
                  typeid(::R3BBeamProperties), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BBeamProperties_Dictionary, isa_proxy, 4,
                  sizeof(::R3BBeamProperties) );
      instance.SetNew(&new_R3BBeamProperties);
      instance.SetNewArray(&newArray_R3BBeamProperties);
      instance.SetDelete(&delete_R3BBeamProperties);
      instance.SetDeleteArray(&deleteArray_R3BBeamProperties);
      instance.SetDestructor(&destruct_R3BBeamProperties);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBeamProperties*)
   {
      return GenerateInitInstanceLocal((::R3BBeamProperties*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBeamProperties*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BBeamProperties_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BBeamProperties*)0x0)->GetClass();
      R3BBeamProperties_TClassManip(theClass);
   return theClass;
   }

   static void R3BBeamProperties_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BParticleSelector_Dictionary();
   static void R3BParticleSelector_TClassManip(TClass*);
   static void delete_R3BParticleSelector(void *p);
   static void deleteArray_R3BParticleSelector(void *p);
   static void destruct_R3BParticleSelector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BParticleSelector*)
   {
      ::R3BParticleSelector *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BParticleSelector));
      static ::ROOT::TGenericClassInfo 
         instance("R3BParticleSelector", "R3BParticleSelector.h", 24,
                  typeid(::R3BParticleSelector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BParticleSelector_Dictionary, isa_proxy, 4,
                  sizeof(::R3BParticleSelector) );
      instance.SetDelete(&delete_R3BParticleSelector);
      instance.SetDeleteArray(&deleteArray_R3BParticleSelector);
      instance.SetDestructor(&destruct_R3BParticleSelector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BParticleSelector*)
   {
      return GenerateInitInstanceLocal((::R3BParticleSelector*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BParticleSelector*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BParticleSelector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BParticleSelector*)0x0)->GetClass();
      R3BParticleSelector_TClassManip(theClass);
   return theClass;
   }

   static void R3BParticleSelector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BParticleGenerator(void *p = 0);
   static void *newArray_R3BParticleGenerator(Long_t size, void *p);
   static void delete_R3BParticleGenerator(void *p);
   static void deleteArray_R3BParticleGenerator(void *p);
   static void destruct_R3BParticleGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BParticleGenerator*)
   {
      ::R3BParticleGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BParticleGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BParticleGenerator", ::R3BParticleGenerator::Class_Version(), "", 1271,
                  typeid(::R3BParticleGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BParticleGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BParticleGenerator) );
      instance.SetNew(&new_R3BParticleGenerator);
      instance.SetNewArray(&newArray_R3BParticleGenerator);
      instance.SetDelete(&delete_R3BParticleGenerator);
      instance.SetDeleteArray(&deleteArray_R3BParticleGenerator);
      instance.SetDestructor(&destruct_R3BParticleGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BParticleGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BParticleGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BParticleGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BIonGenerator(void *p = 0);
   static void *newArray_R3BIonGenerator(Long_t size, void *p);
   static void delete_R3BIonGenerator(void *p);
   static void deleteArray_R3BIonGenerator(void *p);
   static void destruct_R3BIonGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BIonGenerator*)
   {
      ::R3BIonGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BIonGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BIonGenerator", ::R3BIonGenerator::Class_Version(), "", 1334,
                  typeid(::R3BIonGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BIonGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BIonGenerator) );
      instance.SetNew(&new_R3BIonGenerator);
      instance.SetNewArray(&newArray_R3BIonGenerator);
      instance.SetDelete(&delete_R3BIonGenerator);
      instance.SetDeleteArray(&deleteArray_R3BIonGenerator);
      instance.SetDestructor(&destruct_R3BIonGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BIonGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BIonGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGammaGenerator(void *p = 0);
   static void *newArray_R3BGammaGenerator(Long_t size, void *p);
   static void delete_R3BGammaGenerator(void *p);
   static void deleteArray_R3BGammaGenerator(void *p);
   static void destruct_R3BGammaGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGammaGenerator*)
   {
      ::R3BGammaGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGammaGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGammaGenerator", ::R3BGammaGenerator::Class_Version(), "", 1437,
                  typeid(::R3BGammaGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGammaGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGammaGenerator) );
      instance.SetNew(&new_R3BGammaGenerator);
      instance.SetNewArray(&newArray_R3BGammaGenerator);
      instance.SetDelete(&delete_R3BGammaGenerator);
      instance.SetDeleteArray(&deleteArray_R3BGammaGenerator);
      instance.SetDestructor(&destruct_R3BGammaGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGammaGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BGammaGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGammaGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPhaseSpaceGenerator(void *p = 0);
   static void *newArray_R3BPhaseSpaceGenerator(Long_t size, void *p);
   static void delete_R3BPhaseSpaceGenerator(void *p);
   static void deleteArray_R3BPhaseSpaceGenerator(void *p);
   static void destruct_R3BPhaseSpaceGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPhaseSpaceGenerator*)
   {
      ::R3BPhaseSpaceGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPhaseSpaceGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPhaseSpaceGenerator", ::R3BPhaseSpaceGenerator::Class_Version(), "", 1545,
                  typeid(::R3BPhaseSpaceGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPhaseSpaceGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPhaseSpaceGenerator) );
      instance.SetNew(&new_R3BPhaseSpaceGenerator);
      instance.SetNewArray(&newArray_R3BPhaseSpaceGenerator);
      instance.SetDelete(&delete_R3BPhaseSpaceGenerator);
      instance.SetDeleteArray(&deleteArray_R3BPhaseSpaceGenerator);
      instance.SetDestructor(&destruct_R3BPhaseSpaceGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPhaseSpaceGenerator*)
   {
      return GenerateInitInstanceLocal((::R3BPhaseSpaceGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPhaseSpaceGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BDistribution2D_Dictionary();
   static void R3BDistribution2D_TClassManip(TClass*);
   static void *new_R3BDistribution2D(void *p = 0);
   static void *newArray_R3BDistribution2D(Long_t size, void *p);
   static void delete_R3BDistribution2D(void *p);
   static void deleteArray_R3BDistribution2D(void *p);
   static void destruct_R3BDistribution2D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDistribution2D*)
   {
      ::R3BDistribution2D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BDistribution2D));
      static ::ROOT::TGenericClassInfo 
         instance("R3BDistribution2D", "", 1640,
                  typeid(::R3BDistribution2D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BDistribution2D_Dictionary, isa_proxy, 4,
                  sizeof(::R3BDistribution2D) );
      instance.SetNew(&new_R3BDistribution2D);
      instance.SetNewArray(&newArray_R3BDistribution2D);
      instance.SetDelete(&delete_R3BDistribution2D);
      instance.SetDeleteArray(&deleteArray_R3BDistribution2D);
      instance.SetDestructor(&destruct_R3BDistribution2D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDistribution2D*)
   {
      return GenerateInitInstanceLocal((::R3BDistribution2D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDistribution2D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BDistribution2D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BDistribution2D*)0x0)->GetClass();
      R3BDistribution2D_TClassManip(theClass);
   return theClass;
   }

   static void R3BDistribution2D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BDistribution3D_Dictionary();
   static void R3BDistribution3D_TClassManip(TClass*);
   static void *new_R3BDistribution3D(void *p = 0);
   static void *newArray_R3BDistribution3D(Long_t size, void *p);
   static void delete_R3BDistribution3D(void *p);
   static void deleteArray_R3BDistribution3D(void *p);
   static void destruct_R3BDistribution3D(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDistribution3D*)
   {
      ::R3BDistribution3D *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BDistribution3D));
      static ::ROOT::TGenericClassInfo 
         instance("R3BDistribution3D", "", 1680,
                  typeid(::R3BDistribution3D), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BDistribution3D_Dictionary, isa_proxy, 4,
                  sizeof(::R3BDistribution3D) );
      instance.SetNew(&new_R3BDistribution3D);
      instance.SetNewArray(&newArray_R3BDistribution3D);
      instance.SetDelete(&delete_R3BDistribution3D);
      instance.SetDeleteArray(&deleteArray_R3BDistribution3D);
      instance.SetDestructor(&destruct_R3BDistribution3D);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDistribution3D*)
   {
      return GenerateInitInstanceLocal((::R3BDistribution3D*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDistribution3D*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BDistribution3D_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BDistribution3D*)0x0)->GetClass();
      R3BDistribution3D_TClassManip(theClass);
   return theClass;
   }

   static void R3BDistribution3D_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3Bp2pevtGenerator(void *p = 0);
   static void *newArray_R3Bp2pevtGenerator(Long_t size, void *p);
   static void delete_R3Bp2pevtGenerator(void *p);
   static void deleteArray_R3Bp2pevtGenerator(void *p);
   static void destruct_R3Bp2pevtGenerator(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3Bp2pevtGenerator*)
   {
      ::R3Bp2pevtGenerator *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3Bp2pevtGenerator >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3Bp2pevtGenerator", ::R3Bp2pevtGenerator::Class_Version(), "", 1746,
                  typeid(::R3Bp2pevtGenerator), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3Bp2pevtGenerator::Dictionary, isa_proxy, 4,
                  sizeof(::R3Bp2pevtGenerator) );
      instance.SetNew(&new_R3Bp2pevtGenerator);
      instance.SetNewArray(&newArray_R3Bp2pevtGenerator);
      instance.SetDelete(&delete_R3Bp2pevtGenerator);
      instance.SetDeleteArray(&deleteArray_R3Bp2pevtGenerator);
      instance.SetDestructor(&destruct_R3Bp2pevtGenerator);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3Bp2pevtGenerator*)
   {
      return GenerateInitInstanceLocal((::R3Bp2pevtGenerator*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3Bp2pevtGenerator*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BBackTracking::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBackTracking::Class_Name()
{
   return "R3BBackTracking";
}

//______________________________________________________________________________
const char *R3BBackTracking::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBackTracking::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBackTracking::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBackTracking::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTracking*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCDGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCDGenerator::Class_Name()
{
   return "R3BCDGenerator";
}

//______________________________________________________________________________
const char *R3BCDGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCDGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCDGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCDGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCDGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BReadKinematics::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BReadKinematics::Class_Name()
{
   return "R3BReadKinematics";
}

//______________________________________________________________________________
const char *R3BReadKinematics::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BReadKinematics::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BReadKinematics::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BReadKinematics::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BReadKinematics*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSpecificGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSpecificGenerator::Class_Name()
{
   return "R3BSpecificGenerator";
}

//______________________________________________________________________________
const char *R3BSpecificGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSpecificGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSpecificGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSpecificGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSpecificGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBeamInfo::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBeamInfo::Class_Name()
{
   return "R3BBeamInfo";
}

//______________________________________________________________________________
const char *R3BBeamInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBeamInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBeamInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBeamInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamInfo*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBackTrackingStorageState::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBackTrackingStorageState::Class_Name()
{
   return "R3BBackTrackingStorageState";
}

//______________________________________________________________________________
const char *R3BBackTrackingStorageState::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBackTrackingStorageState::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBackTrackingStorageState::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBackTrackingStorageState::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBackTrackingStorageState*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAsciiGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAsciiGenerator::Class_Name()
{
   return "R3BAsciiGenerator";
}

//______________________________________________________________________________
const char *R3BAsciiGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAsciiGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAsciiGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAsciiGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAsciiGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCosmicGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCosmicGenerator::Class_Name()
{
   return "R3BCosmicGenerator";
}

//______________________________________________________________________________
const char *R3BCosmicGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCosmicGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCosmicGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCosmicGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCosmicGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCryAsciiGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCryAsciiGenerator::Class_Name()
{
   return "R3BCryAsciiGenerator";
}

//______________________________________________________________________________
const char *R3BCryAsciiGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCryAsciiGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCryAsciiGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCryAsciiGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCryAsciiGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCryAsciiGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCryAsciiGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCryAsciiGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3Bp2pGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3Bp2pGenerator::Class_Name()
{
   return "R3Bp2pGenerator";
}

//______________________________________________________________________________
const char *R3Bp2pGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3Bp2pGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3Bp2pGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3Bp2pGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandGenerator::Class_Name()
{
   return "R3BLandGenerator";
}

//______________________________________________________________________________
const char *R3BLandGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCALIFATestGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCALIFATestGenerator::Class_Name()
{
   return "R3BCALIFATestGenerator";
}

//______________________________________________________________________________
const char *R3BCALIFATestGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCALIFATestGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCALIFATestGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCALIFATestGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCALIFATestGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BParticleGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BParticleGenerator::Class_Name()
{
   return "R3BParticleGenerator";
}

//______________________________________________________________________________
const char *R3BParticleGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BParticleGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BParticleGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BParticleGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BParticleGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BParticleGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BParticleGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BParticleGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BIonGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BIonGenerator::Class_Name()
{
   return "R3BIonGenerator";
}

//______________________________________________________________________________
const char *R3BIonGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BIonGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BIonGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BIonGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BIonGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGammaGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGammaGenerator::Class_Name()
{
   return "R3BGammaGenerator";
}

//______________________________________________________________________________
const char *R3BGammaGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGammaGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGammaGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGammaGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGammaGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGammaGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGammaGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGammaGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPhaseSpaceGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPhaseSpaceGenerator::Class_Name()
{
   return "R3BPhaseSpaceGenerator";
}

//______________________________________________________________________________
const char *R3BPhaseSpaceGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPhaseSpaceGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPhaseSpaceGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPhaseSpaceGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPhaseSpaceGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPhaseSpaceGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPhaseSpaceGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPhaseSpaceGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3Bp2pevtGenerator::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3Bp2pevtGenerator::Class_Name()
{
   return "R3Bp2pevtGenerator";
}

//______________________________________________________________________________
const char *R3Bp2pevtGenerator::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pevtGenerator*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3Bp2pevtGenerator::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pevtGenerator*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3Bp2pevtGenerator::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pevtGenerator*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3Bp2pevtGenerator::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3Bp2pevtGenerator*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BBackTracking::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBackTracking.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBackTracking::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBackTracking::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBackTracking(void *p) {
      return  p ? new(p) ::R3BBackTracking : new ::R3BBackTracking;
   }
   static void *newArray_R3BBackTracking(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBackTracking[nElements] : new ::R3BBackTracking[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBackTracking(void *p) {
      delete ((::R3BBackTracking*)p);
   }
   static void deleteArray_R3BBackTracking(void *p) {
      delete [] ((::R3BBackTracking*)p);
   }
   static void destruct_R3BBackTracking(void *p) {
      typedef ::R3BBackTracking current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBackTracking

//______________________________________________________________________________
void R3BCDGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCDGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCDGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCDGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCDGenerator(void *p) {
      return  p ? new(p) ::R3BCDGenerator : new ::R3BCDGenerator;
   }
   static void *newArray_R3BCDGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCDGenerator[nElements] : new ::R3BCDGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCDGenerator(void *p) {
      delete ((::R3BCDGenerator*)p);
   }
   static void deleteArray_R3BCDGenerator(void *p) {
      delete [] ((::R3BCDGenerator*)p);
   }
   static void destruct_R3BCDGenerator(void *p) {
      typedef ::R3BCDGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCDGenerator

//______________________________________________________________________________
void R3BReadKinematics::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BReadKinematics.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BReadKinematics::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BReadKinematics::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BReadKinematics(void *p) {
      return  p ? new(p) ::R3BReadKinematics : new ::R3BReadKinematics;
   }
   static void *newArray_R3BReadKinematics(Long_t nElements, void *p) {
      return p ? new(p) ::R3BReadKinematics[nElements] : new ::R3BReadKinematics[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BReadKinematics(void *p) {
      delete ((::R3BReadKinematics*)p);
   }
   static void deleteArray_R3BReadKinematics(void *p) {
      delete [] ((::R3BReadKinematics*)p);
   }
   static void destruct_R3BReadKinematics(void *p) {
      typedef ::R3BReadKinematics current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BReadKinematics

//______________________________________________________________________________
void R3BSpecificGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSpecificGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSpecificGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSpecificGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSpecificGenerator(void *p) {
      return  p ? new(p) ::R3BSpecificGenerator : new ::R3BSpecificGenerator;
   }
   static void *newArray_R3BSpecificGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSpecificGenerator[nElements] : new ::R3BSpecificGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSpecificGenerator(void *p) {
      delete ((::R3BSpecificGenerator*)p);
   }
   static void deleteArray_R3BSpecificGenerator(void *p) {
      delete [] ((::R3BSpecificGenerator*)p);
   }
   static void destruct_R3BSpecificGenerator(void *p) {
      typedef ::R3BSpecificGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSpecificGenerator

//______________________________________________________________________________
void R3BBeamInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBeamInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBeamInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBeamInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBeamInfo(void *p) {
      return  p ? new(p) ::R3BBeamInfo : new ::R3BBeamInfo;
   }
   static void *newArray_R3BBeamInfo(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBeamInfo[nElements] : new ::R3BBeamInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBeamInfo(void *p) {
      delete ((::R3BBeamInfo*)p);
   }
   static void deleteArray_R3BBeamInfo(void *p) {
      delete [] ((::R3BBeamInfo*)p);
   }
   static void destruct_R3BBeamInfo(void *p) {
      typedef ::R3BBeamInfo current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBeamInfo

//______________________________________________________________________________
void R3BBackTrackingStorageState::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBackTrackingStorageState.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBackTrackingStorageState::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBackTrackingStorageState::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBackTrackingStorageState(void *p) {
      return  p ? new(p) ::R3BBackTrackingStorageState : new ::R3BBackTrackingStorageState;
   }
   static void *newArray_R3BBackTrackingStorageState(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBackTrackingStorageState[nElements] : new ::R3BBackTrackingStorageState[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBackTrackingStorageState(void *p) {
      delete ((::R3BBackTrackingStorageState*)p);
   }
   static void deleteArray_R3BBackTrackingStorageState(void *p) {
      delete [] ((::R3BBackTrackingStorageState*)p);
   }
   static void destruct_R3BBackTrackingStorageState(void *p) {
      typedef ::R3BBackTrackingStorageState current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBackTrackingStorageState

//______________________________________________________________________________
void R3BAsciiGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAsciiGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAsciiGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAsciiGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAsciiGenerator(void *p) {
      return  p ? new(p) ::R3BAsciiGenerator : new ::R3BAsciiGenerator;
   }
   static void *newArray_R3BAsciiGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAsciiGenerator[nElements] : new ::R3BAsciiGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAsciiGenerator(void *p) {
      delete ((::R3BAsciiGenerator*)p);
   }
   static void deleteArray_R3BAsciiGenerator(void *p) {
      delete [] ((::R3BAsciiGenerator*)p);
   }
   static void destruct_R3BAsciiGenerator(void *p) {
      typedef ::R3BAsciiGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAsciiGenerator

//______________________________________________________________________________
void R3BCosmicGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCosmicGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCosmicGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCosmicGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCosmicGenerator(void *p) {
      return  p ? new(p) ::R3BCosmicGenerator : new ::R3BCosmicGenerator;
   }
   static void *newArray_R3BCosmicGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCosmicGenerator[nElements] : new ::R3BCosmicGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCosmicGenerator(void *p) {
      delete ((::R3BCosmicGenerator*)p);
   }
   static void deleteArray_R3BCosmicGenerator(void *p) {
      delete [] ((::R3BCosmicGenerator*)p);
   }
   static void destruct_R3BCosmicGenerator(void *p) {
      typedef ::R3BCosmicGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCosmicGenerator

//______________________________________________________________________________
void R3BCryAsciiGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCryAsciiGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCryAsciiGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCryAsciiGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCryAsciiGenerator(void *p) {
      return  p ? new(p) ::R3BCryAsciiGenerator : new ::R3BCryAsciiGenerator;
   }
   static void *newArray_R3BCryAsciiGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCryAsciiGenerator[nElements] : new ::R3BCryAsciiGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCryAsciiGenerator(void *p) {
      delete ((::R3BCryAsciiGenerator*)p);
   }
   static void deleteArray_R3BCryAsciiGenerator(void *p) {
      delete [] ((::R3BCryAsciiGenerator*)p);
   }
   static void destruct_R3BCryAsciiGenerator(void *p) {
      typedef ::R3BCryAsciiGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCryAsciiGenerator

//______________________________________________________________________________
void R3Bp2pGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3Bp2pGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3Bp2pGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3Bp2pGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3Bp2pGenerator(void *p) {
      return  p ? new(p) ::R3Bp2pGenerator : new ::R3Bp2pGenerator;
   }
   static void *newArray_R3Bp2pGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3Bp2pGenerator[nElements] : new ::R3Bp2pGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3Bp2pGenerator(void *p) {
      delete ((::R3Bp2pGenerator*)p);
   }
   static void deleteArray_R3Bp2pGenerator(void *p) {
      delete [] ((::R3Bp2pGenerator*)p);
   }
   static void destruct_R3Bp2pGenerator(void *p) {
      typedef ::R3Bp2pGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3Bp2pGenerator

//______________________________________________________________________________
void R3BLandGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandGenerator(void *p) {
      return  p ? new(p) ::R3BLandGenerator : new ::R3BLandGenerator;
   }
   static void *newArray_R3BLandGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandGenerator[nElements] : new ::R3BLandGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandGenerator(void *p) {
      delete ((::R3BLandGenerator*)p);
   }
   static void deleteArray_R3BLandGenerator(void *p) {
      delete [] ((::R3BLandGenerator*)p);
   }
   static void destruct_R3BLandGenerator(void *p) {
      typedef ::R3BLandGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandGenerator

//______________________________________________________________________________
void R3BCALIFATestGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCALIFATestGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCALIFATestGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCALIFATestGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCALIFATestGenerator(void *p) {
      return  p ? new(p) ::R3BCALIFATestGenerator : new ::R3BCALIFATestGenerator;
   }
   static void *newArray_R3BCALIFATestGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCALIFATestGenerator[nElements] : new ::R3BCALIFATestGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCALIFATestGenerator(void *p) {
      delete ((::R3BCALIFATestGenerator*)p);
   }
   static void deleteArray_R3BCALIFATestGenerator(void *p) {
      delete [] ((::R3BCALIFATestGenerator*)p);
   }
   static void destruct_R3BCALIFATestGenerator(void *p) {
      typedef ::R3BCALIFATestGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCALIFATestGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDistribution1D(void *p) {
      return  p ? new(p) ::R3BDistribution1D : new ::R3BDistribution1D;
   }
   static void *newArray_R3BDistribution1D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDistribution1D[nElements] : new ::R3BDistribution1D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDistribution1D(void *p) {
      delete ((::R3BDistribution1D*)p);
   }
   static void deleteArray_R3BDistribution1D(void *p) {
      delete [] ((::R3BDistribution1D*)p);
   }
   static void destruct_R3BDistribution1D(void *p) {
      typedef ::R3BDistribution1D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDistribution1D

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBeamProperties(void *p) {
      return  p ? new(p) ::R3BBeamProperties : new ::R3BBeamProperties;
   }
   static void *newArray_R3BBeamProperties(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBeamProperties[nElements] : new ::R3BBeamProperties[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBeamProperties(void *p) {
      delete ((::R3BBeamProperties*)p);
   }
   static void deleteArray_R3BBeamProperties(void *p) {
      delete [] ((::R3BBeamProperties*)p);
   }
   static void destruct_R3BBeamProperties(void *p) {
      typedef ::R3BBeamProperties current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBeamProperties

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BParticleSelector(void *p) {
      delete ((::R3BParticleSelector*)p);
   }
   static void deleteArray_R3BParticleSelector(void *p) {
      delete [] ((::R3BParticleSelector*)p);
   }
   static void destruct_R3BParticleSelector(void *p) {
      typedef ::R3BParticleSelector current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BParticleSelector

//______________________________________________________________________________
void R3BParticleGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BParticleGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BParticleGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BParticleGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BParticleGenerator(void *p) {
      return  p ? new(p) ::R3BParticleGenerator : new ::R3BParticleGenerator;
   }
   static void *newArray_R3BParticleGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BParticleGenerator[nElements] : new ::R3BParticleGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BParticleGenerator(void *p) {
      delete ((::R3BParticleGenerator*)p);
   }
   static void deleteArray_R3BParticleGenerator(void *p) {
      delete [] ((::R3BParticleGenerator*)p);
   }
   static void destruct_R3BParticleGenerator(void *p) {
      typedef ::R3BParticleGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BParticleGenerator

//______________________________________________________________________________
void R3BIonGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BIonGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BIonGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BIonGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BIonGenerator(void *p) {
      return  p ? new(p) ::R3BIonGenerator : new ::R3BIonGenerator;
   }
   static void *newArray_R3BIonGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BIonGenerator[nElements] : new ::R3BIonGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BIonGenerator(void *p) {
      delete ((::R3BIonGenerator*)p);
   }
   static void deleteArray_R3BIonGenerator(void *p) {
      delete [] ((::R3BIonGenerator*)p);
   }
   static void destruct_R3BIonGenerator(void *p) {
      typedef ::R3BIonGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BIonGenerator

//______________________________________________________________________________
void R3BGammaGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGammaGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGammaGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGammaGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGammaGenerator(void *p) {
      return  p ? new(p) ::R3BGammaGenerator : new ::R3BGammaGenerator;
   }
   static void *newArray_R3BGammaGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGammaGenerator[nElements] : new ::R3BGammaGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGammaGenerator(void *p) {
      delete ((::R3BGammaGenerator*)p);
   }
   static void deleteArray_R3BGammaGenerator(void *p) {
      delete [] ((::R3BGammaGenerator*)p);
   }
   static void destruct_R3BGammaGenerator(void *p) {
      typedef ::R3BGammaGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGammaGenerator

//______________________________________________________________________________
void R3BPhaseSpaceGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPhaseSpaceGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPhaseSpaceGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPhaseSpaceGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPhaseSpaceGenerator(void *p) {
      return  p ? new(p) ::R3BPhaseSpaceGenerator : new ::R3BPhaseSpaceGenerator;
   }
   static void *newArray_R3BPhaseSpaceGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPhaseSpaceGenerator[nElements] : new ::R3BPhaseSpaceGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPhaseSpaceGenerator(void *p) {
      delete ((::R3BPhaseSpaceGenerator*)p);
   }
   static void deleteArray_R3BPhaseSpaceGenerator(void *p) {
      delete [] ((::R3BPhaseSpaceGenerator*)p);
   }
   static void destruct_R3BPhaseSpaceGenerator(void *p) {
      typedef ::R3BPhaseSpaceGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPhaseSpaceGenerator

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDistribution2D(void *p) {
      return  p ? new(p) ::R3BDistribution2D : new ::R3BDistribution2D;
   }
   static void *newArray_R3BDistribution2D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDistribution2D[nElements] : new ::R3BDistribution2D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDistribution2D(void *p) {
      delete ((::R3BDistribution2D*)p);
   }
   static void deleteArray_R3BDistribution2D(void *p) {
      delete [] ((::R3BDistribution2D*)p);
   }
   static void destruct_R3BDistribution2D(void *p) {
      typedef ::R3BDistribution2D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDistribution2D

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDistribution3D(void *p) {
      return  p ? new(p) ::R3BDistribution3D : new ::R3BDistribution3D;
   }
   static void *newArray_R3BDistribution3D(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDistribution3D[nElements] : new ::R3BDistribution3D[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDistribution3D(void *p) {
      delete ((::R3BDistribution3D*)p);
   }
   static void deleteArray_R3BDistribution3D(void *p) {
      delete [] ((::R3BDistribution3D*)p);
   }
   static void destruct_R3BDistribution3D(void *p) {
      typedef ::R3BDistribution3D current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDistribution3D

//______________________________________________________________________________
void R3Bp2pevtGenerator::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3Bp2pevtGenerator.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3Bp2pevtGenerator::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3Bp2pevtGenerator::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3Bp2pevtGenerator(void *p) {
      return  p ? new(p) ::R3Bp2pevtGenerator : new ::R3Bp2pevtGenerator;
   }
   static void *newArray_R3Bp2pevtGenerator(Long_t nElements, void *p) {
      return p ? new(p) ::R3Bp2pevtGenerator[nElements] : new ::R3Bp2pevtGenerator[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3Bp2pevtGenerator(void *p) {
      delete ((::R3Bp2pevtGenerator*)p);
   }
   static void deleteArray_R3Bp2pevtGenerator(void *p) {
      delete [] ((::R3Bp2pevtGenerator*)p);
   }
   static void destruct_R3Bp2pevtGenerator(void *p) {
      typedef ::R3Bp2pevtGenerator current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3Bp2pevtGenerator

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

namespace ROOT {
   static TClass *maplEintcOpairlEdoublecOboolgRsPgR_Dictionary();
   static void maplEintcOpairlEdoublecOboolgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOpairlEdoublecOboolgRsPgR(void *p = 0);
   static void *newArray_maplEintcOpairlEdoublecOboolgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOpairlEdoublecOboolgRsPgR(void *p);
   static void deleteArray_maplEintcOpairlEdoublecOboolgRsPgR(void *p);
   static void destruct_maplEintcOpairlEdoublecOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,pair<double,bool> >*)
   {
      map<int,pair<double,bool> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,pair<double,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,pair<double,bool> >", -2, "map", 96,
                  typeid(map<int,pair<double,bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOpairlEdoublecOboolgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,pair<double,bool> >) );
      instance.SetNew(&new_maplEintcOpairlEdoublecOboolgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOpairlEdoublecOboolgRsPgR);
      instance.SetDelete(&delete_maplEintcOpairlEdoublecOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOpairlEdoublecOboolgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOpairlEdoublecOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,pair<double,bool> > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,pair<double,bool> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOpairlEdoublecOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,pair<double,bool> >*)0x0)->GetClass();
      maplEintcOpairlEdoublecOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOpairlEdoublecOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOpairlEdoublecOboolgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<double,bool> > : new map<int,pair<double,bool> >;
   }
   static void *newArray_maplEintcOpairlEdoublecOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,pair<double,bool> >[nElements] : new map<int,pair<double,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOpairlEdoublecOboolgRsPgR(void *p) {
      delete ((map<int,pair<double,bool> >*)p);
   }
   static void deleteArray_maplEintcOpairlEdoublecOboolgRsPgR(void *p) {
      delete [] ((map<int,pair<double,bool> >*)p);
   }
   static void destruct_maplEintcOpairlEdoublecOboolgRsPgR(void *p) {
      typedef map<int,pair<double,bool> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,pair<double,bool> >

namespace ROOT {
   static TClass *maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_Dictionary();
   static void maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_TClassManip(TClass*);
   static void *new_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p = 0);
   static void *newArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(Long_t size, void *p);
   static void delete_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p);
   static void deleteArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p);
   static void destruct_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,map<int,pair<double,bool> > >*)
   {
      map<int,map<int,pair<double,bool> > > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,map<int,pair<double,bool> > >));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,map<int,pair<double,bool> > >", -2, "map", 96,
                  typeid(map<int,map<int,pair<double,bool> > >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,map<int,pair<double,bool> > >) );
      instance.SetNew(&new_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR);
      instance.SetNewArray(&newArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR);
      instance.SetDelete(&delete_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR);
      instance.SetDestructor(&destruct_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,map<int,pair<double,bool> > > >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,map<int,pair<double,bool> > >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,map<int,pair<double,bool> > >*)0x0)->GetClass();
      maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,pair<double,bool> > > : new map<int,map<int,pair<double,bool> > >;
   }
   static void *newArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,map<int,pair<double,bool> > >[nElements] : new map<int,map<int,pair<double,bool> > >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p) {
      delete ((map<int,map<int,pair<double,bool> > >*)p);
   }
   static void deleteArray_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p) {
      delete [] ((map<int,map<int,pair<double,bool> > >*)p);
   }
   static void destruct_maplEintcOmaplEintcOpairlEdoublecOboolgRsPgRsPgR(void *p) {
      typedef map<int,map<int,pair<double,bool> > > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,map<int,pair<double,bool> > >

namespace ROOT {
   static TClass *maplEintcOdoublegR_Dictionary();
   static void maplEintcOdoublegR_TClassManip(TClass*);
   static void *new_maplEintcOdoublegR(void *p = 0);
   static void *newArray_maplEintcOdoublegR(Long_t size, void *p);
   static void delete_maplEintcOdoublegR(void *p);
   static void deleteArray_maplEintcOdoublegR(void *p);
   static void destruct_maplEintcOdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,double>*)
   {
      map<int,double> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,double>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,double>", -2, "map", 96,
                  typeid(map<int,double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOdoublegR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,double>) );
      instance.SetNew(&new_maplEintcOdoublegR);
      instance.SetNewArray(&newArray_maplEintcOdoublegR);
      instance.SetDelete(&delete_maplEintcOdoublegR);
      instance.SetDeleteArray(&deleteArray_maplEintcOdoublegR);
      instance.SetDestructor(&destruct_maplEintcOdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,double> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,double>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,double>*)0x0)->GetClass();
      maplEintcOdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOdoublegR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double> : new map<int,double>;
   }
   static void *newArray_maplEintcOdoublegR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,double>[nElements] : new map<int,double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOdoublegR(void *p) {
      delete ((map<int,double>*)p);
   }
   static void deleteArray_maplEintcOdoublegR(void *p) {
      delete [] ((map<int,double>*)p);
   }
   static void destruct_maplEintcOdoublegR(void *p) {
      typedef map<int,double> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,double>

namespace {
  void TriggerDictionaryInitialization_G__R3BGenDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/field",
"/work/R3BRoot/generators",
"/work/R3BRoot/r3bgen",
"/work/R3BRoot/r3bdata",
"/opt/fairsoft/include/Geant4",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/r3bgen/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BGenDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$R3BBackTracking.h")))  R3BBackTracking;
class __attribute__((annotate("$clingAutoload$R3BCDGenerator.h")))  R3BCDGenerator;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) __attribute__((annotate("$clingAutoload$R3BReadKinematics.h")))  R3BReadKinematics;
class R3BSpecificGenerator;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) R3BBeamInfo;
class __attribute__((annotate(R"ATTRDUMP(ROOT CINT)ATTRDUMP"))) R3BBackTrackingStorageState;
class R3BAsciiGenerator;
class R3BCosmicGenerator;
class R3BCryAsciiGenerator;
class R3Bp2pGenerator;
class R3BLandGenerator;
class R3BCALIFATestGenerator;
class __attribute__((annotate("$clingAutoload$R3BDistribution1D.h")))  __attribute__((annotate("$clingAutoload$R3BBeamProperties.h")))  R3BDistribution1D;
class __attribute__((annotate("$clingAutoload$R3BBeamProperties.h")))  R3BBeamProperties;
class __attribute__((annotate("$clingAutoload$R3BParticleSelector.h")))  R3BParticleSelector;
class R3BParticleGenerator;
class R3BIonGenerator;
class R3BGammaGenerator;
class R3BPhaseSpaceGenerator;
class R3BDistribution2D;
class R3BDistribution3D;
class R3Bp2pevtGenerator;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BGenDict dictionary payload"

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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Marc Labiche		labi-ph0@paisley.ac.uk
//	       Oleg Kiselev		O.Kiselev@gsi.de
//             Hector Alvarez-Pol       hapol@fpddux.usc.es
//             Saúl Beceiro             saul.beceiro@rai.usc.es
//             Denis Bertini          <D.Bertini@gsi.de>
//*-- Date: 11/2005
//*-- Last Update: 3/08/09  <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Event generator interface for R3B
//
// --------------------------------------------------------------
// Comments:
//               3/08/09 - adapted for R3BRoot
//                         <D.Bertini@gsi.de>
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BSpecificGenerator_H
#define R3BSpecificGenerator_H 1

#include "TString.h"
#include "TVector3.h"

#include "TDatabasePDG.h"
#include "TMath.h"
#include "TParticlePDG.h"
#include "TRandom.h"

#include "FairGenerator.h"

#include "R3BBackTracking.h"
#include "R3BCDGenerator.h"
#include "R3BReadKinematics.h"

class TVector3;
class TString;

class R3BSpecificGenerator : public FairGenerator
{

  private:
    R3BReadKinematics* pReadKinematics;
    R3BCDGenerator* pCDGenerator;
    R3BBackTracking* pBackTrackingGenerator;

    TString gammasFlag;       // flag to select an isotropic gamma emitter
    TString decaySchemeFlag;  //
    TString reactionFlag;     // flag to select a reaction
    TString reactionType;     // reaction type
    TString dissociationFlag; // Coulomb dissociation generator flag
    TString backTrackingFlag; // BackTracking generator flag

    TString targetType; // target elements
    Double_t targetHalfThicknessPara;
    Double_t targetThicknessLiH;
    Double_t targetRadius;

    TString beamInteractionFlag; // flag to select target/beam interaction-like position for gammas origin
    TString rndmFlag;            // flag for a rndm (angle) primary emission
    TString rndmEneFlag;         // flag for a rndm energy primary emission
    TString boostFlag;           // flag for a boosted primary emission
    Int_t fPDGType;              // Particle type (PDG encoding)
    Double_t kinEnergyPrim;      // kinetic energy of the primary
    Double_t meanKinEnergyBeam;  // kinetic energy mean of the beam (per nucleon)
    Double_t sigmaKinEnergyBeam; // kinetic energy sigma of the beam

    TString simEmittanceFlag; // flag to select an emittance spectra for vertex emission in CoulDiss
    Double_t sigmaXInEmittance;
    Double_t sigmaXPrimeInEmittance;

    Double_t fPDGMass; // Particle Mass from internal PDG table

    Int_t fMult;    // Multiplicity
    Double_t fP;    // Momentum
    TVector3 fPdir; // Momentum Direction
    Int_t fCharge;  // Charge
    TVector3 fPol;  // Polarization
    TVector3 fPos;  // Vertex position
    Double_t fTime; // Decay Time
    TString particlePrim;
    Bool_t isDumped;

  public:
    R3BSpecificGenerator();
    R3BSpecificGenerator(Int_t pdg, Float_t beamEnergy);
    R3BSpecificGenerator(const R3BSpecificGenerator&);
    ~R3BSpecificGenerator();

    R3BSpecificGenerator& operator=(const R3BSpecificGenerator&) { return *this; }

    /** Initializer **/
    virtual Bool_t Init();

    /** Creates an event with given type and multiplicity.
    **@param primGen  pointer to the FairSpecificGenerator
    **/
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    void SetBeamInteractionFlag(TString val) { beamInteractionFlag = val; }
    void SetRndmFlag(TString val) { rndmFlag = val; }
    void SetRndmEneFlag(TString val) { rndmEneFlag = val; }
    void SetBoostFlag(TString val) { boostFlag = val; }
    void SetBeamEnergy(Double_t val) { meanKinEnergyBeam = val; }
    void SetSigmaBeamEnergy(Double_t val) { sigmaKinEnergyBeam = val; }

    void SetParticlePrim(TString val) { particlePrim = val; }

    void SetEnergyPrim(Double_t val)
    {
        if (reactionFlag.CompareTo("on") == 0)
        {
            cout << "-I- R3BSpecificGenerator::SetEnergyPrim()  \
                 FLAG(Reaction) is on "
                 << endl;
            cout << "-I  R3BSpecificGenerator::SetEnergyPrim()  \
                 Sampling between [50.,400.] MeV activated ..."
                 << endl;
        }

        kinEnergyPrim = val;
    }

    void SetTargetType(TString ans) { targetType = ans; }
    void SetReactionFlag(TString val) { reactionFlag = val; }
    void SetGammasFlag(TString val) { gammasFlag = val; }
    void SetDecaySchemeFlag(TString val) { decaySchemeFlag = val; }
    void SetReactionType(TString val) { reactionType = val; }
    void SetTargetHalfThicknessPara(Double_t para) { targetHalfThicknessPara = para; }
    void SetTargetThicknessLiH(Double_t para) { targetThicknessLiH = para; }
    void SetTargetRadius(Double_t para) { targetRadius = para; }

    void SetDissociationFlag(TString val) { dissociationFlag = val; }
    void SetBackTrackingFlag(TString val) { backTrackingFlag = val; }
    void SetSimEmittanceFlag(TString val) { simEmittanceFlag = val; }
    void SetSigmaXInEmittance(Double_t val) { sigmaXInEmittance = val; }
    void SetSigmaXPrimeInEmittance(Double_t val) { sigmaXPrimeInEmittance = val; }

    //
    TString GetBeamInteractionFlag() { return beamInteractionFlag; }
    TString GetRndmFlag() { return rndmFlag; }
    TString GetRndmEneFlag() { return rndmEneFlag; }
    TString GetBoostFlag() { return boostFlag; }
    Double_t GetBeamEnergy() { return meanKinEnergyBeam; }
    TString GetParticlePrim() { return particlePrim; }
    Double_t GetEnergyPrim() { return kinEnergyPrim; }
    TString GetTargetType() { return targetType; }
    TString GetReactionFlag() { return reactionFlag; }
    TString GetGammasFlag() { return gammasFlag; }
    TString GetDecaySchemeFlag() { return decaySchemeFlag; }
    TString GetReactionType() { return reactionType; }

    Double_t GetTargetHalfThicknessPara() { return targetHalfThicknessPara; }
    Double_t GetTargetThicknessLiH() { return targetThicknessLiH; }
    Double_t GetTargetRadius() { return targetRadius; }

    TString GetDissociationFlag() { return dissociationFlag; }
    TString GetBackTrackingFlag() { return backTrackingFlag; }
    TString GetSimEmittanceFlag() { return simEmittanceFlag; }
    Double_t GetSigmaXInEmittance() { return sigmaXInEmittance; }
    Double_t GetSigmaXPrimeInEmittance() { return sigmaXPrimeInEmittance; }

    void SetParticleDefinition(Int_t pdg_id) { fPDGType = pdg_id; }

    inline void SetParticleMomentum(Double32_t aMomentum) { fP = aMomentum; }

    inline void SetParticleMomentumDirection(TVector3 aMomentumDirection) { fPdir = aMomentumDirection; }

    inline void SetParticleCharge(Int_t aCharge) { fCharge = aCharge; }

    inline void SetParticlePolarization(TVector3 aVal) { fPol = aVal; }

    inline void SetParticlePosition(TVector3 aPos) { fPos = aPos; }

    inline void SetParticleTime(Double32_t aTime) { fTime = aTime; }

    inline void SetNumberOfParticles(Int_t i) { fMult = i; }

    inline Int_t GetPrimPDGCode() { return fPDGType; }

    inline TParticlePDG* GetParticleDefinition()
    {
        TDatabasePDG* pdgBase = TDatabasePDG::Instance();
        TParticlePDG* particle = pdgBase->GetParticle(fPDGType);

        return particle;
    }

    inline TVector3 GetParticleMomentumDirection() { return TVector3(fP, 0, 0); }

    inline Int_t GetParticleCharge() { return fCharge; }

    inline TVector3 GetParticlePolarization() { return fPol; }

    inline TVector3 GetParticlePosition() { return fPos; }

    inline Double_t GetParticleTime() { return fTime; }

    inline Int_t GetNumberOfParticles() { return fMult; }

    void PrintParameters();

    ClassDef(R3BSpecificGenerator, 1);
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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Oleg Kiselev		O.Kiselev@gsi.de
//*-- Date: 11/2005
//*-- Last Update: 20/07/05 Hector Alvarez
// --------------------------------------------------------------
// Description:
//   Event generator kinematics reader
//
// --------------------------------------------------------------
// Comments:
//
// --------------------------------------------------------------
//
/////////////////////////////////////////////////////////////////

#ifndef READKINEM_H
#define READKINEM_H

#include "TObject.h"
#include <fstream>
#include <iostream>
#include <string>

class R3BReadKinematics : public TObject
{
  public:
    R3BReadKinematics();
    ~R3BReadKinematics();

  public:
    //    File *pFile;
    Double_t LabAngle[1000];
    Double_t LabEnergy[1000];
    Double_t T_xsec[5000];
    Double_t CrossSection_t[5000];
    // Integrated matrix (cross section)
    Double_t Icross_section[5000];

    ClassDef(R3BReadKinematics, 1) // ROOT CINT
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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//             Hector Alvarez-Pol       hapol@fpddux.usc.es
//             Denis Bertini            D.Bertini@gsi.de
//*-- Date: 05/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Coulomb Disociation generators interface
//
// --------------------------------------------------------------
// Comments:
//     - 05/08/09  Adapting to R3BRoot
//     - 07/05/07 Adding setters for including emittance
//     - 03/05/07 Cleaning and moving to svn repository
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BCDGenerator_h
#define R3BCDGenerator_h 1

#include "TObject.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class R3BCDGenerator : public TObject
{

  private:
    Double_t px1; // momentum components for particle 1
    Double_t py1;
    Double_t pz1;
    Double_t E1;  // energy for particle 1
    Double_t px2; // momentum components for particle 2
    Double_t py2;
    Double_t pz2;
    Double_t E2; // energy for particle 1

    ifstream* inputFile; //!

  public:
    R3BCDGenerator();
    R3BCDGenerator(const R3BCDGenerator&);
    ~R3BCDGenerator();

    R3BCDGenerator& operator=(const R3BCDGenerator&) { return *this; }

    void ReadNewLine();

    Double_t GetPx1() { return px1; }
    Double_t GetPy1() { return py1; }
    Double_t GetPz1() { return pz1; }
    Double_t GetE1() { return E1; }
    Double_t GetPx2() { return px2; }
    Double_t GetPy2() { return py2; }
    Double_t GetPz2() { return pz2; }
    Double_t GetE2() { return E2; }

    void SetPx1(Double_t px) { px1 = px; }
    void SetPy1(Double_t py) { py1 = py; }
    void SetPz1(Double_t pz) { pz1 = pz; }
    void SetE1(Double_t E) { E1 = E; }
    void SetPx2(Double_t px) { px2 = px; }
    void SetPy2(Double_t py) { py2 = py; }
    void SetPz2(Double_t pz) { pz2 = pz; }
    void SetE2(Double_t E) { E2 = E; }

    ClassDef(R3BCDGenerator, 0);
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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Hector Alvarez-Pol     hapol@fpddux.usc.es

//*-- Date: 08/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   The information from the beam parameters used for the reaction
//   vertex. Information to be accessed in the ROOT file per event
//
// --------------------------------------------------------------
// Comments:
//     - 05/08/09 changes for Root compat.
//
//     - 07/05/07 Data structure for beam parameters
//
/////////////////////////////////////////////////////////////////

#ifndef R3BBeamInfo_H
#define R3BBeamInfo_H 1

#include "TROOT.h" //for including Rtypes.h

#include "TObject.h"

class R3BBeamInfo : public TObject
{

  private:
    Double_t theta; // theta emission angle in vertex
    Double_t phi;   // phi emission angle in vertex

    Double_t xPos; // vertex position
    Double_t yPos;
    Double_t zPos;

  public:
    R3BBeamInfo();
    ~R3BBeamInfo();

    inline Double_t GetTheta() const { return theta; }
    inline Double_t GetPhi() const { return phi; }

    inline Double_t GetXPos() const { return xPos; }
    inline Double_t GetYPos() const { return yPos; }
    inline Double_t GetZPos() const { return zPos; }

    inline void SetTheta(Double_t t) { theta = t; }
    inline void SetPhi(Double_t p) { phi = p; }

    inline void SetXPos(UInt_t x) { xPos = x; }
    inline void SetYPos(UInt_t y) { yPos = y; }
    inline void SetZPos(UInt_t z) { zPos = z; }

    void SetVertexPosition(Double_t, Double_t, Double_t);
    void SetAngles(Double_t, Double_t);

    void print(void);

    ClassDef(R3BBeamInfo, 1) // ROOT CINT
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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//
//*-- Date: 08/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Back Tracking reconstruction generators interface
//
// --------------------------------------------------------------
// Comments:
//           - Adapted for R3BRoot
//
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BBackTracking_h
#define R3BBackTracking_h 1

#include "TObject.h"

#include <fstream>
#include <iostream>
#include <string>

using namespace std;

class R3BBackTracking : public TObject
{

  private:
    Double_t px1; // unitary momentum components for proton
    Double_t py1;
    Double_t pz1;
    Double_t pprim;
    Double_t x1; // position in DCH2 (starting point)
    Double_t y1;
    Double_t z1;
    Double_t x0; // position measured in target
    Double_t y0;
    Double_t z0;

    ifstream* inputFile; //!

  public:
    R3BBackTracking();
    R3BBackTracking(const R3BBackTracking&);
    ~R3BBackTracking();

    R3BBackTracking& operator=(const R3BBackTracking&) { return *this; }

    void ReadNewLine();

    Double_t GetPx1() { return px1; }
    Double_t GetPy1() { return py1; }
    Double_t GetPz1() { return pz1; }
    Double_t GetPPrim() { return pprim; }
    Double_t GetX1() { return x1; }
    Double_t GetY1() { return y1; }
    Double_t GetZ1() { return z1; }
    Double_t GetX0() { return x0; }
    Double_t GetY0() { return y0; }
    Double_t GetZ0() { return z0; }

    void SetPx1(Double_t p) { px1 = p; }
    void SetPy1(Double_t p) { py1 = p; }
    void SetPz1(Double_t p) { pz1 = p; }
    void SetPPrim(Double_t p) { pprim = p; }
    void SetX1(Double_t p) { x1 = p; }
    void SetY1(Double_t p) { y1 = p; }
    void SetZ1(Double_t p) { z1 = p; }
    void SetX0(Double_t p) { x0 = p; }
    void SetY0(Double_t p) { y0 = p; }
    void SetZ0(Double_t p) { z0 = p; }

    ClassDef(R3BBackTracking, 0) // ROOT CINT
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

/////////////////////////////////////////////////////////////////
//*-- AUTHOR : Saul Beceiro Novo        saul.beceiro@rai.usc.es
//
//*-- Date: 05/2009
//*-- Last Update: 05/08/09 by <D.Bertini@gsi.de>
// --------------------------------------------------------------
// Description:
//   Storage intermediate state in the iterations needed
//   for the convergency of the momentum calculation
//
// --------------------------------------------------------------
// Comments:
//       - Adapted for R3BRoot
//
//
// --------------------------------------------------------------
/////////////////////////////////////////////////////////////////

#ifndef R3BBackTrackingStorageState_h
#define R3BBackTrackingStorageState_h 1

#include "TROOT.h" //for including Rtypes.h

#include "TObject.h"

#include <fstream>
#include <iostream>
#include <string>

// using namespace std;

class R3BBackTrackingStorageState : public TObject
{

  private:
    Double_t p0; // central value of the theoretical momentum calculation
    Double_t pcent;
    Double_t pmax;    // maximum value of the theoretical momentum calculation
    Double_t pmin;    // minimum value of the theoretical momentum calculation
    Double_t pmaxabs; // maximum value of the theoretical momentum calculation
    Double_t pminabs; // minimum value of the theoretical momentum calculation
    Double_t pfinal;  // calculated value for the momentum module
    Double_t piter;   // calculated value for the momentum module
    Int_t niter;      // iteration number
    Int_t converg;    // 0 when it doesnt converge,1 when it does.

    Double_t x0tar; // coordinates measured in the target (real measurement)
    Double_t y0tar;
    Double_t z0tar;
    Double_t pPrim; // real momentum (obtained with simulated data)

    Double_t xSim; // coordinates in the target taken during the backward simulation
    Double_t ySim;
    Double_t zSim;

  public:
    R3BBackTrackingStorageState();
    ~R3BBackTrackingStorageState();

    void ReadNewLine();

    Double_t GetP0() { return p0; }
    Double_t GetPcent() { return pcent; }
    Double_t GetPmax() { return pmax; }
    Double_t GetPmin() { return pmin; }
    Double_t GetPmaxAbs() { return pmaxabs; }
    Double_t GetPminAbs() { return pminabs; }
    Double_t GetPfinal() { return pfinal; }
    Double_t GetPiter() { return piter; }
    Int_t GetNiter() { return niter; }
    Int_t GetConverg() { return converg; }
    Double_t GetX0() { return x0tar; }
    Double_t GetY0() { return y0tar; }
    Double_t GetZ0() { return z0tar; }
    Double_t GetPPrim() { return pPrim; }
    Double_t GetXSim() { return xSim; }
    Double_t GetYSim() { return ySim; }
    Double_t GetZSim() { return zSim; }

    void SetP0(Double_t p) { p0 = p; }
    void SetPcent(Double_t p) { pcent = p; }
    void SetPmax(Double_t p) { pmax = p; }
    void SetPmin(Double_t p) { pmin = p; }
    void SetPmaxabs(Double_t p) { pmaxabs = p; }
    void SetPminabs(Double_t p) { pminabs = p; }
    void SetPfinal(Double_t p) { pfinal = p; }
    void SetPiter(Double_t p) { piter = p; }
    void SetNiter(Int_t p) { niter = p; }
    void SetConverg(Int_t p) { converg = p; }
    void SetX0(Double_t p) { x0tar = p; }
    void SetY0(Double_t p) { y0tar = p; }
    void SetZ0(Double_t p) { z0tar = p; }
    void SetPPrim(Double_t p) { pPrim = p; }
    void SetXSim(Double_t p) { xSim = p; }
    void SetYSim(Double_t p) { ySim = p; }
    void SetZSim(Double_t p) { zSim = p; }

    ClassDef(R3BBackTrackingStorageState, 1) // ROOT CINT
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

#ifndef R3BASCIIGENERATOR_H
#define R3BASCIIGENERATOR_H 1

#include "FairGenerator.h"
#include "TString.h"
#include <boost/iostreams/filtering_streambuf.hpp>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

class FairPrimaryGenerator;

class R3BAsciiGenerator : public FairGenerator
{
  public:
    /** Default constructor without arguments should not be used. **/
    R3BAsciiGenerator();

    /** Standard constructor.
     ** @param fileName The input file name
     **/
    explicit R3BAsciiGenerator(std::string fileName);
    explicit R3BAsciiGenerator(const TString& fileName);
    explicit R3BAsciiGenerator(const char* fileName); // for old macros

    /** Destructor. **/
    ~R3BAsciiGenerator() override;

    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param primGen  pointer to the R3BPrimaryGenerator
     **/
    bool ReadEvent(FairPrimaryGenerator* primGen) override;

    void SetXYZ(Double32_t x = 0, Double32_t y = 0, Double32_t z = 0);

    void SetDxDyDz(Double32_t sx = 0, Double32_t sy = 0, Double32_t sz = 0);

  private:
    const std::string fFileName;                                         //! Input file name
    std::ifstream fFile;                                                 //! Input file handle
    boost::iostreams::filtering_streambuf<boost::iostreams::input> fBuf; //! Streambuf for decompression
    std::istream fInput;                                                 //! Input stream

    /** Private method RegisterIons. Goes through the input file and registers
     ** any ion needed. TODO: Should not be needed by FairRoot. **/
    void RegisterIons();

    void OpenOrRewindFile();

    Double32_t fX, fY, fZ;    // Point vertex coordinates [cm]
    bool fPointVtxIsSet;      // True if point vertex is set
    Double32_t fDX, fDY, fDZ; // Point vertex coordinates [cm]
    bool fBoxVtxIsSet;        // True if point vertex is set

    ClassDefOverride(R3BAsciiGenerator, 0);
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
// -----                R3BCosmicGenerator header file                 -----
// -----               Created 09/09/04  by Marc Labiche               -----
// -----            Derived from R3BBoxGenerator header file           -----
// -------------------------------------------------------------------------

/**  R3BCosmicGenerator.h
 *@author Marc Labiche <marc.labiche@stfc.ac.uk>
 *
 * The R3BBoxGenerator generates particles within given range
 * over phi,theta and a fixed multiplicity per event.
 * Derived from R3BGenerator.
 **/

#ifndef R3B_COSMICGENERATOR_H
#define R3B_COSMICGENERATOR_H

#include "R3BDistribution.h"

#include "FairGenerator.h"

#include "TRandom3.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BCosmicGenerator : public FairGenerator
{
  public:
    R3BCosmicGenerator(const Int_t pdgid = 13, const Int_t mult = 1, const UInt_t seed = 0U);

    /** Destructor **/
    virtual ~R3BCosmicGenerator(){};

    /** Modifiers **/
    void SetPDGType(const Int_t pdg) { fPDGType = pdg; };
    void SetMultiplicity(const Int_t mult) { fMult = mult; };
    void SetVertexDistribution_cm(const R3BDistribution<3> vertexDist_cm) { fVertexPositionDist_cm = vertexDist_cm; }
    void SetAngularDistribution_Rad(const R3BDistribution<2> angularDist_Rad) { fAngularDist_Rad = angularDist_Rad; }
    void SetEnergyRange_GeV(const Double_t minEnergy = 0.004, const Double_t maxEnergy = 100.);

    R3BDistribution<3>& GetVertexDistribution_cm() { return fVertexPositionDist_cm; }
    R3BDistribution<2>& GetAngularDistribution_Rad() { return fAngularDist_Rad; }
    R3BDistribution<1>& GetEnergyDistribution_GeV() { return fEnergyDist_GeV; };

    /** Initializer **/
    Bool_t Init() override;

    /** Creates an event with given type and multiplicity.
     **@param primGen  pointer to the R3BPrimaryGenerator
     **/
    Bool_t ReadEvent(FairPrimaryGenerator* primGen) override;

  private:
    R3BDistribution<3> fVertexPositionDist_cm; //!
    R3BDistribution<2> fAngularDist_Rad;       //!
    R3BDistribution<1> fEnergyDist_GeV;        //!

    TRandom3 fRngGen;

    Int_t fPDGType; // Particle type (PDG encoding)
    Int_t fMult;    // Multiplicity

    Double_t fPDGMass; // Particle mass [GeV]

    ClassDefOverride(R3BCosmicGenerator, 2)
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
// -----              R3BCryAsciiGenerator header file                 -----
// -----  This is a cosmic ray generator taking as input a file from   -----
// -----  the Cosmic-ray Shower Library (CRY):                         -----
// -----  https://nuclear.llnl.gov/simulation/                         -----
// -------------------------------------------------------------------------

#ifndef R3BCryAsciiGenerator_H
#define R3BCryAsciiGenerator_H 1

#include "FairGenerator.h"
#include "TString.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

class FairPrimaryGenerator;

class R3BCryAsciiGenerator : public FairGenerator
{
  public:
    /** Default constructor without arguments should not be used. **/
    R3BCryAsciiGenerator();

    /** Standard constructor.
     ** @param fileName The input file name
     **/
    explicit R3BCryAsciiGenerator(std::string fileName);
    explicit R3BCryAsciiGenerator(const TString& fileName);
    explicit R3BCryAsciiGenerator(const char* fileName);

    /** Destructor. **/
    ~R3BCryAsciiGenerator() override;

    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param primGen  pointer to the R3BPrimaryGenerator
     **/
    bool ReadEvent(FairPrimaryGenerator* primGen) override;

    // Set origin for cosmic rays
    void SetTopOrigin(float dist) { fTopDist = dist; };

  private:
    TString fFileName;
    ifstream infile;
    float fTopDist; // Origin of cosmic rays in the Y-coordinate

    /** Private method CloseInput. Closes the input file properly.
     ** Called from destructor and from ReadEvent. **/
    void CloseInput();

    ClassDefOverride(R3BCryAsciiGenerator, 0);
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
// -----          based on FairAsciiGenerator header file              -----
// -----          Created 30/09/10  by M. Labiche                      -----
// -------------------------------------------------------------------------

/**  R3Bp2pGenerator.h
 Derived from FairGenerator.
**/

#ifndef FAIR_ASCIIGENERATOR_H
#define FAIR_ASCIIGENERATOR_H

#include "FairGenerator.h"

#include <fstream>

using namespace std;

class TDatabasePDG;
class FairPrimaryGenerator;

class R3Bp2pGenerator : public FairGenerator
{

  public:
    /** Default constructor without arguments should not be used. **/
    R3Bp2pGenerator();

    /** Standard constructor.
     ** @param fileName The input file name
     **/
    R3Bp2pGenerator(const char* fileName);

    R3Bp2pGenerator(const R3Bp2pGenerator&);

    R3Bp2pGenerator& operator=(const R3Bp2pGenerator&) { return *this; }

    /** Destructor. **/
    virtual ~R3Bp2pGenerator();

    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param primGen  pointer to the FairPrimaryGenerator
     **/
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  private:
    ifstream* fInputFile;    //! Input file stream
    const Char_t* fFileName; //! Input file Name

    ofstream* fOutputFile;

    /** Private method CloseInput. Just for convenience. Closes the
     ** input file properly. Called from destructor and from ReadEvent. **/
    void CloseInput();

    /** PDG data base */

    //  TDatabasePDG *fPDG; //!

    ClassDef(R3Bp2pGenerator, 1);
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

// --------------------------------------------------------------------------------------------
// -----                          R3BLandGenerator header file                            -----
// -----                       Created by M.I.Cherciu -18.06.2010                         -----
// --------------------------------------------------------------------------------------------

/** R3BLandGenerator
 **/

#ifndef R3BLANDGENERATOR_H
#define R3BLANDGENERATOR_H 1

#include "FairGenerator.h"
#include <map>

// Root Headers
#include "TApplication.h"
#include "TBranch.h"
#include "TCanvas.h"
#include "TFile.h"
#include "TPad.h"
#include "TROOT.h"
#include "TSystem.h"
#include "TTree.h"

class TDatabasePDG;
class FairPrimaryGenerator;
class FairIon;

class R3BLandGenerator : public FairGenerator
{

  public:
    /** Default constructor without arguments should not be used. **/
    R3BLandGenerator();

    /** Standard constructor.
     ** @param fileName The input file name
     **/
    R3BLandGenerator(const char* fileName);

    R3BLandGenerator(const R3BLandGenerator&);

    R3BLandGenerator& operator=(const R3BLandGenerator&) { return *this; }

    /** Destructor. **/
    virtual ~R3BLandGenerator();

    /** Reads on event from the input file and pushes the tracks onto
     ** the stack. Abstract method in base class.
     ** @param primGen  pointer to the R3BPrimaryGenerator
     **/
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  private:
    TFile* fInputFile; //! Input file stream
    TTree* tree;

    TLeaf* lPDG;
    TLeaf* lM;
    TLeaf* lZ;
    TLeaf* lE;
    TLeaf* lp;
    TLeaf* ltheta;
    TLeaf* lphi;
    TLeaf* lpx;
    TLeaf* lpy;
    TLeaf* lpz;
    TLeaf* lx;
    TLeaf* ly;
    TLeaf* lz;

    const char* fFileName; //! Input file Name
    TDatabasePDG* fPDG;    //!  PDG database

    Double_t PDGo, Mo, Zo, Eo, po, thetao, phio;
    Double_t xo, yo, zo, pxo, pyo, pzo;
    Double_t vx, vy, vz;

    /** Private method CloseInput. Just for convenience. Closes the
     ** input file properly. Called from destructor and from ReadEvent. **/
    void CloseInput();

    ClassDef(R3BLandGenerator, 1);
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

/**  R3BCALIFATestGenerator.h
 *@author H. Alvarez Pol <hector.alvarez@usc.es>
 *
 * The R3BCALIFATestGenerator generates gammas with different options
 * for testing CALIFA. Copies from FairBoxGenerator (I tried to derive from it,
 * but requires a modification of their data members to protected).
 * Derived from FairGenerator.
 **/

#ifndef FAIR_CALIFATESTGENERATOR_H
#define FAIR_CALIFATESTGENERATOR_H

#include "FairGenerator.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BCALIFATestGenerator : public FairGenerator
{
  public:
    /** Default constructor. **/
    R3BCALIFATestGenerator();

    /** Constructor with PDG-ID, multiplicity
     **@param pdgid Particle type (PDG encoding)
     **@param mult  Multiplicity (default is 1)
     **/
    R3BCALIFATestGenerator(Int_t pdgid, Int_t mult = 1);

    /** Destructor **/
    virtual ~R3BCALIFATestGenerator(){};

    /** Modifiers **/
    void SetPDGType(Int_t pdg) { fPDGType = pdg; };

    void SetMultiplicity(Int_t mult) { fMult = mult; };

    void SetPRange(Double32_t pmin = 0, Double32_t pmax = 10)
    {
        fPMin = pmin;
        fPMax = pmax;
        fPRangeIsSet = kTRUE;
    }

    void SetPtRange(Double32_t ptmin = 0, Double32_t ptmax = 10)
    {
        fPtMin = ptmin;
        fPtMax = ptmax;
        fPtRangeIsSet = kTRUE;
    };

    void SetPhiRange(Double32_t phimin = 0, Double32_t phimax = 360)
    {
        fPhiMin = phimin;
        fPhiMax = phimax;
    };

    void SetEtaRange(Double32_t etamin = -5, Double32_t etamax = 7)
    {
        fEtaMin = etamin;
        fEtaMax = etamax;
        fEtaRangeIsSet = kTRUE;
    };

    void SetYRange(Double32_t ymin = -5, Double32_t ymax = 7)
    {
        fYMin = ymin;
        fYMax = ymax;
        fYRangeIsSet = kTRUE;
    };

    void SetThetaRange(Double32_t thetamin = 0, Double32_t thetamax = 90)
    {
        fThetaMin = thetamin;
        fThetaMax = thetamax;
        fThetaRangeIsSet = kTRUE;
    };

    void SetCosTheta() { fCosThetaIsSet = kTRUE; };

    void SetXYZ(Double32_t x = 0, Double32_t y = 0, Double32_t z = 0)
    {
        fX = x;
        fY = y;
        fZ = z;
        fPointVtxIsSet = kTRUE;
    }

    void SetBoxXYZ(Double32_t x1 = 0,
                   Double32_t y1 = 0,
                   Double32_t z1 = 0,
                   Double32_t x2 = 0,
                   Double32_t y2 = 0,
                   Double32_t z2 = 0)
    {
        fX1 = x1;
        fY1 = y1;
        fZ1 = z1;
        fX2 = x2;
        fY2 = y2;
        fZ2 = z2;
        fBoxVtxIsSet = kTRUE;
    }

    void SetDebug(Bool_t debug = 0) { fDebug = debug; }

    void SetLorentzBoost(Double32_t beta = 0)
    {
        SetFragmentVelocity(beta);
        fLorentzBoostIsSet = kTRUE;
    };

    void SetFragmentVelocity(Double32_t beta = 0);

    void SetNuclearDecayChain() { fNuclearDecayChainIsSet = kTRUE; };

    void SetDecayChainPoint(Double32_t gammaEnergy = 0, Double32_t branchingRatio = 0);

    /** Initializer **/
    virtual Bool_t Init();

    /** Creates an event with given type and multiplicity.
     **@param primGen  pointer to the FairPrimaryGenerator
     **/
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

  private:
    Int_t fPDGType; // Particle type (PDG encoding)
    Int_t fMult;    // Multiplicity

    Double32_t fPDGMass;                     // Particle mass [GeV]
    Double32_t fPtMin, fPtMax;               // Transverse momentum range [GeV]
    Double32_t fPhiMin, fPhiMax;             // Azimuth angle range [degree]
    Double32_t fEtaMin, fEtaMax;             // Pseudorapidity range in lab system
    Double32_t fYMin, fYMax;                 // Rapidity range in lab system
    Double32_t fPMin, fPMax;                 // Momentum range in lab system
    Double32_t fThetaMin, fThetaMax;         // Polar angle range in lab system [degree]
    Double32_t fX, fY, fZ;                   // Point vertex coordinates [cm]
    Double32_t fX1, fY1, fZ1, fX2, fY2, fZ2; // Box vertex coords (x1,y1,z1)->(x2,y2,z2)

    Bool_t fEtaRangeIsSet;   // True if eta range is set
    Bool_t fYRangeIsSet;     // True if rapidity range is set
    Bool_t fThetaRangeIsSet; // True if theta range is set
    Bool_t fCosThetaIsSet;   // True if uniform distribution in
                             // cos(theta) is set (default -> not set)
    Bool_t fPtRangeIsSet;    // True if transverse momentum range is set
    Bool_t fPRangeIsSet;     // True if abs.momentum range is set
    Bool_t fPointVtxIsSet;   // True if point vertex is set
    Bool_t fBoxVtxIsSet;     // True if box vertex is set
    Bool_t fDebug;           // Debug switch

    // SPECIFIC OF CALIFA
    Double32_t fGammaEnergies[8];        // Gamma energies for the nuclear decay chain [GeV] TEST UNITS!
    Double32_t fGammaBranchingRatios[8]; // Gamma branching ratios for the nuclear decay chain
    Int_t fGammasDefinedInNuclearDecay;  // Number of gammas defined (max 8)
    Double32_t fBetaOfEmittingFragment;  // Velocity of the fragment emitting the gammas
    Double32_t fGammaFactor;             // Velocity of the fragment emitting the gammas

    Bool_t fLorentzBoostIsSet;      // True if Lorentz Boost is set
    Bool_t fNuclearDecayChainIsSet; // True if a nuclear decay chain is set

    ClassDef(R3BCALIFATestGenerator, 1);
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

#ifndef R3BPARTICLEGENERATOR_H
#define R3BPARTICLEGENERATOR_H

#include "R3BBeamProperties.h"
#include "R3BDistribution.h"
#include "R3BDistribution1D.h"
#include "R3BParticleSelector.h"

#include "FairGenerator.h"

#include "TRandom3.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BParticleGenerator : public FairGenerator, public R3BParticleSelector
{

  public:
    R3BParticleGenerator(int pdgCode, unsigned int seed = 0U);
    R3BParticleGenerator(unsigned int seed = 0U);

    R3BBeamProperties Beam; //!
    bool Init() override;
    bool ReadEvent(FairPrimaryGenerator* primGen) override;

  protected:
    void addParticle(const int pdgCode, const double mass) override;

  private:
    R3BDistribution<3> fVertex_cm;   //!
    R3BDistribution<2> fSpread_mRad; //!
    R3BDistribution<1> fEnergy_AMeV; //!

    int fPDGCode;     // The PDG Code of the Particle
    double fMass_GeV; // The Mass of the Particle
    TRandom3 fRNG;      // the RNG

    ClassDefOverride(R3BParticleGenerator, 1)
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
// -----                   R3BIonGenerator header file                 -----
// -----                    Based on FairIonGenerator                  -----
// -----                 Created 18/03/11  by M. Labiche               -----
// -------------------------------------------------------------------------

/** Include beam spot size **/

#ifndef R3BIONGENERATOR_H
#define R3BIONGENERATOR_H

#include "R3BBeamProperties.h"

#include "FairGenerator.h"
#include "FairIon.h"

#include "TRandom3.h"

#include <iostream>

class FairPrimaryGenerator;

class R3BIonGenerator : public FairGenerator
{

  public:
    /** Default constructor **/
    R3BIonGenerator(UInt_t seed = 0U);

    /** Constructor with ion name
     ** For the generation of ions with pre-defined FairIon
     ** By default, the  excitation energy is zero. This can be changed with the
     ** respective modifiers.
     **@param ionName  Ion name
     **@param mult      Number of ions per event
     **@param px,py,pz  Momentum components [GeV] per nucleon!
     **@param vx,vy,vz  Vertex coordinates [cm]
     **/
    R3BIonGenerator(const Char_t* ionName, Int_t mult, Double_t momentum_AGeV_per_c, UInt_t seed = 0U);

    /** Default constructor
     ** For the generation of ions with atomic number z and mass number a.
     ** By default, the mass equals a times the proton mass and the
     ** excitation energy is zero. This can be changed with the
     ** respective modifiers.
     **@param z         Atomic number
     **@param a         Atomic mass
     **@param q         Electric charge [e]
     **@param mult      Number of ions per event
     **@param px,py,pz  Momentum components [GeV] per nucleon!
     **@param vx,vy,vz  Vertex coordinates [cm]
     **/
    R3BIonGenerator(Int_t z, Int_t a, Int_t q, Int_t mult, Double_t momentum_AGeV_per_c, UInt_t seed = 0U);

    R3BIonGenerator(const R3BIonGenerator&);

    R3BIonGenerator& operator=(const R3BIonGenerator&) { return *this; }

    /** Destructor **/
    virtual ~R3BIonGenerator();

    /** Modifiers **/
    void SetExcitationEnergy(Double_t eExc);
    void SetMass(Double_t mass);

    Bool_t Init() override;

    /** Method ReadEvent
     ** Generates <mult> of the specified ions and hands hem to the
     ** FairPrimaryGenerator.
     **/
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen) override;

    R3BBeamProperties Beam; //!

  private:
    Int_t fMult;         // Multiplicity per event
    FairIon* fIon;       // Pointer to the FairIon to be generated

    TRandom3 fRNG; // the RNG
    ClassDefOverride(R3BIonGenerator, 1)
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

/**
 * Gamma (cascade) event generator.
 *
 * @author Max Winkel <max.winkel@ph.tum.de>
 */

#ifndef _R3BGAMMAGENERATOR_H_
#define _R3BGAMMAGENERATOR_H_

#include <map>
#include <utility>

#include <TRandom3.h>
#include <TVector3.h>

#include <FairGenerator.h>

/**
 * Gamma (cacade) event generator.
 *
 * You may consider an instance of this class as an excited nucleus performing gamma decay.
 *
 * Use SetEnergyLevel(id, E) to define energy levels with arbitrary, integer IDs and energies in GeV.
 * Then, use SetBranchingRatio(idLevelFrom, idLevelTo, ratio) to define the transition propabilities between the levels.
 * Finally, using SetInitalLevel() define the one and only initial energy level to start the cascade,
 * or SetInitialLevelDistribution() to define multiple possible initial states with a given distribution.
 */
class R3BGammaGenerator : public FairGenerator
{
  public:
    R3BGammaGenerator()
        : FairGenerator("R3BGammaGenerator", "R3BGammaGenerator")
    {
    }
    R3BGammaGenerator(const char* name, const char* title)
        : FairGenerator(name, title)
    {
    }

    virtual Bool_t Init();
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);

    /**
     * Defines an energy level.
     *
     * @param idLevel Arbitrary ID for the level for later usage in SetBranchingRatio(), SetInitialLevel() or
     * SetInitialLevelDistribution().
     * @param E Energy (GeV) of the level
     */
    void SetEnergyLevel(int idLevel, double E);

    /**
     * Defines the branching ratio (transition probability) between to levels.
     *
     * @remark The sum of all weight/probabilities from each initial level is renormalized to 100%.
     *
     * @param idLevelFrom ID of source level (as defined by SetEnergyLevel() )
     * @param idLevelTo ID of destination level (as defined by SetEnergyLevel() )
     * @param ratio Weight for this transition (the sum of all weights for each source level will be renormalized to
     * 100%)
     * @param radiative If false, no gamma ray will be emitted for this transition.
     */
    void SetBranchingRatio(int idLevelFrom, int idLevelTo, double ratio, bool radiative = true);

    /**
     * Defines the only initially populated energy level.
     *
     * @param idLevel ID of initial energy level (as defined by SetEnergyLevel() )
     */
    void SetInitialLevel(int idLevel);

    /**
     * Defines a distribution of initially populated levels.
     *
     * @param idLevel ID of initial energy level (as defined by SetEnergyLevel() )
     * @param ratio Weight of this level (all weights will be renormalized to 100%)
     */
    void SetInitialLevelDistribution(int idLevel, double ratio);

    /**
     * Simulate in-flight emission of Gamma rays: Defines beta of emitting system
     * relative to lab frame.
     *
     * @param beta Direction and velocity (relativistiv beta, i.e. v/c) of emitting system (moving ion)
     */
    void SetLorentzBoost(TVector3& beta);

  protected:
    void GenerateGamma(double E, FairPrimaryGenerator* primGem);

    std::map<int, double> fEnergyLevels;
    std::map<int, std::map<int, std::pair<double, bool>>> fBranchingRatios;
    std::map<int, double> fInitialLevelDistribution;

    TVector3 fBeta;

    TRandom3 fRandom;

    ClassDef(R3BGammaGenerator, 1);
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

#ifndef R3BROOT_R3BPHASESPACEGENERATOR_H
#define R3BROOT_R3BPHASESPACEGENERATOR_H

// Wrapper for TGenPhaseSpace

#include "R3BDistribution.h"
#include "R3BDistribution1D.h"
#include "R3BParticleSelector.h"
#include "R3BBeamProperties.h"

#include "FairGenerator.h"
#include "FairIon.h"

#include "TGenPhaseSpace.h"
#include "TRandom3.h"

#include <string>
#include <vector>

class R3BPhaseSpaceGenerator : public FairGenerator, public R3BParticleSelector
{
  public:
    R3BPhaseSpaceGenerator(unsigned int seed = 0U);

    // realtive energy distribution in keV
    R3BDistribution<1>& GetErelDistribution() { return fErel_keV; }
    void SetErelDistribution(R3BDistribution<1> ErelDistribution) { fErel_keV = ErelDistribution; }

    bool Init() override;
    bool ReadEvent(FairPrimaryGenerator* primGen) override;

    R3BBeamProperties Beam;

  protected:
    void addParticle(const int pdgCode, const double mass) override;

  private:
    R3BDistribution<1> fErel_keV; //!

    double fTotMass;
    TRandom3 fRngGen;
    TGenPhaseSpace fPhaseSpace;
    std::vector<int> fPDGCodes;
    std::vector<double> fMasses;

    ClassDefOverride(R3BPhaseSpaceGenerator, 3);
};

#endif // R3BROOT_R3BPHASESPACEGENERATOR_H
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

#ifndef R3BDISTRIBUTION1D_H
#define R3BDISTRIBUTION1D_H

#include "TF1.h"
#include "TGraph.h"
#include "TH1.h"

#include "R3BDistribution.h"

class R3BDistribution1D : public R3BDistribution<1>
{
  public:
    static R3BDistribution<1> Delta(const Double_t value);
    static R3BDistribution<1> Flat(const Double_t lower_value, const Double_t upper_value);
    static R3BDistribution<1> Gaussian(const Double_t mean, const Double_t sigma);
    static R3BDistribution<1> Function(const std::function<Double_t(const Double_t)> func,
                                       const Double_t lower_bound,
                                       const Double_t upper_bound);
    static R3BDistribution<1> Data(const TF1& data);
    static R3BDistribution<1> Data(const TF1& data, const Double_t lower_bound, const Double_t upper_bound);
    static R3BDistribution<1> Data(const TH1& data);
    static R3BDistribution<1> Data(const TH1& data, const Double_t lower_bound, const Double_t upper_bound);
    static R3BDistribution<1> Data(const TGraph& data);
    static R3BDistribution<1> Data(const TGraph& data, const Double_t lower_bound, const Double_t upper_bound);
    static R3BDistribution<1> DataLogLog(const TGraph& data);
    static R3BDistribution<1> DataLogLog(const TGraph& data, const Double_t lower_bound, const Double_t upper_bound);
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

#ifndef R3BDISTRIBUTION2D_H
#define R3BDISTRIBUTION2D_H

#include "TF2.h"
#include "TGraph2D.h"
#include "TH2.h"

#include "R3BDistribution.h"

class R3BDistribution2D : public R3BDistribution<2>
{
    using Arr = std::array<Double_t, 2>;

  public:
    static R3BDistribution<2> Delta(const Double_t value1, const Double_t value2) { return Delta({value1, value2}); }
    static R3BDistribution<2> Delta(const Arr values);
    static R3BDistribution<2> Flat(const Arr lower_values, const Arr upper_values);
    static R3BDistribution<2> Gaussian(const Double_t mean, const Double_t sigma);
    static R3BDistribution<2> Gaussian(const Arr means, const Arr sigmas);
    static R3BDistribution<2> Square(const Arr center, const Double_t edgeLength);
    static R3BDistribution<2> Rectangle(const Arr center, const Arr edgeLengths);
    static R3BDistribution<2> Circle(const Arr center, const Double_t radius);
    // static R3BDistribution<2> Data(const TH2& data); todo
    // static R3BDistribution<2> Data(const TGraph2D& data); todo
    // static R3BDistribution<2> Data(const TF2& data); todo
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

#ifndef R3BDISTRIBUTION3D_H
#define R3BDISTRIBUTION3D_H

#include "TF3.h"
#include "TH3.h"

#include "R3BDistribution.h"

class R3BDistribution3D : public R3BDistribution<3>
{
    using Arr = std::array<Double_t, 3>;

  public:
    static R3BDistribution<3> Delta(const Double_t value1, const Double_t value2, const Double_t value3);
    static R3BDistribution<3> Constant(const Arr lower_values, Arr upper_values);
    static R3BDistribution<3> Gaussian(const Arr means, Arr sigmas);
    static R3BDistribution<3> Cube(const Arr center, const Double_t edgeLength);
    static R3BDistribution<3> Prism(R3BDistribution<2> xydist, R3BDistribution<1> zdist);
    static R3BDistribution<3> Sphere(const Arr center, const Double_t radius);
    static R3BDistribution<3> SphereSurface(const Arr center, const Double_t radius);
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

/*
 * R3Bp2pevtGenerator.h
 *
 *  Created on: Jul 23, 2018
 *      Author: gu92joq
 */

#ifndef R3BP2PEVTGENERATOR_H_
#define R3BP2PEVTGENERATOR_H_

#include <map>
#include <utility>

#include <TRandom3.h>
#include <TVector3.h>

#include <FairGenerator.h>

/**
 * Event generator for p2p events in inverse and direct kinematics, alpha version
 * Supply energy, nucleus A and excitation energy by separate method SetValues
 */

struct cm_values
{
    // Internal cluster
    double e_clust;
    double p_clust;
    double theta_clust;
    // Scattered particle
    double e_scat;
    double p_scat;
    double theta_scat;
    // indicates satisfactory kinematics (i.e. energy & momentum conservation)
    bool good;
    double T;
};

class R3Bp2pevtGenerator : public FairGenerator
{
  public:
    // R3Bp2pevtGenerator() : FairGenerator("R3Bp2pevtGenerator", "R3Bp2pevtGenerator") {}
    // R3Bp2pevtGenerator(const char *name, const char *title) : FairGenerator(name, title) {}
    R3Bp2pevtGenerator();
    ~R3Bp2pevtGenerator(){};

    virtual Bool_t Init();
    virtual Bool_t ReadEvent(FairPrimaryGenerator* primGen);
    void SetHeavyNucleus(int A, double M_def, double M_res); // Set Mass of heavy nucleus and Mass Defect
    void SetInverse(bool inverse);                           // Set Inverse or direct kinematics
    void SetIsotropic(bool isotropic);          // Set Isotropic or parametric cross section for proton emission
    void SetMomDistrib(double mom);             // Set Sigma of momentum distribution
    void SetExcitation(double exe);             // Set Excitation energy
    void SetLightNucleus(double ma, double mi); // Set Incoming outgoing particle mass
    void SetBeamEnergy(double E);
    void Print();

  protected:
    /**
     * Set Values for target end beam nucleus, Cross section and kinematics
     */
    double ENERGY;
    int A_BEAM;
    double MA;
    double MB;
    double Ma;
    double Mi;
    double T_LIMIT;
    double MOM_SIGMA;
    bool ISOTROPIC;
    bool INVERSE;
    TRandom3 fRandom;
    double PI = 3.14159265358979323846;
    TVector3 DREHUNG(TVector3 v1, TVector3 v2);
    double CINEMA(double, double, double);
    cm_values CENMASS(double, double, double, double, bool);
    double momentum_CM(double, double, double);
    double get_T(double, double);
    std::pair<double, double> Lorentz(double, double, double, double);
    void SetValues(double E, int A, double MOM, double exe, bool invert, bool iso);

    ClassDef(R3Bp2pevtGenerator, 1);
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

#ifndef R3BPARTICLESELECTOR_H
#define R3BPARTICLESELECTOR_H

#include "Rtypes.h"

#include <array>

class TParticle;
class FairParticle;

class R3BParticleSelector
{
  public:
    virtual ~R3BParticleSelector() = default;

    void AddProton();
    void AddNeutron();
    void AddParticle(FairParticle* particle);
    void AddParticle(const char* particleName);
    void AddParticle(const char* particleName,
                     int z,
                     int a,
                     int s,
                     double mass_GeV,
                     int charge,
                     bool stable,
                     double decaytime_ns);
    void AddParticle(int pdgCode);
    void AddParticle(int z, int a);

  protected:
    virtual void addParticle(const int pdgCode, const double mass) = 0;
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

#ifndef R3BBEAMPROPERTIES
#define R3BBEAMPROPERTIES

#include "R3BDistribution.h"
#include "R3BDistribution1D.h"

class R3BBeamProperties
{
  public:
    R3BBeamProperties();

    // Vertex distribution in cm
    R3BDistribution<3>& GetVertexDistribution() { return fVertex_cm; }
    void SetVertexDistribution(const R3BDistribution<3>& vertexDistribution_x_y_z_cm)
    {
        fVertex_cm = vertexDistribution_x_y_z_cm;
    }

    // spread in mRad
    R3BDistribution<2>& GetSpreadDistribution() { return fSpread_mRad; }
    void SetSpreadDistribution(const R3BDistribution<2>& spreadDistribution_theta_phi_mRad)
    {
        fSpread_mRad = spreadDistribution_theta_phi_mRad;
    }
    void SetSpreadDistribution(const R3BDistribution<1>& spreadDistribution_theta_mRad)
    {
        fSpread_mRad =
            R3BDistribution<2>({ spreadDistribution_theta_mRad, R3BDistribution1D::Flat(0, 2 * TMath::Pi() * 1e3) });
    }

    // beta distribution
    R3BDistribution<1>& GetBetaDistribution() { return fBeta; }
    void SetBetaDistribution(const R3BDistribution<1>& betaDistribution) { fBeta = betaDistribution; }

    // This method will calculate the beam beta using the given nucleon mass or approximate it from the number of
    // nucleons
    void SetEnergyDistribution(R3BDistribution<1> energyDistribution_AMeV, int nNucleons = 1, double mass_MeV = 0.);

  private:
    R3BDistribution<3> fVertex_cm;   //!
    R3BDistribution<2> fSpread_mRad; //!
    R3BDistribution<1> fBeta;        //!
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BAsciiGenerator", payloadCode, "@",
"R3BBackTracking", payloadCode, "@",
"R3BBackTrackingStorageState", payloadCode, "@",
"R3BBeamInfo", payloadCode, "@",
"R3BBeamProperties", payloadCode, "@",
"R3BCALIFATestGenerator", payloadCode, "@",
"R3BCDGenerator", payloadCode, "@",
"R3BCosmicGenerator", payloadCode, "@",
"R3BCryAsciiGenerator", payloadCode, "@",
"R3BDistribution1D", payloadCode, "@",
"R3BDistribution2D", payloadCode, "@",
"R3BDistribution3D", payloadCode, "@",
"R3BGammaGenerator", payloadCode, "@",
"R3BIonGenerator", payloadCode, "@",
"R3BLandGenerator", payloadCode, "@",
"R3BParticleGenerator", payloadCode, "@",
"R3BParticleSelector", payloadCode, "@",
"R3BPhaseSpaceGenerator", payloadCode, "@",
"R3BReadKinematics", payloadCode, "@",
"R3BSpecificGenerator", payloadCode, "@",
"R3Bp2pGenerator", payloadCode, "@",
"R3Bp2pevtGenerator", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BGenDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BGenDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BGenDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BGenDict() {
  TriggerDictionaryInitialization_G__R3BGenDict_Impl();
}
