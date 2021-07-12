// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIr3bdatadIG__R3BDataDict

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
#include "R3BMCStack.h"
#include "R3BMCTrack.h"
#include "wrData/R3BWRMasterData.h"
#include "wrData/R3BWRCalifaData.h"
#include "wrData/R3BWRAmsData.h"
#include "R3BHit.h"
#include "R3BTrack.h"
#include "R3BDouble.h"
#include "xballData/R3BXBallPoint.h"
#include "xballData/R3BXBallCrystalHit.h"
#include "xballData/R3BXBallCrystalHitSim.h"
#include "califaData/R3BCalifaCrystalCalData.h"
#include "califaData/R3BCalifaMappedData.h"
#include "califaData/R3BCalifaHitData.h"
#include "califaData/R3BCalifaPoint.h"
#include "hpgeData/R3BHPGeDetHit.h"
#include "hpgeData/R3BHPGeDetPoint.h"
#include "dchData/R3BDchPoint.h"
#include "dchData/R3BDchFullPoint.h"
#include "gfiData/R3BGfiPoint.h"
#include "mtofData/R3BmTofPoint.h"
#include "mtofData/R3BmTofDigi.h"
#include "tofData/R3BTofPoint.h"
#include "vetoData/R3BVetoPoint.h"
#include "lumonData/ELILuMonPoint.h"
#include "trackerData/R3BTraPoint.h"
#include "trackerData/R3BTraHit.h"
#include "trackerData/R3BSitrackerHit.h"
#include "trackerData/R3BTrackerHit.h"
#include "startrackData/R3BStartrackPoint.h"
#include "startrackData/R3BStartrackHit.h"
#include "startrackData/R3BStartrackerDigitHit.h"
#include "startrackData/R3BStartrackMappedData.h"
#include "startrackData/R3BStartrackCalData.h"
#include "landData/R3BLandPoint.h"
#include "landData/R3BLandDigi.h"
#include "landData/R3BLandFirstHits.h"
#include "landData/R3BLandHit.h"
#include "landData/R3BPaddleCrystalHit.h"
#include "landData/R3BNeutronTrack.h"
#include "dchData/R3BDchDigi.h"
#include "dchData/R3BDch2pDigi.h"
#include "tofData/R3BTofDigi.h"
#include "tofData/R3BTof2pDigi.h"
#include "gfiData/R3BGfiDigi.h"
#include "trackerData/R3BTraDigi.h"
#include "trackerData/R3BTra2pDigi.h"
#include "trackerData/R3BTraFraDigi.h"
#include "trackerData/R3BTargetDigi.h"
#include "trackerData/R3BTarget2pDigi.h"
#include "mfiData/R3BMfiPoint.h"
#include "mfiData/R3BMfiDigi.h"
#include "pspData/R3BPspPoint.h"
#include "pspData/R3BPspDigi.h"
#include "neulandData/R3BNeulandTacquilaMappedData.h"
#include "neulandData/R3BNeulandCalData.h"
#include "neulandData/R3BNeulandPoint.h"
#include "neulandData/R3BNeulandHit.h"
#include "neulandData/R3BNeulandMultiplicity.h"
#include "neulandData/R3BNeulandCluster.h"
#include "neulandData/R3BNeulandNeutron.h"
#include "pspData/R3BPspxMappedData.h"
#include "pspData/R3BPspxPrecalData.h"
#include "pspData/R3BPspxCalData.h"
#include "pspData/R3BPspxHitData.h"
#include "losData/R3BLosMappedData.h"
#include "losData/R3BLosCalData.h"
#include "losData/R3BLosHitData.h"
#include "roluData/R3BRoluMappedData.h"
#include "roluData/R3BRoluCalData.h"
#include "roluData/R3BRoluHitData.h"
#include "sci2Data/R3BSci2MappedData.h"
#include "sci2Data/R3BSci2TcalData.h"
#include "sci2Data/R3BSci2CalData.h"
#include "sci2Data/R3BSci2HitData.h"
#include "sci8Data/R3BSci8MappedData.h"
#include "sci8Data/R3BSci8CalData.h"
#include "sci8Data/R3BSci8HitData.h"
#include "actarData/R3BActarPoint.h"
#include "strawtubesData/R3BStrawtubesMappedData.h"
#include "strawtubesData/R3BStrawtubesCalData.h"
#include "strawtubesData/R3BStrawtubesHitData.h"
#include "neulandData/R3BPaddleTamexMappedData.h"
#include "tofData/R3BTofdMappedData.h"
#include "tofData/R3BTofdCalData.h"
#include "tofData/R3BTofdHitData.h"
#include "tofData/R3BPaddleCalData.h"
#include "tofData/R3BTofdPoint.h"
#include "tofData/R3BTofdDigi.h"
#include "tofData/R3BPtofHit.h"
#include "pdcData/R3BPdcMappedData.h"
#include "pdcData/R3BPdcCalData.h"
#include "pdcData/R3BPdcHitData.h"
#include "fibData/R3BBunchedFiberCalData.h"
#include "fibData/R3BBunchedFiberHitData.h"
#include "fibData/R3BBunchedFiberMappedData.h"
#include "fibData/R3BFi4Point.h"
#include "fibData/R3BFi4CalItem.h"
#include "fibData/R3BFi4HitItem.h"
#include "fibData/R3BFibMappedData.h"
#include "fibData/R3BFibCalData.h"
#include "fibData/R3BFibPoint.h"
#include "amsData/R3BAmsMappedData.h"
#include "amsData/R3BAmsStripCalData.h"
#include "amsData/R3BAmsHitData.h"
#include "beammonitorData/R3BBeamMonitorMappedData.h"
#include "musicData/R3BMusicPoint.h"
#include "musicData/R3BMusicMappedData.h"
#include "musicData/R3BMusicCalData.h"
#include "musicData/R3BMusicHitData.h"
#include "sampData/R3BSamplerMappedData.h"
#include "sfibData/R3BSfibMappedData.h"
#include "sfibData/R3BSfibCalData.h"
#include "sfibData/R3BSfibHitData.h"
#include "frsData/R3BFrsData.h"
#include "R3BDetectorList.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BStack(void *p = 0);
   static void *newArray_R3BStack(Long_t size, void *p);
   static void delete_R3BStack(void *p);
   static void deleteArray_R3BStack(void *p);
   static void destruct_R3BStack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStack*)
   {
      ::R3BStack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStack", ::R3BStack::Class_Version(), "", 59,
                  typeid(::R3BStack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStack) );
      instance.SetNew(&new_R3BStack);
      instance.SetNewArray(&newArray_R3BStack);
      instance.SetDelete(&delete_R3BStack);
      instance.SetDeleteArray(&deleteArray_R3BStack);
      instance.SetDestructor(&destruct_R3BStack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStack*)
   {
      return GenerateInitInstanceLocal((::R3BStack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMCTrack(void *p = 0);
   static void *newArray_R3BMCTrack(Long_t size, void *p);
   static void delete_R3BMCTrack(void *p);
   static void deleteArray_R3BMCTrack(void *p);
   static void destruct_R3BMCTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMCTrack*)
   {
      ::R3BMCTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMCTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMCTrack", ::R3BMCTrack::Class_Version(), "", 286,
                  typeid(::R3BMCTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMCTrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMCTrack) );
      instance.SetNew(&new_R3BMCTrack);
      instance.SetNewArray(&newArray_R3BMCTrack);
      instance.SetDelete(&delete_R3BMCTrack);
      instance.SetDeleteArray(&deleteArray_R3BMCTrack);
      instance.SetDestructor(&destruct_R3BMCTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMCTrack*)
   {
      return GenerateInitInstanceLocal((::R3BMCTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BWRMasterData(void *p = 0);
   static void *newArray_R3BWRMasterData(Long_t size, void *p);
   static void delete_R3BWRMasterData(void *p);
   static void deleteArray_R3BWRMasterData(void *p);
   static void destruct_R3BWRMasterData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BWRMasterData*)
   {
      ::R3BWRMasterData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BWRMasterData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BWRMasterData", ::R3BWRMasterData::Class_Version(), "", 381,
                  typeid(::R3BWRMasterData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BWRMasterData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BWRMasterData) );
      instance.SetNew(&new_R3BWRMasterData);
      instance.SetNewArray(&newArray_R3BWRMasterData);
      instance.SetDelete(&delete_R3BWRMasterData);
      instance.SetDeleteArray(&deleteArray_R3BWRMasterData);
      instance.SetDestructor(&destruct_R3BWRMasterData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BWRMasterData*)
   {
      return GenerateInitInstanceLocal((::R3BWRMasterData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BWRMasterData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BWRCalifaData(void *p = 0);
   static void *newArray_R3BWRCalifaData(Long_t size, void *p);
   static void delete_R3BWRCalifaData(void *p);
   static void deleteArray_R3BWRCalifaData(void *p);
   static void destruct_R3BWRCalifaData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BWRCalifaData*)
   {
      ::R3BWRCalifaData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BWRCalifaData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BWRCalifaData", ::R3BWRCalifaData::Class_Version(), "", 432,
                  typeid(::R3BWRCalifaData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BWRCalifaData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BWRCalifaData) );
      instance.SetNew(&new_R3BWRCalifaData);
      instance.SetNewArray(&newArray_R3BWRCalifaData);
      instance.SetDelete(&delete_R3BWRCalifaData);
      instance.SetDeleteArray(&deleteArray_R3BWRCalifaData);
      instance.SetDestructor(&destruct_R3BWRCalifaData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BWRCalifaData*)
   {
      return GenerateInitInstanceLocal((::R3BWRCalifaData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BWRCalifaData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BWRAmsData(void *p = 0);
   static void *newArray_R3BWRAmsData(Long_t size, void *p);
   static void delete_R3BWRAmsData(void *p);
   static void deleteArray_R3BWRAmsData(void *p);
   static void destruct_R3BWRAmsData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BWRAmsData*)
   {
      ::R3BWRAmsData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BWRAmsData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BWRAmsData", ::R3BWRAmsData::Class_Version(), "", 483,
                  typeid(::R3BWRAmsData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BWRAmsData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BWRAmsData) );
      instance.SetNew(&new_R3BWRAmsData);
      instance.SetNewArray(&newArray_R3BWRAmsData);
      instance.SetDelete(&delete_R3BWRAmsData);
      instance.SetDeleteArray(&deleteArray_R3BWRAmsData);
      instance.SetDestructor(&destruct_R3BWRAmsData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BWRAmsData*)
   {
      return GenerateInitInstanceLocal((::R3BWRAmsData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BWRAmsData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BHit(void *p = 0);
   static void *newArray_R3BHit(Long_t size, void *p);
   static void delete_R3BHit(void *p);
   static void deleteArray_R3BHit(void *p);
   static void destruct_R3BHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BHit*)
   {
      ::R3BHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BHit", ::R3BHit::Class_Version(), "", 533,
                  typeid(::R3BHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BHit) );
      instance.SetNew(&new_R3BHit);
      instance.SetNewArray(&newArray_R3BHit);
      instance.SetDelete(&delete_R3BHit);
      instance.SetDeleteArray(&deleteArray_R3BHit);
      instance.SetDestructor(&destruct_R3BHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BHit*)
   {
      return GenerateInitInstanceLocal((::R3BHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrack(void *p = 0);
   static void *newArray_R3BTrack(Long_t size, void *p);
   static void delete_R3BTrack(void *p);
   static void deleteArray_R3BTrack(void *p);
   static void destruct_R3BTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrack*)
   {
      ::R3BTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrack", ::R3BTrack::Class_Version(), "", 588,
                  typeid(::R3BTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrack) );
      instance.SetNew(&new_R3BTrack);
      instance.SetNewArray(&newArray_R3BTrack);
      instance.SetDelete(&delete_R3BTrack);
      instance.SetDeleteArray(&deleteArray_R3BTrack);
      instance.SetDestructor(&destruct_R3BTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrack*)
   {
      return GenerateInitInstanceLocal((::R3BTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *R3BDouble_Dictionary();
   static void R3BDouble_TClassManip(TClass*);
   static void *new_R3BDouble(void *p = 0);
   static void *newArray_R3BDouble(Long_t size, void *p);
   static void delete_R3BDouble(void *p);
   static void deleteArray_R3BDouble(void *p);
   static void destruct_R3BDouble(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDouble*)
   {
      ::R3BDouble *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::R3BDouble));
      static ::ROOT::TGenericClassInfo 
         instance("R3BDouble", "", 646,
                  typeid(::R3BDouble), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &R3BDouble_Dictionary, isa_proxy, 4,
                  sizeof(::R3BDouble) );
      instance.SetNew(&new_R3BDouble);
      instance.SetNewArray(&newArray_R3BDouble);
      instance.SetDelete(&delete_R3BDouble);
      instance.SetDeleteArray(&deleteArray_R3BDouble);
      instance.SetDestructor(&destruct_R3BDouble);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDouble*)
   {
      return GenerateInitInstanceLocal((::R3BDouble*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDouble*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *R3BDouble_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::R3BDouble*)0x0)->GetClass();
      R3BDouble_TClassManip(theClass);
   return theClass;
   }

   static void R3BDouble_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallPoint(void *p = 0);
   static void *newArray_R3BXBallPoint(Long_t size, void *p);
   static void delete_R3BXBallPoint(void *p);
   static void deleteArray_R3BXBallPoint(void *p);
   static void destruct_R3BXBallPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallPoint*)
   {
      ::R3BXBallPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallPoint", ::R3BXBallPoint::Class_Version(), "", 702,
                  typeid(::R3BXBallPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BXBallPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallPoint) );
      instance.SetNew(&new_R3BXBallPoint);
      instance.SetNewArray(&newArray_R3BXBallPoint);
      instance.SetDelete(&delete_R3BXBallPoint);
      instance.SetDeleteArray(&deleteArray_R3BXBallPoint);
      instance.SetDestructor(&destruct_R3BXBallPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallPoint*)
   {
      return GenerateInitInstanceLocal((::R3BXBallPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallCrystalHit(void *p = 0);
   static void *newArray_R3BXBallCrystalHit(Long_t size, void *p);
   static void delete_R3BXBallCrystalHit(void *p);
   static void deleteArray_R3BXBallCrystalHit(void *p);
   static void destruct_R3BXBallCrystalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallCrystalHit*)
   {
      ::R3BXBallCrystalHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallCrystalHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallCrystalHit", ::R3BXBallCrystalHit::Class_Version(), "", 822,
                  typeid(::R3BXBallCrystalHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BXBallCrystalHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallCrystalHit) );
      instance.SetNew(&new_R3BXBallCrystalHit);
      instance.SetNewArray(&newArray_R3BXBallCrystalHit);
      instance.SetDelete(&delete_R3BXBallCrystalHit);
      instance.SetDeleteArray(&deleteArray_R3BXBallCrystalHit);
      instance.SetDestructor(&destruct_R3BXBallCrystalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallCrystalHit*)
   {
      return GenerateInitInstanceLocal((::R3BXBallCrystalHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BXBallCrystalHitSim(void *p = 0);
   static void *newArray_R3BXBallCrystalHitSim(Long_t size, void *p);
   static void delete_R3BXBallCrystalHitSim(void *p);
   static void deleteArray_R3BXBallCrystalHitSim(void *p);
   static void destruct_R3BXBallCrystalHitSim(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BXBallCrystalHitSim*)
   {
      ::R3BXBallCrystalHitSim *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BXBallCrystalHitSim >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BXBallCrystalHitSim", ::R3BXBallCrystalHitSim::Class_Version(), "", 894,
                  typeid(::R3BXBallCrystalHitSim), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BXBallCrystalHitSim::Dictionary, isa_proxy, 4,
                  sizeof(::R3BXBallCrystalHitSim) );
      instance.SetNew(&new_R3BXBallCrystalHitSim);
      instance.SetNewArray(&newArray_R3BXBallCrystalHitSim);
      instance.SetDelete(&delete_R3BXBallCrystalHitSim);
      instance.SetDeleteArray(&deleteArray_R3BXBallCrystalHitSim);
      instance.SetDestructor(&destruct_R3BXBallCrystalHitSim);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BXBallCrystalHitSim*)
   {
      return GenerateInitInstanceLocal((::R3BXBallCrystalHitSim*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaCrystalCalData(void *p = 0);
   static void *newArray_R3BCalifaCrystalCalData(Long_t size, void *p);
   static void delete_R3BCalifaCrystalCalData(void *p);
   static void deleteArray_R3BCalifaCrystalCalData(void *p);
   static void destruct_R3BCalifaCrystalCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaCrystalCalData*)
   {
      ::R3BCalifaCrystalCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaCrystalCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaCrystalCalData", ::R3BCalifaCrystalCalData::Class_Version(), "", 986,
                  typeid(::R3BCalifaCrystalCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaCrystalCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaCrystalCalData) );
      instance.SetNew(&new_R3BCalifaCrystalCalData);
      instance.SetNewArray(&newArray_R3BCalifaCrystalCalData);
      instance.SetDelete(&delete_R3BCalifaCrystalCalData);
      instance.SetDeleteArray(&deleteArray_R3BCalifaCrystalCalData);
      instance.SetDestructor(&destruct_R3BCalifaCrystalCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaCrystalCalData*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaCrystalCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaMappedData(void *p = 0);
   static void *newArray_R3BCalifaMappedData(Long_t size, void *p);
   static void delete_R3BCalifaMappedData(void *p);
   static void deleteArray_R3BCalifaMappedData(void *p);
   static void destruct_R3BCalifaMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaMappedData*)
   {
      ::R3BCalifaMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaMappedData", ::R3BCalifaMappedData::Class_Version(), "", 1068,
                  typeid(::R3BCalifaMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaMappedData) );
      instance.SetNew(&new_R3BCalifaMappedData);
      instance.SetNewArray(&newArray_R3BCalifaMappedData);
      instance.SetDelete(&delete_R3BCalifaMappedData);
      instance.SetDeleteArray(&deleteArray_R3BCalifaMappedData);
      instance.SetDestructor(&destruct_R3BCalifaMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaHitData(void *p = 0);
   static void *newArray_R3BCalifaHitData(Long_t size, void *p);
   static void delete_R3BCalifaHitData(void *p);
   static void deleteArray_R3BCalifaHitData(void *p);
   static void destruct_R3BCalifaHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaHitData*)
   {
      ::R3BCalifaHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaHitData", ::R3BCalifaHitData::Class_Version(), "", 1133,
                  typeid(::R3BCalifaHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaHitData) );
      instance.SetNew(&new_R3BCalifaHitData);
      instance.SetNewArray(&newArray_R3BCalifaHitData);
      instance.SetDelete(&delete_R3BCalifaHitData);
      instance.SetDeleteArray(&deleteArray_R3BCalifaHitData);
      instance.SetDestructor(&destruct_R3BCalifaHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaHitData*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BCalifaPoint(void *p = 0);
   static void *newArray_R3BCalifaPoint(Long_t size, void *p);
   static void delete_R3BCalifaPoint(void *p);
   static void deleteArray_R3BCalifaPoint(void *p);
   static void destruct_R3BCalifaPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BCalifaPoint*)
   {
      ::R3BCalifaPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BCalifaPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BCalifaPoint", ::R3BCalifaPoint::Class_Version(), "", 1238,
                  typeid(::R3BCalifaPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BCalifaPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BCalifaPoint) );
      instance.SetNew(&new_R3BCalifaPoint);
      instance.SetNewArray(&newArray_R3BCalifaPoint);
      instance.SetDelete(&delete_R3BCalifaPoint);
      instance.SetDeleteArray(&deleteArray_R3BCalifaPoint);
      instance.SetDestructor(&destruct_R3BCalifaPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BCalifaPoint*)
   {
      return GenerateInitInstanceLocal((::R3BCalifaPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BCalifaPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BHPGeDetPoint(void *p = 0);
   static void *newArray_R3BHPGeDetPoint(Long_t size, void *p);
   static void delete_R3BHPGeDetPoint(void *p);
   static void deleteArray_R3BHPGeDetPoint(void *p);
   static void destruct_R3BHPGeDetPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BHPGeDetPoint*)
   {
      ::R3BHPGeDetPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BHPGeDetPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BHPGeDetPoint", ::R3BHPGeDetPoint::Class_Version(), "", 1319,
                  typeid(::R3BHPGeDetPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BHPGeDetPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BHPGeDetPoint) );
      instance.SetNew(&new_R3BHPGeDetPoint);
      instance.SetNewArray(&newArray_R3BHPGeDetPoint);
      instance.SetDelete(&delete_R3BHPGeDetPoint);
      instance.SetDeleteArray(&deleteArray_R3BHPGeDetPoint);
      instance.SetDestructor(&destruct_R3BHPGeDetPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BHPGeDetPoint*)
   {
      return GenerateInitInstanceLocal((::R3BHPGeDetPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BHPGeDetPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchPoint(void *p = 0);
   static void *newArray_R3BDchPoint(Long_t size, void *p);
   static void delete_R3BDchPoint(void *p);
   static void deleteArray_R3BDchPoint(void *p);
   static void destruct_R3BDchPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchPoint*)
   {
      ::R3BDchPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchPoint", ::R3BDchPoint::Class_Version(), "", 1560,
                  typeid(::R3BDchPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BDchPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchPoint) );
      instance.SetNew(&new_R3BDchPoint);
      instance.SetNewArray(&newArray_R3BDchPoint);
      instance.SetDelete(&delete_R3BDchPoint);
      instance.SetDeleteArray(&deleteArray_R3BDchPoint);
      instance.SetDestructor(&destruct_R3BDchPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchPoint*)
   {
      return GenerateInitInstanceLocal((::R3BDchPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchFullPoint(void *p = 0);
   static void *newArray_R3BDchFullPoint(Long_t size, void *p);
   static void delete_R3BDchFullPoint(void *p);
   static void deleteArray_R3BDchFullPoint(void *p);
   static void destruct_R3BDchFullPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchFullPoint*)
   {
      ::R3BDchFullPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchFullPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchFullPoint", ::R3BDchFullPoint::Class_Version(), "", 1707,
                  typeid(::R3BDchFullPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BDchFullPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchFullPoint) );
      instance.SetNew(&new_R3BDchFullPoint);
      instance.SetNewArray(&newArray_R3BDchFullPoint);
      instance.SetDelete(&delete_R3BDchFullPoint);
      instance.SetDeleteArray(&deleteArray_R3BDchFullPoint);
      instance.SetDestructor(&destruct_R3BDchFullPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchFullPoint*)
   {
      return GenerateInitInstanceLocal((::R3BDchFullPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiPoint(void *p = 0);
   static void *newArray_R3BGfiPoint(Long_t size, void *p);
   static void delete_R3BGfiPoint(void *p);
   static void deleteArray_R3BGfiPoint(void *p);
   static void destruct_R3BGfiPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiPoint*)
   {
      ::R3BGfiPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiPoint", ::R3BGfiPoint::Class_Version(), "", 1801,
                  typeid(::R3BGfiPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGfiPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiPoint) );
      instance.SetNew(&new_R3BGfiPoint);
      instance.SetNewArray(&newArray_R3BGfiPoint);
      instance.SetDelete(&delete_R3BGfiPoint);
      instance.SetDeleteArray(&deleteArray_R3BGfiPoint);
      instance.SetDestructor(&destruct_R3BGfiPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiPoint*)
   {
      return GenerateInitInstanceLocal((::R3BGfiPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofPoint(void *p = 0);
   static void *newArray_R3BmTofPoint(Long_t size, void *p);
   static void delete_R3BmTofPoint(void *p);
   static void deleteArray_R3BmTofPoint(void *p);
   static void destruct_R3BmTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofPoint*)
   {
      ::R3BmTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofPoint", ::R3BmTofPoint::Class_Version(), "", 1919,
                  typeid(::R3BmTofPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BmTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofPoint) );
      instance.SetNew(&new_R3BmTofPoint);
      instance.SetNewArray(&newArray_R3BmTofPoint);
      instance.SetDelete(&delete_R3BmTofPoint);
      instance.SetDeleteArray(&deleteArray_R3BmTofPoint);
      instance.SetDestructor(&destruct_R3BmTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofPoint*)
   {
      return GenerateInitInstanceLocal((::R3BmTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BmTofDigi(void *p = 0);
   static void *newArray_R3BmTofDigi(Long_t size, void *p);
   static void delete_R3BmTofDigi(void *p);
   static void deleteArray_R3BmTofDigi(void *p);
   static void destruct_R3BmTofDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BmTofDigi*)
   {
      ::R3BmTofDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BmTofDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BmTofDigi", ::R3BmTofDigi::Class_Version(), "", 2031,
                  typeid(::R3BmTofDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BmTofDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BmTofDigi) );
      instance.SetNew(&new_R3BmTofDigi);
      instance.SetNewArray(&newArray_R3BmTofDigi);
      instance.SetDelete(&delete_R3BmTofDigi);
      instance.SetDeleteArray(&deleteArray_R3BmTofDigi);
      instance.SetDestructor(&destruct_R3BmTofDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BmTofDigi*)
   {
      return GenerateInitInstanceLocal((::R3BmTofDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofPoint(void *p = 0);
   static void *newArray_R3BTofPoint(Long_t size, void *p);
   static void delete_R3BTofPoint(void *p);
   static void deleteArray_R3BTofPoint(void *p);
   static void destruct_R3BTofPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofPoint*)
   {
      ::R3BTofPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofPoint", ::R3BTofPoint::Class_Version(), "", 2129,
                  typeid(::R3BTofPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofPoint) );
      instance.SetNew(&new_R3BTofPoint);
      instance.SetNewArray(&newArray_R3BTofPoint);
      instance.SetDelete(&delete_R3BTofPoint);
      instance.SetDeleteArray(&deleteArray_R3BTofPoint);
      instance.SetDestructor(&destruct_R3BTofPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofPoint*)
   {
      return GenerateInitInstanceLocal((::R3BTofPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BVetoPoint(void *p = 0);
   static void *newArray_R3BVetoPoint(Long_t size, void *p);
   static void delete_R3BVetoPoint(void *p);
   static void deleteArray_R3BVetoPoint(void *p);
   static void destruct_R3BVetoPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BVetoPoint*)
   {
      ::R3BVetoPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BVetoPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BVetoPoint", ::R3BVetoPoint::Class_Version(), "", 2243,
                  typeid(::R3BVetoPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BVetoPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BVetoPoint) );
      instance.SetNew(&new_R3BVetoPoint);
      instance.SetNewArray(&newArray_R3BVetoPoint);
      instance.SetDelete(&delete_R3BVetoPoint);
      instance.SetDeleteArray(&deleteArray_R3BVetoPoint);
      instance.SetDestructor(&destruct_R3BVetoPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BVetoPoint*)
   {
      return GenerateInitInstanceLocal((::R3BVetoPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ELILuMonPoint(void *p = 0);
   static void *newArray_ELILuMonPoint(Long_t size, void *p);
   static void delete_ELILuMonPoint(void *p);
   static void deleteArray_ELILuMonPoint(void *p);
   static void destruct_ELILuMonPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELILuMonPoint*)
   {
      ::ELILuMonPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELILuMonPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("ELILuMonPoint", ::ELILuMonPoint::Class_Version(), "", 2366,
                  typeid(::ELILuMonPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ELILuMonPoint::Dictionary, isa_proxy, 4,
                  sizeof(::ELILuMonPoint) );
      instance.SetNew(&new_ELILuMonPoint);
      instance.SetNewArray(&newArray_ELILuMonPoint);
      instance.SetDelete(&delete_ELILuMonPoint);
      instance.SetDeleteArray(&deleteArray_ELILuMonPoint);
      instance.SetDestructor(&destruct_ELILuMonPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELILuMonPoint*)
   {
      return GenerateInitInstanceLocal((::ELILuMonPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraPoint(void *p = 0);
   static void *newArray_R3BTraPoint(Long_t size, void *p);
   static void delete_R3BTraPoint(void *p);
   static void deleteArray_R3BTraPoint(void *p);
   static void destruct_R3BTraPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraPoint*)
   {
      ::R3BTraPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraPoint", ::R3BTraPoint::Class_Version(), "", 2484,
                  typeid(::R3BTraPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraPoint) );
      instance.SetNew(&new_R3BTraPoint);
      instance.SetNewArray(&newArray_R3BTraPoint);
      instance.SetDelete(&delete_R3BTraPoint);
      instance.SetDeleteArray(&deleteArray_R3BTraPoint);
      instance.SetDestructor(&destruct_R3BTraPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraPoint*)
   {
      return GenerateInitInstanceLocal((::R3BTraPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraHit(void *p = 0);
   static void *newArray_R3BTraHit(Long_t size, void *p);
   static void delete_R3BTraHit(void *p);
   static void deleteArray_R3BTraHit(void *p);
   static void destruct_R3BTraHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraHit*)
   {
      ::R3BTraHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraHit", ::R3BTraHit::Class_Version(), "", 2615,
                  typeid(::R3BTraHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraHit) );
      instance.SetNew(&new_R3BTraHit);
      instance.SetNewArray(&newArray_R3BTraHit);
      instance.SetDelete(&delete_R3BTraHit);
      instance.SetDeleteArray(&deleteArray_R3BTraHit);
      instance.SetDestructor(&destruct_R3BTraHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraHit*)
   {
      return GenerateInitInstanceLocal((::R3BTraHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSitrackerHit(void *p = 0);
   static void *newArray_R3BSitrackerHit(Long_t size, void *p);
   static void delete_R3BSitrackerHit(void *p);
   static void deleteArray_R3BSitrackerHit(void *p);
   static void destruct_R3BSitrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSitrackerHit*)
   {
      ::R3BSitrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSitrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSitrackerHit", ::R3BSitrackerHit::Class_Version(), "", 2676,
                  typeid(::R3BSitrackerHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSitrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSitrackerHit) );
      instance.SetNew(&new_R3BSitrackerHit);
      instance.SetNewArray(&newArray_R3BSitrackerHit);
      instance.SetDelete(&delete_R3BSitrackerHit);
      instance.SetDeleteArray(&deleteArray_R3BSitrackerHit);
      instance.SetDestructor(&destruct_R3BSitrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSitrackerHit*)
   {
      return GenerateInitInstanceLocal((::R3BSitrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTrackerHit(void *p = 0);
   static void *newArray_R3BTrackerHit(Long_t size, void *p);
   static void delete_R3BTrackerHit(void *p);
   static void deleteArray_R3BTrackerHit(void *p);
   static void destruct_R3BTrackerHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTrackerHit*)
   {
      ::R3BTrackerHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTrackerHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTrackerHit", ::R3BTrackerHit::Class_Version(), "", 2776,
                  typeid(::R3BTrackerHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTrackerHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTrackerHit) );
      instance.SetNew(&new_R3BTrackerHit);
      instance.SetNewArray(&newArray_R3BTrackerHit);
      instance.SetDelete(&delete_R3BTrackerHit);
      instance.SetDeleteArray(&deleteArray_R3BTrackerHit);
      instance.SetDestructor(&destruct_R3BTrackerHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTrackerHit*)
   {
      return GenerateInitInstanceLocal((::R3BTrackerHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackPoint(void *p = 0);
   static void *newArray_R3BStartrackPoint(Long_t size, void *p);
   static void delete_R3BStartrackPoint(void *p);
   static void deleteArray_R3BStartrackPoint(void *p);
   static void destruct_R3BStartrackPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackPoint*)
   {
      ::R3BStartrackPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackPoint", ::R3BStartrackPoint::Class_Version(), "", 2877,
                  typeid(::R3BStartrackPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackPoint) );
      instance.SetNew(&new_R3BStartrackPoint);
      instance.SetNewArray(&newArray_R3BStartrackPoint);
      instance.SetDelete(&delete_R3BStartrackPoint);
      instance.SetDeleteArray(&deleteArray_R3BStartrackPoint);
      instance.SetDestructor(&destruct_R3BStartrackPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackPoint*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackHit(void *p = 0);
   static void *newArray_R3BStartrackHit(Long_t size, void *p);
   static void delete_R3BStartrackHit(void *p);
   static void deleteArray_R3BStartrackHit(void *p);
   static void destruct_R3BStartrackHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackHit*)
   {
      ::R3BStartrackHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackHit", ::R3BStartrackHit::Class_Version(), "", 2995,
                  typeid(::R3BStartrackHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackHit) );
      instance.SetNew(&new_R3BStartrackHit);
      instance.SetNewArray(&newArray_R3BStartrackHit);
      instance.SetDelete(&delete_R3BStartrackHit);
      instance.SetDeleteArray(&deleteArray_R3BStartrackHit);
      instance.SetDestructor(&destruct_R3BStartrackHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackHit*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackerDigitHit(void *p = 0);
   static void *newArray_R3BStartrackerDigitHit(Long_t size, void *p);
   static void delete_R3BStartrackerDigitHit(void *p);
   static void deleteArray_R3BStartrackerDigitHit(void *p);
   static void destruct_R3BStartrackerDigitHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackerDigitHit*)
   {
      ::R3BStartrackerDigitHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackerDigitHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackerDigitHit", ::R3BStartrackerDigitHit::Class_Version(), "", 3054,
                  typeid(::R3BStartrackerDigitHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackerDigitHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackerDigitHit) );
      instance.SetNew(&new_R3BStartrackerDigitHit);
      instance.SetNewArray(&newArray_R3BStartrackerDigitHit);
      instance.SetDelete(&delete_R3BStartrackerDigitHit);
      instance.SetDeleteArray(&deleteArray_R3BStartrackerDigitHit);
      instance.SetDestructor(&destruct_R3BStartrackerDigitHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackerDigitHit*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackerDigitHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackerDigitHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackMappedData(void *p = 0);
   static void *newArray_R3BStartrackMappedData(Long_t size, void *p);
   static void delete_R3BStartrackMappedData(void *p);
   static void deleteArray_R3BStartrackMappedData(void *p);
   static void destruct_R3BStartrackMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackMappedData*)
   {
      ::R3BStartrackMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackMappedData", ::R3BStartrackMappedData::Class_Version(), "", 3140,
                  typeid(::R3BStartrackMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackMappedData) );
      instance.SetNew(&new_R3BStartrackMappedData);
      instance.SetNewArray(&newArray_R3BStartrackMappedData);
      instance.SetDelete(&delete_R3BStartrackMappedData);
      instance.SetDeleteArray(&deleteArray_R3BStartrackMappedData);
      instance.SetDestructor(&destruct_R3BStartrackMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BStartrackCalData(void *p = 0);
   static void *newArray_R3BStartrackCalData(Long_t size, void *p);
   static void delete_R3BStartrackCalData(void *p);
   static void deleteArray_R3BStartrackCalData(void *p);
   static void destruct_R3BStartrackCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStartrackCalData*)
   {
      ::R3BStartrackCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStartrackCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStartrackCalData", ::R3BStartrackCalData::Class_Version(), "", 3275,
                  typeid(::R3BStartrackCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStartrackCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStartrackCalData) );
      instance.SetNew(&new_R3BStartrackCalData);
      instance.SetNewArray(&newArray_R3BStartrackCalData);
      instance.SetDelete(&delete_R3BStartrackCalData);
      instance.SetDeleteArray(&deleteArray_R3BStartrackCalData);
      instance.SetDestructor(&destruct_R3BStartrackCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStartrackCalData*)
   {
      return GenerateInitInstanceLocal((::R3BStartrackCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStartrackCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandPoint(void *p = 0);
   static void *newArray_R3BLandPoint(Long_t size, void *p);
   static void delete_R3BLandPoint(void *p);
   static void deleteArray_R3BLandPoint(void *p);
   static void destruct_R3BLandPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandPoint*)
   {
      ::R3BLandPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandPoint", ::R3BLandPoint::Class_Version(), "", 3374,
                  typeid(::R3BLandPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandPoint) );
      instance.SetNew(&new_R3BLandPoint);
      instance.SetNewArray(&newArray_R3BLandPoint);
      instance.SetDelete(&delete_R3BLandPoint);
      instance.SetDeleteArray(&deleteArray_R3BLandPoint);
      instance.SetDestructor(&destruct_R3BLandPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandPoint*)
   {
      return GenerateInitInstanceLocal((::R3BLandPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandDigi(void *p = 0);
   static void *newArray_R3BLandDigi(Long_t size, void *p);
   static void delete_R3BLandDigi(void *p);
   static void deleteArray_R3BLandDigi(void *p);
   static void destruct_R3BLandDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandDigi*)
   {
      ::R3BLandDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandDigi", ::R3BLandDigi::Class_Version(), "", 3501,
                  typeid(::R3BLandDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandDigi) );
      instance.SetNew(&new_R3BLandDigi);
      instance.SetNewArray(&newArray_R3BLandDigi);
      instance.SetDelete(&delete_R3BLandDigi);
      instance.SetDeleteArray(&deleteArray_R3BLandDigi);
      instance.SetDestructor(&destruct_R3BLandDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandDigi*)
   {
      return GenerateInitInstanceLocal((::R3BLandDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandFirstHits(void *p = 0);
   static void *newArray_R3BLandFirstHits(Long_t size, void *p);
   static void delete_R3BLandFirstHits(void *p);
   static void deleteArray_R3BLandFirstHits(void *p);
   static void destruct_R3BLandFirstHits(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandFirstHits*)
   {
      ::R3BLandFirstHits *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandFirstHits >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandFirstHits", ::R3BLandFirstHits::Class_Version(), "", 3605,
                  typeid(::R3BLandFirstHits), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandFirstHits::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandFirstHits) );
      instance.SetNew(&new_R3BLandFirstHits);
      instance.SetNewArray(&newArray_R3BLandFirstHits);
      instance.SetDelete(&delete_R3BLandFirstHits);
      instance.SetDeleteArray(&deleteArray_R3BLandFirstHits);
      instance.SetDestructor(&destruct_R3BLandFirstHits);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandFirstHits*)
   {
      return GenerateInitInstanceLocal((::R3BLandFirstHits*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLandHit(void *p = 0);
   static void *newArray_R3BLandHit(Long_t size, void *p);
   static void delete_R3BLandHit(void *p);
   static void deleteArray_R3BLandHit(void *p);
   static void destruct_R3BLandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLandHit*)
   {
      ::R3BLandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLandHit", ::R3BLandHit::Class_Version(), "", 3779,
                  typeid(::R3BLandHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLandHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLandHit) );
      instance.SetNew(&new_R3BLandHit);
      instance.SetNewArray(&newArray_R3BLandHit);
      instance.SetDelete(&delete_R3BLandHit);
      instance.SetDeleteArray(&deleteArray_R3BLandHit);
      instance.SetDestructor(&destruct_R3BLandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLandHit*)
   {
      return GenerateInitInstanceLocal((::R3BLandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLandHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPaddleCrystalHit(void *p = 0);
   static void *newArray_R3BPaddleCrystalHit(Long_t size, void *p);
   static void delete_R3BPaddleCrystalHit(void *p);
   static void deleteArray_R3BPaddleCrystalHit(void *p);
   static void destruct_R3BPaddleCrystalHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPaddleCrystalHit*)
   {
      ::R3BPaddleCrystalHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPaddleCrystalHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPaddleCrystalHit", ::R3BPaddleCrystalHit::Class_Version(), "", 3846,
                  typeid(::R3BPaddleCrystalHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPaddleCrystalHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPaddleCrystalHit) );
      instance.SetNew(&new_R3BPaddleCrystalHit);
      instance.SetNewArray(&newArray_R3BPaddleCrystalHit);
      instance.SetDelete(&delete_R3BPaddleCrystalHit);
      instance.SetDeleteArray(&deleteArray_R3BPaddleCrystalHit);
      instance.SetDestructor(&destruct_R3BPaddleCrystalHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPaddleCrystalHit*)
   {
      return GenerateInitInstanceLocal((::R3BPaddleCrystalHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeutronTrack(void *p = 0);
   static void *newArray_R3BNeutronTrack(Long_t size, void *p);
   static void delete_R3BNeutronTrack(void *p);
   static void deleteArray_R3BNeutronTrack(void *p);
   static void destruct_R3BNeutronTrack(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeutronTrack*)
   {
      ::R3BNeutronTrack *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeutronTrack >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeutronTrack", ::R3BNeutronTrack::Class_Version(), "", 3942,
                  typeid(::R3BNeutronTrack), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeutronTrack::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeutronTrack) );
      instance.SetNew(&new_R3BNeutronTrack);
      instance.SetNewArray(&newArray_R3BNeutronTrack);
      instance.SetDelete(&delete_R3BNeutronTrack);
      instance.SetDeleteArray(&deleteArray_R3BNeutronTrack);
      instance.SetDestructor(&destruct_R3BNeutronTrack);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeutronTrack*)
   {
      return GenerateInitInstanceLocal((::R3BNeutronTrack*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDchDigi(void *p = 0);
   static void *newArray_R3BDchDigi(Long_t size, void *p);
   static void delete_R3BDchDigi(void *p);
   static void deleteArray_R3BDchDigi(void *p);
   static void destruct_R3BDchDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDchDigi*)
   {
      ::R3BDchDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDchDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDchDigi", ::R3BDchDigi::Class_Version(), "", 4041,
                  typeid(::R3BDchDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BDchDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDchDigi) );
      instance.SetNew(&new_R3BDchDigi);
      instance.SetNewArray(&newArray_R3BDchDigi);
      instance.SetDelete(&delete_R3BDchDigi);
      instance.SetDeleteArray(&deleteArray_R3BDchDigi);
      instance.SetDestructor(&destruct_R3BDchDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDchDigi*)
   {
      return GenerateInitInstanceLocal((::R3BDchDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BDch2pDigi(void *p = 0);
   static void *newArray_R3BDch2pDigi(Long_t size, void *p);
   static void delete_R3BDch2pDigi(void *p);
   static void deleteArray_R3BDch2pDigi(void *p);
   static void destruct_R3BDch2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BDch2pDigi*)
   {
      ::R3BDch2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BDch2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BDch2pDigi", ::R3BDch2pDigi::Class_Version(), "", 4119,
                  typeid(::R3BDch2pDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BDch2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BDch2pDigi) );
      instance.SetNew(&new_R3BDch2pDigi);
      instance.SetNewArray(&newArray_R3BDch2pDigi);
      instance.SetDelete(&delete_R3BDch2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BDch2pDigi);
      instance.SetDestructor(&destruct_R3BDch2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BDch2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BDch2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofDigi(void *p = 0);
   static void *newArray_R3BTofDigi(Long_t size, void *p);
   static void delete_R3BTofDigi(void *p);
   static void deleteArray_R3BTofDigi(void *p);
   static void destruct_R3BTofDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofDigi*)
   {
      ::R3BTofDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofDigi", ::R3BTofDigi::Class_Version(), "", 4222,
                  typeid(::R3BTofDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofDigi) );
      instance.SetNew(&new_R3BTofDigi);
      instance.SetNewArray(&newArray_R3BTofDigi);
      instance.SetDelete(&delete_R3BTofDigi);
      instance.SetDeleteArray(&deleteArray_R3BTofDigi);
      instance.SetDestructor(&destruct_R3BTofDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTofDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTof2pDigi(void *p = 0);
   static void *newArray_R3BTof2pDigi(Long_t size, void *p);
   static void delete_R3BTof2pDigi(void *p);
   static void deleteArray_R3BTof2pDigi(void *p);
   static void destruct_R3BTof2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTof2pDigi*)
   {
      ::R3BTof2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTof2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTof2pDigi", ::R3BTof2pDigi::Class_Version(), "", 4318,
                  typeid(::R3BTof2pDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTof2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTof2pDigi) );
      instance.SetNew(&new_R3BTof2pDigi);
      instance.SetNewArray(&newArray_R3BTof2pDigi);
      instance.SetDelete(&delete_R3BTof2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTof2pDigi);
      instance.SetDestructor(&destruct_R3BTof2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTof2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTof2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BGfiDigi(void *p = 0);
   static void *newArray_R3BGfiDigi(Long_t size, void *p);
   static void delete_R3BGfiDigi(void *p);
   static void deleteArray_R3BGfiDigi(void *p);
   static void destruct_R3BGfiDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BGfiDigi*)
   {
      ::R3BGfiDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BGfiDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BGfiDigi", ::R3BGfiDigi::Class_Version(), "", 4456,
                  typeid(::R3BGfiDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BGfiDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BGfiDigi) );
      instance.SetNew(&new_R3BGfiDigi);
      instance.SetNewArray(&newArray_R3BGfiDigi);
      instance.SetDelete(&delete_R3BGfiDigi);
      instance.SetDeleteArray(&deleteArray_R3BGfiDigi);
      instance.SetDestructor(&destruct_R3BGfiDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BGfiDigi*)
   {
      return GenerateInitInstanceLocal((::R3BGfiDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraDigi(void *p = 0);
   static void *newArray_R3BTraDigi(Long_t size, void *p);
   static void delete_R3BTraDigi(void *p);
   static void deleteArray_R3BTraDigi(void *p);
   static void destruct_R3BTraDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraDigi*)
   {
      ::R3BTraDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraDigi", ::R3BTraDigi::Class_Version(), "", 4523,
                  typeid(::R3BTraDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraDigi) );
      instance.SetNew(&new_R3BTraDigi);
      instance.SetNewArray(&newArray_R3BTraDigi);
      instance.SetDelete(&delete_R3BTraDigi);
      instance.SetDeleteArray(&deleteArray_R3BTraDigi);
      instance.SetDestructor(&destruct_R3BTraDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTraDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTra2pDigi(void *p = 0);
   static void *newArray_R3BTra2pDigi(Long_t size, void *p);
   static void delete_R3BTra2pDigi(void *p);
   static void deleteArray_R3BTra2pDigi(void *p);
   static void destruct_R3BTra2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTra2pDigi*)
   {
      ::R3BTra2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTra2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTra2pDigi", ::R3BTra2pDigi::Class_Version(), "", 4780,
                  typeid(::R3BTra2pDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTra2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTra2pDigi) );
      instance.SetNew(&new_R3BTra2pDigi);
      instance.SetNewArray(&newArray_R3BTra2pDigi);
      instance.SetDelete(&delete_R3BTra2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTra2pDigi);
      instance.SetDestructor(&destruct_R3BTra2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTra2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTra2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTraFraDigi(void *p = 0);
   static void *newArray_R3BTraFraDigi(Long_t size, void *p);
   static void delete_R3BTraFraDigi(void *p);
   static void deleteArray_R3BTraFraDigi(void *p);
   static void destruct_R3BTraFraDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTraFraDigi*)
   {
      ::R3BTraFraDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTraFraDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTraFraDigi", ::R3BTraFraDigi::Class_Version(), "", 5037,
                  typeid(::R3BTraFraDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTraFraDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTraFraDigi) );
      instance.SetNew(&new_R3BTraFraDigi);
      instance.SetNewArray(&newArray_R3BTraFraDigi);
      instance.SetDelete(&delete_R3BTraFraDigi);
      instance.SetDeleteArray(&deleteArray_R3BTraFraDigi);
      instance.SetDestructor(&destruct_R3BTraFraDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTraFraDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTraFraDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTargetDigi(void *p = 0);
   static void *newArray_R3BTargetDigi(Long_t size, void *p);
   static void delete_R3BTargetDigi(void *p);
   static void deleteArray_R3BTargetDigi(void *p);
   static void destruct_R3BTargetDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTargetDigi*)
   {
      ::R3BTargetDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTargetDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTargetDigi", ::R3BTargetDigi::Class_Version(), "", 5190,
                  typeid(::R3BTargetDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTargetDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTargetDigi) );
      instance.SetNew(&new_R3BTargetDigi);
      instance.SetNewArray(&newArray_R3BTargetDigi);
      instance.SetDelete(&delete_R3BTargetDigi);
      instance.SetDeleteArray(&deleteArray_R3BTargetDigi);
      instance.SetDestructor(&destruct_R3BTargetDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTargetDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTargetDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTarget2pDigi(void *p = 0);
   static void *newArray_R3BTarget2pDigi(Long_t size, void *p);
   static void delete_R3BTarget2pDigi(void *p);
   static void deleteArray_R3BTarget2pDigi(void *p);
   static void destruct_R3BTarget2pDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTarget2pDigi*)
   {
      ::R3BTarget2pDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTarget2pDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTarget2pDigi", ::R3BTarget2pDigi::Class_Version(), "", 5326,
                  typeid(::R3BTarget2pDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTarget2pDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTarget2pDigi) );
      instance.SetNew(&new_R3BTarget2pDigi);
      instance.SetNewArray(&newArray_R3BTarget2pDigi);
      instance.SetDelete(&delete_R3BTarget2pDigi);
      instance.SetDeleteArray(&deleteArray_R3BTarget2pDigi);
      instance.SetDestructor(&destruct_R3BTarget2pDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTarget2pDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTarget2pDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiPoint(void *p = 0);
   static void *newArray_R3BMfiPoint(Long_t size, void *p);
   static void delete_R3BMfiPoint(void *p);
   static void deleteArray_R3BMfiPoint(void *p);
   static void destruct_R3BMfiPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiPoint*)
   {
      ::R3BMfiPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiPoint", ::R3BMfiPoint::Class_Version(), "", 5499,
                  typeid(::R3BMfiPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMfiPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiPoint) );
      instance.SetNew(&new_R3BMfiPoint);
      instance.SetNewArray(&newArray_R3BMfiPoint);
      instance.SetDelete(&delete_R3BMfiPoint);
      instance.SetDeleteArray(&deleteArray_R3BMfiPoint);
      instance.SetDestructor(&destruct_R3BMfiPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiPoint*)
   {
      return GenerateInitInstanceLocal((::R3BMfiPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMfiDigi(void *p = 0);
   static void *newArray_R3BMfiDigi(Long_t size, void *p);
   static void delete_R3BMfiDigi(void *p);
   static void deleteArray_R3BMfiDigi(void *p);
   static void destruct_R3BMfiDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMfiDigi*)
   {
      ::R3BMfiDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMfiDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMfiDigi", ::R3BMfiDigi::Class_Version(), "", 5617,
                  typeid(::R3BMfiDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMfiDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMfiDigi) );
      instance.SetNew(&new_R3BMfiDigi);
      instance.SetNewArray(&newArray_R3BMfiDigi);
      instance.SetDelete(&delete_R3BMfiDigi);
      instance.SetDeleteArray(&deleteArray_R3BMfiDigi);
      instance.SetDestructor(&destruct_R3BMfiDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMfiDigi*)
   {
      return GenerateInitInstanceLocal((::R3BMfiDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspPoint(void *p = 0);
   static void *newArray_R3BPspPoint(Long_t size, void *p);
   static void delete_R3BPspPoint(void *p);
   static void deleteArray_R3BPspPoint(void *p);
   static void destruct_R3BPspPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspPoint*)
   {
      ::R3BPspPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspPoint", ::R3BPspPoint::Class_Version(), "", 5694,
                  typeid(::R3BPspPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspPoint) );
      instance.SetNew(&new_R3BPspPoint);
      instance.SetNewArray(&newArray_R3BPspPoint);
      instance.SetDelete(&delete_R3BPspPoint);
      instance.SetDeleteArray(&deleteArray_R3BPspPoint);
      instance.SetDestructor(&destruct_R3BPspPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspPoint*)
   {
      return GenerateInitInstanceLocal((::R3BPspPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspDigi(void *p = 0);
   static void *newArray_R3BPspDigi(Long_t size, void *p);
   static void delete_R3BPspDigi(void *p);
   static void deleteArray_R3BPspDigi(void *p);
   static void destruct_R3BPspDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspDigi*)
   {
      ::R3BPspDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspDigi", ::R3BPspDigi::Class_Version(), "", 5810,
                  typeid(::R3BPspDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspDigi) );
      instance.SetNew(&new_R3BPspDigi);
      instance.SetNewArray(&newArray_R3BPspDigi);
      instance.SetDelete(&delete_R3BPspDigi);
      instance.SetDeleteArray(&deleteArray_R3BPspDigi);
      instance.SetDestructor(&destruct_R3BPspDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspDigi*)
   {
      return GenerateInitInstanceLocal((::R3BPspDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandTacquilaMappedData(void *p = 0);
   static void *newArray_R3BNeulandTacquilaMappedData(Long_t size, void *p);
   static void delete_R3BNeulandTacquilaMappedData(void *p);
   static void deleteArray_R3BNeulandTacquilaMappedData(void *p);
   static void destruct_R3BNeulandTacquilaMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandTacquilaMappedData*)
   {
      ::R3BNeulandTacquilaMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandTacquilaMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandTacquilaMappedData", ::R3BNeulandTacquilaMappedData::Class_Version(), "", 5857,
                  typeid(::R3BNeulandTacquilaMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandTacquilaMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandTacquilaMappedData) );
      instance.SetNew(&new_R3BNeulandTacquilaMappedData);
      instance.SetNewArray(&newArray_R3BNeulandTacquilaMappedData);
      instance.SetDelete(&delete_R3BNeulandTacquilaMappedData);
      instance.SetDeleteArray(&deleteArray_R3BNeulandTacquilaMappedData);
      instance.SetDestructor(&destruct_R3BNeulandTacquilaMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandTacquilaMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandTacquilaMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandCalData(void *p = 0);
   static void *newArray_R3BNeulandCalData(Long_t size, void *p);
   static void delete_R3BNeulandCalData(void *p);
   static void deleteArray_R3BNeulandCalData(void *p);
   static void destruct_R3BNeulandCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandCalData*)
   {
      ::R3BNeulandCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandCalData", ::R3BNeulandCalData::Class_Version(), "", 5914,
                  typeid(::R3BNeulandCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandCalData) );
      instance.SetNew(&new_R3BNeulandCalData);
      instance.SetNewArray(&newArray_R3BNeulandCalData);
      instance.SetDelete(&delete_R3BNeulandCalData);
      instance.SetDeleteArray(&deleteArray_R3BNeulandCalData);
      instance.SetDestructor(&destruct_R3BNeulandCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandCalData*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandPoint(void *p = 0);
   static void *newArray_R3BNeulandPoint(Long_t size, void *p);
   static void delete_R3BNeulandPoint(void *p);
   static void deleteArray_R3BNeulandPoint(void *p);
   static void destruct_R3BNeulandPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandPoint*)
   {
      ::R3BNeulandPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandPoint", ::R3BNeulandPoint::Class_Version(), "", 5961,
                  typeid(::R3BNeulandPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandPoint) );
      instance.SetNew(&new_R3BNeulandPoint);
      instance.SetNewArray(&newArray_R3BNeulandPoint);
      instance.SetDelete(&delete_R3BNeulandPoint);
      instance.SetDeleteArray(&deleteArray_R3BNeulandPoint);
      instance.SetDestructor(&destruct_R3BNeulandPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandPoint*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandHit(void *p = 0);
   static void *newArray_R3BNeulandHit(Long_t size, void *p);
   static void delete_R3BNeulandHit(void *p);
   static void deleteArray_R3BNeulandHit(void *p);
   static void destruct_R3BNeulandHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandHit*)
   {
      ::R3BNeulandHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandHit", ::R3BNeulandHit::Class_Version(), "", 6029,
                  typeid(::R3BNeulandHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandHit) );
      instance.SetNew(&new_R3BNeulandHit);
      instance.SetNewArray(&newArray_R3BNeulandHit);
      instance.SetDelete(&delete_R3BNeulandHit);
      instance.SetDeleteArray(&deleteArray_R3BNeulandHit);
      instance.SetDestructor(&destruct_R3BNeulandHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandHit*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandMultiplicity(void *p = 0);
   static void *newArray_R3BNeulandMultiplicity(Long_t size, void *p);
   static void delete_R3BNeulandMultiplicity(void *p);
   static void deleteArray_R3BNeulandMultiplicity(void *p);
   static void destruct_R3BNeulandMultiplicity(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandMultiplicity*)
   {
      ::R3BNeulandMultiplicity *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandMultiplicity >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandMultiplicity", ::R3BNeulandMultiplicity::Class_Version(), "", 6091,
                  typeid(::R3BNeulandMultiplicity), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandMultiplicity::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandMultiplicity) );
      instance.SetNew(&new_R3BNeulandMultiplicity);
      instance.SetNewArray(&newArray_R3BNeulandMultiplicity);
      instance.SetDelete(&delete_R3BNeulandMultiplicity);
      instance.SetDeleteArray(&deleteArray_R3BNeulandMultiplicity);
      instance.SetDestructor(&destruct_R3BNeulandMultiplicity);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandMultiplicity*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandMultiplicity*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandMultiplicity*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandCluster(void *p = 0);
   static void *newArray_R3BNeulandCluster(Long_t size, void *p);
   static void delete_R3BNeulandCluster(void *p);
   static void deleteArray_R3BNeulandCluster(void *p);
   static void destruct_R3BNeulandCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandCluster*)
   {
      ::R3BNeulandCluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandCluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandCluster", ::R3BNeulandCluster::Class_Version(), "", 6134,
                  typeid(::R3BNeulandCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandCluster::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandCluster) );
      instance.SetNew(&new_R3BNeulandCluster);
      instance.SetNewArray(&newArray_R3BNeulandCluster);
      instance.SetDelete(&delete_R3BNeulandCluster);
      instance.SetDeleteArray(&deleteArray_R3BNeulandCluster);
      instance.SetDestructor(&destruct_R3BNeulandCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandCluster*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandCluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandCluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BNeulandNeutron(void *p = 0);
   static void *newArray_R3BNeulandNeutron(Long_t size, void *p);
   static void delete_R3BNeulandNeutron(void *p);
   static void deleteArray_R3BNeulandNeutron(void *p);
   static void destruct_R3BNeulandNeutron(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BNeulandNeutron*)
   {
      ::R3BNeulandNeutron *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BNeulandNeutron >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BNeulandNeutron", ::R3BNeulandNeutron::Class_Version(), "", 6209,
                  typeid(::R3BNeulandNeutron), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BNeulandNeutron::Dictionary, isa_proxy, 4,
                  sizeof(::R3BNeulandNeutron) );
      instance.SetNew(&new_R3BNeulandNeutron);
      instance.SetNewArray(&newArray_R3BNeulandNeutron);
      instance.SetDelete(&delete_R3BNeulandNeutron);
      instance.SetDeleteArray(&deleteArray_R3BNeulandNeutron);
      instance.SetDestructor(&destruct_R3BNeulandNeutron);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BNeulandNeutron*)
   {
      return GenerateInitInstanceLocal((::R3BNeulandNeutron*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BNeulandNeutron*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxMappedData(void *p = 0);
   static void *newArray_R3BPspxMappedData(Long_t size, void *p);
   static void delete_R3BPspxMappedData(void *p);
   static void deleteArray_R3BPspxMappedData(void *p);
   static void destruct_R3BPspxMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxMappedData*)
   {
      ::R3BPspxMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxMappedData", ::R3BPspxMappedData::Class_Version(), "", 6267,
                  typeid(::R3BPspxMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxMappedData) );
      instance.SetNew(&new_R3BPspxMappedData);
      instance.SetNewArray(&newArray_R3BPspxMappedData);
      instance.SetDelete(&delete_R3BPspxMappedData);
      instance.SetDeleteArray(&deleteArray_R3BPspxMappedData);
      instance.SetDestructor(&destruct_R3BPspxMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BPspxMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxPrecalData(void *p = 0);
   static void *newArray_R3BPspxPrecalData(Long_t size, void *p);
   static void delete_R3BPspxPrecalData(void *p);
   static void deleteArray_R3BPspxPrecalData(void *p);
   static void destruct_R3BPspxPrecalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxPrecalData*)
   {
      ::R3BPspxPrecalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxPrecalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxPrecalData", ::R3BPspxPrecalData::Class_Version(), "", 6321,
                  typeid(::R3BPspxPrecalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxPrecalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxPrecalData) );
      instance.SetNew(&new_R3BPspxPrecalData);
      instance.SetNewArray(&newArray_R3BPspxPrecalData);
      instance.SetDelete(&delete_R3BPspxPrecalData);
      instance.SetDeleteArray(&deleteArray_R3BPspxPrecalData);
      instance.SetDestructor(&destruct_R3BPspxPrecalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxPrecalData*)
   {
      return GenerateInitInstanceLocal((::R3BPspxPrecalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxPrecalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxCalData(void *p = 0);
   static void *newArray_R3BPspxCalData(Long_t size, void *p);
   static void delete_R3BPspxCalData(void *p);
   static void deleteArray_R3BPspxCalData(void *p);
   static void destruct_R3BPspxCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxCalData*)
   {
      ::R3BPspxCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxCalData", ::R3BPspxCalData::Class_Version(), "", 6376,
                  typeid(::R3BPspxCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxCalData) );
      instance.SetNew(&new_R3BPspxCalData);
      instance.SetNewArray(&newArray_R3BPspxCalData);
      instance.SetDelete(&delete_R3BPspxCalData);
      instance.SetDeleteArray(&deleteArray_R3BPspxCalData);
      instance.SetDestructor(&destruct_R3BPspxCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxCalData*)
   {
      return GenerateInitInstanceLocal((::R3BPspxCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPspxHitData(void *p = 0);
   static void *newArray_R3BPspxHitData(Long_t size, void *p);
   static void delete_R3BPspxHitData(void *p);
   static void deleteArray_R3BPspxHitData(void *p);
   static void destruct_R3BPspxHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPspxHitData*)
   {
      ::R3BPspxHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPspxHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPspxHitData", ::R3BPspxHitData::Class_Version(), "", 6429,
                  typeid(::R3BPspxHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPspxHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPspxHitData) );
      instance.SetNew(&new_R3BPspxHitData);
      instance.SetNewArray(&newArray_R3BPspxHitData);
      instance.SetDelete(&delete_R3BPspxHitData);
      instance.SetDeleteArray(&deleteArray_R3BPspxHitData);
      instance.SetDestructor(&destruct_R3BPspxHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPspxHitData*)
   {
      return GenerateInitInstanceLocal((::R3BPspxHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPspxHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosMappedData(void *p = 0);
   static void *newArray_R3BLosMappedData(Long_t size, void *p);
   static void delete_R3BLosMappedData(void *p);
   static void deleteArray_R3BLosMappedData(void *p);
   static void destruct_R3BLosMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosMappedData*)
   {
      ::R3BLosMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosMappedData", ::R3BLosMappedData::Class_Version(), "", 6476,
                  typeid(::R3BLosMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosMappedData) );
      instance.SetNew(&new_R3BLosMappedData);
      instance.SetNewArray(&newArray_R3BLosMappedData);
      instance.SetDelete(&delete_R3BLosMappedData);
      instance.SetDeleteArray(&deleteArray_R3BLosMappedData);
      instance.SetDestructor(&destruct_R3BLosMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BLosMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosCalData(void *p = 0);
   static void *newArray_R3BLosCalData(Long_t size, void *p);
   static void delete_R3BLosCalData(void *p);
   static void deleteArray_R3BLosCalData(void *p);
   static void destruct_R3BLosCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosCalData*)
   {
      ::R3BLosCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosCalData", ::R3BLosCalData::Class_Version(), "", 6525,
                  typeid(::R3BLosCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosCalData) );
      instance.SetNew(&new_R3BLosCalData);
      instance.SetNewArray(&newArray_R3BLosCalData);
      instance.SetDelete(&delete_R3BLosCalData);
      instance.SetDeleteArray(&deleteArray_R3BLosCalData);
      instance.SetDestructor(&destruct_R3BLosCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosCalData*)
   {
      return GenerateInitInstanceLocal((::R3BLosCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BLosHitData(void *p = 0);
   static void *newArray_R3BLosHitData(Long_t size, void *p);
   static void delete_R3BLosHitData(void *p);
   static void deleteArray_R3BLosHitData(void *p);
   static void destruct_R3BLosHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BLosHitData*)
   {
      ::R3BLosHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BLosHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BLosHitData", ::R3BLosHitData::Class_Version(), "", 6590,
                  typeid(::R3BLosHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BLosHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BLosHitData) );
      instance.SetNew(&new_R3BLosHitData);
      instance.SetNewArray(&newArray_R3BLosHitData);
      instance.SetDelete(&delete_R3BLosHitData);
      instance.SetDeleteArray(&deleteArray_R3BLosHitData);
      instance.SetDestructor(&destruct_R3BLosHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BLosHitData*)
   {
      return GenerateInitInstanceLocal((::R3BLosHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BLosHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BRoluMappedData(void *p = 0);
   static void *newArray_R3BRoluMappedData(Long_t size, void *p);
   static void delete_R3BRoluMappedData(void *p);
   static void deleteArray_R3BRoluMappedData(void *p);
   static void destruct_R3BRoluMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluMappedData*)
   {
      ::R3BRoluMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluMappedData", ::R3BRoluMappedData::Class_Version(), "", 6640,
                  typeid(::R3BRoluMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluMappedData) );
      instance.SetNew(&new_R3BRoluMappedData);
      instance.SetNewArray(&newArray_R3BRoluMappedData);
      instance.SetDelete(&delete_R3BRoluMappedData);
      instance.SetDeleteArray(&deleteArray_R3BRoluMappedData);
      instance.SetDestructor(&destruct_R3BRoluMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BRoluMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BRoluCalData(void *p = 0);
   static void *newArray_R3BRoluCalData(Long_t size, void *p);
   static void delete_R3BRoluCalData(void *p);
   static void deleteArray_R3BRoluCalData(void *p);
   static void destruct_R3BRoluCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluCalData*)
   {
      ::R3BRoluCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluCalData", ::R3BRoluCalData::Class_Version(), "", 6688,
                  typeid(::R3BRoluCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluCalData) );
      instance.SetNew(&new_R3BRoluCalData);
      instance.SetNewArray(&newArray_R3BRoluCalData);
      instance.SetDelete(&delete_R3BRoluCalData);
      instance.SetDeleteArray(&deleteArray_R3BRoluCalData);
      instance.SetDestructor(&destruct_R3BRoluCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluCalData*)
   {
      return GenerateInitInstanceLocal((::R3BRoluCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BRoluHitData(void *p = 0);
   static void *newArray_R3BRoluHitData(Long_t size, void *p);
   static void delete_R3BRoluHitData(void *p);
   static void deleteArray_R3BRoluHitData(void *p);
   static void destruct_R3BRoluHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BRoluHitData*)
   {
      ::R3BRoluHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BRoluHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BRoluHitData", ::R3BRoluHitData::Class_Version(), "", 6744,
                  typeid(::R3BRoluHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BRoluHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BRoluHitData) );
      instance.SetNew(&new_R3BRoluHitData);
      instance.SetNewArray(&newArray_R3BRoluHitData);
      instance.SetDelete(&delete_R3BRoluHitData);
      instance.SetDeleteArray(&deleteArray_R3BRoluHitData);
      instance.SetDestructor(&destruct_R3BRoluHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BRoluHitData*)
   {
      return GenerateInitInstanceLocal((::R3BRoluHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BRoluHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2MappedData(void *p = 0);
   static void *newArray_R3BSci2MappedData(Long_t size, void *p);
   static void delete_R3BSci2MappedData(void *p);
   static void deleteArray_R3BSci2MappedData(void *p);
   static void destruct_R3BSci2MappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2MappedData*)
   {
      ::R3BSci2MappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2MappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2MappedData", ::R3BSci2MappedData::Class_Version(), "", 6780,
                  typeid(::R3BSci2MappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2MappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2MappedData) );
      instance.SetNew(&new_R3BSci2MappedData);
      instance.SetNewArray(&newArray_R3BSci2MappedData);
      instance.SetDelete(&delete_R3BSci2MappedData);
      instance.SetDeleteArray(&deleteArray_R3BSci2MappedData);
      instance.SetDestructor(&destruct_R3BSci2MappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2MappedData*)
   {
      return GenerateInitInstanceLocal((::R3BSci2MappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2MappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2TcalData(void *p = 0);
   static void *newArray_R3BSci2TcalData(Long_t size, void *p);
   static void delete_R3BSci2TcalData(void *p);
   static void deleteArray_R3BSci2TcalData(void *p);
   static void destruct_R3BSci2TcalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2TcalData*)
   {
      ::R3BSci2TcalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2TcalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2TcalData", ::R3BSci2TcalData::Class_Version(), "", 6821,
                  typeid(::R3BSci2TcalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2TcalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2TcalData) );
      instance.SetNew(&new_R3BSci2TcalData);
      instance.SetNewArray(&newArray_R3BSci2TcalData);
      instance.SetDelete(&delete_R3BSci2TcalData);
      instance.SetDeleteArray(&deleteArray_R3BSci2TcalData);
      instance.SetDestructor(&destruct_R3BSci2TcalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2TcalData*)
   {
      return GenerateInitInstanceLocal((::R3BSci2TcalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2TcalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2CalData(void *p = 0);
   static void *newArray_R3BSci2CalData(Long_t size, void *p);
   static void delete_R3BSci2CalData(void *p);
   static void deleteArray_R3BSci2CalData(void *p);
   static void destruct_R3BSci2CalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2CalData*)
   {
      ::R3BSci2CalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2CalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2CalData", ::R3BSci2CalData::Class_Version(), "", 6855,
                  typeid(::R3BSci2CalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2CalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2CalData) );
      instance.SetNew(&new_R3BSci2CalData);
      instance.SetNewArray(&newArray_R3BSci2CalData);
      instance.SetDelete(&delete_R3BSci2CalData);
      instance.SetDeleteArray(&deleteArray_R3BSci2CalData);
      instance.SetDestructor(&destruct_R3BSci2CalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2CalData*)
   {
      return GenerateInitInstanceLocal((::R3BSci2CalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2CalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci2HitData(void *p = 0);
   static void *newArray_R3BSci2HitData(Long_t size, void *p);
   static void delete_R3BSci2HitData(void *p);
   static void deleteArray_R3BSci2HitData(void *p);
   static void destruct_R3BSci2HitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci2HitData*)
   {
      ::R3BSci2HitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci2HitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci2HitData", ::R3BSci2HitData::Class_Version(), "", 6901,
                  typeid(::R3BSci2HitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci2HitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci2HitData) );
      instance.SetNew(&new_R3BSci2HitData);
      instance.SetNewArray(&newArray_R3BSci2HitData);
      instance.SetDelete(&delete_R3BSci2HitData);
      instance.SetDeleteArray(&deleteArray_R3BSci2HitData);
      instance.SetDestructor(&destruct_R3BSci2HitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci2HitData*)
   {
      return GenerateInitInstanceLocal((::R3BSci2HitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci2HitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci8MappedData(void *p = 0);
   static void *newArray_R3BSci8MappedData(Long_t size, void *p);
   static void delete_R3BSci8MappedData(void *p);
   static void deleteArray_R3BSci8MappedData(void *p);
   static void destruct_R3BSci8MappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci8MappedData*)
   {
      ::R3BSci8MappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci8MappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci8MappedData", ::R3BSci8MappedData::Class_Version(), "", 6948,
                  typeid(::R3BSci8MappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci8MappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci8MappedData) );
      instance.SetNew(&new_R3BSci8MappedData);
      instance.SetNewArray(&newArray_R3BSci8MappedData);
      instance.SetDelete(&delete_R3BSci8MappedData);
      instance.SetDeleteArray(&deleteArray_R3BSci8MappedData);
      instance.SetDestructor(&destruct_R3BSci8MappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci8MappedData*)
   {
      return GenerateInitInstanceLocal((::R3BSci8MappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci8MappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci8CalData(void *p = 0);
   static void *newArray_R3BSci8CalData(Long_t size, void *p);
   static void delete_R3BSci8CalData(void *p);
   static void deleteArray_R3BSci8CalData(void *p);
   static void destruct_R3BSci8CalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci8CalData*)
   {
      ::R3BSci8CalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci8CalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci8CalData", ::R3BSci8CalData::Class_Version(), "", 7002,
                  typeid(::R3BSci8CalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci8CalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci8CalData) );
      instance.SetNew(&new_R3BSci8CalData);
      instance.SetNewArray(&newArray_R3BSci8CalData);
      instance.SetDelete(&delete_R3BSci8CalData);
      instance.SetDeleteArray(&deleteArray_R3BSci8CalData);
      instance.SetDestructor(&destruct_R3BSci8CalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci8CalData*)
   {
      return GenerateInitInstanceLocal((::R3BSci8CalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci8CalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSci8HitData(void *p = 0);
   static void *newArray_R3BSci8HitData(Long_t size, void *p);
   static void delete_R3BSci8HitData(void *p);
   static void deleteArray_R3BSci8HitData(void *p);
   static void destruct_R3BSci8HitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSci8HitData*)
   {
      ::R3BSci8HitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSci8HitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSci8HitData", ::R3BSci8HitData::Class_Version(), "", 7061,
                  typeid(::R3BSci8HitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSci8HitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSci8HitData) );
      instance.SetNew(&new_R3BSci8HitData);
      instance.SetNewArray(&newArray_R3BSci8HitData);
      instance.SetDelete(&delete_R3BSci8HitData);
      instance.SetDeleteArray(&deleteArray_R3BSci8HitData);
      instance.SetDestructor(&destruct_R3BSci8HitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSci8HitData*)
   {
      return GenerateInitInstanceLocal((::R3BSci8HitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSci8HitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BActarPoint(void *p = 0);
   static void *newArray_R3BActarPoint(Long_t size, void *p);
   static void delete_R3BActarPoint(void *p);
   static void deleteArray_R3BActarPoint(void *p);
   static void destruct_R3BActarPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BActarPoint*)
   {
      ::R3BActarPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BActarPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BActarPoint", ::R3BActarPoint::Class_Version(), "", 7114,
                  typeid(::R3BActarPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BActarPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BActarPoint) );
      instance.SetNew(&new_R3BActarPoint);
      instance.SetNewArray(&newArray_R3BActarPoint);
      instance.SetDelete(&delete_R3BActarPoint);
      instance.SetDeleteArray(&deleteArray_R3BActarPoint);
      instance.SetDestructor(&destruct_R3BActarPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BActarPoint*)
   {
      return GenerateInitInstanceLocal((::R3BActarPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BActarPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BStrawtubesMappedData(void *p);
   static void deleteArray_R3BStrawtubesMappedData(void *p);
   static void destruct_R3BStrawtubesMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesMappedData*)
   {
      ::R3BStrawtubesMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesMappedData", ::R3BStrawtubesMappedData::Class_Version(), "", 7225,
                  typeid(::R3BStrawtubesMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesMappedData) );
      instance.SetDelete(&delete_R3BStrawtubesMappedData);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesMappedData);
      instance.SetDestructor(&destruct_R3BStrawtubesMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BStrawtubesCalData(void *p);
   static void deleteArray_R3BStrawtubesCalData(void *p);
   static void destruct_R3BStrawtubesCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesCalData*)
   {
      ::R3BStrawtubesCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesCalData", ::R3BStrawtubesCalData::Class_Version(), "", 7267,
                  typeid(::R3BStrawtubesCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesCalData) );
      instance.SetDelete(&delete_R3BStrawtubesCalData);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesCalData);
      instance.SetDestructor(&destruct_R3BStrawtubesCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesCalData*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BStrawtubesHitData(void *p);
   static void deleteArray_R3BStrawtubesHitData(void *p);
   static void destruct_R3BStrawtubesHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BStrawtubesHitData*)
   {
      ::R3BStrawtubesHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BStrawtubesHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BStrawtubesHitData", ::R3BStrawtubesHitData::Class_Version(), "", 7308,
                  typeid(::R3BStrawtubesHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BStrawtubesHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BStrawtubesHitData) );
      instance.SetDelete(&delete_R3BStrawtubesHitData);
      instance.SetDeleteArray(&deleteArray_R3BStrawtubesHitData);
      instance.SetDestructor(&destruct_R3BStrawtubesHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BStrawtubesHitData*)
   {
      return GenerateInitInstanceLocal((::R3BStrawtubesHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BStrawtubesHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPaddleTamexMappedData(void *p = 0);
   static void *newArray_R3BPaddleTamexMappedData(Long_t size, void *p);
   static void delete_R3BPaddleTamexMappedData(void *p);
   static void deleteArray_R3BPaddleTamexMappedData(void *p);
   static void destruct_R3BPaddleTamexMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPaddleTamexMappedData*)
   {
      ::R3BPaddleTamexMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPaddleTamexMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPaddleTamexMappedData", ::R3BPaddleTamexMappedData::Class_Version(), "", 7344,
                  typeid(::R3BPaddleTamexMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPaddleTamexMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPaddleTamexMappedData) );
      instance.SetNew(&new_R3BPaddleTamexMappedData);
      instance.SetNewArray(&newArray_R3BPaddleTamexMappedData);
      instance.SetDelete(&delete_R3BPaddleTamexMappedData);
      instance.SetDeleteArray(&deleteArray_R3BPaddleTamexMappedData);
      instance.SetDestructor(&destruct_R3BPaddleTamexMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPaddleTamexMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BPaddleTamexMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPaddleTamexMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdMappedData(void *p = 0);
   static void *newArray_R3BTofdMappedData(Long_t size, void *p);
   static void delete_R3BTofdMappedData(void *p);
   static void deleteArray_R3BTofdMappedData(void *p);
   static void destruct_R3BTofdMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdMappedData*)
   {
      ::R3BTofdMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdMappedData", ::R3BTofdMappedData::Class_Version(), "", 7423,
                  typeid(::R3BTofdMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdMappedData) );
      instance.SetNew(&new_R3BTofdMappedData);
      instance.SetNewArray(&newArray_R3BTofdMappedData);
      instance.SetDelete(&delete_R3BTofdMappedData);
      instance.SetDeleteArray(&deleteArray_R3BTofdMappedData);
      instance.SetDestructor(&destruct_R3BTofdMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BTofdMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdCalData(void *p = 0);
   static void *newArray_R3BTofdCalData(Long_t size, void *p);
   static void delete_R3BTofdCalData(void *p);
   static void deleteArray_R3BTofdCalData(void *p);
   static void destruct_R3BTofdCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdCalData*)
   {
      ::R3BTofdCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdCalData", ::R3BTofdCalData::Class_Version(), "", 7468,
                  typeid(::R3BTofdCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdCalData) );
      instance.SetNew(&new_R3BTofdCalData);
      instance.SetNewArray(&newArray_R3BTofdCalData);
      instance.SetDelete(&delete_R3BTofdCalData);
      instance.SetDeleteArray(&deleteArray_R3BTofdCalData);
      instance.SetDestructor(&destruct_R3BTofdCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdCalData*)
   {
      return GenerateInitInstanceLocal((::R3BTofdCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdHitData(void *p = 0);
   static void *newArray_R3BTofdHitData(Long_t size, void *p);
   static void delete_R3BTofdHitData(void *p);
   static void deleteArray_R3BTofdHitData(void *p);
   static void destruct_R3BTofdHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdHitData*)
   {
      ::R3BTofdHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdHitData", ::R3BTofdHitData::Class_Version(), "", 7513,
                  typeid(::R3BTofdHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdHitData) );
      instance.SetNew(&new_R3BTofdHitData);
      instance.SetNewArray(&newArray_R3BTofdHitData);
      instance.SetDelete(&delete_R3BTofdHitData);
      instance.SetDeleteArray(&deleteArray_R3BTofdHitData);
      instance.SetDestructor(&destruct_R3BTofdHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdHitData*)
   {
      return GenerateInitInstanceLocal((::R3BTofdHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPaddleCalData(void *p = 0);
   static void *newArray_R3BPaddleCalData(Long_t size, void *p);
   static void delete_R3BPaddleCalData(void *p);
   static void deleteArray_R3BPaddleCalData(void *p);
   static void destruct_R3BPaddleCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPaddleCalData*)
   {
      ::R3BPaddleCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPaddleCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPaddleCalData", ::R3BPaddleCalData::Class_Version(), "", 7554,
                  typeid(::R3BPaddleCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPaddleCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPaddleCalData) );
      instance.SetNew(&new_R3BPaddleCalData);
      instance.SetNewArray(&newArray_R3BPaddleCalData);
      instance.SetDelete(&delete_R3BPaddleCalData);
      instance.SetDeleteArray(&deleteArray_R3BPaddleCalData);
      instance.SetDestructor(&destruct_R3BPaddleCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPaddleCalData*)
   {
      return GenerateInitInstanceLocal((::R3BPaddleCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPaddleCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdPoint(void *p = 0);
   static void *newArray_R3BTofdPoint(Long_t size, void *p);
   static void delete_R3BTofdPoint(void *p);
   static void deleteArray_R3BTofdPoint(void *p);
   static void destruct_R3BTofdPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdPoint*)
   {
      ::R3BTofdPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdPoint", ::R3BTofdPoint::Class_Version(), "", 7661,
                  typeid(::R3BTofdPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdPoint) );
      instance.SetNew(&new_R3BTofdPoint);
      instance.SetNewArray(&newArray_R3BTofdPoint);
      instance.SetDelete(&delete_R3BTofdPoint);
      instance.SetDeleteArray(&deleteArray_R3BTofdPoint);
      instance.SetDestructor(&destruct_R3BTofdPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdPoint*)
   {
      return GenerateInitInstanceLocal((::R3BTofdPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTofdDigi(void *p = 0);
   static void *newArray_R3BTofdDigi(Long_t size, void *p);
   static void delete_R3BTofdDigi(void *p);
   static void deleteArray_R3BTofdDigi(void *p);
   static void destruct_R3BTofdDigi(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTofdDigi*)
   {
      ::R3BTofdDigi *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTofdDigi >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTofdDigi", ::R3BTofdDigi::Class_Version(), "", 7773,
                  typeid(::R3BTofdDigi), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTofdDigi::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTofdDigi) );
      instance.SetNew(&new_R3BTofdDigi);
      instance.SetNewArray(&newArray_R3BTofdDigi);
      instance.SetDelete(&delete_R3BTofdDigi);
      instance.SetDeleteArray(&deleteArray_R3BTofdDigi);
      instance.SetDestructor(&destruct_R3BTofdDigi);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTofdDigi*)
   {
      return GenerateInitInstanceLocal((::R3BTofdDigi*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTofdDigi*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPtofHit(void *p = 0);
   static void *newArray_R3BPtofHit(Long_t size, void *p);
   static void delete_R3BPtofHit(void *p);
   static void deleteArray_R3BPtofHit(void *p);
   static void destruct_R3BPtofHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPtofHit*)
   {
      ::R3BPtofHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPtofHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPtofHit", ::R3BPtofHit::Class_Version(), "", 7860,
                  typeid(::R3BPtofHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPtofHit::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPtofHit) );
      instance.SetNew(&new_R3BPtofHit);
      instance.SetNewArray(&newArray_R3BPtofHit);
      instance.SetDelete(&delete_R3BPtofHit);
      instance.SetDeleteArray(&deleteArray_R3BPtofHit);
      instance.SetDestructor(&destruct_R3BPtofHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPtofHit*)
   {
      return GenerateInitInstanceLocal((::R3BPtofHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPtofHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcMappedData(void *p = 0);
   static void *newArray_R3BPdcMappedData(Long_t size, void *p);
   static void delete_R3BPdcMappedData(void *p);
   static void deleteArray_R3BPdcMappedData(void *p);
   static void destruct_R3BPdcMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcMappedData*)
   {
      ::R3BPdcMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcMappedData", ::R3BPdcMappedData::Class_Version(), "", 7928,
                  typeid(::R3BPdcMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcMappedData) );
      instance.SetNew(&new_R3BPdcMappedData);
      instance.SetNewArray(&newArray_R3BPdcMappedData);
      instance.SetDelete(&delete_R3BPdcMappedData);
      instance.SetDeleteArray(&deleteArray_R3BPdcMappedData);
      instance.SetDestructor(&destruct_R3BPdcMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BPdcMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcCalData(void *p = 0);
   static void *newArray_R3BPdcCalData(Long_t size, void *p);
   static void delete_R3BPdcCalData(void *p);
   static void deleteArray_R3BPdcCalData(void *p);
   static void destruct_R3BPdcCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcCalData*)
   {
      ::R3BPdcCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcCalData", ::R3BPdcCalData::Class_Version(), "", 7971,
                  typeid(::R3BPdcCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcCalData) );
      instance.SetNew(&new_R3BPdcCalData);
      instance.SetNewArray(&newArray_R3BPdcCalData);
      instance.SetDelete(&delete_R3BPdcCalData);
      instance.SetDeleteArray(&deleteArray_R3BPdcCalData);
      instance.SetDestructor(&destruct_R3BPdcCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcCalData*)
   {
      return GenerateInitInstanceLocal((::R3BPdcCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BPdcHitData(void *p = 0);
   static void *newArray_R3BPdcHitData(Long_t size, void *p);
   static void delete_R3BPdcHitData(void *p);
   static void deleteArray_R3BPdcHitData(void *p);
   static void destruct_R3BPdcHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BPdcHitData*)
   {
      ::R3BPdcHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BPdcHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BPdcHitData", ::R3BPdcHitData::Class_Version(), "", 8015,
                  typeid(::R3BPdcHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BPdcHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BPdcHitData) );
      instance.SetNew(&new_R3BPdcHitData);
      instance.SetNewArray(&newArray_R3BPdcHitData);
      instance.SetDelete(&delete_R3BPdcHitData);
      instance.SetDeleteArray(&deleteArray_R3BPdcHitData);
      instance.SetDestructor(&destruct_R3BPdcHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BPdcHitData*)
   {
      return GenerateInitInstanceLocal((::R3BPdcHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BPdcHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberCalData(void *p = 0);
   static void *newArray_R3BBunchedFiberCalData(Long_t size, void *p);
   static void delete_R3BBunchedFiberCalData(void *p);
   static void deleteArray_R3BBunchedFiberCalData(void *p);
   static void destruct_R3BBunchedFiberCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberCalData*)
   {
      ::R3BBunchedFiberCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberCalData", ::R3BBunchedFiberCalData::Class_Version(), "", 8060,
                  typeid(::R3BBunchedFiberCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberCalData) );
      instance.SetNew(&new_R3BBunchedFiberCalData);
      instance.SetNewArray(&newArray_R3BBunchedFiberCalData);
      instance.SetDelete(&delete_R3BBunchedFiberCalData);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberCalData);
      instance.SetDestructor(&destruct_R3BBunchedFiberCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberCalData*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberHitData(void *p = 0);
   static void *newArray_R3BBunchedFiberHitData(Long_t size, void *p);
   static void delete_R3BBunchedFiberHitData(void *p);
   static void deleteArray_R3BBunchedFiberHitData(void *p);
   static void destruct_R3BBunchedFiberHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberHitData*)
   {
      ::R3BBunchedFiberHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberHitData", ::R3BBunchedFiberHitData::Class_Version(), "", 8110,
                  typeid(::R3BBunchedFiberHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberHitData) );
      instance.SetNew(&new_R3BBunchedFiberHitData);
      instance.SetNewArray(&newArray_R3BBunchedFiberHitData);
      instance.SetDelete(&delete_R3BBunchedFiberHitData);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberHitData);
      instance.SetDestructor(&destruct_R3BBunchedFiberHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberHitData*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBunchedFiberMappedData(void *p = 0);
   static void *newArray_R3BBunchedFiberMappedData(Long_t size, void *p);
   static void delete_R3BBunchedFiberMappedData(void *p);
   static void deleteArray_R3BBunchedFiberMappedData(void *p);
   static void destruct_R3BBunchedFiberMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBunchedFiberMappedData*)
   {
      ::R3BBunchedFiberMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBunchedFiberMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBunchedFiberMappedData", ::R3BBunchedFiberMappedData::Class_Version(), "", 8171,
                  typeid(::R3BBunchedFiberMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBunchedFiberMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBunchedFiberMappedData) );
      instance.SetNew(&new_R3BBunchedFiberMappedData);
      instance.SetNewArray(&newArray_R3BBunchedFiberMappedData);
      instance.SetDelete(&delete_R3BBunchedFiberMappedData);
      instance.SetDeleteArray(&deleteArray_R3BBunchedFiberMappedData);
      instance.SetDestructor(&destruct_R3BBunchedFiberMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBunchedFiberMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BBunchedFiberMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBunchedFiberMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi4Point(void *p = 0);
   static void *newArray_R3BFi4Point(Long_t size, void *p);
   static void delete_R3BFi4Point(void *p);
   static void deleteArray_R3BFi4Point(void *p);
   static void destruct_R3BFi4Point(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4Point*)
   {
      ::R3BFi4Point *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4Point >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4Point", ::R3BFi4Point::Class_Version(), "", 8231,
                  typeid(::R3BFi4Point), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4Point::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4Point) );
      instance.SetNew(&new_R3BFi4Point);
      instance.SetNewArray(&newArray_R3BFi4Point);
      instance.SetDelete(&delete_R3BFi4Point);
      instance.SetDeleteArray(&deleteArray_R3BFi4Point);
      instance.SetDestructor(&destruct_R3BFi4Point);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4Point*)
   {
      return GenerateInitInstanceLocal((::R3BFi4Point*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4Point*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi4CalItem(void *p = 0);
   static void *newArray_R3BFi4CalItem(Long_t size, void *p);
   static void delete_R3BFi4CalItem(void *p);
   static void deleteArray_R3BFi4CalItem(void *p);
   static void destruct_R3BFi4CalItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4CalItem*)
   {
      ::R3BFi4CalItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4CalItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4CalItem", ::R3BFi4CalItem::Class_Version(), "", 8341,
                  typeid(::R3BFi4CalItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4CalItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4CalItem) );
      instance.SetNew(&new_R3BFi4CalItem);
      instance.SetNewArray(&newArray_R3BFi4CalItem);
      instance.SetDelete(&delete_R3BFi4CalItem);
      instance.SetDeleteArray(&deleteArray_R3BFi4CalItem);
      instance.SetDestructor(&destruct_R3BFi4CalItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4CalItem*)
   {
      return GenerateInitInstanceLocal((::R3BFi4CalItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4CalItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFi4HitItem(void *p = 0);
   static void *newArray_R3BFi4HitItem(Long_t size, void *p);
   static void delete_R3BFi4HitItem(void *p);
   static void deleteArray_R3BFi4HitItem(void *p);
   static void destruct_R3BFi4HitItem(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFi4HitItem*)
   {
      ::R3BFi4HitItem *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFi4HitItem >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFi4HitItem", ::R3BFi4HitItem::Class_Version(), "", 8408,
                  typeid(::R3BFi4HitItem), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFi4HitItem::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFi4HitItem) );
      instance.SetNew(&new_R3BFi4HitItem);
      instance.SetNewArray(&newArray_R3BFi4HitItem);
      instance.SetDelete(&delete_R3BFi4HitItem);
      instance.SetDeleteArray(&deleteArray_R3BFi4HitItem);
      instance.SetDestructor(&destruct_R3BFi4HitItem);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFi4HitItem*)
   {
      return GenerateInitInstanceLocal((::R3BFi4HitItem*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFi4HitItem*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFibMappedData(void *p = 0);
   static void *newArray_R3BFibMappedData(Long_t size, void *p);
   static void delete_R3BFibMappedData(void *p);
   static void deleteArray_R3BFibMappedData(void *p);
   static void destruct_R3BFibMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFibMappedData*)
   {
      ::R3BFibMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFibMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFibMappedData", ::R3BFibMappedData::Class_Version(), "", 8473,
                  typeid(::R3BFibMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFibMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFibMappedData) );
      instance.SetNew(&new_R3BFibMappedData);
      instance.SetNewArray(&newArray_R3BFibMappedData);
      instance.SetDelete(&delete_R3BFibMappedData);
      instance.SetDeleteArray(&deleteArray_R3BFibMappedData);
      instance.SetDestructor(&destruct_R3BFibMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFibMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BFibMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFibMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFibCalData(void *p = 0);
   static void *newArray_R3BFibCalData(Long_t size, void *p);
   static void delete_R3BFibCalData(void *p);
   static void deleteArray_R3BFibCalData(void *p);
   static void destruct_R3BFibCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFibCalData*)
   {
      ::R3BFibCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFibCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFibCalData", ::R3BFibCalData::Class_Version(), "", 8555,
                  typeid(::R3BFibCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFibCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFibCalData) );
      instance.SetNew(&new_R3BFibCalData);
      instance.SetNewArray(&newArray_R3BFibCalData);
      instance.SetDelete(&delete_R3BFibCalData);
      instance.SetDeleteArray(&deleteArray_R3BFibCalData);
      instance.SetDestructor(&destruct_R3BFibCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFibCalData*)
   {
      return GenerateInitInstanceLocal((::R3BFibCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFibCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFibPoint(void *p = 0);
   static void *newArray_R3BFibPoint(Long_t size, void *p);
   static void delete_R3BFibPoint(void *p);
   static void deleteArray_R3BFibPoint(void *p);
   static void destruct_R3BFibPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFibPoint*)
   {
      ::R3BFibPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFibPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFibPoint", ::R3BFibPoint::Class_Version(), "", 8636,
                  typeid(::R3BFibPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFibPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFibPoint) );
      instance.SetNew(&new_R3BFibPoint);
      instance.SetNewArray(&newArray_R3BFibPoint);
      instance.SetDelete(&delete_R3BFibPoint);
      instance.SetDeleteArray(&deleteArray_R3BFibPoint);
      instance.SetDestructor(&destruct_R3BFibPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFibPoint*)
   {
      return GenerateInitInstanceLocal((::R3BFibPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFibPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsMappedData(void *p = 0);
   static void *newArray_R3BAmsMappedData(Long_t size, void *p);
   static void delete_R3BAmsMappedData(void *p);
   static void deleteArray_R3BAmsMappedData(void *p);
   static void destruct_R3BAmsMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsMappedData*)
   {
      ::R3BAmsMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsMappedData", ::R3BAmsMappedData::Class_Version(), "", 8749,
                  typeid(::R3BAmsMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsMappedData) );
      instance.SetNew(&new_R3BAmsMappedData);
      instance.SetNewArray(&newArray_R3BAmsMappedData);
      instance.SetDelete(&delete_R3BAmsMappedData);
      instance.SetDeleteArray(&deleteArray_R3BAmsMappedData);
      instance.SetDestructor(&destruct_R3BAmsMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BAmsMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsStripCalData(void *p = 0);
   static void *newArray_R3BAmsStripCalData(Long_t size, void *p);
   static void delete_R3BAmsStripCalData(void *p);
   static void deleteArray_R3BAmsStripCalData(void *p);
   static void destruct_R3BAmsStripCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsStripCalData*)
   {
      ::R3BAmsStripCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsStripCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsStripCalData", ::R3BAmsStripCalData::Class_Version(), "", 8810,
                  typeid(::R3BAmsStripCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsStripCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsStripCalData) );
      instance.SetNew(&new_R3BAmsStripCalData);
      instance.SetNewArray(&newArray_R3BAmsStripCalData);
      instance.SetDelete(&delete_R3BAmsStripCalData);
      instance.SetDeleteArray(&deleteArray_R3BAmsStripCalData);
      instance.SetDestructor(&destruct_R3BAmsStripCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsStripCalData*)
   {
      return GenerateInitInstanceLocal((::R3BAmsStripCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsStripCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BAmsHitData(void *p = 0);
   static void *newArray_R3BAmsHitData(Long_t size, void *p);
   static void delete_R3BAmsHitData(void *p);
   static void deleteArray_R3BAmsHitData(void *p);
   static void destruct_R3BAmsHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BAmsHitData*)
   {
      ::R3BAmsHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BAmsHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BAmsHitData", ::R3BAmsHitData::Class_Version(), "", 8888,
                  typeid(::R3BAmsHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BAmsHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BAmsHitData) );
      instance.SetNew(&new_R3BAmsHitData);
      instance.SetNewArray(&newArray_R3BAmsHitData);
      instance.SetDelete(&delete_R3BAmsHitData);
      instance.SetDeleteArray(&deleteArray_R3BAmsHitData);
      instance.SetDestructor(&destruct_R3BAmsHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BAmsHitData*)
   {
      return GenerateInitInstanceLocal((::R3BAmsHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BAmsHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BBeamMonitorMappedData(void *p = 0);
   static void *newArray_R3BBeamMonitorMappedData(Long_t size, void *p);
   static void delete_R3BBeamMonitorMappedData(void *p);
   static void deleteArray_R3BBeamMonitorMappedData(void *p);
   static void destruct_R3BBeamMonitorMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BBeamMonitorMappedData*)
   {
      ::R3BBeamMonitorMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BBeamMonitorMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BBeamMonitorMappedData", ::R3BBeamMonitorMappedData::Class_Version(), "", 8971,
                  typeid(::R3BBeamMonitorMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BBeamMonitorMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BBeamMonitorMappedData) );
      instance.SetNew(&new_R3BBeamMonitorMappedData);
      instance.SetNewArray(&newArray_R3BBeamMonitorMappedData);
      instance.SetDelete(&delete_R3BBeamMonitorMappedData);
      instance.SetDeleteArray(&deleteArray_R3BBeamMonitorMappedData);
      instance.SetDestructor(&destruct_R3BBeamMonitorMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BBeamMonitorMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BBeamMonitorMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BBeamMonitorMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicPoint(void *p = 0);
   static void *newArray_R3BMusicPoint(Long_t size, void *p);
   static void delete_R3BMusicPoint(void *p);
   static void deleteArray_R3BMusicPoint(void *p);
   static void destruct_R3BMusicPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicPoint*)
   {
      ::R3BMusicPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicPoint", ::R3BMusicPoint::Class_Version(), "", 9024,
                  typeid(::R3BMusicPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicPoint::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicPoint) );
      instance.SetNew(&new_R3BMusicPoint);
      instance.SetNewArray(&newArray_R3BMusicPoint);
      instance.SetDelete(&delete_R3BMusicPoint);
      instance.SetDeleteArray(&deleteArray_R3BMusicPoint);
      instance.SetDestructor(&destruct_R3BMusicPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicPoint*)
   {
      return GenerateInitInstanceLocal((::R3BMusicPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicMappedData(void *p = 0);
   static void *newArray_R3BMusicMappedData(Long_t size, void *p);
   static void delete_R3BMusicMappedData(void *p);
   static void deleteArray_R3BMusicMappedData(void *p);
   static void destruct_R3BMusicMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicMappedData*)
   {
      ::R3BMusicMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicMappedData", ::R3BMusicMappedData::Class_Version(), "", 9149,
                  typeid(::R3BMusicMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicMappedData) );
      instance.SetNew(&new_R3BMusicMappedData);
      instance.SetNewArray(&newArray_R3BMusicMappedData);
      instance.SetDelete(&delete_R3BMusicMappedData);
      instance.SetDeleteArray(&deleteArray_R3BMusicMappedData);
      instance.SetDestructor(&destruct_R3BMusicMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BMusicMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicCalData(void *p = 0);
   static void *newArray_R3BMusicCalData(Long_t size, void *p);
   static void delete_R3BMusicCalData(void *p);
   static void deleteArray_R3BMusicCalData(void *p);
   static void destruct_R3BMusicCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicCalData*)
   {
      ::R3BMusicCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicCalData", ::R3BMusicCalData::Class_Version(), "", 9208,
                  typeid(::R3BMusicCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicCalData) );
      instance.SetNew(&new_R3BMusicCalData);
      instance.SetNewArray(&newArray_R3BMusicCalData);
      instance.SetDelete(&delete_R3BMusicCalData);
      instance.SetDeleteArray(&deleteArray_R3BMusicCalData);
      instance.SetDestructor(&destruct_R3BMusicCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicCalData*)
   {
      return GenerateInitInstanceLocal((::R3BMusicCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BMusicHitData(void *p = 0);
   static void *newArray_R3BMusicHitData(Long_t size, void *p);
   static void delete_R3BMusicHitData(void *p);
   static void deleteArray_R3BMusicHitData(void *p);
   static void destruct_R3BMusicHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BMusicHitData*)
   {
      ::R3BMusicHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BMusicHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BMusicHitData", ::R3BMusicHitData::Class_Version(), "", 9266,
                  typeid(::R3BMusicHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BMusicHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BMusicHitData) );
      instance.SetNew(&new_R3BMusicHitData);
      instance.SetNewArray(&newArray_R3BMusicHitData);
      instance.SetDelete(&delete_R3BMusicHitData);
      instance.SetDeleteArray(&deleteArray_R3BMusicHitData);
      instance.SetDestructor(&destruct_R3BMusicHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BMusicHitData*)
   {
      return GenerateInitInstanceLocal((::R3BMusicHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BMusicHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSamplerMappedData(void *p = 0);
   static void *newArray_R3BSamplerMappedData(Long_t size, void *p);
   static void delete_R3BSamplerMappedData(void *p);
   static void deleteArray_R3BSamplerMappedData(void *p);
   static void destruct_R3BSamplerMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSamplerMappedData*)
   {
      ::R3BSamplerMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSamplerMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSamplerMappedData", ::R3BSamplerMappedData::Class_Version(), "", 9308,
                  typeid(::R3BSamplerMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSamplerMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSamplerMappedData) );
      instance.SetNew(&new_R3BSamplerMappedData);
      instance.SetNewArray(&newArray_R3BSamplerMappedData);
      instance.SetDelete(&delete_R3BSamplerMappedData);
      instance.SetDeleteArray(&deleteArray_R3BSamplerMappedData);
      instance.SetDestructor(&destruct_R3BSamplerMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSamplerMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BSamplerMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSamplerMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSfibMappedData(void *p = 0);
   static void *newArray_R3BSfibMappedData(Long_t size, void *p);
   static void delete_R3BSfibMappedData(void *p);
   static void deleteArray_R3BSfibMappedData(void *p);
   static void destruct_R3BSfibMappedData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibMappedData*)
   {
      ::R3BSfibMappedData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibMappedData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibMappedData", ::R3BSfibMappedData::Class_Version(), "", 9351,
                  typeid(::R3BSfibMappedData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibMappedData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibMappedData) );
      instance.SetNew(&new_R3BSfibMappedData);
      instance.SetNewArray(&newArray_R3BSfibMappedData);
      instance.SetDelete(&delete_R3BSfibMappedData);
      instance.SetDeleteArray(&deleteArray_R3BSfibMappedData);
      instance.SetDestructor(&destruct_R3BSfibMappedData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibMappedData*)
   {
      return GenerateInitInstanceLocal((::R3BSfibMappedData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibMappedData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSfibCalData(void *p = 0);
   static void *newArray_R3BSfibCalData(Long_t size, void *p);
   static void delete_R3BSfibCalData(void *p);
   static void deleteArray_R3BSfibCalData(void *p);
   static void destruct_R3BSfibCalData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibCalData*)
   {
      ::R3BSfibCalData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibCalData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibCalData", ::R3BSfibCalData::Class_Version(), "", 9403,
                  typeid(::R3BSfibCalData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibCalData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibCalData) );
      instance.SetNew(&new_R3BSfibCalData);
      instance.SetNewArray(&newArray_R3BSfibCalData);
      instance.SetDelete(&delete_R3BSfibCalData);
      instance.SetDeleteArray(&deleteArray_R3BSfibCalData);
      instance.SetDestructor(&destruct_R3BSfibCalData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibCalData*)
   {
      return GenerateInitInstanceLocal((::R3BSfibCalData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibCalData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BSfibHitData(void *p = 0);
   static void *newArray_R3BSfibHitData(Long_t size, void *p);
   static void delete_R3BSfibHitData(void *p);
   static void deleteArray_R3BSfibHitData(void *p);
   static void destruct_R3BSfibHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BSfibHitData*)
   {
      ::R3BSfibHitData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BSfibHitData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BSfibHitData", ::R3BSfibHitData::Class_Version(), "", 9450,
                  typeid(::R3BSfibHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BSfibHitData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BSfibHitData) );
      instance.SetNew(&new_R3BSfibHitData);
      instance.SetNewArray(&newArray_R3BSfibHitData);
      instance.SetDelete(&delete_R3BSfibHitData);
      instance.SetDeleteArray(&deleteArray_R3BSfibHitData);
      instance.SetDestructor(&destruct_R3BSfibHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BSfibHitData*)
   {
      return GenerateInitInstanceLocal((::R3BSfibHitData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BSfibHitData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BFrsData(void *p = 0);
   static void *newArray_R3BFrsData(Long_t size, void *p);
   static void delete_R3BFrsData(void *p);
   static void deleteArray_R3BFrsData(void *p);
   static void destruct_R3BFrsData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BFrsData*)
   {
      ::R3BFrsData *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BFrsData >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BFrsData", ::R3BFrsData::Class_Version(), "", 9504,
                  typeid(::R3BFrsData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BFrsData::Dictionary, isa_proxy, 4,
                  sizeof(::R3BFrsData) );
      instance.SetNew(&new_R3BFrsData);
      instance.SetNewArray(&newArray_R3BFrsData);
      instance.SetDelete(&delete_R3BFrsData);
      instance.SetDeleteArray(&deleteArray_R3BFrsData);
      instance.SetDestructor(&destruct_R3BFrsData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BFrsData*)
   {
      return GenerateInitInstanceLocal((::R3BFrsData*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BFrsData*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BStack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStack::Class_Name()
{
   return "R3BStack";
}

//______________________________________________________________________________
const char *R3BStack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMCTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMCTrack::Class_Name()
{
   return "R3BMCTrack";
}

//______________________________________________________________________________
const char *R3BMCTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMCTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMCTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMCTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMCTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BWRMasterData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BWRMasterData::Class_Name()
{
   return "R3BWRMasterData";
}

//______________________________________________________________________________
const char *R3BWRMasterData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRMasterData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BWRMasterData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRMasterData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BWRMasterData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRMasterData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BWRMasterData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRMasterData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BWRCalifaData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BWRCalifaData::Class_Name()
{
   return "R3BWRCalifaData";
}

//______________________________________________________________________________
const char *R3BWRCalifaData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRCalifaData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BWRCalifaData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRCalifaData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BWRCalifaData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRCalifaData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BWRCalifaData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRCalifaData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BWRAmsData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BWRAmsData::Class_Name()
{
   return "R3BWRAmsData";
}

//______________________________________________________________________________
const char *R3BWRAmsData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRAmsData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BWRAmsData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BWRAmsData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BWRAmsData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRAmsData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BWRAmsData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BWRAmsData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BHit::Class_Name()
{
   return "R3BHit";
}

//______________________________________________________________________________
const char *R3BHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrack::Class_Name()
{
   return "R3BTrack";
}

//______________________________________________________________________________
const char *R3BTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallPoint::Class_Name()
{
   return "R3BXBallPoint";
}

//______________________________________________________________________________
const char *R3BXBallPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallCrystalHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallCrystalHit::Class_Name()
{
   return "R3BXBallCrystalHit";
}

//______________________________________________________________________________
const char *R3BXBallCrystalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallCrystalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BXBallCrystalHitSim::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BXBallCrystalHitSim::Class_Name()
{
   return "R3BXBallCrystalHitSim";
}

//______________________________________________________________________________
const char *R3BXBallCrystalHitSim::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BXBallCrystalHitSim::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHitSim::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BXBallCrystalHitSim::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BXBallCrystalHitSim*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaCrystalCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaCrystalCalData::Class_Name()
{
   return "R3BCalifaCrystalCalData";
}

//______________________________________________________________________________
const char *R3BCalifaCrystalCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaCrystalCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaCrystalCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaCrystalCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaMappedData::Class_Name()
{
   return "R3BCalifaMappedData";
}

//______________________________________________________________________________
const char *R3BCalifaMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaHitData::Class_Name()
{
   return "R3BCalifaHitData";
}

//______________________________________________________________________________
const char *R3BCalifaHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BCalifaPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BCalifaPoint::Class_Name()
{
   return "R3BCalifaPoint";
}

//______________________________________________________________________________
const char *R3BCalifaPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BCalifaPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BCalifaPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BCalifaPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BCalifaPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BHPGeDetPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BHPGeDetPoint::Class_Name()
{
   return "R3BHPGeDetPoint";
}

//______________________________________________________________________________
const char *R3BHPGeDetPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BHPGeDetPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BHPGeDetPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BHPGeDetPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BHPGeDetPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BHPGeDetPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BHPGeDetPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BHPGeDetPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchPoint::Class_Name()
{
   return "R3BDchPoint";
}

//______________________________________________________________________________
const char *R3BDchPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchFullPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchFullPoint::Class_Name()
{
   return "R3BDchFullPoint";
}

//______________________________________________________________________________
const char *R3BDchFullPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchFullPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchFullPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchFullPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchFullPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiPoint::Class_Name()
{
   return "R3BGfiPoint";
}

//______________________________________________________________________________
const char *R3BGfiPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofPoint::Class_Name()
{
   return "R3BmTofPoint";
}

//______________________________________________________________________________
const char *R3BmTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BmTofDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BmTofDigi::Class_Name()
{
   return "R3BmTofDigi";
}

//______________________________________________________________________________
const char *R3BmTofDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BmTofDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BmTofDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BmTofDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BmTofDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofPoint::Class_Name()
{
   return "R3BTofPoint";
}

//______________________________________________________________________________
const char *R3BTofPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BVetoPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BVetoPoint::Class_Name()
{
   return "R3BVetoPoint";
}

//______________________________________________________________________________
const char *R3BVetoPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BVetoPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BVetoPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BVetoPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BVetoPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELILuMonPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *ELILuMonPoint::Class_Name()
{
   return "ELILuMonPoint";
}

//______________________________________________________________________________
const char *ELILuMonPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int ELILuMonPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELILuMonPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELILuMonPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELILuMonPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraPoint::Class_Name()
{
   return "R3BTraPoint";
}

//______________________________________________________________________________
const char *R3BTraPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraHit::Class_Name()
{
   return "R3BTraHit";
}

//______________________________________________________________________________
const char *R3BTraHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSitrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSitrackerHit::Class_Name()
{
   return "R3BSitrackerHit";
}

//______________________________________________________________________________
const char *R3BSitrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSitrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSitrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSitrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSitrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTrackerHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTrackerHit::Class_Name()
{
   return "R3BTrackerHit";
}

//______________________________________________________________________________
const char *R3BTrackerHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTrackerHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTrackerHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTrackerHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTrackerHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackPoint::Class_Name()
{
   return "R3BStartrackPoint";
}

//______________________________________________________________________________
const char *R3BStartrackPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackHit::Class_Name()
{
   return "R3BStartrackHit";
}

//______________________________________________________________________________
const char *R3BStartrackHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackerDigitHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackerDigitHit::Class_Name()
{
   return "R3BStartrackerDigitHit";
}

//______________________________________________________________________________
const char *R3BStartrackerDigitHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackerDigitHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackerDigitHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackerDigitHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackerDigitHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackerDigitHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackerDigitHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackerDigitHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackMappedData::Class_Name()
{
   return "R3BStartrackMappedData";
}

//______________________________________________________________________________
const char *R3BStartrackMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStartrackCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStartrackCalData::Class_Name()
{
   return "R3BStartrackCalData";
}

//______________________________________________________________________________
const char *R3BStartrackCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStartrackCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStartrackCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStartrackCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStartrackCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandPoint::Class_Name()
{
   return "R3BLandPoint";
}

//______________________________________________________________________________
const char *R3BLandPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandDigi::Class_Name()
{
   return "R3BLandDigi";
}

//______________________________________________________________________________
const char *R3BLandDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandFirstHits::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandFirstHits::Class_Name()
{
   return "R3BLandFirstHits";
}

//______________________________________________________________________________
const char *R3BLandFirstHits::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandFirstHits::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandFirstHits::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandFirstHits::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandFirstHits*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLandHit::Class_Name()
{
   return "R3BLandHit";
}

//______________________________________________________________________________
const char *R3BLandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLandHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPaddleCrystalHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPaddleCrystalHit::Class_Name()
{
   return "R3BPaddleCrystalHit";
}

//______________________________________________________________________________
const char *R3BPaddleCrystalHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPaddleCrystalHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPaddleCrystalHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPaddleCrystalHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCrystalHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeutronTrack::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeutronTrack::Class_Name()
{
   return "R3BNeutronTrack";
}

//______________________________________________________________________________
const char *R3BNeutronTrack::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeutronTrack::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeutronTrack::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeutronTrack::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeutronTrack*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDchDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDchDigi::Class_Name()
{
   return "R3BDchDigi";
}

//______________________________________________________________________________
const char *R3BDchDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDchDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDchDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDchDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDchDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BDch2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BDch2pDigi::Class_Name()
{
   return "R3BDch2pDigi";
}

//______________________________________________________________________________
const char *R3BDch2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BDch2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BDch2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BDch2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BDch2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofDigi::Class_Name()
{
   return "R3BTofDigi";
}

//______________________________________________________________________________
const char *R3BTofDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTof2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTof2pDigi::Class_Name()
{
   return "R3BTof2pDigi";
}

//______________________________________________________________________________
const char *R3BTof2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTof2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTof2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTof2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTof2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BGfiDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BGfiDigi::Class_Name()
{
   return "R3BGfiDigi";
}

//______________________________________________________________________________
const char *R3BGfiDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BGfiDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BGfiDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BGfiDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BGfiDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraDigi::Class_Name()
{
   return "R3BTraDigi";
}

//______________________________________________________________________________
const char *R3BTraDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTra2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTra2pDigi::Class_Name()
{
   return "R3BTra2pDigi";
}

//______________________________________________________________________________
const char *R3BTra2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTra2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTra2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTra2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTra2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTraFraDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTraFraDigi::Class_Name()
{
   return "R3BTraFraDigi";
}

//______________________________________________________________________________
const char *R3BTraFraDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTraFraDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTraFraDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTraFraDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTraFraDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTargetDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTargetDigi::Class_Name()
{
   return "R3BTargetDigi";
}

//______________________________________________________________________________
const char *R3BTargetDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTargetDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTargetDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTargetDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTargetDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTarget2pDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTarget2pDigi::Class_Name()
{
   return "R3BTarget2pDigi";
}

//______________________________________________________________________________
const char *R3BTarget2pDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTarget2pDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTarget2pDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTarget2pDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTarget2pDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiPoint::Class_Name()
{
   return "R3BMfiPoint";
}

//______________________________________________________________________________
const char *R3BMfiPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMfiDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMfiDigi::Class_Name()
{
   return "R3BMfiDigi";
}

//______________________________________________________________________________
const char *R3BMfiDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMfiDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMfiDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMfiDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMfiDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspPoint::Class_Name()
{
   return "R3BPspPoint";
}

//______________________________________________________________________________
const char *R3BPspPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspDigi::Class_Name()
{
   return "R3BPspDigi";
}

//______________________________________________________________________________
const char *R3BPspDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandTacquilaMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandTacquilaMappedData::Class_Name()
{
   return "R3BNeulandTacquilaMappedData";
}

//______________________________________________________________________________
const char *R3BNeulandTacquilaMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandTacquilaMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandTacquilaMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandTacquilaMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandCalData::Class_Name()
{
   return "R3BNeulandCalData";
}

//______________________________________________________________________________
const char *R3BNeulandCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandPoint::Class_Name()
{
   return "R3BNeulandPoint";
}

//______________________________________________________________________________
const char *R3BNeulandPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandHit::Class_Name()
{
   return "R3BNeulandHit";
}

//______________________________________________________________________________
const char *R3BNeulandHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandMultiplicity::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandMultiplicity::Class_Name()
{
   return "R3BNeulandMultiplicity";
}

//______________________________________________________________________________
const char *R3BNeulandMultiplicity::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicity*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandMultiplicity::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicity*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicity::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicity*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandMultiplicity::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandMultiplicity*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandCluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandCluster::Class_Name()
{
   return "R3BNeulandCluster";
}

//______________________________________________________________________________
const char *R3BNeulandCluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandCluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandCluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandCluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandCluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BNeulandNeutron::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BNeulandNeutron::Class_Name()
{
   return "R3BNeulandNeutron";
}

//______________________________________________________________________________
const char *R3BNeulandNeutron::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutron*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BNeulandNeutron::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutron*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BNeulandNeutron::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutron*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BNeulandNeutron::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BNeulandNeutron*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxMappedData::Class_Name()
{
   return "R3BPspxMappedData";
}

//______________________________________________________________________________
const char *R3BPspxMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxPrecalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxPrecalData::Class_Name()
{
   return "R3BPspxPrecalData";
}

//______________________________________________________________________________
const char *R3BPspxPrecalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxPrecalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxPrecalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxPrecalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxPrecalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxCalData::Class_Name()
{
   return "R3BPspxCalData";
}

//______________________________________________________________________________
const char *R3BPspxCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPspxHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPspxHitData::Class_Name()
{
   return "R3BPspxHitData";
}

//______________________________________________________________________________
const char *R3BPspxHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPspxHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPspxHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPspxHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPspxHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosMappedData::Class_Name()
{
   return "R3BLosMappedData";
}

//______________________________________________________________________________
const char *R3BLosMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosCalData::Class_Name()
{
   return "R3BLosCalData";
}

//______________________________________________________________________________
const char *R3BLosCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BLosHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BLosHitData::Class_Name()
{
   return "R3BLosHitData";
}

//______________________________________________________________________________
const char *R3BLosHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BLosHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BLosHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BLosHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BLosHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluMappedData::Class_Name()
{
   return "R3BRoluMappedData";
}

//______________________________________________________________________________
const char *R3BRoluMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluCalData::Class_Name()
{
   return "R3BRoluCalData";
}

//______________________________________________________________________________
const char *R3BRoluCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BRoluHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BRoluHitData::Class_Name()
{
   return "R3BRoluHitData";
}

//______________________________________________________________________________
const char *R3BRoluHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BRoluHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BRoluHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BRoluHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BRoluHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2MappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2MappedData::Class_Name()
{
   return "R3BSci2MappedData";
}

//______________________________________________________________________________
const char *R3BSci2MappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2MappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2MappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2MappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2MappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2MappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2MappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2MappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2TcalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2TcalData::Class_Name()
{
   return "R3BSci2TcalData";
}

//______________________________________________________________________________
const char *R3BSci2TcalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2TcalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2TcalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2TcalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2TcalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2TcalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2TcalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2TcalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2CalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2CalData::Class_Name()
{
   return "R3BSci2CalData";
}

//______________________________________________________________________________
const char *R3BSci2CalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2CalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2CalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2CalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2CalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2CalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2CalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2CalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci2HitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci2HitData::Class_Name()
{
   return "R3BSci2HitData";
}

//______________________________________________________________________________
const char *R3BSci2HitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2HitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci2HitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2HitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci2HitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2HitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci2HitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci2HitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci8MappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci8MappedData::Class_Name()
{
   return "R3BSci8MappedData";
}

//______________________________________________________________________________
const char *R3BSci8MappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8MappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci8MappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8MappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci8MappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8MappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci8MappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8MappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci8CalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci8CalData::Class_Name()
{
   return "R3BSci8CalData";
}

//______________________________________________________________________________
const char *R3BSci8CalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8CalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci8CalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8CalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci8CalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8CalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci8CalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8CalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSci8HitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSci8HitData::Class_Name()
{
   return "R3BSci8HitData";
}

//______________________________________________________________________________
const char *R3BSci8HitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8HitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSci8HitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8HitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSci8HitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8HitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSci8HitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSci8HitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BActarPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BActarPoint::Class_Name()
{
   return "R3BActarPoint";
}

//______________________________________________________________________________
const char *R3BActarPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BActarPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BActarPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BActarPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BActarPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BActarPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BActarPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BActarPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesMappedData::Class_Name()
{
   return "R3BStrawtubesMappedData";
}

//______________________________________________________________________________
const char *R3BStrawtubesMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesCalData::Class_Name()
{
   return "R3BStrawtubesCalData";
}

//______________________________________________________________________________
const char *R3BStrawtubesCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BStrawtubesHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BStrawtubesHitData::Class_Name()
{
   return "R3BStrawtubesHitData";
}

//______________________________________________________________________________
const char *R3BStrawtubesHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BStrawtubesHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BStrawtubesHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BStrawtubesHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BStrawtubesHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPaddleTamexMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPaddleTamexMappedData::Class_Name()
{
   return "R3BPaddleTamexMappedData";
}

//______________________________________________________________________________
const char *R3BPaddleTamexMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleTamexMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPaddleTamexMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleTamexMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPaddleTamexMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleTamexMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPaddleTamexMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleTamexMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdMappedData::Class_Name()
{
   return "R3BTofdMappedData";
}

//______________________________________________________________________________
const char *R3BTofdMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdCalData::Class_Name()
{
   return "R3BTofdCalData";
}

//______________________________________________________________________________
const char *R3BTofdCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdHitData::Class_Name()
{
   return "R3BTofdHitData";
}

//______________________________________________________________________________
const char *R3BTofdHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPaddleCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPaddleCalData::Class_Name()
{
   return "R3BPaddleCalData";
}

//______________________________________________________________________________
const char *R3BPaddleCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPaddleCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPaddleCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPaddleCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPaddleCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdPoint::Class_Name()
{
   return "R3BTofdPoint";
}

//______________________________________________________________________________
const char *R3BTofdPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTofdDigi::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTofdDigi::Class_Name()
{
   return "R3BTofdDigi";
}

//______________________________________________________________________________
const char *R3BTofdDigi::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigi*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTofdDigi::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigi*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTofdDigi::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigi*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTofdDigi::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTofdDigi*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPtofHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPtofHit::Class_Name()
{
   return "R3BPtofHit";
}

//______________________________________________________________________________
const char *R3BPtofHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPtofHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPtofHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPtofHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPtofHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcMappedData::Class_Name()
{
   return "R3BPdcMappedData";
}

//______________________________________________________________________________
const char *R3BPdcMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcCalData::Class_Name()
{
   return "R3BPdcCalData";
}

//______________________________________________________________________________
const char *R3BPdcCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BPdcHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BPdcHitData::Class_Name()
{
   return "R3BPdcHitData";
}

//______________________________________________________________________________
const char *R3BPdcHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BPdcHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BPdcHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BPdcHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BPdcHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberCalData::Class_Name()
{
   return "R3BBunchedFiberCalData";
}

//______________________________________________________________________________
const char *R3BBunchedFiberCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberHitData::Class_Name()
{
   return "R3BBunchedFiberHitData";
}

//______________________________________________________________________________
const char *R3BBunchedFiberHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBunchedFiberMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBunchedFiberMappedData::Class_Name()
{
   return "R3BBunchedFiberMappedData";
}

//______________________________________________________________________________
const char *R3BBunchedFiberMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBunchedFiberMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBunchedFiberMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBunchedFiberMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4Point::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4Point::Class_Name()
{
   return "R3BFi4Point";
}

//______________________________________________________________________________
const char *R3BFi4Point::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Point*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4Point::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Point*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4Point::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Point*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4Point::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4Point*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4CalItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4CalItem::Class_Name()
{
   return "R3BFi4CalItem";
}

//______________________________________________________________________________
const char *R3BFi4CalItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4CalItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4CalItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4CalItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4CalItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4CalItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4CalItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4CalItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFi4HitItem::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFi4HitItem::Class_Name()
{
   return "R3BFi4HitItem";
}

//______________________________________________________________________________
const char *R3BFi4HitItem::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4HitItem*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFi4HitItem::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4HitItem*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFi4HitItem::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4HitItem*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFi4HitItem::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFi4HitItem*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFibMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFibMappedData::Class_Name()
{
   return "R3BFibMappedData";
}

//______________________________________________________________________________
const char *R3BFibMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFibMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFibMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFibMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFibCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFibCalData::Class_Name()
{
   return "R3BFibCalData";
}

//______________________________________________________________________________
const char *R3BFibCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFibCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFibCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFibCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFibPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFibPoint::Class_Name()
{
   return "R3BFibPoint";
}

//______________________________________________________________________________
const char *R3BFibPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFibPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFibPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFibPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFibPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFibPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsMappedData::Class_Name()
{
   return "R3BAmsMappedData";
}

//______________________________________________________________________________
const char *R3BAmsMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsStripCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsStripCalData::Class_Name()
{
   return "R3BAmsStripCalData";
}

//______________________________________________________________________________
const char *R3BAmsStripCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsStripCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsStripCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsStripCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsStripCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BAmsHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BAmsHitData::Class_Name()
{
   return "R3BAmsHitData";
}

//______________________________________________________________________________
const char *R3BAmsHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BAmsHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BAmsHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BAmsHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BAmsHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BBeamMonitorMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BBeamMonitorMappedData::Class_Name()
{
   return "R3BBeamMonitorMappedData";
}

//______________________________________________________________________________
const char *R3BBeamMonitorMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamMonitorMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BBeamMonitorMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamMonitorMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BBeamMonitorMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamMonitorMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BBeamMonitorMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BBeamMonitorMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicPoint::Class_Name()
{
   return "R3BMusicPoint";
}

//______________________________________________________________________________
const char *R3BMusicPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicMappedData::Class_Name()
{
   return "R3BMusicMappedData";
}

//______________________________________________________________________________
const char *R3BMusicMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicCalData::Class_Name()
{
   return "R3BMusicCalData";
}

//______________________________________________________________________________
const char *R3BMusicCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BMusicHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BMusicHitData::Class_Name()
{
   return "R3BMusicHitData";
}

//______________________________________________________________________________
const char *R3BMusicHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BMusicHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BMusicHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BMusicHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BMusicHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSamplerMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSamplerMappedData::Class_Name()
{
   return "R3BSamplerMappedData";
}

//______________________________________________________________________________
const char *R3BSamplerMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSamplerMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSamplerMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSamplerMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSamplerMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSamplerMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSamplerMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSamplerMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibMappedData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibMappedData::Class_Name()
{
   return "R3BSfibMappedData";
}

//______________________________________________________________________________
const char *R3BSfibMappedData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMappedData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibMappedData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMappedData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibMappedData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMappedData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibMappedData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibMappedData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibCalData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibCalData::Class_Name()
{
   return "R3BSfibCalData";
}

//______________________________________________________________________________
const char *R3BSfibCalData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCalData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibCalData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCalData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibCalData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCalData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibCalData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibCalData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BSfibHitData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BSfibHitData::Class_Name()
{
   return "R3BSfibHitData";
}

//______________________________________________________________________________
const char *R3BSfibHitData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibHitData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BSfibHitData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibHitData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BSfibHitData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibHitData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BSfibHitData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BSfibHitData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BFrsData::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BFrsData::Class_Name()
{
   return "R3BFrsData";
}

//______________________________________________________________________________
const char *R3BFrsData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFrsData*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BFrsData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BFrsData*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BFrsData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFrsData*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BFrsData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BFrsData*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BStack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStack(void *p) {
      return  p ? new(p) ::R3BStack : new ::R3BStack;
   }
   static void *newArray_R3BStack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStack[nElements] : new ::R3BStack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStack(void *p) {
      delete ((::R3BStack*)p);
   }
   static void deleteArray_R3BStack(void *p) {
      delete [] ((::R3BStack*)p);
   }
   static void destruct_R3BStack(void *p) {
      typedef ::R3BStack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStack

//______________________________________________________________________________
void R3BMCTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMCTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMCTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMCTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMCTrack(void *p) {
      return  p ? new(p) ::R3BMCTrack : new ::R3BMCTrack;
   }
   static void *newArray_R3BMCTrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMCTrack[nElements] : new ::R3BMCTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMCTrack(void *p) {
      delete ((::R3BMCTrack*)p);
   }
   static void deleteArray_R3BMCTrack(void *p) {
      delete [] ((::R3BMCTrack*)p);
   }
   static void destruct_R3BMCTrack(void *p) {
      typedef ::R3BMCTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMCTrack

//______________________________________________________________________________
void R3BWRMasterData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BWRMasterData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BWRMasterData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BWRMasterData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BWRMasterData(void *p) {
      return  p ? new(p) ::R3BWRMasterData : new ::R3BWRMasterData;
   }
   static void *newArray_R3BWRMasterData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BWRMasterData[nElements] : new ::R3BWRMasterData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BWRMasterData(void *p) {
      delete ((::R3BWRMasterData*)p);
   }
   static void deleteArray_R3BWRMasterData(void *p) {
      delete [] ((::R3BWRMasterData*)p);
   }
   static void destruct_R3BWRMasterData(void *p) {
      typedef ::R3BWRMasterData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BWRMasterData

//______________________________________________________________________________
void R3BWRCalifaData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BWRCalifaData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BWRCalifaData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BWRCalifaData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BWRCalifaData(void *p) {
      return  p ? new(p) ::R3BWRCalifaData : new ::R3BWRCalifaData;
   }
   static void *newArray_R3BWRCalifaData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BWRCalifaData[nElements] : new ::R3BWRCalifaData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BWRCalifaData(void *p) {
      delete ((::R3BWRCalifaData*)p);
   }
   static void deleteArray_R3BWRCalifaData(void *p) {
      delete [] ((::R3BWRCalifaData*)p);
   }
   static void destruct_R3BWRCalifaData(void *p) {
      typedef ::R3BWRCalifaData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BWRCalifaData

//______________________________________________________________________________
void R3BWRAmsData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BWRAmsData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BWRAmsData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BWRAmsData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BWRAmsData(void *p) {
      return  p ? new(p) ::R3BWRAmsData : new ::R3BWRAmsData;
   }
   static void *newArray_R3BWRAmsData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BWRAmsData[nElements] : new ::R3BWRAmsData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BWRAmsData(void *p) {
      delete ((::R3BWRAmsData*)p);
   }
   static void deleteArray_R3BWRAmsData(void *p) {
      delete [] ((::R3BWRAmsData*)p);
   }
   static void destruct_R3BWRAmsData(void *p) {
      typedef ::R3BWRAmsData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BWRAmsData

//______________________________________________________________________________
void R3BHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BHit(void *p) {
      return  p ? new(p) ::R3BHit : new ::R3BHit;
   }
   static void *newArray_R3BHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BHit[nElements] : new ::R3BHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BHit(void *p) {
      delete ((::R3BHit*)p);
   }
   static void deleteArray_R3BHit(void *p) {
      delete [] ((::R3BHit*)p);
   }
   static void destruct_R3BHit(void *p) {
      typedef ::R3BHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BHit

//______________________________________________________________________________
void R3BTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrack(void *p) {
      return  p ? new(p) ::R3BTrack : new ::R3BTrack;
   }
   static void *newArray_R3BTrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrack[nElements] : new ::R3BTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrack(void *p) {
      delete ((::R3BTrack*)p);
   }
   static void deleteArray_R3BTrack(void *p) {
      delete [] ((::R3BTrack*)p);
   }
   static void destruct_R3BTrack(void *p) {
      typedef ::R3BTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrack

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDouble(void *p) {
      return  p ? new(p) ::R3BDouble : new ::R3BDouble;
   }
   static void *newArray_R3BDouble(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDouble[nElements] : new ::R3BDouble[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDouble(void *p) {
      delete ((::R3BDouble*)p);
   }
   static void deleteArray_R3BDouble(void *p) {
      delete [] ((::R3BDouble*)p);
   }
   static void destruct_R3BDouble(void *p) {
      typedef ::R3BDouble current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDouble

//______________________________________________________________________________
void R3BXBallPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallPoint(void *p) {
      return  p ? new(p) ::R3BXBallPoint : new ::R3BXBallPoint;
   }
   static void *newArray_R3BXBallPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallPoint[nElements] : new ::R3BXBallPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallPoint(void *p) {
      delete ((::R3BXBallPoint*)p);
   }
   static void deleteArray_R3BXBallPoint(void *p) {
      delete [] ((::R3BXBallPoint*)p);
   }
   static void destruct_R3BXBallPoint(void *p) {
      typedef ::R3BXBallPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallPoint

//______________________________________________________________________________
void R3BXBallCrystalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallCrystalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallCrystalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallCrystalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallCrystalHit(void *p) {
      return  p ? new(p) ::R3BXBallCrystalHit : new ::R3BXBallCrystalHit;
   }
   static void *newArray_R3BXBallCrystalHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallCrystalHit[nElements] : new ::R3BXBallCrystalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallCrystalHit(void *p) {
      delete ((::R3BXBallCrystalHit*)p);
   }
   static void deleteArray_R3BXBallCrystalHit(void *p) {
      delete [] ((::R3BXBallCrystalHit*)p);
   }
   static void destruct_R3BXBallCrystalHit(void *p) {
      typedef ::R3BXBallCrystalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallCrystalHit

//______________________________________________________________________________
void R3BXBallCrystalHitSim::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BXBallCrystalHitSim.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BXBallCrystalHitSim::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BXBallCrystalHitSim::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BXBallCrystalHitSim(void *p) {
      return  p ? new(p) ::R3BXBallCrystalHitSim : new ::R3BXBallCrystalHitSim;
   }
   static void *newArray_R3BXBallCrystalHitSim(Long_t nElements, void *p) {
      return p ? new(p) ::R3BXBallCrystalHitSim[nElements] : new ::R3BXBallCrystalHitSim[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BXBallCrystalHitSim(void *p) {
      delete ((::R3BXBallCrystalHitSim*)p);
   }
   static void deleteArray_R3BXBallCrystalHitSim(void *p) {
      delete [] ((::R3BXBallCrystalHitSim*)p);
   }
   static void destruct_R3BXBallCrystalHitSim(void *p) {
      typedef ::R3BXBallCrystalHitSim current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BXBallCrystalHitSim

//______________________________________________________________________________
void R3BCalifaCrystalCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaCrystalCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaCrystalCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaCrystalCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaCrystalCalData(void *p) {
      return  p ? new(p) ::R3BCalifaCrystalCalData : new ::R3BCalifaCrystalCalData;
   }
   static void *newArray_R3BCalifaCrystalCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaCrystalCalData[nElements] : new ::R3BCalifaCrystalCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaCrystalCalData(void *p) {
      delete ((::R3BCalifaCrystalCalData*)p);
   }
   static void deleteArray_R3BCalifaCrystalCalData(void *p) {
      delete [] ((::R3BCalifaCrystalCalData*)p);
   }
   static void destruct_R3BCalifaCrystalCalData(void *p) {
      typedef ::R3BCalifaCrystalCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaCrystalCalData

//______________________________________________________________________________
void R3BCalifaMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaMappedData(void *p) {
      return  p ? new(p) ::R3BCalifaMappedData : new ::R3BCalifaMappedData;
   }
   static void *newArray_R3BCalifaMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaMappedData[nElements] : new ::R3BCalifaMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaMappedData(void *p) {
      delete ((::R3BCalifaMappedData*)p);
   }
   static void deleteArray_R3BCalifaMappedData(void *p) {
      delete [] ((::R3BCalifaMappedData*)p);
   }
   static void destruct_R3BCalifaMappedData(void *p) {
      typedef ::R3BCalifaMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaMappedData

//______________________________________________________________________________
void R3BCalifaHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaHitData(void *p) {
      return  p ? new(p) ::R3BCalifaHitData : new ::R3BCalifaHitData;
   }
   static void *newArray_R3BCalifaHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaHitData[nElements] : new ::R3BCalifaHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaHitData(void *p) {
      delete ((::R3BCalifaHitData*)p);
   }
   static void deleteArray_R3BCalifaHitData(void *p) {
      delete [] ((::R3BCalifaHitData*)p);
   }
   static void destruct_R3BCalifaHitData(void *p) {
      typedef ::R3BCalifaHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaHitData

//______________________________________________________________________________
void R3BCalifaPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BCalifaPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BCalifaPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BCalifaPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BCalifaPoint(void *p) {
      return  p ? new(p) ::R3BCalifaPoint : new ::R3BCalifaPoint;
   }
   static void *newArray_R3BCalifaPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BCalifaPoint[nElements] : new ::R3BCalifaPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BCalifaPoint(void *p) {
      delete ((::R3BCalifaPoint*)p);
   }
   static void deleteArray_R3BCalifaPoint(void *p) {
      delete [] ((::R3BCalifaPoint*)p);
   }
   static void destruct_R3BCalifaPoint(void *p) {
      typedef ::R3BCalifaPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BCalifaPoint

//______________________________________________________________________________
void R3BHPGeDetPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BHPGeDetPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BHPGeDetPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BHPGeDetPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BHPGeDetPoint(void *p) {
      return  p ? new(p) ::R3BHPGeDetPoint : new ::R3BHPGeDetPoint;
   }
   static void *newArray_R3BHPGeDetPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BHPGeDetPoint[nElements] : new ::R3BHPGeDetPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BHPGeDetPoint(void *p) {
      delete ((::R3BHPGeDetPoint*)p);
   }
   static void deleteArray_R3BHPGeDetPoint(void *p) {
      delete [] ((::R3BHPGeDetPoint*)p);
   }
   static void destruct_R3BHPGeDetPoint(void *p) {
      typedef ::R3BHPGeDetPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BHPGeDetPoint

//______________________________________________________________________________
void R3BDchPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchPoint(void *p) {
      return  p ? new(p) ::R3BDchPoint : new ::R3BDchPoint;
   }
   static void *newArray_R3BDchPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchPoint[nElements] : new ::R3BDchPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchPoint(void *p) {
      delete ((::R3BDchPoint*)p);
   }
   static void deleteArray_R3BDchPoint(void *p) {
      delete [] ((::R3BDchPoint*)p);
   }
   static void destruct_R3BDchPoint(void *p) {
      typedef ::R3BDchPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchPoint

//______________________________________________________________________________
void R3BDchFullPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchFullPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchFullPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchFullPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchFullPoint(void *p) {
      return  p ? new(p) ::R3BDchFullPoint : new ::R3BDchFullPoint;
   }
   static void *newArray_R3BDchFullPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchFullPoint[nElements] : new ::R3BDchFullPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchFullPoint(void *p) {
      delete ((::R3BDchFullPoint*)p);
   }
   static void deleteArray_R3BDchFullPoint(void *p) {
      delete [] ((::R3BDchFullPoint*)p);
   }
   static void destruct_R3BDchFullPoint(void *p) {
      typedef ::R3BDchFullPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchFullPoint

//______________________________________________________________________________
void R3BGfiPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiPoint(void *p) {
      return  p ? new(p) ::R3BGfiPoint : new ::R3BGfiPoint;
   }
   static void *newArray_R3BGfiPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiPoint[nElements] : new ::R3BGfiPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiPoint(void *p) {
      delete ((::R3BGfiPoint*)p);
   }
   static void deleteArray_R3BGfiPoint(void *p) {
      delete [] ((::R3BGfiPoint*)p);
   }
   static void destruct_R3BGfiPoint(void *p) {
      typedef ::R3BGfiPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiPoint

//______________________________________________________________________________
void R3BmTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofPoint(void *p) {
      return  p ? new(p) ::R3BmTofPoint : new ::R3BmTofPoint;
   }
   static void *newArray_R3BmTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofPoint[nElements] : new ::R3BmTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofPoint(void *p) {
      delete ((::R3BmTofPoint*)p);
   }
   static void deleteArray_R3BmTofPoint(void *p) {
      delete [] ((::R3BmTofPoint*)p);
   }
   static void destruct_R3BmTofPoint(void *p) {
      typedef ::R3BmTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofPoint

//______________________________________________________________________________
void R3BmTofDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BmTofDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BmTofDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BmTofDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BmTofDigi(void *p) {
      return  p ? new(p) ::R3BmTofDigi : new ::R3BmTofDigi;
   }
   static void *newArray_R3BmTofDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BmTofDigi[nElements] : new ::R3BmTofDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BmTofDigi(void *p) {
      delete ((::R3BmTofDigi*)p);
   }
   static void deleteArray_R3BmTofDigi(void *p) {
      delete [] ((::R3BmTofDigi*)p);
   }
   static void destruct_R3BmTofDigi(void *p) {
      typedef ::R3BmTofDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BmTofDigi

//______________________________________________________________________________
void R3BTofPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofPoint(void *p) {
      return  p ? new(p) ::R3BTofPoint : new ::R3BTofPoint;
   }
   static void *newArray_R3BTofPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofPoint[nElements] : new ::R3BTofPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofPoint(void *p) {
      delete ((::R3BTofPoint*)p);
   }
   static void deleteArray_R3BTofPoint(void *p) {
      delete [] ((::R3BTofPoint*)p);
   }
   static void destruct_R3BTofPoint(void *p) {
      typedef ::R3BTofPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofPoint

//______________________________________________________________________________
void R3BVetoPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BVetoPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BVetoPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BVetoPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BVetoPoint(void *p) {
      return  p ? new(p) ::R3BVetoPoint : new ::R3BVetoPoint;
   }
   static void *newArray_R3BVetoPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BVetoPoint[nElements] : new ::R3BVetoPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BVetoPoint(void *p) {
      delete ((::R3BVetoPoint*)p);
   }
   static void deleteArray_R3BVetoPoint(void *p) {
      delete [] ((::R3BVetoPoint*)p);
   }
   static void destruct_R3BVetoPoint(void *p) {
      typedef ::R3BVetoPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BVetoPoint

//______________________________________________________________________________
void ELILuMonPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELILuMonPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ELILuMonPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(ELILuMonPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELILuMonPoint(void *p) {
      return  p ? new(p) ::ELILuMonPoint : new ::ELILuMonPoint;
   }
   static void *newArray_ELILuMonPoint(Long_t nElements, void *p) {
      return p ? new(p) ::ELILuMonPoint[nElements] : new ::ELILuMonPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELILuMonPoint(void *p) {
      delete ((::ELILuMonPoint*)p);
   }
   static void deleteArray_ELILuMonPoint(void *p) {
      delete [] ((::ELILuMonPoint*)p);
   }
   static void destruct_ELILuMonPoint(void *p) {
      typedef ::ELILuMonPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::ELILuMonPoint

//______________________________________________________________________________
void R3BTraPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraPoint(void *p) {
      return  p ? new(p) ::R3BTraPoint : new ::R3BTraPoint;
   }
   static void *newArray_R3BTraPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraPoint[nElements] : new ::R3BTraPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraPoint(void *p) {
      delete ((::R3BTraPoint*)p);
   }
   static void deleteArray_R3BTraPoint(void *p) {
      delete [] ((::R3BTraPoint*)p);
   }
   static void destruct_R3BTraPoint(void *p) {
      typedef ::R3BTraPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraPoint

//______________________________________________________________________________
void R3BTraHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraHit(void *p) {
      return  p ? new(p) ::R3BTraHit : new ::R3BTraHit;
   }
   static void *newArray_R3BTraHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraHit[nElements] : new ::R3BTraHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraHit(void *p) {
      delete ((::R3BTraHit*)p);
   }
   static void deleteArray_R3BTraHit(void *p) {
      delete [] ((::R3BTraHit*)p);
   }
   static void destruct_R3BTraHit(void *p) {
      typedef ::R3BTraHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraHit

//______________________________________________________________________________
void R3BSitrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSitrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSitrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSitrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSitrackerHit(void *p) {
      return  p ? new(p) ::R3BSitrackerHit : new ::R3BSitrackerHit;
   }
   static void *newArray_R3BSitrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSitrackerHit[nElements] : new ::R3BSitrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSitrackerHit(void *p) {
      delete ((::R3BSitrackerHit*)p);
   }
   static void deleteArray_R3BSitrackerHit(void *p) {
      delete [] ((::R3BSitrackerHit*)p);
   }
   static void destruct_R3BSitrackerHit(void *p) {
      typedef ::R3BSitrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSitrackerHit

//______________________________________________________________________________
void R3BTrackerHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTrackerHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTrackerHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTrackerHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTrackerHit(void *p) {
      return  p ? new(p) ::R3BTrackerHit : new ::R3BTrackerHit;
   }
   static void *newArray_R3BTrackerHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTrackerHit[nElements] : new ::R3BTrackerHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTrackerHit(void *p) {
      delete ((::R3BTrackerHit*)p);
   }
   static void deleteArray_R3BTrackerHit(void *p) {
      delete [] ((::R3BTrackerHit*)p);
   }
   static void destruct_R3BTrackerHit(void *p) {
      typedef ::R3BTrackerHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTrackerHit

//______________________________________________________________________________
void R3BStartrackPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackPoint(void *p) {
      return  p ? new(p) ::R3BStartrackPoint : new ::R3BStartrackPoint;
   }
   static void *newArray_R3BStartrackPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackPoint[nElements] : new ::R3BStartrackPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackPoint(void *p) {
      delete ((::R3BStartrackPoint*)p);
   }
   static void deleteArray_R3BStartrackPoint(void *p) {
      delete [] ((::R3BStartrackPoint*)p);
   }
   static void destruct_R3BStartrackPoint(void *p) {
      typedef ::R3BStartrackPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackPoint

//______________________________________________________________________________
void R3BStartrackHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackHit(void *p) {
      return  p ? new(p) ::R3BStartrackHit : new ::R3BStartrackHit;
   }
   static void *newArray_R3BStartrackHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackHit[nElements] : new ::R3BStartrackHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackHit(void *p) {
      delete ((::R3BStartrackHit*)p);
   }
   static void deleteArray_R3BStartrackHit(void *p) {
      delete [] ((::R3BStartrackHit*)p);
   }
   static void destruct_R3BStartrackHit(void *p) {
      typedef ::R3BStartrackHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackHit

//______________________________________________________________________________
void R3BStartrackerDigitHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackerDigitHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackerDigitHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackerDigitHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackerDigitHit(void *p) {
      return  p ? new(p) ::R3BStartrackerDigitHit : new ::R3BStartrackerDigitHit;
   }
   static void *newArray_R3BStartrackerDigitHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackerDigitHit[nElements] : new ::R3BStartrackerDigitHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackerDigitHit(void *p) {
      delete ((::R3BStartrackerDigitHit*)p);
   }
   static void deleteArray_R3BStartrackerDigitHit(void *p) {
      delete [] ((::R3BStartrackerDigitHit*)p);
   }
   static void destruct_R3BStartrackerDigitHit(void *p) {
      typedef ::R3BStartrackerDigitHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackerDigitHit

//______________________________________________________________________________
void R3BStartrackMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackMappedData(void *p) {
      return  p ? new(p) ::R3BStartrackMappedData : new ::R3BStartrackMappedData;
   }
   static void *newArray_R3BStartrackMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackMappedData[nElements] : new ::R3BStartrackMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackMappedData(void *p) {
      delete ((::R3BStartrackMappedData*)p);
   }
   static void deleteArray_R3BStartrackMappedData(void *p) {
      delete [] ((::R3BStartrackMappedData*)p);
   }
   static void destruct_R3BStartrackMappedData(void *p) {
      typedef ::R3BStartrackMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackMappedData

//______________________________________________________________________________
void R3BStartrackCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStartrackCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStartrackCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStartrackCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BStartrackCalData(void *p) {
      return  p ? new(p) ::R3BStartrackCalData : new ::R3BStartrackCalData;
   }
   static void *newArray_R3BStartrackCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BStartrackCalData[nElements] : new ::R3BStartrackCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BStartrackCalData(void *p) {
      delete ((::R3BStartrackCalData*)p);
   }
   static void deleteArray_R3BStartrackCalData(void *p) {
      delete [] ((::R3BStartrackCalData*)p);
   }
   static void destruct_R3BStartrackCalData(void *p) {
      typedef ::R3BStartrackCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStartrackCalData

//______________________________________________________________________________
void R3BLandPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandPoint(void *p) {
      return  p ? new(p) ::R3BLandPoint : new ::R3BLandPoint;
   }
   static void *newArray_R3BLandPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandPoint[nElements] : new ::R3BLandPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandPoint(void *p) {
      delete ((::R3BLandPoint*)p);
   }
   static void deleteArray_R3BLandPoint(void *p) {
      delete [] ((::R3BLandPoint*)p);
   }
   static void destruct_R3BLandPoint(void *p) {
      typedef ::R3BLandPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandPoint

//______________________________________________________________________________
void R3BLandDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandDigi(void *p) {
      return  p ? new(p) ::R3BLandDigi : new ::R3BLandDigi;
   }
   static void *newArray_R3BLandDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandDigi[nElements] : new ::R3BLandDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandDigi(void *p) {
      delete ((::R3BLandDigi*)p);
   }
   static void deleteArray_R3BLandDigi(void *p) {
      delete [] ((::R3BLandDigi*)p);
   }
   static void destruct_R3BLandDigi(void *p) {
      typedef ::R3BLandDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandDigi

//______________________________________________________________________________
void R3BLandFirstHits::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandFirstHits.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandFirstHits::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandFirstHits::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandFirstHits(void *p) {
      return  p ? new(p) ::R3BLandFirstHits : new ::R3BLandFirstHits;
   }
   static void *newArray_R3BLandFirstHits(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandFirstHits[nElements] : new ::R3BLandFirstHits[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandFirstHits(void *p) {
      delete ((::R3BLandFirstHits*)p);
   }
   static void deleteArray_R3BLandFirstHits(void *p) {
      delete [] ((::R3BLandFirstHits*)p);
   }
   static void destruct_R3BLandFirstHits(void *p) {
      typedef ::R3BLandFirstHits current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandFirstHits

//______________________________________________________________________________
void R3BLandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLandHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLandHit(void *p) {
      return  p ? new(p) ::R3BLandHit : new ::R3BLandHit;
   }
   static void *newArray_R3BLandHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLandHit[nElements] : new ::R3BLandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLandHit(void *p) {
      delete ((::R3BLandHit*)p);
   }
   static void deleteArray_R3BLandHit(void *p) {
      delete [] ((::R3BLandHit*)p);
   }
   static void destruct_R3BLandHit(void *p) {
      typedef ::R3BLandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLandHit

//______________________________________________________________________________
void R3BPaddleCrystalHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPaddleCrystalHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPaddleCrystalHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPaddleCrystalHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPaddleCrystalHit(void *p) {
      return  p ? new(p) ::R3BPaddleCrystalHit : new ::R3BPaddleCrystalHit;
   }
   static void *newArray_R3BPaddleCrystalHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPaddleCrystalHit[nElements] : new ::R3BPaddleCrystalHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPaddleCrystalHit(void *p) {
      delete ((::R3BPaddleCrystalHit*)p);
   }
   static void deleteArray_R3BPaddleCrystalHit(void *p) {
      delete [] ((::R3BPaddleCrystalHit*)p);
   }
   static void destruct_R3BPaddleCrystalHit(void *p) {
      typedef ::R3BPaddleCrystalHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPaddleCrystalHit

//______________________________________________________________________________
void R3BNeutronTrack::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeutronTrack.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeutronTrack::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeutronTrack::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeutronTrack(void *p) {
      return  p ? new(p) ::R3BNeutronTrack : new ::R3BNeutronTrack;
   }
   static void *newArray_R3BNeutronTrack(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeutronTrack[nElements] : new ::R3BNeutronTrack[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeutronTrack(void *p) {
      delete ((::R3BNeutronTrack*)p);
   }
   static void deleteArray_R3BNeutronTrack(void *p) {
      delete [] ((::R3BNeutronTrack*)p);
   }
   static void destruct_R3BNeutronTrack(void *p) {
      typedef ::R3BNeutronTrack current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeutronTrack

//______________________________________________________________________________
void R3BDchDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDchDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDchDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDchDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDchDigi(void *p) {
      return  p ? new(p) ::R3BDchDigi : new ::R3BDchDigi;
   }
   static void *newArray_R3BDchDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDchDigi[nElements] : new ::R3BDchDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDchDigi(void *p) {
      delete ((::R3BDchDigi*)p);
   }
   static void deleteArray_R3BDchDigi(void *p) {
      delete [] ((::R3BDchDigi*)p);
   }
   static void destruct_R3BDchDigi(void *p) {
      typedef ::R3BDchDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDchDigi

//______________________________________________________________________________
void R3BDch2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BDch2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BDch2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BDch2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BDch2pDigi(void *p) {
      return  p ? new(p) ::R3BDch2pDigi : new ::R3BDch2pDigi;
   }
   static void *newArray_R3BDch2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BDch2pDigi[nElements] : new ::R3BDch2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BDch2pDigi(void *p) {
      delete ((::R3BDch2pDigi*)p);
   }
   static void deleteArray_R3BDch2pDigi(void *p) {
      delete [] ((::R3BDch2pDigi*)p);
   }
   static void destruct_R3BDch2pDigi(void *p) {
      typedef ::R3BDch2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BDch2pDigi

//______________________________________________________________________________
void R3BTofDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofDigi(void *p) {
      return  p ? new(p) ::R3BTofDigi : new ::R3BTofDigi;
   }
   static void *newArray_R3BTofDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofDigi[nElements] : new ::R3BTofDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofDigi(void *p) {
      delete ((::R3BTofDigi*)p);
   }
   static void deleteArray_R3BTofDigi(void *p) {
      delete [] ((::R3BTofDigi*)p);
   }
   static void destruct_R3BTofDigi(void *p) {
      typedef ::R3BTofDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofDigi

//______________________________________________________________________________
void R3BTof2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTof2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTof2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTof2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTof2pDigi(void *p) {
      return  p ? new(p) ::R3BTof2pDigi : new ::R3BTof2pDigi;
   }
   static void *newArray_R3BTof2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTof2pDigi[nElements] : new ::R3BTof2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTof2pDigi(void *p) {
      delete ((::R3BTof2pDigi*)p);
   }
   static void deleteArray_R3BTof2pDigi(void *p) {
      delete [] ((::R3BTof2pDigi*)p);
   }
   static void destruct_R3BTof2pDigi(void *p) {
      typedef ::R3BTof2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTof2pDigi

//______________________________________________________________________________
void R3BGfiDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BGfiDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BGfiDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BGfiDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BGfiDigi(void *p) {
      return  p ? new(p) ::R3BGfiDigi : new ::R3BGfiDigi;
   }
   static void *newArray_R3BGfiDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BGfiDigi[nElements] : new ::R3BGfiDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BGfiDigi(void *p) {
      delete ((::R3BGfiDigi*)p);
   }
   static void deleteArray_R3BGfiDigi(void *p) {
      delete [] ((::R3BGfiDigi*)p);
   }
   static void destruct_R3BGfiDigi(void *p) {
      typedef ::R3BGfiDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BGfiDigi

//______________________________________________________________________________
void R3BTraDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraDigi(void *p) {
      return  p ? new(p) ::R3BTraDigi : new ::R3BTraDigi;
   }
   static void *newArray_R3BTraDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraDigi[nElements] : new ::R3BTraDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraDigi(void *p) {
      delete ((::R3BTraDigi*)p);
   }
   static void deleteArray_R3BTraDigi(void *p) {
      delete [] ((::R3BTraDigi*)p);
   }
   static void destruct_R3BTraDigi(void *p) {
      typedef ::R3BTraDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraDigi

//______________________________________________________________________________
void R3BTra2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTra2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTra2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTra2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTra2pDigi(void *p) {
      return  p ? new(p) ::R3BTra2pDigi : new ::R3BTra2pDigi;
   }
   static void *newArray_R3BTra2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTra2pDigi[nElements] : new ::R3BTra2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTra2pDigi(void *p) {
      delete ((::R3BTra2pDigi*)p);
   }
   static void deleteArray_R3BTra2pDigi(void *p) {
      delete [] ((::R3BTra2pDigi*)p);
   }
   static void destruct_R3BTra2pDigi(void *p) {
      typedef ::R3BTra2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTra2pDigi

//______________________________________________________________________________
void R3BTraFraDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTraFraDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTraFraDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTraFraDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTraFraDigi(void *p) {
      return  p ? new(p) ::R3BTraFraDigi : new ::R3BTraFraDigi;
   }
   static void *newArray_R3BTraFraDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTraFraDigi[nElements] : new ::R3BTraFraDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTraFraDigi(void *p) {
      delete ((::R3BTraFraDigi*)p);
   }
   static void deleteArray_R3BTraFraDigi(void *p) {
      delete [] ((::R3BTraFraDigi*)p);
   }
   static void destruct_R3BTraFraDigi(void *p) {
      typedef ::R3BTraFraDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTraFraDigi

//______________________________________________________________________________
void R3BTargetDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTargetDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTargetDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTargetDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTargetDigi(void *p) {
      return  p ? new(p) ::R3BTargetDigi : new ::R3BTargetDigi;
   }
   static void *newArray_R3BTargetDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTargetDigi[nElements] : new ::R3BTargetDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTargetDigi(void *p) {
      delete ((::R3BTargetDigi*)p);
   }
   static void deleteArray_R3BTargetDigi(void *p) {
      delete [] ((::R3BTargetDigi*)p);
   }
   static void destruct_R3BTargetDigi(void *p) {
      typedef ::R3BTargetDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTargetDigi

//______________________________________________________________________________
void R3BTarget2pDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTarget2pDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTarget2pDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTarget2pDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTarget2pDigi(void *p) {
      return  p ? new(p) ::R3BTarget2pDigi : new ::R3BTarget2pDigi;
   }
   static void *newArray_R3BTarget2pDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTarget2pDigi[nElements] : new ::R3BTarget2pDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTarget2pDigi(void *p) {
      delete ((::R3BTarget2pDigi*)p);
   }
   static void deleteArray_R3BTarget2pDigi(void *p) {
      delete [] ((::R3BTarget2pDigi*)p);
   }
   static void destruct_R3BTarget2pDigi(void *p) {
      typedef ::R3BTarget2pDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTarget2pDigi

//______________________________________________________________________________
void R3BMfiPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiPoint(void *p) {
      return  p ? new(p) ::R3BMfiPoint : new ::R3BMfiPoint;
   }
   static void *newArray_R3BMfiPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiPoint[nElements] : new ::R3BMfiPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiPoint(void *p) {
      delete ((::R3BMfiPoint*)p);
   }
   static void deleteArray_R3BMfiPoint(void *p) {
      delete [] ((::R3BMfiPoint*)p);
   }
   static void destruct_R3BMfiPoint(void *p) {
      typedef ::R3BMfiPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiPoint

//______________________________________________________________________________
void R3BMfiDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMfiDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMfiDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMfiDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMfiDigi(void *p) {
      return  p ? new(p) ::R3BMfiDigi : new ::R3BMfiDigi;
   }
   static void *newArray_R3BMfiDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMfiDigi[nElements] : new ::R3BMfiDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMfiDigi(void *p) {
      delete ((::R3BMfiDigi*)p);
   }
   static void deleteArray_R3BMfiDigi(void *p) {
      delete [] ((::R3BMfiDigi*)p);
   }
   static void destruct_R3BMfiDigi(void *p) {
      typedef ::R3BMfiDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMfiDigi

//______________________________________________________________________________
void R3BPspPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspPoint(void *p) {
      return  p ? new(p) ::R3BPspPoint : new ::R3BPspPoint;
   }
   static void *newArray_R3BPspPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspPoint[nElements] : new ::R3BPspPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspPoint(void *p) {
      delete ((::R3BPspPoint*)p);
   }
   static void deleteArray_R3BPspPoint(void *p) {
      delete [] ((::R3BPspPoint*)p);
   }
   static void destruct_R3BPspPoint(void *p) {
      typedef ::R3BPspPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspPoint

//______________________________________________________________________________
void R3BPspDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspDigi(void *p) {
      return  p ? new(p) ::R3BPspDigi : new ::R3BPspDigi;
   }
   static void *newArray_R3BPspDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspDigi[nElements] : new ::R3BPspDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspDigi(void *p) {
      delete ((::R3BPspDigi*)p);
   }
   static void deleteArray_R3BPspDigi(void *p) {
      delete [] ((::R3BPspDigi*)p);
   }
   static void destruct_R3BPspDigi(void *p) {
      typedef ::R3BPspDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspDigi

//______________________________________________________________________________
void R3BNeulandTacquilaMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandTacquilaMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandTacquilaMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandTacquilaMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandTacquilaMappedData(void *p) {
      return  p ? new(p) ::R3BNeulandTacquilaMappedData : new ::R3BNeulandTacquilaMappedData;
   }
   static void *newArray_R3BNeulandTacquilaMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandTacquilaMappedData[nElements] : new ::R3BNeulandTacquilaMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandTacquilaMappedData(void *p) {
      delete ((::R3BNeulandTacquilaMappedData*)p);
   }
   static void deleteArray_R3BNeulandTacquilaMappedData(void *p) {
      delete [] ((::R3BNeulandTacquilaMappedData*)p);
   }
   static void destruct_R3BNeulandTacquilaMappedData(void *p) {
      typedef ::R3BNeulandTacquilaMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandTacquilaMappedData

//______________________________________________________________________________
void R3BNeulandCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandCalData(void *p) {
      return  p ? new(p) ::R3BNeulandCalData : new ::R3BNeulandCalData;
   }
   static void *newArray_R3BNeulandCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandCalData[nElements] : new ::R3BNeulandCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandCalData(void *p) {
      delete ((::R3BNeulandCalData*)p);
   }
   static void deleteArray_R3BNeulandCalData(void *p) {
      delete [] ((::R3BNeulandCalData*)p);
   }
   static void destruct_R3BNeulandCalData(void *p) {
      typedef ::R3BNeulandCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandCalData

//______________________________________________________________________________
void R3BNeulandPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandPoint(void *p) {
      return  p ? new(p) ::R3BNeulandPoint : new ::R3BNeulandPoint;
   }
   static void *newArray_R3BNeulandPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandPoint[nElements] : new ::R3BNeulandPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandPoint(void *p) {
      delete ((::R3BNeulandPoint*)p);
   }
   static void deleteArray_R3BNeulandPoint(void *p) {
      delete [] ((::R3BNeulandPoint*)p);
   }
   static void destruct_R3BNeulandPoint(void *p) {
      typedef ::R3BNeulandPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandPoint

//______________________________________________________________________________
void R3BNeulandHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandHit(void *p) {
      return  p ? new(p) ::R3BNeulandHit : new ::R3BNeulandHit;
   }
   static void *newArray_R3BNeulandHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandHit[nElements] : new ::R3BNeulandHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandHit(void *p) {
      delete ((::R3BNeulandHit*)p);
   }
   static void deleteArray_R3BNeulandHit(void *p) {
      delete [] ((::R3BNeulandHit*)p);
   }
   static void destruct_R3BNeulandHit(void *p) {
      typedef ::R3BNeulandHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandHit

//______________________________________________________________________________
void R3BNeulandMultiplicity::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandMultiplicity.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandMultiplicity::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandMultiplicity::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandMultiplicity(void *p) {
      return  p ? new(p) ::R3BNeulandMultiplicity : new ::R3BNeulandMultiplicity;
   }
   static void *newArray_R3BNeulandMultiplicity(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandMultiplicity[nElements] : new ::R3BNeulandMultiplicity[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandMultiplicity(void *p) {
      delete ((::R3BNeulandMultiplicity*)p);
   }
   static void deleteArray_R3BNeulandMultiplicity(void *p) {
      delete [] ((::R3BNeulandMultiplicity*)p);
   }
   static void destruct_R3BNeulandMultiplicity(void *p) {
      typedef ::R3BNeulandMultiplicity current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandMultiplicity

//______________________________________________________________________________
void R3BNeulandCluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandCluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandCluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandCluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandCluster(void *p) {
      return  p ? new(p) ::R3BNeulandCluster : new ::R3BNeulandCluster;
   }
   static void *newArray_R3BNeulandCluster(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandCluster[nElements] : new ::R3BNeulandCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandCluster(void *p) {
      delete ((::R3BNeulandCluster*)p);
   }
   static void deleteArray_R3BNeulandCluster(void *p) {
      delete [] ((::R3BNeulandCluster*)p);
   }
   static void destruct_R3BNeulandCluster(void *p) {
      typedef ::R3BNeulandCluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandCluster

//______________________________________________________________________________
void R3BNeulandNeutron::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BNeulandNeutron.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BNeulandNeutron::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BNeulandNeutron::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BNeulandNeutron(void *p) {
      return  p ? new(p) ::R3BNeulandNeutron : new ::R3BNeulandNeutron;
   }
   static void *newArray_R3BNeulandNeutron(Long_t nElements, void *p) {
      return p ? new(p) ::R3BNeulandNeutron[nElements] : new ::R3BNeulandNeutron[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BNeulandNeutron(void *p) {
      delete ((::R3BNeulandNeutron*)p);
   }
   static void deleteArray_R3BNeulandNeutron(void *p) {
      delete [] ((::R3BNeulandNeutron*)p);
   }
   static void destruct_R3BNeulandNeutron(void *p) {
      typedef ::R3BNeulandNeutron current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BNeulandNeutron

//______________________________________________________________________________
void R3BPspxMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxMappedData(void *p) {
      return  p ? new(p) ::R3BPspxMappedData : new ::R3BPspxMappedData;
   }
   static void *newArray_R3BPspxMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxMappedData[nElements] : new ::R3BPspxMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxMappedData(void *p) {
      delete ((::R3BPspxMappedData*)p);
   }
   static void deleteArray_R3BPspxMappedData(void *p) {
      delete [] ((::R3BPspxMappedData*)p);
   }
   static void destruct_R3BPspxMappedData(void *p) {
      typedef ::R3BPspxMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxMappedData

//______________________________________________________________________________
void R3BPspxPrecalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxPrecalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxPrecalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxPrecalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxPrecalData(void *p) {
      return  p ? new(p) ::R3BPspxPrecalData : new ::R3BPspxPrecalData;
   }
   static void *newArray_R3BPspxPrecalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxPrecalData[nElements] : new ::R3BPspxPrecalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxPrecalData(void *p) {
      delete ((::R3BPspxPrecalData*)p);
   }
   static void deleteArray_R3BPspxPrecalData(void *p) {
      delete [] ((::R3BPspxPrecalData*)p);
   }
   static void destruct_R3BPspxPrecalData(void *p) {
      typedef ::R3BPspxPrecalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxPrecalData

//______________________________________________________________________________
void R3BPspxCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxCalData(void *p) {
      return  p ? new(p) ::R3BPspxCalData : new ::R3BPspxCalData;
   }
   static void *newArray_R3BPspxCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxCalData[nElements] : new ::R3BPspxCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxCalData(void *p) {
      delete ((::R3BPspxCalData*)p);
   }
   static void deleteArray_R3BPspxCalData(void *p) {
      delete [] ((::R3BPspxCalData*)p);
   }
   static void destruct_R3BPspxCalData(void *p) {
      typedef ::R3BPspxCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxCalData

//______________________________________________________________________________
void R3BPspxHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPspxHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPspxHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPspxHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPspxHitData(void *p) {
      return  p ? new(p) ::R3BPspxHitData : new ::R3BPspxHitData;
   }
   static void *newArray_R3BPspxHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPspxHitData[nElements] : new ::R3BPspxHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPspxHitData(void *p) {
      delete ((::R3BPspxHitData*)p);
   }
   static void deleteArray_R3BPspxHitData(void *p) {
      delete [] ((::R3BPspxHitData*)p);
   }
   static void destruct_R3BPspxHitData(void *p) {
      typedef ::R3BPspxHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPspxHitData

//______________________________________________________________________________
void R3BLosMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosMappedData(void *p) {
      return  p ? new(p) ::R3BLosMappedData : new ::R3BLosMappedData;
   }
   static void *newArray_R3BLosMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosMappedData[nElements] : new ::R3BLosMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosMappedData(void *p) {
      delete ((::R3BLosMappedData*)p);
   }
   static void deleteArray_R3BLosMappedData(void *p) {
      delete [] ((::R3BLosMappedData*)p);
   }
   static void destruct_R3BLosMappedData(void *p) {
      typedef ::R3BLosMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosMappedData

//______________________________________________________________________________
void R3BLosCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosCalData(void *p) {
      return  p ? new(p) ::R3BLosCalData : new ::R3BLosCalData;
   }
   static void *newArray_R3BLosCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosCalData[nElements] : new ::R3BLosCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosCalData(void *p) {
      delete ((::R3BLosCalData*)p);
   }
   static void deleteArray_R3BLosCalData(void *p) {
      delete [] ((::R3BLosCalData*)p);
   }
   static void destruct_R3BLosCalData(void *p) {
      typedef ::R3BLosCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosCalData

//______________________________________________________________________________
void R3BLosHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BLosHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BLosHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BLosHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BLosHitData(void *p) {
      return  p ? new(p) ::R3BLosHitData : new ::R3BLosHitData;
   }
   static void *newArray_R3BLosHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BLosHitData[nElements] : new ::R3BLosHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BLosHitData(void *p) {
      delete ((::R3BLosHitData*)p);
   }
   static void deleteArray_R3BLosHitData(void *p) {
      delete [] ((::R3BLosHitData*)p);
   }
   static void destruct_R3BLosHitData(void *p) {
      typedef ::R3BLosHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BLosHitData

//______________________________________________________________________________
void R3BRoluMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluMappedData(void *p) {
      return  p ? new(p) ::R3BRoluMappedData : new ::R3BRoluMappedData;
   }
   static void *newArray_R3BRoluMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluMappedData[nElements] : new ::R3BRoluMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluMappedData(void *p) {
      delete ((::R3BRoluMappedData*)p);
   }
   static void deleteArray_R3BRoluMappedData(void *p) {
      delete [] ((::R3BRoluMappedData*)p);
   }
   static void destruct_R3BRoluMappedData(void *p) {
      typedef ::R3BRoluMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluMappedData

//______________________________________________________________________________
void R3BRoluCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluCalData(void *p) {
      return  p ? new(p) ::R3BRoluCalData : new ::R3BRoluCalData;
   }
   static void *newArray_R3BRoluCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluCalData[nElements] : new ::R3BRoluCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluCalData(void *p) {
      delete ((::R3BRoluCalData*)p);
   }
   static void deleteArray_R3BRoluCalData(void *p) {
      delete [] ((::R3BRoluCalData*)p);
   }
   static void destruct_R3BRoluCalData(void *p) {
      typedef ::R3BRoluCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluCalData

//______________________________________________________________________________
void R3BRoluHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BRoluHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BRoluHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BRoluHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BRoluHitData(void *p) {
      return  p ? new(p) ::R3BRoluHitData : new ::R3BRoluHitData;
   }
   static void *newArray_R3BRoluHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BRoluHitData[nElements] : new ::R3BRoluHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BRoluHitData(void *p) {
      delete ((::R3BRoluHitData*)p);
   }
   static void deleteArray_R3BRoluHitData(void *p) {
      delete [] ((::R3BRoluHitData*)p);
   }
   static void destruct_R3BRoluHitData(void *p) {
      typedef ::R3BRoluHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BRoluHitData

//______________________________________________________________________________
void R3BSci2MappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2MappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2MappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2MappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2MappedData(void *p) {
      return  p ? new(p) ::R3BSci2MappedData : new ::R3BSci2MappedData;
   }
   static void *newArray_R3BSci2MappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2MappedData[nElements] : new ::R3BSci2MappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2MappedData(void *p) {
      delete ((::R3BSci2MappedData*)p);
   }
   static void deleteArray_R3BSci2MappedData(void *p) {
      delete [] ((::R3BSci2MappedData*)p);
   }
   static void destruct_R3BSci2MappedData(void *p) {
      typedef ::R3BSci2MappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2MappedData

//______________________________________________________________________________
void R3BSci2TcalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2TcalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2TcalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2TcalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2TcalData(void *p) {
      return  p ? new(p) ::R3BSci2TcalData : new ::R3BSci2TcalData;
   }
   static void *newArray_R3BSci2TcalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2TcalData[nElements] : new ::R3BSci2TcalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2TcalData(void *p) {
      delete ((::R3BSci2TcalData*)p);
   }
   static void deleteArray_R3BSci2TcalData(void *p) {
      delete [] ((::R3BSci2TcalData*)p);
   }
   static void destruct_R3BSci2TcalData(void *p) {
      typedef ::R3BSci2TcalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2TcalData

//______________________________________________________________________________
void R3BSci2CalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2CalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2CalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2CalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2CalData(void *p) {
      return  p ? new(p) ::R3BSci2CalData : new ::R3BSci2CalData;
   }
   static void *newArray_R3BSci2CalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2CalData[nElements] : new ::R3BSci2CalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2CalData(void *p) {
      delete ((::R3BSci2CalData*)p);
   }
   static void deleteArray_R3BSci2CalData(void *p) {
      delete [] ((::R3BSci2CalData*)p);
   }
   static void destruct_R3BSci2CalData(void *p) {
      typedef ::R3BSci2CalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2CalData

//______________________________________________________________________________
void R3BSci2HitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci2HitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci2HitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci2HitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci2HitData(void *p) {
      return  p ? new(p) ::R3BSci2HitData : new ::R3BSci2HitData;
   }
   static void *newArray_R3BSci2HitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci2HitData[nElements] : new ::R3BSci2HitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci2HitData(void *p) {
      delete ((::R3BSci2HitData*)p);
   }
   static void deleteArray_R3BSci2HitData(void *p) {
      delete [] ((::R3BSci2HitData*)p);
   }
   static void destruct_R3BSci2HitData(void *p) {
      typedef ::R3BSci2HitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci2HitData

//______________________________________________________________________________
void R3BSci8MappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci8MappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci8MappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci8MappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci8MappedData(void *p) {
      return  p ? new(p) ::R3BSci8MappedData : new ::R3BSci8MappedData;
   }
   static void *newArray_R3BSci8MappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci8MappedData[nElements] : new ::R3BSci8MappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci8MappedData(void *p) {
      delete ((::R3BSci8MappedData*)p);
   }
   static void deleteArray_R3BSci8MappedData(void *p) {
      delete [] ((::R3BSci8MappedData*)p);
   }
   static void destruct_R3BSci8MappedData(void *p) {
      typedef ::R3BSci8MappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci8MappedData

//______________________________________________________________________________
void R3BSci8CalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci8CalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci8CalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci8CalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci8CalData(void *p) {
      return  p ? new(p) ::R3BSci8CalData : new ::R3BSci8CalData;
   }
   static void *newArray_R3BSci8CalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci8CalData[nElements] : new ::R3BSci8CalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci8CalData(void *p) {
      delete ((::R3BSci8CalData*)p);
   }
   static void deleteArray_R3BSci8CalData(void *p) {
      delete [] ((::R3BSci8CalData*)p);
   }
   static void destruct_R3BSci8CalData(void *p) {
      typedef ::R3BSci8CalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci8CalData

//______________________________________________________________________________
void R3BSci8HitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSci8HitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSci8HitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSci8HitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSci8HitData(void *p) {
      return  p ? new(p) ::R3BSci8HitData : new ::R3BSci8HitData;
   }
   static void *newArray_R3BSci8HitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSci8HitData[nElements] : new ::R3BSci8HitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSci8HitData(void *p) {
      delete ((::R3BSci8HitData*)p);
   }
   static void deleteArray_R3BSci8HitData(void *p) {
      delete [] ((::R3BSci8HitData*)p);
   }
   static void destruct_R3BSci8HitData(void *p) {
      typedef ::R3BSci8HitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSci8HitData

//______________________________________________________________________________
void R3BActarPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BActarPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BActarPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BActarPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BActarPoint(void *p) {
      return  p ? new(p) ::R3BActarPoint : new ::R3BActarPoint;
   }
   static void *newArray_R3BActarPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BActarPoint[nElements] : new ::R3BActarPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BActarPoint(void *p) {
      delete ((::R3BActarPoint*)p);
   }
   static void deleteArray_R3BActarPoint(void *p) {
      delete [] ((::R3BActarPoint*)p);
   }
   static void destruct_R3BActarPoint(void *p) {
      typedef ::R3BActarPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BActarPoint

//______________________________________________________________________________
void R3BStrawtubesMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BStrawtubesMappedData(void *p) {
      delete ((::R3BStrawtubesMappedData*)p);
   }
   static void deleteArray_R3BStrawtubesMappedData(void *p) {
      delete [] ((::R3BStrawtubesMappedData*)p);
   }
   static void destruct_R3BStrawtubesMappedData(void *p) {
      typedef ::R3BStrawtubesMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesMappedData

//______________________________________________________________________________
void R3BStrawtubesCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BStrawtubesCalData(void *p) {
      delete ((::R3BStrawtubesCalData*)p);
   }
   static void deleteArray_R3BStrawtubesCalData(void *p) {
      delete [] ((::R3BStrawtubesCalData*)p);
   }
   static void destruct_R3BStrawtubesCalData(void *p) {
      typedef ::R3BStrawtubesCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesCalData

//______________________________________________________________________________
void R3BStrawtubesHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BStrawtubesHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BStrawtubesHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BStrawtubesHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BStrawtubesHitData(void *p) {
      delete ((::R3BStrawtubesHitData*)p);
   }
   static void deleteArray_R3BStrawtubesHitData(void *p) {
      delete [] ((::R3BStrawtubesHitData*)p);
   }
   static void destruct_R3BStrawtubesHitData(void *p) {
      typedef ::R3BStrawtubesHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BStrawtubesHitData

//______________________________________________________________________________
void R3BPaddleTamexMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPaddleTamexMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPaddleTamexMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPaddleTamexMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPaddleTamexMappedData(void *p) {
      return  p ? new(p) ::R3BPaddleTamexMappedData : new ::R3BPaddleTamexMappedData;
   }
   static void *newArray_R3BPaddleTamexMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPaddleTamexMappedData[nElements] : new ::R3BPaddleTamexMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPaddleTamexMappedData(void *p) {
      delete ((::R3BPaddleTamexMappedData*)p);
   }
   static void deleteArray_R3BPaddleTamexMappedData(void *p) {
      delete [] ((::R3BPaddleTamexMappedData*)p);
   }
   static void destruct_R3BPaddleTamexMappedData(void *p) {
      typedef ::R3BPaddleTamexMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPaddleTamexMappedData

//______________________________________________________________________________
void R3BTofdMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdMappedData(void *p) {
      return  p ? new(p) ::R3BTofdMappedData : new ::R3BTofdMappedData;
   }
   static void *newArray_R3BTofdMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdMappedData[nElements] : new ::R3BTofdMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdMappedData(void *p) {
      delete ((::R3BTofdMappedData*)p);
   }
   static void deleteArray_R3BTofdMappedData(void *p) {
      delete [] ((::R3BTofdMappedData*)p);
   }
   static void destruct_R3BTofdMappedData(void *p) {
      typedef ::R3BTofdMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdMappedData

//______________________________________________________________________________
void R3BTofdCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdCalData(void *p) {
      return  p ? new(p) ::R3BTofdCalData : new ::R3BTofdCalData;
   }
   static void *newArray_R3BTofdCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdCalData[nElements] : new ::R3BTofdCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdCalData(void *p) {
      delete ((::R3BTofdCalData*)p);
   }
   static void deleteArray_R3BTofdCalData(void *p) {
      delete [] ((::R3BTofdCalData*)p);
   }
   static void destruct_R3BTofdCalData(void *p) {
      typedef ::R3BTofdCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdCalData

//______________________________________________________________________________
void R3BTofdHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdHitData(void *p) {
      return  p ? new(p) ::R3BTofdHitData : new ::R3BTofdHitData;
   }
   static void *newArray_R3BTofdHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdHitData[nElements] : new ::R3BTofdHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdHitData(void *p) {
      delete ((::R3BTofdHitData*)p);
   }
   static void deleteArray_R3BTofdHitData(void *p) {
      delete [] ((::R3BTofdHitData*)p);
   }
   static void destruct_R3BTofdHitData(void *p) {
      typedef ::R3BTofdHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdHitData

//______________________________________________________________________________
void R3BPaddleCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPaddleCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPaddleCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPaddleCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPaddleCalData(void *p) {
      return  p ? new(p) ::R3BPaddleCalData : new ::R3BPaddleCalData;
   }
   static void *newArray_R3BPaddleCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPaddleCalData[nElements] : new ::R3BPaddleCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPaddleCalData(void *p) {
      delete ((::R3BPaddleCalData*)p);
   }
   static void deleteArray_R3BPaddleCalData(void *p) {
      delete [] ((::R3BPaddleCalData*)p);
   }
   static void destruct_R3BPaddleCalData(void *p) {
      typedef ::R3BPaddleCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPaddleCalData

//______________________________________________________________________________
void R3BTofdPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdPoint(void *p) {
      return  p ? new(p) ::R3BTofdPoint : new ::R3BTofdPoint;
   }
   static void *newArray_R3BTofdPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdPoint[nElements] : new ::R3BTofdPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdPoint(void *p) {
      delete ((::R3BTofdPoint*)p);
   }
   static void deleteArray_R3BTofdPoint(void *p) {
      delete [] ((::R3BTofdPoint*)p);
   }
   static void destruct_R3BTofdPoint(void *p) {
      typedef ::R3BTofdPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdPoint

//______________________________________________________________________________
void R3BTofdDigi::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTofdDigi.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTofdDigi::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTofdDigi::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTofdDigi(void *p) {
      return  p ? new(p) ::R3BTofdDigi : new ::R3BTofdDigi;
   }
   static void *newArray_R3BTofdDigi(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTofdDigi[nElements] : new ::R3BTofdDigi[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTofdDigi(void *p) {
      delete ((::R3BTofdDigi*)p);
   }
   static void deleteArray_R3BTofdDigi(void *p) {
      delete [] ((::R3BTofdDigi*)p);
   }
   static void destruct_R3BTofdDigi(void *p) {
      typedef ::R3BTofdDigi current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTofdDigi

//______________________________________________________________________________
void R3BPtofHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPtofHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPtofHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPtofHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPtofHit(void *p) {
      return  p ? new(p) ::R3BPtofHit : new ::R3BPtofHit;
   }
   static void *newArray_R3BPtofHit(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPtofHit[nElements] : new ::R3BPtofHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPtofHit(void *p) {
      delete ((::R3BPtofHit*)p);
   }
   static void deleteArray_R3BPtofHit(void *p) {
      delete [] ((::R3BPtofHit*)p);
   }
   static void destruct_R3BPtofHit(void *p) {
      typedef ::R3BPtofHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPtofHit

//______________________________________________________________________________
void R3BPdcMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcMappedData(void *p) {
      return  p ? new(p) ::R3BPdcMappedData : new ::R3BPdcMappedData;
   }
   static void *newArray_R3BPdcMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcMappedData[nElements] : new ::R3BPdcMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcMappedData(void *p) {
      delete ((::R3BPdcMappedData*)p);
   }
   static void deleteArray_R3BPdcMappedData(void *p) {
      delete [] ((::R3BPdcMappedData*)p);
   }
   static void destruct_R3BPdcMappedData(void *p) {
      typedef ::R3BPdcMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcMappedData

//______________________________________________________________________________
void R3BPdcCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcCalData(void *p) {
      return  p ? new(p) ::R3BPdcCalData : new ::R3BPdcCalData;
   }
   static void *newArray_R3BPdcCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcCalData[nElements] : new ::R3BPdcCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcCalData(void *p) {
      delete ((::R3BPdcCalData*)p);
   }
   static void deleteArray_R3BPdcCalData(void *p) {
      delete [] ((::R3BPdcCalData*)p);
   }
   static void destruct_R3BPdcCalData(void *p) {
      typedef ::R3BPdcCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcCalData

//______________________________________________________________________________
void R3BPdcHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BPdcHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BPdcHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BPdcHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BPdcHitData(void *p) {
      return  p ? new(p) ::R3BPdcHitData : new ::R3BPdcHitData;
   }
   static void *newArray_R3BPdcHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BPdcHitData[nElements] : new ::R3BPdcHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BPdcHitData(void *p) {
      delete ((::R3BPdcHitData*)p);
   }
   static void deleteArray_R3BPdcHitData(void *p) {
      delete [] ((::R3BPdcHitData*)p);
   }
   static void destruct_R3BPdcHitData(void *p) {
      typedef ::R3BPdcHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BPdcHitData

//______________________________________________________________________________
void R3BBunchedFiberCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberCalData(void *p) {
      return  p ? new(p) ::R3BBunchedFiberCalData : new ::R3BBunchedFiberCalData;
   }
   static void *newArray_R3BBunchedFiberCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberCalData[nElements] : new ::R3BBunchedFiberCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberCalData(void *p) {
      delete ((::R3BBunchedFiberCalData*)p);
   }
   static void deleteArray_R3BBunchedFiberCalData(void *p) {
      delete [] ((::R3BBunchedFiberCalData*)p);
   }
   static void destruct_R3BBunchedFiberCalData(void *p) {
      typedef ::R3BBunchedFiberCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberCalData

//______________________________________________________________________________
void R3BBunchedFiberHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberHitData(void *p) {
      return  p ? new(p) ::R3BBunchedFiberHitData : new ::R3BBunchedFiberHitData;
   }
   static void *newArray_R3BBunchedFiberHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberHitData[nElements] : new ::R3BBunchedFiberHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberHitData(void *p) {
      delete ((::R3BBunchedFiberHitData*)p);
   }
   static void deleteArray_R3BBunchedFiberHitData(void *p) {
      delete [] ((::R3BBunchedFiberHitData*)p);
   }
   static void destruct_R3BBunchedFiberHitData(void *p) {
      typedef ::R3BBunchedFiberHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberHitData

//______________________________________________________________________________
void R3BBunchedFiberMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBunchedFiberMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBunchedFiberMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBunchedFiberMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBunchedFiberMappedData(void *p) {
      return  p ? new(p) ::R3BBunchedFiberMappedData : new ::R3BBunchedFiberMappedData;
   }
   static void *newArray_R3BBunchedFiberMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBunchedFiberMappedData[nElements] : new ::R3BBunchedFiberMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBunchedFiberMappedData(void *p) {
      delete ((::R3BBunchedFiberMappedData*)p);
   }
   static void deleteArray_R3BBunchedFiberMappedData(void *p) {
      delete [] ((::R3BBunchedFiberMappedData*)p);
   }
   static void destruct_R3BBunchedFiberMappedData(void *p) {
      typedef ::R3BBunchedFiberMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBunchedFiberMappedData

//______________________________________________________________________________
void R3BFi4Point::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4Point.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4Point::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4Point::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4Point(void *p) {
      return  p ? new(p) ::R3BFi4Point : new ::R3BFi4Point;
   }
   static void *newArray_R3BFi4Point(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4Point[nElements] : new ::R3BFi4Point[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4Point(void *p) {
      delete ((::R3BFi4Point*)p);
   }
   static void deleteArray_R3BFi4Point(void *p) {
      delete [] ((::R3BFi4Point*)p);
   }
   static void destruct_R3BFi4Point(void *p) {
      typedef ::R3BFi4Point current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4Point

//______________________________________________________________________________
void R3BFi4CalItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4CalItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4CalItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4CalItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4CalItem(void *p) {
      return  p ? new(p) ::R3BFi4CalItem : new ::R3BFi4CalItem;
   }
   static void *newArray_R3BFi4CalItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4CalItem[nElements] : new ::R3BFi4CalItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4CalItem(void *p) {
      delete ((::R3BFi4CalItem*)p);
   }
   static void deleteArray_R3BFi4CalItem(void *p) {
      delete [] ((::R3BFi4CalItem*)p);
   }
   static void destruct_R3BFi4CalItem(void *p) {
      typedef ::R3BFi4CalItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4CalItem

//______________________________________________________________________________
void R3BFi4HitItem::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFi4HitItem.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFi4HitItem::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFi4HitItem::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFi4HitItem(void *p) {
      return  p ? new(p) ::R3BFi4HitItem : new ::R3BFi4HitItem;
   }
   static void *newArray_R3BFi4HitItem(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFi4HitItem[nElements] : new ::R3BFi4HitItem[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFi4HitItem(void *p) {
      delete ((::R3BFi4HitItem*)p);
   }
   static void deleteArray_R3BFi4HitItem(void *p) {
      delete [] ((::R3BFi4HitItem*)p);
   }
   static void destruct_R3BFi4HitItem(void *p) {
      typedef ::R3BFi4HitItem current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFi4HitItem

//______________________________________________________________________________
void R3BFibMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFibMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFibMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFibMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFibMappedData(void *p) {
      return  p ? new(p) ::R3BFibMappedData : new ::R3BFibMappedData;
   }
   static void *newArray_R3BFibMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFibMappedData[nElements] : new ::R3BFibMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFibMappedData(void *p) {
      delete ((::R3BFibMappedData*)p);
   }
   static void deleteArray_R3BFibMappedData(void *p) {
      delete [] ((::R3BFibMappedData*)p);
   }
   static void destruct_R3BFibMappedData(void *p) {
      typedef ::R3BFibMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFibMappedData

//______________________________________________________________________________
void R3BFibCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFibCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFibCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFibCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFibCalData(void *p) {
      return  p ? new(p) ::R3BFibCalData : new ::R3BFibCalData;
   }
   static void *newArray_R3BFibCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFibCalData[nElements] : new ::R3BFibCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFibCalData(void *p) {
      delete ((::R3BFibCalData*)p);
   }
   static void deleteArray_R3BFibCalData(void *p) {
      delete [] ((::R3BFibCalData*)p);
   }
   static void destruct_R3BFibCalData(void *p) {
      typedef ::R3BFibCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFibCalData

//______________________________________________________________________________
void R3BFibPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFibPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFibPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFibPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFibPoint(void *p) {
      return  p ? new(p) ::R3BFibPoint : new ::R3BFibPoint;
   }
   static void *newArray_R3BFibPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFibPoint[nElements] : new ::R3BFibPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFibPoint(void *p) {
      delete ((::R3BFibPoint*)p);
   }
   static void deleteArray_R3BFibPoint(void *p) {
      delete [] ((::R3BFibPoint*)p);
   }
   static void destruct_R3BFibPoint(void *p) {
      typedef ::R3BFibPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFibPoint

//______________________________________________________________________________
void R3BAmsMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsMappedData(void *p) {
      return  p ? new(p) ::R3BAmsMappedData : new ::R3BAmsMappedData;
   }
   static void *newArray_R3BAmsMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsMappedData[nElements] : new ::R3BAmsMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsMappedData(void *p) {
      delete ((::R3BAmsMappedData*)p);
   }
   static void deleteArray_R3BAmsMappedData(void *p) {
      delete [] ((::R3BAmsMappedData*)p);
   }
   static void destruct_R3BAmsMappedData(void *p) {
      typedef ::R3BAmsMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsMappedData

//______________________________________________________________________________
void R3BAmsStripCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsStripCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsStripCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsStripCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsStripCalData(void *p) {
      return  p ? new(p) ::R3BAmsStripCalData : new ::R3BAmsStripCalData;
   }
   static void *newArray_R3BAmsStripCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsStripCalData[nElements] : new ::R3BAmsStripCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsStripCalData(void *p) {
      delete ((::R3BAmsStripCalData*)p);
   }
   static void deleteArray_R3BAmsStripCalData(void *p) {
      delete [] ((::R3BAmsStripCalData*)p);
   }
   static void destruct_R3BAmsStripCalData(void *p) {
      typedef ::R3BAmsStripCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsStripCalData

//______________________________________________________________________________
void R3BAmsHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BAmsHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BAmsHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BAmsHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BAmsHitData(void *p) {
      return  p ? new(p) ::R3BAmsHitData : new ::R3BAmsHitData;
   }
   static void *newArray_R3BAmsHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BAmsHitData[nElements] : new ::R3BAmsHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BAmsHitData(void *p) {
      delete ((::R3BAmsHitData*)p);
   }
   static void deleteArray_R3BAmsHitData(void *p) {
      delete [] ((::R3BAmsHitData*)p);
   }
   static void destruct_R3BAmsHitData(void *p) {
      typedef ::R3BAmsHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BAmsHitData

//______________________________________________________________________________
void R3BBeamMonitorMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BBeamMonitorMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BBeamMonitorMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BBeamMonitorMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BBeamMonitorMappedData(void *p) {
      return  p ? new(p) ::R3BBeamMonitorMappedData : new ::R3BBeamMonitorMappedData;
   }
   static void *newArray_R3BBeamMonitorMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BBeamMonitorMappedData[nElements] : new ::R3BBeamMonitorMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BBeamMonitorMappedData(void *p) {
      delete ((::R3BBeamMonitorMappedData*)p);
   }
   static void deleteArray_R3BBeamMonitorMappedData(void *p) {
      delete [] ((::R3BBeamMonitorMappedData*)p);
   }
   static void destruct_R3BBeamMonitorMappedData(void *p) {
      typedef ::R3BBeamMonitorMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BBeamMonitorMappedData

//______________________________________________________________________________
void R3BMusicPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicPoint(void *p) {
      return  p ? new(p) ::R3BMusicPoint : new ::R3BMusicPoint;
   }
   static void *newArray_R3BMusicPoint(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicPoint[nElements] : new ::R3BMusicPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicPoint(void *p) {
      delete ((::R3BMusicPoint*)p);
   }
   static void deleteArray_R3BMusicPoint(void *p) {
      delete [] ((::R3BMusicPoint*)p);
   }
   static void destruct_R3BMusicPoint(void *p) {
      typedef ::R3BMusicPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicPoint

//______________________________________________________________________________
void R3BMusicMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicMappedData(void *p) {
      return  p ? new(p) ::R3BMusicMappedData : new ::R3BMusicMappedData;
   }
   static void *newArray_R3BMusicMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicMappedData[nElements] : new ::R3BMusicMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicMappedData(void *p) {
      delete ((::R3BMusicMappedData*)p);
   }
   static void deleteArray_R3BMusicMappedData(void *p) {
      delete [] ((::R3BMusicMappedData*)p);
   }
   static void destruct_R3BMusicMappedData(void *p) {
      typedef ::R3BMusicMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicMappedData

//______________________________________________________________________________
void R3BMusicCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicCalData(void *p) {
      return  p ? new(p) ::R3BMusicCalData : new ::R3BMusicCalData;
   }
   static void *newArray_R3BMusicCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicCalData[nElements] : new ::R3BMusicCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicCalData(void *p) {
      delete ((::R3BMusicCalData*)p);
   }
   static void deleteArray_R3BMusicCalData(void *p) {
      delete [] ((::R3BMusicCalData*)p);
   }
   static void destruct_R3BMusicCalData(void *p) {
      typedef ::R3BMusicCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicCalData

//______________________________________________________________________________
void R3BMusicHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BMusicHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BMusicHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BMusicHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BMusicHitData(void *p) {
      return  p ? new(p) ::R3BMusicHitData : new ::R3BMusicHitData;
   }
   static void *newArray_R3BMusicHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BMusicHitData[nElements] : new ::R3BMusicHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BMusicHitData(void *p) {
      delete ((::R3BMusicHitData*)p);
   }
   static void deleteArray_R3BMusicHitData(void *p) {
      delete [] ((::R3BMusicHitData*)p);
   }
   static void destruct_R3BMusicHitData(void *p) {
      typedef ::R3BMusicHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BMusicHitData

//______________________________________________________________________________
void R3BSamplerMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSamplerMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSamplerMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSamplerMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSamplerMappedData(void *p) {
      return  p ? new(p) ::R3BSamplerMappedData : new ::R3BSamplerMappedData;
   }
   static void *newArray_R3BSamplerMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSamplerMappedData[nElements] : new ::R3BSamplerMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSamplerMappedData(void *p) {
      delete ((::R3BSamplerMappedData*)p);
   }
   static void deleteArray_R3BSamplerMappedData(void *p) {
      delete [] ((::R3BSamplerMappedData*)p);
   }
   static void destruct_R3BSamplerMappedData(void *p) {
      typedef ::R3BSamplerMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSamplerMappedData

//______________________________________________________________________________
void R3BSfibMappedData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibMappedData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibMappedData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibMappedData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSfibMappedData(void *p) {
      return  p ? new(p) ::R3BSfibMappedData : new ::R3BSfibMappedData;
   }
   static void *newArray_R3BSfibMappedData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSfibMappedData[nElements] : new ::R3BSfibMappedData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSfibMappedData(void *p) {
      delete ((::R3BSfibMappedData*)p);
   }
   static void deleteArray_R3BSfibMappedData(void *p) {
      delete [] ((::R3BSfibMappedData*)p);
   }
   static void destruct_R3BSfibMappedData(void *p) {
      typedef ::R3BSfibMappedData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibMappedData

//______________________________________________________________________________
void R3BSfibCalData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibCalData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibCalData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibCalData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSfibCalData(void *p) {
      return  p ? new(p) ::R3BSfibCalData : new ::R3BSfibCalData;
   }
   static void *newArray_R3BSfibCalData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSfibCalData[nElements] : new ::R3BSfibCalData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSfibCalData(void *p) {
      delete ((::R3BSfibCalData*)p);
   }
   static void deleteArray_R3BSfibCalData(void *p) {
      delete [] ((::R3BSfibCalData*)p);
   }
   static void destruct_R3BSfibCalData(void *p) {
      typedef ::R3BSfibCalData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibCalData

//______________________________________________________________________________
void R3BSfibHitData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BSfibHitData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BSfibHitData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BSfibHitData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BSfibHitData(void *p) {
      return  p ? new(p) ::R3BSfibHitData : new ::R3BSfibHitData;
   }
   static void *newArray_R3BSfibHitData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BSfibHitData[nElements] : new ::R3BSfibHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BSfibHitData(void *p) {
      delete ((::R3BSfibHitData*)p);
   }
   static void deleteArray_R3BSfibHitData(void *p) {
      delete [] ((::R3BSfibHitData*)p);
   }
   static void destruct_R3BSfibHitData(void *p) {
      typedef ::R3BSfibHitData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BSfibHitData

//______________________________________________________________________________
void R3BFrsData::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BFrsData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BFrsData::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BFrsData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BFrsData(void *p) {
      return  p ? new(p) ::R3BFrsData : new ::R3BFrsData;
   }
   static void *newArray_R3BFrsData(Long_t nElements, void *p) {
      return p ? new(p) ::R3BFrsData[nElements] : new ::R3BFrsData[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BFrsData(void *p) {
      delete ((::R3BFrsData*)p);
   }
   static void deleteArray_R3BFrsData(void *p) {
      delete [] ((::R3BFrsData*)p);
   }
   static void destruct_R3BFrsData(void *p) {
      typedef ::R3BFrsData current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BFrsData

namespace ROOT {
   static TClass *vectorlER3BNeulandHitgR_Dictionary();
   static void vectorlER3BNeulandHitgR_TClassManip(TClass*);
   static void *new_vectorlER3BNeulandHitgR(void *p = 0);
   static void *newArray_vectorlER3BNeulandHitgR(Long_t size, void *p);
   static void delete_vectorlER3BNeulandHitgR(void *p);
   static void deleteArray_vectorlER3BNeulandHitgR(void *p);
   static void destruct_vectorlER3BNeulandHitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<R3BNeulandHit>*)
   {
      vector<R3BNeulandHit> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<R3BNeulandHit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<R3BNeulandHit>", -2, "vector", 214,
                  typeid(vector<R3BNeulandHit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlER3BNeulandHitgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<R3BNeulandHit>) );
      instance.SetNew(&new_vectorlER3BNeulandHitgR);
      instance.SetNewArray(&newArray_vectorlER3BNeulandHitgR);
      instance.SetDelete(&delete_vectorlER3BNeulandHitgR);
      instance.SetDeleteArray(&deleteArray_vectorlER3BNeulandHitgR);
      instance.SetDestructor(&destruct_vectorlER3BNeulandHitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<R3BNeulandHit> >()));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<R3BNeulandHit>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlER3BNeulandHitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<R3BNeulandHit>*)0x0)->GetClass();
      vectorlER3BNeulandHitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlER3BNeulandHitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlER3BNeulandHitgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BNeulandHit> : new vector<R3BNeulandHit>;
   }
   static void *newArray_vectorlER3BNeulandHitgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<R3BNeulandHit>[nElements] : new vector<R3BNeulandHit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlER3BNeulandHitgR(void *p) {
      delete ((vector<R3BNeulandHit>*)p);
   }
   static void deleteArray_vectorlER3BNeulandHitgR(void *p) {
      delete [] ((vector<R3BNeulandHit>*)p);
   }
   static void destruct_vectorlER3BNeulandHitgR(void *p) {
      typedef vector<R3BNeulandHit> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<R3BNeulandHit>

namespace {
  void TriggerDictionaryInitialization_G__R3BDataDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/r3bdata",
"/work/R3BRoot/r3bdata/xballData",
"/work/R3BRoot/r3bdata/califaData",
"/work/R3BRoot/r3bdata/hpgeData",
"/work/R3BRoot/r3bdata/wrData",
"/work/R3BRoot/r3bdata/beammonitorData",
"/work/R3BRoot/r3bdata/dhcData",
"/work/R3BRoot/r3bdata/gfiData",
"/work/R3BRoot/r3bdata/mtofData",
"/work/R3BRoot/r3bdata/tofData",
"/work/R3BRoot/r3bdata/pdcData",
"/work/R3BRoot/r3bdata/vetoData",
"/work/R3BRoot/r3bdata/lumonData",
"/work/R3BRoot/r3bdata/trackerData",
"/work/R3BRoot/r3bdata/startrackData",
"/work/R3BRoot/r3bdata/landData",
"/work/R3BRoot/r3bdata/roluData",
"/work/R3BRoot/r3bdata/losData",
"/work/R3BRoot/r3bdata/sci2Data",
"/work/R3BRoot/r3bdata/sci8Data",
"/work/R3BRoot/r3bdata/mfiData",
"/work/R3BRoot/r3bdata/fibData",
"/work/R3BRoot/r3bdata/pspData",
"/work/R3BRoot/r3bdata/neulandData",
"/work/R3BRoot/r3bdata/actarData",
"/work/R3BRoot/r3bdata/strawtubesData",
"/work/R3BRoot/r3bdata/amsData",
"/work/R3BRoot/r3bdata/sci2Data",
"/work/R3BRoot/r3bdata/sci8Data",
"/work/R3BRoot/r3bdata/musicData",
"/work/R3BRoot/r3bdata/sampData",
"/work/R3BRoot/r3bdata/sfibData",
"/work/R3BRoot/r3bdata/frsData",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/r3bdata/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BStack;
class R3BMCTrack;
class R3BWRMasterData;
class R3BWRCalifaData;
class R3BWRAmsData;
class R3BHit;
class R3BTrack;
class R3BDouble;
class R3BXBallPoint;
class R3BXBallCrystalHit;
class R3BXBallCrystalHitSim;
class R3BCalifaCrystalCalData;
class R3BCalifaMappedData;
class R3BCalifaHitData;
class R3BCalifaPoint;
class __attribute__((annotate(R"ATTRDUMP(se ha de canviar la version cada vez que se hace una modificacion grande)ATTRDUMP"))) R3BHPGeDetPoint;
class R3BDchPoint;
class R3BDchFullPoint;
class R3BGfiPoint;
class R3BmTofPoint;
class R3BmTofDigi;
class R3BTofPoint;
class R3BVetoPoint;
class ELILuMonPoint;
class R3BTraPoint;
class R3BTraHit;
class R3BSitrackerHit;
class R3BTrackerHit;
class R3BStartrackPoint;
class R3BStartrackHit;
class R3BStartrackerDigitHit;
class R3BStartrackMappedData;
class R3BStartrackCalData;
class R3BLandPoint;
class R3BLandDigi;
class R3BLandFirstHits;
class R3BLandHit;
class R3BPaddleCrystalHit;
class R3BNeutronTrack;
class R3BDchDigi;
class R3BDch2pDigi;
class R3BTofDigi;
class R3BTof2pDigi;
class R3BGfiDigi;
class R3BTraDigi;
class R3BTra2pDigi;
class R3BTraFraDigi;
class R3BTargetDigi;
class R3BTarget2pDigi;
class R3BMfiPoint;
class R3BMfiDigi;
class R3BPspPoint;
class R3BPspDigi;
class R3BNeulandTacquilaMappedData;
class R3BNeulandCalData;
class R3BNeulandPoint;
class R3BNeulandHit;
class R3BNeulandMultiplicity;
class R3BNeulandCluster;
class R3BNeulandNeutron;
class R3BPspxMappedData;
class R3BPspxPrecalData;
class R3BPspxCalData;
class R3BPspxHitData;
class __attribute__((annotate(R"ATTRDUMP(2)ATTRDUMP"))) R3BLosMappedData;
class R3BLosCalData;
class R3BLosHitData;
class R3BRoluMappedData;
class R3BRoluCalData;
class R3BRoluHitData;
class R3BSci2MappedData;
class R3BSci2TcalData;
class R3BSci2CalData;
class R3BSci2HitData;
class R3BSci8MappedData;
class R3BSci8CalData;
class R3BSci8HitData;
class R3BActarPoint;
class R3BStrawtubesMappedData;
class R3BStrawtubesCalData;
class R3BStrawtubesHitData;
class R3BPaddleTamexMappedData;
class R3BTofdMappedData;
class R3BTofdCalData;
class R3BTofdHitData;
class R3BPaddleCalData;
class R3BTofdPoint;
class R3BTofdDigi;
class R3BPtofHit;
class R3BPdcMappedData;
class R3BPdcCalData;
class R3BPdcHitData;
class R3BBunchedFiberCalData;
class R3BBunchedFiberHitData;
class R3BBunchedFiberMappedData;
class R3BFi4Point;
class R3BFi4CalItem;
class R3BFi4HitItem;
class R3BFibMappedData;
class R3BFibCalData;
class R3BFibPoint;
class R3BAmsMappedData;
class R3BAmsStripCalData;
class R3BAmsHitData;
class R3BBeamMonitorMappedData;
class R3BMusicPoint;
class R3BMusicMappedData;
class R3BMusicCalData;
class R3BMusicHitData;
class R3BSamplerMappedData;
class R3BSfibMappedData;
class R3BSfibCalData;
class R3BSfibHitData;
class R3BFrsData;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BDataDict dictionary payload"

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

// -------------------------------------------------------------------------
// -----                       R3BStack header file                    -----
// -----           Created 10/08/04  by D. Bertini / V. Friese         -----
// -------------------------------------------------------------------------

/** R3BStack.h
 *@author D.Bertini <d.bertini@gsi.de>
 *@author V.Friese <v.friese@gsi.de>
 **
 ** Version 14/06/07 by V. Friese
 **
 ** This class handles the particle stack for the transport simulation.
 ** For the stack FILO functunality, it uses the STL stack. To store
 ** the tracks during transport, a TParticle arry is used.
 ** At the end of the event, tracks satisfying the filter criteria
 ** are copied to a R3BMCTrack array, which is stored in the output.
 **
 ** The filtering criteria for the output tracks are:
 ** - primary tracks are stored in any case.
 ** - secondary tracks are stored if they have a minimal number of
 **   points (sum of all detectors) and a minimal energy, or are the
 **
 ** The storage of secondaries can be switched off.
 ** The storage of all mothers can be switched off.
 ** By default, the minimal number of points is 1 and the energy cut is 0.
 **/

#ifndef R3BSTACK_H
#define R3BSTACK_H

#include "FairGenericStack.h"
#include "R3BDetectorList.h"

#include "TClonesArray.h"
#include "TVirtualMCStack.h"

#include <array>
#include <map>
#include <stack>

class R3BStack : public FairGenericStack
{

  public:
    /** Default constructor
     *param size  Estimated track number
     **/
    R3BStack(Int_t size = 100);

    /** Destructor  **/
    virtual ~R3BStack();

    /** Add a TParticle to the stack.
     ** Declared in TVirtualMCStack
     *@param toBeDone  Flag for tracking
     *@param parentID  Index of mother particle
     *@param pdgCode   Particle type (PDG encoding)
     *@param px,py,pz  Momentum components at start vertex [GeV]
     *@param e         Total energy at start vertex [GeV]
     *@param vx,vy,vz  Coordinates of start vertex [cm]
     *@param time      Start time of track [s]
     *@param polx,poly,polz Polarisation vector
     *@param proc      Production mechanism (VMC encoding)
     *@param ntr       Track number (filled by the stack)
     *@param weight    Particle weight
     *@param is        Generation status code (whatever that means)
     **/
    virtual void PushTrack(Int_t toBeDone,
                           Int_t parentID,
                           Int_t pdgCode,
                           Double_t px,
                           Double_t py,
                           Double_t pz,
                           Double_t e,
                           Double_t vx,
                           Double_t vy,
                           Double_t vz,
                           Double_t time,
                           Double_t polx,
                           Double_t poly,
                           Double_t polz,
                           TMCProcess proc,
                           Int_t& ntr,
                           Double_t weight,
                           Int_t is);

    virtual void PushTrack(Int_t toBeDone,
                           Int_t parentID,
                           Int_t pdgCode,
                           Double_t px,
                           Double_t py,
                           Double_t pz,
                           Double_t e,
                           Double_t vx,
                           Double_t vy,
                           Double_t vz,
                           Double_t time,
                           Double_t polx,
                           Double_t poly,
                           Double_t polz,
                           TMCProcess proc,
                           Int_t& ntr,
                           Double_t weight,
                           Int_t is,
                           Int_t secondParentId);

    /** Get next particle for tracking from the stack.
     ** Declared in TVirtualMCStack
     *@param  iTrack  index of popped track (return)
     *@return Pointer to the TParticle of the track
     **/
    virtual TParticle* PopNextTrack(Int_t& iTrack);

    /** Get primary particle by index for tracking from stack
     ** Declared in TVirtualMCStack
     *@param  iPrim   index of primary particle
     *@return Pointer to the TParticle of the track
     **/
    virtual TParticle* PopPrimaryForTracking(Int_t iPrim);

    /** Set the current track number
     ** Declared in TVirtualMCStack
     *@param iTrack  track number
     **/
    virtual void SetCurrentTrack(Int_t iTrack) { fCurrentTrack = iTrack; }

    /** Get total number of tracks
     ** Declared in TVirtualMCStack
     **/
    virtual Int_t GetNtrack() const { return fNParticles; }

    /** Get number of primary tracks
     ** Declared in TVirtualMCStack
     **/
    virtual Int_t GetNprimary() const { return fNPrimaries; }

    /** Get the current track's particle
     ** Declared in TVirtualMCStack
     **/
    virtual TParticle* GetCurrentTrack() const;

    /** Get the number of the current track
     ** Declared in TVirtualMCStack
     **/
    virtual Int_t GetCurrentTrackNumber() const { return fCurrentTrack; }

    /** Get the track number of the parent of the current track
     ** Declared in TVirtualMCStack
     **/
    virtual Int_t GetCurrentParentTrackNumber() const;

    /** Add a TParticle to the fParticles array **/
    virtual void AddParticle(TParticle* part);

    /** Fill the MCTrack output array, applying filter criteria **/
    virtual void FillTrackArray();

    /** Update the track index in the MCTracks and MCPoints **/
    virtual void UpdateTrackIndex(TRefArray* detArray);

    /** Resets arrays and stack and deletes particles and tracks **/
    virtual void Reset();

    /** Register the MCTrack array to the Root Manager  **/
    virtual void Register();

    /** Output to screen
     **@param iVerbose: 0=events summary, 1=track info
     **/
    virtual void Print(Int_t iVerbose) const;

    /** Modifiers  **/
    void StoreSecondaries(Bool_t choice = kTRUE) { fStoreSecondaries = choice; }
    void SetMinPoints(Int_t min) { fMinPoints = min; }
    void SetEnergyCut(Double_t eMin) { fEnergyCut = eMin; }
    void StoreMothers(Bool_t choice = kTRUE) { fStoreMothers = choice; }

    /** Increment number of points for the current track in a given detector
     *@param iDet  Detector unique identifier
     **/
    void AddPoint(DetectorId iDet);

    /** Increment number of points for an arbitrary track in a given detector
     *@param iDet    Detector unique identifier
     *@param iTrack  Track number
     **/
    void AddPoint(DetectorId iDet, Int_t iTrack);

    /** Accessors **/
    TParticle* GetParticle(Int_t trackId) const;
    TClonesArray* GetListOfParticles() { return fParticles; }

    void SetDebug(Bool_t t) { fDebug = t; }

  private:
    R3BStack(const R3BStack&);
    R3BStack& operator=(const R3BStack&) { return *this; }

    /** STL stack (FILO) used to handle the TParticles for tracking **/
    std::stack<TParticle*> fStack; //!

    /** Array of TParticles (contains all TParticles put into or created
     ** by the transport
     **/
    TClonesArray* fParticles; //!

    /** Array of R3BMCTracks containg the tracks written to the output **/
    TClonesArray* fTracks;

    /** STL map from particle index to storage flag  **/
    std::map<Int_t, Bool_t> fStoreMap;            //!
    std::map<Int_t, Bool_t>::iterator fStoreIter; //!

    /** STL map from particle index to track index  **/
    std::map<Int_t, Int_t> fIndexMap;            //!
    std::map<Int_t, Int_t>::iterator fIndexIter; //!

    /** STL map from track index and detector ID to number of MCPoints **/
    std::map<int, std::array<int, kLAST + 1>> fPointsMap; //!

    /** Some indizes and counters **/
    Int_t fCurrentTrack; //! Index of current track
    Int_t fNPrimaries;   //! Number of primary particles
    Int_t fNParticles;   //! Number of entries in fParticles
    Int_t fNTracks;      //! Number of entries in fTracks
    Int_t fIndex;        //! Used for merging
    Int_t fMC;           //! index for MC units testing

    /** Variables defining the criteria for output selection **/
    Bool_t fStoreSecondaries;
    Int_t fMinPoints;
    Double32_t fEnergyCut;
    Bool_t fStoreMothers;
    Bool_t fDebug;

    /** Mark tracks for output using selection criteria  **/
    void SelectTracks();

    ClassDef(R3BStack, 1)
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

#ifndef R3BMCTRACK_H
#define R3BMCTRACK_H

#include "Math/Vector4D.h"
#include "R3BDetectorList.h"
#include "TLorentzVector.h"
#include "TObject.h"
#include "TParticle.h"
#include "TVector3.h"
#include <array>

class R3BMCTrack : public TObject
{

  public:
    /**  Default constructor  **/
    R3BMCTrack();

    /**  Standard constructor  **/
    R3BMCTrack(int pdgCode,
               int motherID,
               ROOT::Math::XYZTVector xyzt,
               ROOT::Math::PxPyPzMVector pm,
               std::array<int, kLAST + 1> nPoints);

    /**  Constructor from TParticle  **/
    R3BMCTrack(TParticle* particle, std::array<int, kLAST + 1> nPoints, int fMC);

    /**  Destructor  **/
    ~R3BMCTrack() override = default;

    /**  Output to screen  **/
    void Print(Option_t* option = "") const override;

    /**  Accessors  **/
    int GetPdgCode() const { return fPdgCode; }
    int GetMotherId() const { return fMotherId; }

    double GetStartX() const { return fStartVertex.X(); }
    double GetStartY() const { return fStartVertex.Y(); }
    double GetStartZ() const { return fStartVertex.Z(); }
    double GetStartT() const { return fStartVertex.T(); }
    ROOT::Math::XYZTVector GetStartVertex() const { return fStartVertex; }

    double GetPx() const { return fMomentumMass.Px(); }
    double GetPy() const { return fMomentumMass.Py(); }
    double GetPz() const { return fMomentumMass.Pz(); }
    double GetMass() const { return fMomentumMass.M(); }
    ROOT::Math::PxPyPzMVector GetMomentumMass() const { return fMomentumMass; };
    ROOT::Math::PxPyPzEVector GetFourMomentum() const { return ROOT::Math::PxPyPzEVector(fMomentumMass); };
    double GetEnergy() const { return fMomentumMass.E(); }
    double GetPt() const { return fMomentumMass.Pt(); }
    double GetP() const { return fMomentumMass.P(); }
    double GetRapidity() const { return fMomentumMass.Rapidity(); };

    /** Accessors to the number of MCPoints in the detectors **/
    int GetNPoints(DetectorId detId) const;

    /**  Modifiers  **/
    void SetMotherId(int id) { fMotherId = id; } // Used by R3BMCStack UpdateTrackIndex. Needed? -> Could make const!

  private:
    /**  PDG particle code  **/
    const int fPdgCode;

    /**  Index of mother track. -1 for primary particles.  **/
    int fMotherId;

    /** Coordinates of start vertex [cm, ns]  **/
    const ROOT::Math::XYZTVector fStartVertex;

    /** Momentum and mass at start vertex [GeV]  **/
    const ROOT::Math::PxPyPzMVector fMomentumMass;

    /**  Array representing the number of MCPoints for this track in each subdetector. **/
    const std::array<int, kLAST + 1> fNPoints;

    ClassDefOverride(R3BMCTrack, 3);
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

// ---------------------------------------------------------------------------
// -----                                                                 -----
// -----                      R3BWRMasterData                            -----
// -----                  Created 28/02/2019 by J.L. Rodriguez           -----
// -----                                                                 -----
// ---------------------------------------------------------------------------

#ifndef R3BWRMasterData_H
#define R3BWRMasterData_H
#include "TObject.h"

class R3BWRMasterData : public TObject
{

  public:
    // Default Constructor
    R3BWRMasterData();

    /** Standard Constructor
     *@param timestamp
     **/
    R3BWRMasterData(uint64_t timestamp);

    // Destructor
    virtual ~R3BWRMasterData() {}

    // Getters
    inline const uint64_t GetTimeStamp() const { return fTimeStamp; }

  protected:
    uint64_t fTimeStamp; // timestamp for master

  public:
    ClassDef(R3BWRMasterData, 1)
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

// ---------------------------------------------------------------------------
// -----                                                                 -----
// -----                      R3BWRCalifaData                            -----
// -----                  Created 28/02/2019 by J.L. Rodriguez           -----
// -----                                                                 -----
// ---------------------------------------------------------------------------

#ifndef R3BWRCalifaData_H
#define R3BWRCalifaData_H
#include "TObject.h"

class R3BWRCalifaData : public TObject
{

  public:
    // Default Constructor
    R3BWRCalifaData();

    /** Standard Constructor
     *@param timestamp
     **/
    R3BWRCalifaData(uint64_t timestamp);

    // Destructor
    virtual ~R3BWRCalifaData() {}

    // Getters
    inline const uint64_t GetTimeStamp() const { return fTimeStamp; }

  protected:
    uint64_t fTimeStamp; // timestamp for califa

  public:
    ClassDef(R3BWRCalifaData, 1)
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

// ---------------------------------------------------------------------------
// -----                                                                 -----
// -----                      R3BWRAmsData                               -----
// -----                  Created 28/02/2019 by J.L. Rodriguez           -----
// -----                                                                 -----
// ---------------------------------------------------------------------------

#ifndef R3BWRAmsData_H
#define R3BWRAmsData_H
#include "TObject.h"

class R3BWRAmsData : public TObject
{

  public:
    // Default Constructor
    R3BWRAmsData();

    /** Standard Constructor
     *@param timestamp
     **/
    R3BWRAmsData(uint64_t timestamp);

    // Destructor
    ~R3BWRAmsData() {}

    // Getters
    inline const uint64_t GetTimeStamp() const { return fTimeStamp; }

  protected:
    uint64_t fTimeStamp; // timestamp for ams detectors

  public:
    ClassDef(R3BWRAmsData, 1)
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
// -----                              R3BHit                               -----
// -----                 Created on 01.03.2018 by D.Kresan                 -----
// -----------------------------------------------------------------------------

#ifndef R3BHIT_H
#define R3BHIT_H

#include "TObject.h"

class R3BHit : public TObject
{
  public:
    R3BHit();
    R3BHit(Int_t detId, Double_t x, Double_t y, Double_t eloss, Double_t time, Int_t hitId = -1);
    virtual ~R3BHit();

    inline const Int_t& GetDetId() const { return fDetId; }
    inline const Double_t& GetX() const { return fX; }
    inline const Double_t& GetY() const { return fY; }
    inline const Double_t& GetEloss() const { return fEloss; }
    inline const Double_t& GetTime() const { return fTime; }
    inline const Int_t& GetHitId() const { return fHitId; }

    inline void SetEloss(const Double_t& eloss) { fEloss = eloss; }
    inline void SetTime(const Double_t& time) { fTime = time; }
    inline void SetHitId(const Int_t& hitId) { fHitId = hitId; }

  protected:
    Int_t fDetId;
    Double_t fX;
    Double_t fY;
    Double_t fEloss;
    Double_t fTime;
    Int_t fHitId;

  public:
    ClassDef(R3BHit, 1)
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
// -----                              R3BTrack                             -----
// -----                 Created on 09.03.2020 by M.Heil                   -----
// -----------------------------------------------------------------------------

#ifndef R3BTrack_H
#define R3BTrack_H

#include "TObject.h"

class R3BTrack : public TObject
{
  public:
    R3BTrack();
    R3BTrack(Double_t x, Double_t y, Double_t z, Double_t px, Double_t py, Double_t pz, Int_t q, Int_t AoZ, Double_t chix, Double_t chiy, Int_t quality);
    virtual ~R3BTrack();

    inline const Double_t& GetX() const { return fX; }
    inline const Double_t& GetY() const { return fY; }
    inline const Double_t& GetZ() const { return fZ; }
    inline const Double_t& GetPx() const { return fPx; }
    inline const Double_t& GetPy() const { return fPy; }
    inline const Double_t& GetPz() const { return fPz; }
    inline const Double_t& GetQ() const { return fQ; }
    inline const Double_t& GetAoZ() const { return fAoZ; }    
    inline const Double_t& GetChix() const { return fChix; }
    inline const Double_t& GetChiy() const { return fChiy; }
    inline const Int_t& GetQuality() const { return fQuality; }

  protected:
    Double_t fX;
    Double_t fY;
    Double_t fZ;
    Double_t fPx;
    Double_t fPy;
    Double_t fPz;
    Double_t fQ;
	Double_t fAoZ;
    Double_t fChix;
    Double_t fChiy;    
    Int_t fQuality;

  public:
    ClassDef(R3BTrack, 1)
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

// Copy of RooDouble to store a double value in a TNamed to store it in a tree.

#ifndef R3B_Double
#define R3B_Double

#include "Rtypes.h"

class R3BDouble
{
  public:
    R3BDouble()
        : fValue(0)
    {
    }
    R3BDouble(Double_t value);
    R3BDouble(const R3BDouble& other)
        : fValue(other.fValue)
    {
    }
    virtual ~R3BDouble() {}

    inline operator Double_t() const { return fValue; }
    R3BDouble& operator=(Double_t value)
    {
        fValue = value;
        return *this;
    }

  protected:
    Double_t fValue; // Value payload
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
// -----                      R3BXBallPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BXBallPoint.h
 **/

#ifndef R3BXBALLPOINT_H
#define R3BXBALLPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BXBallPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BXBallPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BXBallPoint(Int_t trackID,
                  Int_t detID,
                  Int_t type,
                  Int_t cp,
                  TVector3 posIn,
                  TVector3 posOut,
                  TVector3 momIn,
                  TVector3 momOut,
                  Double_t tof,
                  Double_t length,
                  Double_t eLoss);

    /** Copy constructor **/
    R3BXBallPoint(const R3BXBallPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BXBallPoint();

    /** Accessors **/
    Int_t GetCrystalType() const { return fCrystalType; }
    Int_t GetCrystalNumber() const { return fCrystalNb; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fCrystalType;
    Int_t fCrystalNb;

    ClassDef(R3BXBallPoint, 1)
};

inline void R3BXBallPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BXBallPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                  R3BXBallCrystalHit header file                -----
// -----               Created 13/06/12  by Pablo Cabanelas            -----
// -------------------------------------------------------------------------

/**  R3BXBallCrystalHit.h
 **  A cal crystal hit is the representation of the
 **  information obtained from each crystal in the DH-CrystalBall.
 **/

#ifndef R3BXBALLCRYSTALHIT_H
#define R3BXBALLCRYSTALHIT_H

#include "FairMultiLinkedData.h"
#include "TObject.h"

class R3BXBallCrystalHit : public FairMultiLinkedData
{
  public:
    /** Default constructor **/
    R3BXBallCrystalHit();

    /** Constructor with arguments
     *@param fCrystalNb      Crystal number
     *@param fEnergy	   total energy deposited on the crystal [GeV]
     *@param fTime           Time since event start [ns]
     **/
    R3BXBallCrystalHit(Int_t crysnb, Double_t energy, Double_t time);

    /** Copy constructor **/
    R3BXBallCrystalHit(const R3BXBallCrystalHit& hit) { *this = hit; };

    /** Destructor **/
    virtual ~R3BXBallCrystalHit();

    /** Accessors **/
    Int_t GetCrystalNumber() const { return fCrystalNb; }
    Double_t GetEnergy() const { return fEnergy; }
    Double_t GetTime() const { return fTime; }

    /** Modifiers **/
    void SetCrystalNumber(Int_t crysnb) { fCrystalNb = crysnb; }
    void SetEnergy(Double32_t energy) { fEnergy = energy; }
    void SetTime(Double32_t time) { fTime = time; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fEnergy; // total energy in the crystal
    Int_t fCrystalNb;   // crystal number (1-162, number of crystals in the CB)
    Double32_t fTime;   // time of the interaction

    ClassDef(R3BXBallCrystalHit, 1)
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
// -----                R3BXBallCrystalHitSim header file                -----
// -----               Created 02/07/12  by Pablo Cabanelas            -----
// -------------------------------------------------------------------------

/**  R3BXBallCrystalHitSim.h
 **  A cal crystal hit is the representation of the
 **  information obtained from each crystal in the DH-CrystalBall.
 **/

#ifndef R3BXBALLCRYSTALHITSIM_H
#define R3BXBALLCRYSTALHITSIM_H

#include "FairMultiLinkedData.h"
#include "R3BXBallCrystalHit.h"
#include "TObject.h"

class R3BXBallCrystalHitSim : public R3BXBallCrystalHit
{
  public:
    /** Default constructor **/
    R3BXBallCrystalHitSim();

    /** Constructor with arguments
     *@param fCrystalType    Crystal type
     *@param fNSteps         Steps inside an active volume
     *@param fEinc           total energy entering the crystal [GeV]
     *@param fTrackID        Track index
     *@param fVolumeID       Volume index
     *@param fParentTrackID  Parent Track index
     *@param fTrackPID       Particle identification
     *@param fTrackUniqueID  Particle unique id (e.g. if Delta electron, fTrackUniqueID=9)
     **/
    R3BXBallCrystalHitSim(Int_t type,
                          Int_t crysnb,
                          Double_t energy,
                          Double_t time,
                          Int_t steps,
                          Double_t einc,
                          Int_t trackid,
                          Int_t volid,
                          Int_t partrackid,
                          Int_t pdgid,
                          Int_t uniqueid);

    /** Copy constructor **/
    R3BXBallCrystalHitSim(const R3BXBallCrystalHitSim& hit) { *this = hit; };

    /** Destructor **/
    virtual ~R3BXBallCrystalHitSim();

    /** Accessors **/
    Int_t GetCrystalType() const { return fCrystalType; }
    Int_t GetNSteps() const { return fNSteps; }
    Double_t GetEinc() const { return fEinc; }
    Int_t GetTrackId() const { return fTrackID; }
    Int_t GetVolumeId() const { return fVolumeID; }
    Int_t GetParentTrackId() const { return fParentTrackID; }
    Int_t GetTrackPID() const { return fTrackPID; }
    Int_t GetTrackUniqueID() const { return fTrackUniqueID; }

    /** Modifiers **/
    void SetCrystalType(Int_t type) { fCrystalType = type; }
    void AddMoreEnergy(Double32_t moreEnergy) { fEnergy += moreEnergy; }
    void SetNSteps(Int_t steps) { fNSteps = steps; }
    void SetEinc(Double32_t einc) { fEinc = einc; }
    void SetTrackId(Int_t trackid) { fTrackID = trackid; }
    void SetVolumeId(Int_t volid) { fVolumeID = volid; }
    void SetParentTrackId(Int_t partrackid) { fParentTrackID = partrackid; }
    void SetTrackPID(Int_t pdgid) { fTrackPID = pdgid; }
    void SetTrackUniqueID(Int_t uniqueid) { fTrackUniqueID = uniqueid; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Int_t fCrystalType;   // crystal type (1-5, the four kind of crystal shapes in the CB
    Int_t fNSteps;        // steps inside an active volume
    Double32_t fEinc;     // total energy entering the crystal
    Int_t fTrackID;       // track index
    Int_t fVolumeID;      // volume index
    Int_t fParentTrackID; // parent track index
    Int_t fTrackPID;      // particle identification
    Int_t fTrackUniqueID; // particle unique id

    ClassDef(R3BXBallCrystalHitSim, 1)
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

#ifndef R3BCALIFACRYSTALCALDATA_H
#define R3BCALIFACRYSTALCALDATA_H

#include "FairMultiLinkedData.h"
#include "TObject.h"

class R3BCalifaCrystalCalData : public FairMultiLinkedData
{
  public:
    /** Default constructor **/
    R3BCalifaCrystalCalData();

    /** Constructor with arguments
     *@param fCrystalId   Crystal unique identifier
     *@param fEnergy      Total energy deposited on the crystal ([GeV] in sim)
     *@param fNf  				Total Nf (fast)
     *@param fNs					Total Ns (slow)
     *@param fTime        Time since event start [ns]
     *@param fToT_Energy  Total energy deposited on the crystal from ToT ([GeV] in sim)
     **/
    R3BCalifaCrystalCalData(Int_t ident,
                            Double_t energy,
                            Double_t Nf,
                            Double_t Ns,
                            ULong64_t time,
                            Double_t tot_energy = 0);

    /** Copy constructor **/
    R3BCalifaCrystalCalData(const R3BCalifaCrystalCalData&);

    R3BCalifaCrystalCalData& operator=(const R3BCalifaCrystalCalData&) { return *this; }

    /** Destructor **/
    virtual ~R3BCalifaCrystalCalData() {}

    /** Accessors **/
    inline const Int_t& GetCrystalId() const { return fCrystalId; }
    inline const Double_t& GetEnergy() const { return fEnergy; }
    inline const Double_t& GetToT_Energy() const { return fToT_Energy; }
    inline const Double_t& GetNf() const { return fNf; }
    inline const Double_t& GetNs() const { return fNs; }
    inline const ULong64_t& GetTime() const { return fTime; }

    /** Modifiers **/
    void SetCrystalId(Int_t ident) { fCrystalId = ident; }
    void SetEnergy(Double32_t energy) { fEnergy = energy; }
    void SetToT_Energy(Double32_t energy) { fToT_Energy = energy; }
    void SetNf(Double32_t Nf) { fNf = Nf; }
    void SetNs(Double32_t Ns) { fNs = Ns; }
    void SetTime(ULong64_t time) { fTime = time; }
    void AddMoreEnergy(Double32_t moreEnergy) { fEnergy += moreEnergy; }
    void AddMoreNf(Double32_t moreNf) { fNf += moreNf; }
    void AddMoreNs(Double32_t moreNs) { fNs += moreNs; }
    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fEnergy;     // total energy in the crystal
    Double32_t fNf;         // total Nf in the crystal
    Double32_t fNs;         // total Nf in the crystal
    Double32_t fToT_Energy; // total energy in the crystal from ToT
    ULong64_t fTime;        // time of the interaction
    Int_t fCrystalId;       // crystal unique identifier

  public:
    ClassDef(R3BCalifaCrystalCalData, 1)
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

#ifndef R3BCALIFAMAPPEDDATA_H
#define R3BCALIFAMAPPEDDATA_H
#include "TObject.h"
#include <stdint.h>

class R3BCalifaMappedData : public TObject
{

  public:
    // Default Constructor
    R3BCalifaMappedData();

    /** Standard Constructor
     *@param crystalId   Crystal unique identifier
     *@param energy      Total energy deposited in the crystal [GeV]
     *@param nf          Total fast amplitude deposited in the crystal [a.u.]
     *@param ns          Total slow amplitude deposited on the crystal [a.u.]
     *@param time        Time since event start [ns]
     *@param tot         Time over threshold
     **/
    R3BCalifaMappedData(UShort_t crystalId, Int_t energy, Int_t nf, Int_t ns, uint64_t time, UChar_t error, Int_t tot);

    // Destructor
    virtual ~R3BCalifaMappedData() {}

    // Getters
    inline const UShort_t& GetCrystalId() const { return fCrystalId; }
    inline const Int_t& GetEnergy() const { return fEnergy; }
    inline const Int_t& GetNf() const { return fNf; }
    inline const Int_t& GetNs() const { return fNs; }
    inline const uint64_t& GetTime() const { return fTime; }
    inline const UChar_t& GetError() const { return fError; }
    inline const Int_t& GetTot() const { return fTot; }

  protected:
    UShort_t fCrystalId; // crystal unique identifier
    Int_t fEnergy;       // total energy in the crystal
    Int_t fNf;           // total fast amplitude in the crystal
    Int_t fNs;           // total slow amplitude in the crystal
    uint64_t fTime;      // time-stamp (common to all the hits in the event)
    UChar_t fError;      // bit coded error flag
    Int_t fTot;          // time-over-treshold

  public:
    ClassDef(R3BCalifaMappedData, 3)
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

#ifndef R3BCALIFAHITDATA_H
#define R3BCALIFAHITDATA_H

#include "TObject.h"

#include "FairMultiLinkedData.h"
#include "R3BCalifaCrystalCalData.h"

class R3BCalifaHitData : public FairMultiLinkedData
{

  public:
    /** Default constructor **/
    R3BCalifaHitData();

    /** Constructor with arguments
     *@param fNbOfCrystalHits		Crystal unique identifier
     *@param fEnergy				Total energy deposited
     *@param fTheta					Reconstructed theta
     *@param fPhi					Reconstructed phi
     **/
    R3BCalifaHitData(UInt_t Nb, Double_t ene, Double_t nf, Double_t ns, Double_t theta, Double_t phi, ULong64_t time);

    R3BCalifaHitData(uint64_t time, double theta, double phi, uint32_t clusterId)
        : fTime(time)
        , fTheta(theta)
        , fPhi(phi)
        , fClusterId(clusterId)
        , fEnergy(0.)
        , fNf(0.)
        , fNs(0)
        , fNbOfCrystalHits(0)
    {
    }

    /** Copy constructor **/
    R3BCalifaHitData(const R3BCalifaHitData&);

    /** += operator **/
    R3BCalifaHitData& operator+=(R3BCalifaCrystalCalData& cH)
    {
        this->fEnergy += cH.GetEnergy();
        this->fNf += cH.GetNf();
        this->fNs += cH.GetNs();
        this->fNbOfCrystalHits++;
        return *this;
    }

    R3BCalifaHitData& operator=(const R3BCalifaHitData&) { return *this; }

    /** Destructor **/
    virtual ~R3BCalifaHitData();

    /** Accessors **/
    UInt_t GetNbOfCrystalHits() const { return fNbOfCrystalHits; }
    Double_t GetEnergy() const { return fEnergy; }
    Double_t GetNf() const { return fNf; }
    Double_t GetNs() const { return fNs; }
    Double_t GetTheta() const { return fTheta; }
    Double_t GetPhi() const { return fPhi; }
    ULong64_t GetTime() const { return fTime; }
    uint32_t GetClusterId() const { return fClusterId; }

    /** Modifiers **/
    void SetNbOfCrystalHits(UInt_t number) { fNbOfCrystalHits = number; }
    void SetEnergy(Double_t ene) { fEnergy = ene; }
    void SetNf(Double_t nf) { fNf = nf; }
    void SetNs(Double_t ns) { fNs = ns; }
    void SetTheta(Double_t theta) { fTheta = theta; }
    void SetPhi(Double_t phi) { fPhi = phi; }
    void SetTime(ULong64_t time) { fTime = time; }
    void SetClusterId(uint32_t id) { fClusterId = id; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    // Basic Hit information
    UInt_t fNbOfCrystalHits; // number of crystals contribuying to the R3BCalifaHitData
    Double_t fEnergy;        // total energy deposited
    Double_t fNf;            // total Nf deposited
    Double_t fNs;            // total Ns deposited
    Double_t fTheta;         // reconstructed theta
    Double_t fPhi;           // reconstructed phi
    ULong64_t fTime;         // WR time stamp
    uint32_t fClusterId;

    ClassDef(R3BCalifaHitData, 3)
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

#ifndef R3BCALIFAPOINT_H
#define R3BCALIFAPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BCalifaPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BCalifaPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param ident    Crystal ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     *@param Nf       Fast component of CsI(Tl) light [a.u.]
     *@param Ns       Slow component of CsI(Tl) light [a.u.]
     *@param EventId  Event Identifier
     **/
    R3BCalifaPoint(Int_t trackID,
                   Int_t detID,
                   Int_t ident,
                   TVector3 posIn,
                   TVector3 momIn,
                   Double_t tof,
                   Double_t length,
                   Double_t eLoss,
                   Double_t Nf,
                   Double_t Ns,
                   UInt_t EventId);

    /** Copy constructor **/
    R3BCalifaPoint(const R3BCalifaPoint&);

    R3BCalifaPoint& operator=(const R3BCalifaPoint&) { return *this; }

    /** Destructor **/
    virtual ~R3BCalifaPoint();

    /** Accessors **/
    Int_t GetCrystalId() const { return fCrystalId; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetNf() const { return fNf; }
    Double_t GetNs() const { return fNs; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Int_t fCrystalId;    ///< crystal index
    Double32_t fNf, fNs; ///< nf, ns components

    ClassDef(R3BCalifaPoint, 2)
};

#endif
// -------------------------------------------------------------------------
// -----                  R3BHPGeDetPoint header file                  -----
// -----                Created 11/09/12  by P.Cabanelas               -----
// -------------------------------------------------------------------------


/**  R3BHPGeDetPoint.h
 **/


#ifndef R3BHPGeDetPoint_H
#define R3BHPGeDetPoint_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BHPGeDetPoint : public FairMCPoint 
{

 public:
  /** Default constructor **/
  R3BHPGeDetPoint();


  /** Constructor with arguments
   *@param trackID         Index of MCTrack
   *@param detID           Detector ID
   *@param posIn           Coordinates at entrance to active volume [cm]
   *@param posOut          Coordinates at exit of active volume [cm]
   *@param momIn           Momentum of track at entrance [GeV]
   *@param momOut          Momentum of track at exit [GeV]
   *@param tof             Time since event start [ns]
   *@param length          Track length since creation [cm]
   *@param eLoss           Energy deposit [GeV]
   **/
  R3BHPGeDetPoint(Int_t trackID, Int_t detID, Int_t volid,
              TVector3 posIn, TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BHPGeDetPoint(const R3BHPGeDetPoint&);
  
  R3BHPGeDetPoint& operator=(const R3BHPGeDetPoint&) { return *this; }


  /** Destructor **/
  virtual ~R3BHPGeDetPoint();


  /** Accessors **/
  Int_t    GetDetectorId() const { return fDetectorID; }
  Double_t GetXIn()        const { return fX; }
  Double_t GetYIn()        const { return fY; }
  Double_t GetZIn()        const { return fZ; }
  Double_t GetXOut()       const { return fX_out; }
  Double_t GetYOut()       const { return fY_out; }
  Double_t GetZOut()       const { return fZ_out; }
  Double_t GetPxOut()      const { return fPx_out; }
  Double_t GetPyOut()      const { return fPy_out; }
  Double_t GetPzOut()      const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:
  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fDetectorId;

  ClassDef(R3BHPGeDetPoint,2)  //se ha de canviar la version cada vez que se hace una modificacion grande
};



inline void R3BHPGeDetPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BHPGeDetPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif
// -------------------------------------------------------------------------
// -----                  R3BHPGeDetPoint header file                  -----
// -----                Created 11/09/12  by P.Cabanelas               -----
// -------------------------------------------------------------------------


/**  R3BHPGeDetPoint.h
 **/


#ifndef R3BHPGeDetPoint_H
#define R3BHPGeDetPoint_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class R3BHPGeDetPoint : public FairMCPoint 
{

 public:
  /** Default constructor **/
  R3BHPGeDetPoint();


  /** Constructor with arguments
   *@param trackID         Index of MCTrack
   *@param detID           Detector ID
   *@param posIn           Coordinates at entrance to active volume [cm]
   *@param posOut          Coordinates at exit of active volume [cm]
   *@param momIn           Momentum of track at entrance [GeV]
   *@param momOut          Momentum of track at exit [GeV]
   *@param tof             Time since event start [ns]
   *@param length          Track length since creation [cm]
   *@param eLoss           Energy deposit [GeV]
   **/
  R3BHPGeDetPoint(Int_t trackID, Int_t detID, Int_t volid,
              TVector3 posIn, TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  R3BHPGeDetPoint(const R3BHPGeDetPoint&);
  
  R3BHPGeDetPoint& operator=(const R3BHPGeDetPoint&) { return *this; }


  /** Destructor **/
  virtual ~R3BHPGeDetPoint();


  /** Accessors **/
  Int_t    GetDetectorId() const { return fDetectorID; }
  Double_t GetXIn()        const { return fX; }
  Double_t GetYIn()        const { return fY; }
  Double_t GetZIn()        const { return fZ; }
  Double_t GetXOut()       const { return fX_out; }
  Double_t GetYOut()       const { return fY_out; }
  Double_t GetZOut()       const { return fZ_out; }
  Double_t GetPxOut()      const { return fPx_out; }
  Double_t GetPyOut()      const { return fPy_out; }
  Double_t GetPzOut()      const { return fPz_out; }
  void PositionIn(TVector3& pos)  { pos.SetXYZ(fX, fY, fZ); }
  void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out,fY_out,fZ_out); }
  void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out,fPy_out,fPz_out); }


  /** Point coordinates at given z from linear extrapolation **/
  Double_t GetX(Double_t z) const;
  Double_t GetY(Double_t z) const;


  /** Check for distance between in and out **/
  Bool_t IsUsable() const;


  /** Modifiers **/
  void SetPositionOut(TVector3 pos);
  void SetMomentumOut(TVector3 mom);


  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:
  Double32_t fX_out,  fY_out,  fZ_out;
  Double32_t fPx_out, fPy_out, fPz_out;
  Int_t fDetectorId;

  ClassDef(R3BHPGeDetPoint,2)  //se ha de canviar la version cada vez que se hace una modificacion grande
};



inline void R3BHPGeDetPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void R3BHPGeDetPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



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
// -----                      R3BDchPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BDchPoint.h
 **/

#ifndef R3BDCHPOINT_H
#define R3BDCHPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BDchPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BDchPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BDchPoint(Int_t trackId,
                Int_t mod,
                Int_t layer,
                Int_t cell,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                TVector3 lpos1,
                TVector3 lmom1,
                TVector3 lpos2,
                TVector3 lmom2,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BDchPoint(const R3BDchPoint&);

    R3BDchPoint& operator=(const R3BDchPoint&) { return *this; }

    /** Destructor **/
    virtual ~R3BDchPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }

    Double_t GetXLocalIn() const { return fLocalX_in; }
    Double_t GetYLocalIn() const { return fLocalY_in; }

    Double_t GetXLocalOut() const { return fLocalX_out; }
    Double_t GetYLocalOut() const { return fLocalY_out; }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void MomentumIn(TVector3& mom) { mom.SetXYZ(fPx, fPy, fPz); }

    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    void LocalPositionIn(TVector3& pos) { pos.SetXYZ(fLocalX_in, fLocalY_in, fLocalZ_in); }
    void LocalMomentumIn(TVector3& mom) { mom.SetXYZ(fLocalPx_in, fLocalPy_in, fLocalPz_in); }

    void LocalPositionOut(TVector3& pos) { pos.SetXYZ(fLocalX_out, fLocalY_out, fLocalZ_out); }
    void LocalMomentumOut(TVector3& mom) { mom.SetXYZ(fLocalPx_out, fLocalPy_out, fLocalPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;
    Double_t GetLocalX(Double_t z) const;
    Double_t GetLocalY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Double32_t fLocalX_in, fLocalY_in, fLocalZ_in;
    Double32_t fLocalPx_in, fLocalPy_in, fLocalPz_in;
    Double32_t fLocalX_out, fLocalY_out, fLocalZ_out;
    Double32_t fLocalPx_out, fLocalPy_out, fLocalPz_out;

    Int_t fModule;
    Int_t fLayer;
    Int_t fCell;

    ClassDef(R3BDchPoint, 1)
};

inline void R3BDchPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BDchPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BDchFullPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BDchFullPoint.h
 **/

#ifndef R3BDCHFULLPOINT_H
#define R3BDCHFULLPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BDchFullPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BDchFullPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BDchFullPoint(Int_t trackId,
                    Int_t module,
                    Int_t layer,
                    Int_t cell,
                    TVector3 pos,
                    TVector3 lpos,
                    TVector3 mom,
                    TVector3 lmom,
                    Double_t tof,
                    Double_t length,
                    Double_t eLoss);

    /** Copy constructor **/
    R3BDchFullPoint(const R3BDchFullPoint&);

    R3BDchFullPoint& operator=(const R3BDchFullPoint&) { return *this; }

    /** Destructor **/
    virtual ~R3BDchFullPoint();

    /** Accessors **/
    Double_t GetLocalX() const { return fLocalX; }
    Double_t GetLocalY() const { return fLocalY; }
    Double_t GetLocalZ() const { return fLocalZ; }

    Double_t GetLocalPx() const { return fLocalPx; }
    Double_t GetLocalPy() const { return fLocalPy; }
    Double_t GetLocalPz() const { return fLocalPz; }

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fLocalX, fLocalY, fLocalZ;
    Double32_t fLocalPx, fLocalPy, fLocalPz;
    Int_t fModule;
    Int_t fLayer;
    Int_t fCell;

    ClassDef(R3BDchFullPoint, 1)
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
// -----                      R3BGfiPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BGfiPoint.h
 **/

#ifndef R3BGFIPOINT_H
#define R3BGFIPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BGfiPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BGfiPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BGfiPoint(Int_t trackID,
                Int_t detID,
                Int_t plane,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BGfiPoint(const R3BGfiPoint&);

    /** Destructor **/
    virtual ~R3BGfiPoint();

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fModule;

    ClassDef(R3BGfiPoint, 1)
};

inline void R3BGfiPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BGfiPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BmTofPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BmTofPoint.h
 **/

#ifndef R3BMTOFPOINT_H
#define R3BMTOFPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BmTofPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BmTofPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BmTofPoint(Int_t trackID,
                 Int_t detID,
                 TVector3 posIn,
                 TVector3 posOut,
                 TVector3 momIn,
                 TVector3 momOut,
                 Double_t tof,
                 Double_t length,
                 Double_t eLoss);

    /** Copy constructor **/
    R3BmTofPoint(const R3BmTofPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BmTofPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;

    ClassDef(R3BmTofPoint, 1)
};

inline void R3BmTofPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BmTofPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BmTofDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BmTofDigi.h
 **/

#ifndef R3BMTOFDIGI_H
#define R3BMTOFDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BmTofDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BmTofDigi();
    R3BmTofDigi(Int_t ntmul,
                Double_t ntfx,
                Double_t ntfy,
                Double_t ntft,
                Double_t ntfpath,
                Double_t ntfpx,
                // Double_t ntfpy,Double_t ntfpz);
                Double_t ntfpy,
                Double_t ntfpz,
                Double_t ntfe);

    /** Copy constructor **/
    R3BmTofDigi(const R3BmTofDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BmTofDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setntmul(Int_t mul) { Ntmul = mul; }
    Double_t Getntmul() { return Ntmul; }

    void Setntfx(Double_t pos) { Ntx = pos; }
    Double_t Getntfx() { return Ntx; }

    void Setntfy(Double_t pos) { Nty = pos; }
    Double_t Getntfy() { return Nty; }

    void Setntft(Double_t time) { Ntt = time; }
    Double_t Getntft() { return Ntt; }

    void Setntfpath(Double_t length) { Ntpath = length; }
    Double_t Getntfpath() { return Ntpath; }

    void Setntfpx(Int_t mom) { Ntfpx = mom; }
    Double_t Getntfpx() { return Ntfpx; }

    void Setntfpy(Int_t mom) { Ntfpy = mom; }
    Double_t Getntfpy() { return Ntfpy; }

    void Setntfpz(Int_t mom) { Ntfpz = mom; }
    Double_t Getntfpz() { return Ntfpz; }

    void Setntfe(Double_t en) { Nte = en; }
    Double_t Getntfe() { return Nte; }

  protected:
    Int_t Ntmul;
    Double32_t Ntx;
    Double32_t Nty;
    Double32_t Ntt;
    Double32_t Ntpath;
    Double32_t Ntfpx;
    Double32_t Ntfpy;
    Double32_t Ntfpz;
    Double32_t Nte;

    ClassDef(R3BmTofDigi, 1)
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
// -----                      R3BTofPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BTofPoint.h
 **/

#ifndef R3BTOFPOINT_H
#define R3BTOFPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BTofPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BTofPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BTofPoint(Int_t trackID,
                Int_t detID,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BTofPoint(const R3BTofPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTofPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;

    ClassDef(R3BTofPoint, 1)
};

inline void R3BTofPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BTofPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BVetoPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BVetoPoint.h
 **/

#ifndef R3BVETOPOINT_H
#define R3BVETOPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BVetoPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BVetoPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BVetoPoint(Int_t trackID,
                 Int_t detID,
                 Int_t box,
                 Int_t sector,
                 Int_t paddle,
                 TVector3 posIn,
                 TVector3 posOut,
                 TVector3 momIn,
                 TVector3 momOut,
                 Double_t tof,
                 Double_t length,
                 Double_t eLoss);

    /** Copy constructor **/
    R3BVetoPoint(const R3BVetoPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BVetoPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    Int_t GetSector() const { return fSector; }
    Int_t GetPaddleType() const { return fPaddleTyp; }
    Int_t GetPaddleNb() const { return fPaddleNb; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fSector;
    Int_t fPaddleNb;
    Int_t fPaddleTyp;

    ClassDef(R3BVetoPoint, 1)
};

inline void R3BVetoPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BVetoPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      ELILuMonPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  ELILuMonPoint.h
 **/

#ifndef ELILUMONPOINT_H
#define ELILUMONPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class ELILuMonPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    ELILuMonPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    ELILuMonPoint(Int_t trackID,
                  Int_t detID,
                  Int_t copy,
                  TVector3 posIn,
                  TVector3 posOut,
                  TVector3 momIn,
                  TVector3 momOut,
                  Double_t tof,
                  Double_t length,
                  Double_t eLoss);

    /** Copy constructor **/
    ELILuMonPoint(const ELILuMonPoint&);

    ELILuMonPoint& operator=(const ELILuMonPoint&) { return *this; }

    /** Destructor **/
    virtual ~ELILuMonPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fCrystalNb;

    ClassDef(ELILuMonPoint, 1)
};

inline void ELILuMonPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void ELILuMonPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BTraPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BTraPoint.h
 **/

#ifndef R3BTRAPOINT_H
#define R3BTRAPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BTraPoint : public FairMCPoint
{
  public:
    /** Default constructor **/
    R3BTraPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param detVolID Detector Copy ID  // added by Marc
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     *@param pid      Particle ID
     **/
    R3BTraPoint(Int_t trackID,
                Int_t detID,
                Int_t detCopyID,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss,
                Int_t pid);

    /** Copy constructor **/
    R3BTraPoint(const R3BTraPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTraPoint();

    /** Accessors **/
    Int_t GetDetCopyID() const { return fDetCopyID; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Int_t GetPid() const { return fPid; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    inline Double_t GetTheta() const
    {
        TVector3 v;
        v.SetXYZ(fX, fY, fZ);
        return v.Theta();
    }
    inline Double_t GetPhi() const
    {
        TVector3 v;
        v.SetXYZ(fX, fY, fZ);
        return v.Phi();
    }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);
    void SetDetCopyID(Int_t id) { fDetCopyID = id; }; // added by Marc

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out, fEloss;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fDetCopyID, fPid;

    ClassDef(R3BTraPoint, 1)
};

inline void R3BTraPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BTraPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BTraHit header file                  -----
// -----                  Created 07/07/09  by M. Labiche               -----
// -------------------------------------------------------------------------

#ifndef R3BTRAHIT_H
#define R3BTRAHIT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"

class R3BTraHit : public FairHit
{

  public:
    /** Default constructor **/
    R3BTraHit();

    /** Copy constructor **/
    R3BTraHit(const R3BTraHit& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTraHit();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetEnergy(Double_t en) { fEnergy = en; }
    Double_t GetEnergy() { return fEnergy; }

    void SetToF(Double_t time) { fTof = time; }
    Double_t GetToF() { return fTof; }

    void SetDetID(Int_t id) { fDetectorID = id; }
    Int_t GetDetID() { return fDetectorID; }

  protected:
    Double32_t fEnergy;
    Double32_t fTof;

    ClassDef(R3BTraHit, 1)
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
// -----                      R3BTra header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------
/**  R3BSitrackerHit.h
 **/

#ifndef R3BSITRACKERHIT_H
#define R3BSITRACKERHIT_H

#include "FairHit.h"
#include "TObject.h"
#include "TVector3.h"

class R3BSitrackerHit : public FairHit
{

  public:
    /** Default constructor **/
    R3BSitrackerHit();
    /** Copy constructor **/
    R3BSitrackerHit(const R3BSitrackerHit& point) { *this = point; };
    /** Destructor **/
    virtual ~R3BSitrackerHit();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetType(UInt_t ty) { type = ty; }
    void SetCopy(UInt_t co) { copy = co; }
    void SetEnergy(Double_t en) { fEnergy = en; }
    void SetNbOfSteps(UInt_t nb) { nbOfSteps = nb; }

    void SetTimeFirstStep(Double_t ti) { fTimeFirstStep = ti; }
    void SetTimeLastStep(Double_t ti) { fTimeLastStep = ti; }
    void SetPositionX(Double_t posX) { fX = posX; }
    void SetPositionY(Double_t posY) { fY = posY; }
    void SetPositionZ(Double_t posZ) { fZ = posZ; }

    void SetNbOfPrimaries(UInt_t nb) { nbOfPrimaries = nb; }
    void SetEnergyPrimary(Double_t ene) { fEnergyPrimary = ene; }
    void SetThetaPrimary(Double_t the) { fThetaPrimary = the; }
    void SetPhiPrimary(Double_t phi) { fPhiPrimary = phi; }

    void SetEventID(UInt_t ev) { eventID = ev; }
    void SetRunID(UInt_t run) { runID = run; }

    Int_t GetType() { return type; }
    Int_t GetCopy() { return copy; }
    Double_t GetEnergy() { return fEnergy; }
    UInt_t GetNbOfSteps() { return nbOfSteps; }

    Double_t GetTimeFirstStep() { return fTimeFirstStep; }
    Double_t GetTimeLastStep() { return fTimeLastStep; }

    UInt_t GetNbOfPrimaries() { return nbOfPrimaries; }
    Double_t GetEnergyPrimary() { return fEnergyPrimary; }
    Double_t GetThetaPrimary() { return fThetaPrimary; }
    Double_t GetPhiPrimary() { return fPhiPrimary; }

    UInt_t GetEventID() { return eventID; }
    UInt_t GetRunID() { return runID; }

  protected:
    // Crystal identification
    UInt_t type; // crystal type
    UInt_t copy; // crystal copy

    // Basic Hit information
    Double32_t fEnergy; // total energy deposited on the paddle
    UInt_t nbOfSteps;   // number of step depositing energy in the crystal

    Double32_t fTimeFirstStep; // time of the first interaction
    Double32_t fTimeLastStep;  // time of the last interaction

    // Primary identification
    UInt_t nbOfPrimaries; // for a gamma source
    Double32_t fEnergyPrimary;
    Double32_t fThetaPrimary;
    Double32_t fPhiPrimary;

    // Event identification
    UInt_t eventID; // event ID
    UInt_t runID;   // run ID

    ClassDef(R3BSitrackerHit, 1)
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
// -----                  R3BTrackerHit header file                -----
// -----               Created 01/09/10  by N.Ashwood              -----
// -------------------------------------------------------------------------

#ifndef R3BTRACKERHIT_H
#define R3BTRACKERHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"

class R3BTrackerHit : public FairMultiLinkedData
{

  public:
    /** Default constructor **/
    R3BTrackerHit();

    R3BTrackerHit(Double_t ene,
                  Int_t det,
                  Double_t x,
                  Double_t y,
                  Double_t z,
                  Double_t px,
                  Double_t py,
                  Double_t pz,
                  Double_t th,
                  Double_t phi);
    // R3BTrackerHit(Double_t ene, Int_t det);

    /** Copy constructor **/
    R3BTrackerHit(const R3BTrackerHit& hit) { *this = hit; };

    /** Destructor **/
    virtual ~R3BTrackerHit();

    /** Accessors **/
    // Int_t GetNbOfTrackerHits()   const { return fNbOfTrackerHits; }
    Double_t GetEnergy() const { return fEnergy; }
    Int_t GetDetector() const { return fDetector; }
    Double_t GetXHit() const { return fXHit; }
    Double_t GetYHit() const { return fYHit; }
    Double_t GetZHit() const { return fZHit; }
    Double_t GetPx() const { return fPx; }
    Double_t GetPy() const { return fPy; }
    Double_t GetPz() const { return fPz; }
    Double_t GetThetaZero() const { return fThetaZero; }
    Double_t GetPhiZero() const { return fPhiZero; }
    /** Modifiers **/
    // void SetNbOfTrackerHits(Int_t number){fNbOfTrackerHits = number;}
    void SetEnergy(Double_t ene) { fEnergy = ene; }
    void SetDetector(Int_t det) { fDetector = det; }
    void SetXHit(Double_t x) { fXHit = x; }
    void SetYHit(Double_t y) { fYHit = y; }
    void SetZHit(Double_t z) { fZHit = z; }
    void SetPx(Double_t px) { fPx = px; }
    void SetPy(Double_t py) { fPy = py; }
    void SetPz(Double_t pz) { fPz = pz; }
    void SetThetaZero(Double_t th) { fThetaZero = th; }
    void GetPhiZero(Double_t phi) { fPhiZero = phi; }

    /** Output to screen **/
    // virtual void Print(const Option_t* opt) const;

  protected:
    // Basic Hit information
    // Int_t fNbOfTrackerHits; //number of Si hits contributing to the R3BTrackerHit
    Double_t fEnergy;    // total energy deposited
    Int_t fDetector;     // Detector hit by event
    Double_t fXHit;      // Position in x of hit in detector fdetector
    Double_t fYHit;      // Position in y of hit in detector fdetector
    Double_t fZHit;      // Position in z of hit in detector fdetector
    Double_t fPx;        // Momentum in the x direction of particle
    Double_t fPy;        // Momentum in the y direction of particle
    Double_t fPz;        // Momentum in the z direction of particle
    Double_t fThetaZero; // Theta from (0,0,0) in detector fdetector
    Double_t fPhiZero;   // Phi from (0,0,0) in detector fdetector

    ClassDef(R3BTrackerHit, 1)
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
// -----                      R3BStartrackPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BStartrackPoint.h
 **/

#ifndef R3BSTARTRACKPOINT_H
#define R3BSTARTRACKPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BStartrackPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BStartrackPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param detVolID Detector Copy ID  // added by Marc
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BStartrackPoint(Int_t trackID,
                      Int_t detID,
                      Int_t detCopyID, // detCopyID added by Marc
                      TVector3 posIn,
                      TVector3 posOut,
                      TVector3 momIn,
                      TVector3 momOut,
                      Double_t tof,
                      Double_t length,
                      Double_t eLoss);

    /** Copy constructor **/
    R3BStartrackPoint(const R3BStartrackPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BStartrackPoint();

    /** Accessors **/
    Int_t GetDetCopyID() const { return fDetCopyID; } // added by Marc
    Double_t GetTOF() const { return fTime; }         // added by Marc
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);
    void SetDetCopyID(Int_t id) { fDetCopyID = id; }; // added by Marc

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fDetCopyID; // added by Marc

    ClassDef(R3BStartrackPoint, 1)
};

inline void R3BStartrackPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BStartrackPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BStartrackHit header file                  -----
// -----                  Created 07/07/09  by M. Labiche               -----
// -------------------------------------------------------------------------

#ifndef R3BSTARTRACKHIT_H
#define R3BSTARTRACKHIT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"

class R3BStartrackHit : public FairHit
{

  public:
    /** Default constructor **/
    R3BStartrackHit();

    /** Copy constructor **/
    R3BStartrackHit(const R3BStartrackHit& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BStartrackHit();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetEnergy(Double_t en) { fEnergy = en; }
    Double_t GetEnergy() { return fEnergy; }

    void SetToF(Double_t time) { fTof = time; }
    Double_t GetToF() { return fTof; }

    void SetDetID(Int_t id) { fDetectorID = id; }
    Int_t GetDetID() { return fDetectorID; }

  protected:
    Double32_t fEnergy;
    Double32_t fTof;

    ClassDef(R3BStartrackHit, 1)
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
// -----                  R3BStartrackerDigitHit header file           -----
// -----               Created 28/04/14  by M.Labiche                  -----
// -------------------------------------------------------------------------

#ifndef R3BSTARTRACKERDIGITHIT_H
#define R3BSTARTRACKERDIGITHIT_H

#include "TObject.h"

#include "FairMultiLinkedData.h"

class R3BStartrackerDigitHit : public FairMultiLinkedData
{

  public:
    /** Default constructor **/
    R3BStartrackerDigitHit();

    // R3BStartrackerDigitHit(Double_t ene, Int_t det, Int_t Stripfrt, Int_t Stripbck, Double_t time);
    R3BStartrackerDigitHit(Int_t det, Int_t chip, Int_t side, Int_t strip, Double_t ene, Double_t time);

    /** Copy constructor **/
    R3BStartrackerDigitHit(const R3BStartrackerDigitHit& hit) { *this = hit; };

    /** Destructor **/
    virtual ~R3BStartrackerDigitHit();

    /** Accessors **/
    // Int_t GetNbOfTrackerHits()   const { return fNbOfTrackerHits; }
    Double_t GetEnergy() const { return fEnergy; }
    Double_t GetTime() const { return fTime; }
    Int_t GetDetector() const { return fDetector; }
    Int_t GetChip() const { return fChip; }
    Int_t GetSide() const { return fSide; }
    Int_t GetStrip() const { return fStrip; }
    /*
    Double_t GetStripfrt()   const { return fStripfrt; }
    Double_t GetStripbck()   const { return fStripbck; }
    */
    /** Modifiers **/
    // void SetNbOfTrackerHits(Int_t number){fNbOfTrackerHits = number;}
    void SetEnergy(Double_t ene) { fEnergy = ene; }
    void SetDetector(Int_t det) { fDetector = det; }
    void SetChip(Int_t chip) { fChip = chip; }
    void SetSide(Int_t side) { fSide = side; }
    void SetStrip(Int_t strip) { fStrip = strip; }
    /*
    void SetStripfrt(Int_t Stripfrt){fStripfrt = Stripfrt;}
    void SetStripbck(Int_t Stripbck){fStripbck = Stripbck;}
    */

    /** Output to screen **/
    // virtual void Print(const Option_t* opt) const;

  protected:
    // Basic Hit information
    // Int_t fNbOfTrackerHits; //number of Si hits contributing to the R3BStartrackerHit
    Double_t fEnergy; // total energy deposited
    Double_t fTime;   // global time when hit occur
    Int_t fDetector;  // Detector hit by event
    Int_t fChip;      // ASIC chip hit by event
    Int_t fSide;      // Front or back of Det hit by event
    Int_t fStrip;     // Front or back of Det hit by event
    /*
    Double_t fStripfrt; // front strip hit in detector fdetector
    Double_t fStripbck; // back strip hit in detector fdetector
    */
    ClassDef(R3BStartrackerDigitHit, 1)
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
// -----                       R3BStartrackMappedData                      -----
// -----                   Created 15/05/2017 by M. Labiche                -----
// -----                    based on initial R3B unpacker:                 -----
// -----                 startrack/unpack/StartrackRawHit class            -----
// -----------------------------------------------------------------------------

#ifndef R3BSTARTRACKMAPPEDDATA_H
#define R3BSTARTRACKMAPPEDDATA_H
#include "TObject.h"

class R3BStartrackMappedData : public TObject
{

  public:
    // Default Constructor
    R3BStartrackMappedData();

    /** Standard Constructor
     *@param ts          full time stamp from strip hit
     *@param tsext       full time stamp from external signal
     *@param wordtype    Type of 32bit word (10=0x2 or 11=0x3)
     *@param hitbit      hitbit control. (should be =1)
     *@param ladderId    ladder identifiation (1-18)
     *@param side        side identification (n or p) of the ladder
     *@param asicId      asic identification of the ladder (0-11 for inner and  0-15 for outer)
     *@param stripId     strip identification (0-127)
     *@param ADCdata     Total energy deposited in the crystal [a.u.]
     *@param timevhb     less significant bit of the strip hit time stamp (very high bit: 48 to 63)  -> 16 bits
     *@param timehb      intermediate bits of the strip hit time stamp (very high bit: 28 to 47)     -> 20 bits in total
     *@param timelb      more significant bit of the strip hit time stamp (very high bit: 0 to 27)   -> 28 bits in total
     *@param timevhb     less significant bit of the external signal time stamp (very high bit: 48 to 63)  -> 16 bits
     *@param timehb      intermediate bits of the external signal time stamp (very high bit: 28 to 47)     -> 20 bits in
     *total
     *@param timelb      more significant bit of the external signal time stamp (very high bit: 0 to 27)   -> 28 bits in
     *total
     *@param ADCdata     Total energy deposited in the crystal [a.u.]
     *@param infofield   other information
     *@param infocode    Code associated to the type of the above information (infofield)
     **/
    //  R3BStartrackMappedData(UInt_t wrvhb, UInt_t wrhb, UInt_t wrlb, Int_t wordtype, Int_t hitbit, Int_t ladderId,
    //  Int_t side, Int_t asicId, Int_t stripId, UInt_t adc_data, UInt_t timevhb, UInt_t timehb, UInt_t timelb, UInt_t
    //  timeExtvhb, UInt_t timeExthb, UInt_t timeExtlb, Int_t infofield, Int_t infocode);
    R3BStartrackMappedData(ULong_t ts,
                           ULong_t tsext,
                           Int_t wordtype,
                           Int_t hitbit,
                           Int_t ladderId,
                           Int_t side,
                           Int_t asicId,
                           Int_t stripId,
                           UInt_t adc_data,
                           UInt_t timevhb,
                           UInt_t timehb,
                           UInt_t timelb,
                           UInt_t timeExtvhb,
                           UInt_t timeExthb,
                           UInt_t timeExtlb,
                           Int_t infofield,
                           Int_t infocode);

    // Destructor
    ~R3BStartrackMappedData() {}

    // Getters
    //  inline const UInt_t&   GetWRTimevhb()  const { return fWRvhb;   }
    //  inline const UInt_t&   GetWRTimehb()   const { return fWRhb;    }
    //  inline const UInt_t&   GetWRTimelb()   const { return fWRlb;    }
    inline const ULong_t& GetTS() const { return fTS; }
    inline const ULong_t& GetTSExt() const { return fTSExt; }
    inline const Int_t& GetWordtype() const { return fWordtype; }
    inline const Int_t& GetHitbit() const { return fHitbit; }
    inline const Int_t& GetLadderId() const { return fLadderId; }
    inline const Int_t& GetSide() const { return fSide; }
    inline const Int_t& GetAsicId() const { return fAsicId; }
    inline const Int_t& GetStripId() const { return fStripId; }
    inline const UInt_t& GetADCdata() const { return fADCdata; } // Energy non calibrated
    inline const UInt_t& GetTimevhb() const { return fTimevhb; }
    inline const UInt_t& GetTimehb() const { return fTimehb; }
    inline const UInt_t& GetTimelb() const { return fTimelb; }
    inline const UInt_t& GetTimeExtvhb() const { return fTimeExtvhb; }
    inline const UInt_t& GetTimeExthb() const { return fTimeExthb; }
    inline const UInt_t& GetTimeExtlb() const { return fTimeExtlb; }
    inline const Int_t& GetInfocode() const { return fInfoCode; }
    inline const Int_t& GetInfoField() const { return fInfoField; }

  protected:
    //  UInt_t  fWRvhb;      // White rabbit time stamp (very high bits)
    //  UInt_t  fWRhb;       // White rabbit time stamp (high bits)
    //  UInt_t  fWRlb;       // White rabbit time stamp (low bits)
    ULong_t fTS;        // full reconstructed time stamp
    ULong_t fTSExt;     // full reconstructed time stamp of external signal
    Int_t fWordtype;    // Word type
    Int_t fHitbit;      // hit type
    Int_t fLadderId;    // LadderId
    Int_t fSide;        // total slow amplitude in the crystal
    Int_t fAsicId;      // total slow amplitude in the crystal
    Int_t fStripId;     // total slow amplitude in the crystal
    UInt_t fADCdata;    // total slow amplitude in the crystal
    UInt_t fTimevhb;    // time-stamp (common to all the hits in the event)
    UInt_t fTimehb;     // time-stamp (common to all the hits in the event)
    UInt_t fTimelb;     // time-stamp (common to all the hits in the event)
    UInt_t fTimeExtvhb; // time-stamp (common to all the hits in the event)
    UInt_t fTimeExthb;  // time-stamp (common to all the hits in the event)
    UInt_t fTimeExtlb;  // time-stamp (common to all the hits in the event)
    Int_t fInfoCode;    // time-stamp (common to all the hits in the event)
    Int_t fInfoField;   // time-stamp (common to all the hits in the event)

  public:
    ClassDef(R3BStartrackMappedData, 1)
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
// -----              R3BStartrackCalData header file                  -----
// -----               Created 07/17  by M. Labiche                    -----
// -----	                                                       -----
// -------------------------------------------------------------------------

/**  R3BStartrackCalData.h
 **  As R3BStartrackMappedData but with data order in time and calibrated
 ** in energy.
 **  A StartrackCalData hit is the representation of the
 **  information obtained from a ladder.
 **/

#ifndef R3BSTARTRACKCALDATA_H
#define R3BSTARTRACKCALDATA_H

#include "FairMultiLinkedData.h"
#include "TObject.h"

class R3BStartrackCalData : public FairMultiLinkedData
{
  public:
    /** Default constructor **/
    R3BStartrackCalData();

    /** Constructor with arguments
     *@param ts          full time stamp from strip hit
     *@param tsext       full time stamp from external signal
     *@param ladderId    ladder identifiation (1-18)
     *@param side        side identification (n or p) of the ladder
     *@param asicId      asic identification of the ladder (0-11 for inner and  0-15 for outer)
     *@param stripId     strip identification (0-127)
     *@param Energy      Total energy deposited in the crystal [GeV]
     **/
    R3BStartrackCalData(ULong_t ts,
                        ULong_t tsext,
                        Int_t ladderId,
                        Int_t side,
                        Int_t asicId,
                        Int_t stripId,
                        UInt_t energy,
                        UInt_t nHits);

    /** Copy constructor **/
    R3BStartrackCalData(const R3BStartrackCalData&);

    R3BStartrackCalData& operator=(const R3BStartrackCalData&) { return *this; }

    /** Destructor **/
    virtual ~R3BStartrackCalData();

    /** Accessors **/
    ULong64_t GetTS() const { return fTS; }
    ULong64_t GetTSExt() const { return fTSext; }
    Int_t GetLadderId() const { return fLadderId; }
    Int_t GetSide() const { return fSide; }
    Int_t GetAsicId() const { return fAsicId; }
    Int_t GetStripId() const { return fStripId; }
    Double_t GetEnergy() const { return fEnergy; }
    Int_t GetNHits() const { return fNHits; }

    /** Modifiers **/
    void SetTS(ULong64_t time) { fTS = time; }
    void SetTSExt(ULong64_t timeExt) { fTSext = timeExt; }
    void SetLadderId(Int_t ladderId) { fLadderId = ladderId; }
    void SetSide(Int_t side) { fSide = side; }
    void SetAsicId(Int_t asicId) { fAsicId = asicId; }
    void SetStripId(Int_t stripId) { fStripId = stripId; }
    void SetEnergy(Double32_t energy) { fEnergy = energy; }
    void SetNHits(Int_t nhits) { fNHits = nhits; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    ULong64_t fTS;      // time of the interaction
    ULong64_t fTSext;   // time of the interaction
    Int_t fLadderId;    // ladder unique identifier
    Int_t fSide;        // ladder side unique identifier
    Int_t fAsicId;      // side asic unique identifier
    Int_t fStripId;     // asic strip unique identifier
    Double32_t fEnergy; // energy in the strip
    Int_t fNHits;       // hit id

    ClassDef(R3BStartrackCalData, 1)
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
// -----                      R3BLandPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BLandPoint.h
 **/

#ifndef R3BLANDPOINT_H
#define R3BLANDPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BLandPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BLandPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BLandPoint(Int_t trackID,
                 Int_t box,
                 Int_t detID,
                 Int_t sector,
                 Int_t paddle,
                 TVector3 posIn,
                 TVector3 posOut,
                 TVector3 momIn,
                 TVector3 momOut,
                 Double_t tof,
                 Double_t length,
                 Double_t eLoss,
                 Double_t ligthYield);

    /** Copy constructor **/
    R3BLandPoint(const R3BLandPoint&);

    /** Destructor **/
    virtual ~R3BLandPoint();

    R3BLandPoint& operator=(const R3BLandPoint&) { return *this; }

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    Int_t GetSector() const { return fSector; }
    Int_t GetPaddleType() const { return fPaddleTyp; }
    Int_t GetPaddleNb() const { return fPaddleNb; }
    Double_t GetLightYield() const { return fLightYield; }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fSector;
    Int_t fPaddleNb;
    Int_t fPaddleTyp;
    Double_t fLightYield;

    ClassDef(R3BLandPoint, 1)
};

inline void R3BLandPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BLandPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BLandDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BLandDigi.h
 **/

#ifndef R3BLANDDIGI_H
#define R3BLANDDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BLandDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BLandDigi();
    R3BLandDigi(Int_t paddle,
                Double_t tdcL,
                Double_t tdcR,
                Double_t tdc,
                Double_t qdcL,
                Double_t qdcR,
                Double_t qdc,
                Double_t xx,
                Double_t yy,
                Double_t zz);

    R3BLandDigi(Int_t paddle, Double_t tdcR, Double_t tdcL, Double_t qdcR, Double_t qdcL);

    /** Copy constructor **/
    R3BLandDigi(const R3BLandDigi&);

    /** Destructor **/
    virtual ~R3BLandDigi();

    R3BLandDigi& operator=(const R3BLandDigi&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetTdcR(Double_t time) { fTdcR = time; }
    Double_t GetTdcR() { return fTdcR; }

    void SetTdcL(Double_t time) { fTdcL = time; }
    Double_t GetTdcL() { return fTdcL; }

    void SetTdc(Double_t time) { fTdc = time; }
    Double_t GetTdc() const { return fTdc; }

    void SetQdcR(Double_t charge) { fQdcR = charge; }
    Double_t GetQdcR() { return fQdcR; }

    void SetQdcL(Double_t charge) { fQdcL = charge; }
    Double_t GetQdcL() { return fQdcL; }

    void SetQdc(Double_t charge) { fQdc = charge; }
    Double_t GetQdc() { return fQdc; }

    void SetXX(Double_t pos) { fxx = pos; }
    Double_t GetXX() { return fxx; }

    void SetYY(Double_t pos) { fyy = pos; }
    Double_t GetYY() { return fyy; }

    void SetZZ(Double_t pos) { fzz = pos; }
    Double_t GetZZ() { return fzz; }

    void SetPaddleNr(Int_t paddleNb) { fPaddleNb = paddleNb; }
    Int_t GetPaddleNr() { return fPaddleNb; }

  protected:
    Int_t fPaddleNb;
    Double32_t fTdcL;
    Double32_t fTdcR;
    Double32_t fTdc;
    Double32_t fQdcL;
    Double32_t fQdcR;
    Double32_t fQdc;
    Double32_t fxx;
    Double32_t fyy;
    Double32_t fzz;

    ClassDef(R3BLandDigi, 1)
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
// -----                  R3BLandFirstHits header file                 -----
// -----                    Created 20/02/1  by M.Heil                 -----
// -------------------------------------------------------------------------

/**  R3BLandFirstHits.h
 **/

#ifndef R3BLANDFIRSTHITS_H
#define R3BLANDFIRSTHITS_H

#include "TObject.h"
#include "TVector3.h"

class R3BLandFirstHits : public TObject
{

  public:
    /** Default constructor **/
    R3BLandFirstHits();
    R3BLandFirstHits(Double_t x0,
                     Double_t y0,
                     Double_t z0,
                     Double_t t0,
                     Double_t x1,
                     Double_t y1,
                     Double_t z1,
                     Double_t t1,
                     Double_t x2,
                     Double_t y2,
                     Double_t z2,
                     Double_t t2,
                     Double_t x3,
                     Double_t y3,
                     Double_t z3,
                     Double_t t3,
                     Double_t x4,
                     Double_t y4,
                     Double_t z4,
                     Double_t t4,
                     Double_t x5,
                     Double_t y5,
                     Double_t z5,
                     Double_t t5);

    /** Copy constructor **/
    R3BLandFirstHits(const R3BLandFirstHits&);

    /** Destructor **/
    virtual ~R3BLandFirstHits();

    R3BLandFirstHits& operator=(const R3BLandFirstHits&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetX0(Double_t pos) { fx0 = pos; }
    Double_t GetX0() { return fx0; }

    void SetY0(Double_t pos) { fy0 = pos; }
    Double_t GetY0() { return fy0; }

    void SetZ0(Double_t pos) { fz0 = pos; }
    Double_t GetZ0() { return fz0; }

    void SetT0(Double_t time) { fT0 = time; }
    Double_t GetT0() { return fT0; }

    void SetX1(Double_t pos) { fx1 = pos; }
    Double_t GetX1() { return fx1; }

    void SetY1(Double_t pos) { fy1 = pos; }
    Double_t GetY1() { return fy1; }

    void SetZ1(Double_t pos) { fz1 = pos; }
    Double_t GetZ1() { return fz1; }

    void SetT1(Double_t time) { fT1 = time; }
    Double_t GetT1() { return fT1; }

    void SetX2(Double_t pos) { fx2 = pos; }
    Double_t GetX2() { return fx2; }

    void SetY2(Double_t pos) { fy2 = pos; }
    Double_t GetY2() { return fy2; }

    void SetZ2(Double_t pos) { fz2 = pos; }
    Double_t GetZ2() { return fz2; }

    void SetT2(Double_t time) { fT2 = time; }
    Double_t GetT2() { return fT2; }

    void SetX3(Double_t pos) { fx3 = pos; }
    Double_t GetX3() { return fx3; }

    void SetY3(Double_t pos) { fy3 = pos; }
    Double_t GetY3() { return fy3; }

    void SetZ3(Double_t pos) { fz3 = pos; }
    Double_t GetZ3() { return fz3; }

    void SetT3(Double_t time) { fT3 = time; }
    Double_t GetT3() { return fT3; }

    void SetX4(Double_t pos) { fx4 = pos; }
    Double_t GetX4() { return fx4; }

    void SetY4(Double_t pos) { fy4 = pos; }
    Double_t GetY4() { return fy4; }

    void SetZ4(Double_t pos) { fz4 = pos; }
    Double_t GetZ4() { return fz4; }

    void SetT4(Double_t time) { fT4 = time; }
    Double_t GetT4() { return fT4; }

    void SetX5(Double_t pos) { fx5 = pos; }
    Double_t GetX5() { return fx5; }

    void SetY5(Double_t pos) { fy5 = pos; }
    Double_t GetY5() { return fy5; }

    void SetZ5(Double_t pos) { fz5 = pos; }
    Double_t GetZ5() { return fz5; }

    void SetT5(Double_t time) { fT5 = time; }
    Double_t GetT5() { return fT5; }

  protected:
    Double32_t fx0;
    Double32_t fy0;
    Double32_t fz0;
    Double32_t fT0;
    Double32_t fx1;
    Double32_t fy1;
    Double32_t fz1;
    Double32_t fT1;
    Double32_t fx2;
    Double32_t fy2;
    Double32_t fz2;
    Double32_t fT2;
    Double32_t fx3;
    Double32_t fy3;
    Double32_t fz3;
    Double32_t fT3;
    Double32_t fx4;
    Double32_t fy4;
    Double32_t fz4;
    Double32_t fT4;
    Double32_t fx5;
    Double32_t fy5;
    Double32_t fz5;
    Double32_t fT5;

    ClassDef(R3BLandFirstHits, 1)
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
// -----                      R3BLandHit header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BLandHit.h
 **/

#ifndef R3BLANDHIT_H
#define R3BLANDHIT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairHit.h"

class R3BLandHit : public FairHit
{

  public:
    /** Default constructor **/
    R3BLandHit();

    /** Copy constructor **/
    R3BLandHit(const R3BLandHit&);

    /** Destructor **/
    virtual ~R3BLandHit();

    R3BLandHit& operator=(const R3BLandHit&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetEnergy(Double_t en) { fEnergy = en; }
    Double_t GetEnergy() { return fEnergy; }

    void SetToF(Double_t time) { fTof = time; }
    Double_t GetToF() { return fTof; }

    void SetDetID(Int_t id) { fDetectorID = id; }
    Int_t GetDetID() { return fDetectorID; }

    void SetSaturnPaddle(Int_t paddleNb) { fSaturnPaddleNb = paddleNb; }
    Int_t GetSaturnPaddle() { return fSaturnPaddleNb; }

  protected:
    Double32_t fEnergy;
    Double32_t fTof;
    Int_t fSaturnPaddleNb;

    ClassDef(R3BLandHit, 1)
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
// -----                      R3BLandPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------
/**  R3BPaddleCrystalHit.h
 **/

#ifndef R3BPADDLECRYSTALHIT_H
#define R3BPADDLECRYSTALHIT_H

#include "FairHit.h"
#include "TObject.h"
#include "TVector3.h"

class R3BPaddleCrystalHit : public FairHit
{

  public:
    /** Default constructor **/
    R3BPaddleCrystalHit();
    /** Copy constructor **/
    R3BPaddleCrystalHit(const R3BPaddleCrystalHit&);
    /** Destructor **/
    virtual ~R3BPaddleCrystalHit();

    R3BPaddleCrystalHit& operator=(const R3BPaddleCrystalHit&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetType(UInt_t ty) { type = ty; }
    void SetCopy(UInt_t co) { copy = co; }
    void SetEnergy(Double_t en) { fEnergy = en; }
    void SetNbOfSteps(UInt_t nb) { nbOfSteps = nb; }

    void SetTimeFirstStep(Double_t ti) { fTimeFirstStep = ti; }
    void SetTimeLastStep(Double_t ti) { fTimeLastStep = ti; }
    void SetPositionX(Double_t posX) { fX = posX; }
    void SetPositionY(Double_t posY) { fY = posY; }
    void SetPositionZ(Double_t posZ) { fZ = posZ; }

    void SetNbOfPrimaries(UInt_t nb) { nbOfPrimaries = nb; }
    void SetEnergyPrimary(Double_t ene) { fEnergyPrimary = ene; }
    void SetThetaPrimary(Double_t the) { fThetaPrimary = the; }
    void SetPhiPrimary(Double_t phi) { fPhiPrimary = phi; }

    void SetEventID(UInt_t ev) { eventID = ev; }
    void SetRunID(UInt_t run) { runID = run; }

    Int_t GetType() { return type; }
    Int_t GetCopy() { return copy; }
    Double_t GetEnergy() { return fEnergy; }
    UInt_t GetNbOfSteps() { return nbOfSteps; }

    Double_t GetTimeFirstStep() { return fTimeFirstStep; }
    Double_t GetTimeLastStep() { return fTimeLastStep; }

    UInt_t GetNbOfPrimaries() { return nbOfPrimaries; }
    Double_t GetEnergyPrimary() { return fEnergyPrimary; }
    Double_t GetThetaPrimary() { return fThetaPrimary; }
    Double_t GetPhiPrimary() { return fPhiPrimary; }

    UInt_t GetEventID() { return eventID; }
    UInt_t GetRunID() { return runID; }

  protected:
    // Crystal identification
    UInt_t type; // crystal type
    UInt_t copy; // crystal copy

    // Basic Hit information
    Double32_t fEnergy; // total energy deposited on the paddle
    UInt_t nbOfSteps;   // number of step depositing energy in the crystal

    Double32_t fTimeFirstStep; // time of the first interaction
    Double32_t fTimeLastStep;  // time of the last interaction

    // Primary identification
    UInt_t nbOfPrimaries; // for a gamma source
    Double32_t fEnergyPrimary;
    Double32_t fThetaPrimary;
    Double32_t fPhiPrimary;

    // Event identification
    UInt_t eventID; // event ID
    UInt_t runID;   // run ID

    ClassDef(R3BPaddleCrystalHit, 1)
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

#ifndef R3BNEUTRONTRACK_H
#define R3BNEUTRONTRACK_H

#include "TObject.h"
#include "TVector3.h"

class R3BNeutronTrack : public TObject
{

  public:
    /** Default constructor **/
    R3BNeutronTrack();

    R3BNeutronTrack(TVector3 posIn, TVector3 posOut, TVector3 momOut, Double_t tof);

    /** Copy constructor **/
    R3BNeutronTrack(const R3BNeutronTrack&);

    /** Destructor **/
    virtual ~R3BNeutronTrack();

    R3BNeutronTrack& operator=(const R3BNeutronTrack&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Modifiers **/
    void SetPositionIn(TVector3 pos);
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

  protected:
    Double32_t fX, fY, fZ;
    Double32_t fX_in, fY_in, fZ_in;
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fPaddleNb;

    ClassDef(R3BNeutronTrack, 1)
};

inline void R3BNeutronTrack::SetPositionIn(TVector3 pos)
{
    fX = pos.X();
    fY = pos.Y();
    fZ = pos.Z();
}

inline void R3BNeutronTrack::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BNeutronTrack::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BDchDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BDchDigi.h
 **/

#ifndef R3BDCHDIGI_H
#define R3BDCHDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BDchDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BDchDigi();
    R3BDchDigi(Int_t pd1mul, Double_t Pdx1_p1, Double_t Pdy1_p1, Int_t pd2mul, Double_t Pdx2_p1, Double_t Pdy2_p1);

    /** Copy constructor **/
    R3BDchDigi(const R3BDchDigi& point);

    /** Destructor **/
    virtual ~R3BDchDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setpd1mul(Int_t mul) { Pd1mul = mul; }
    Double_t Getpd1mul() { return Pd1mul; }

    void SetPdx1_p1(Double_t pos) { Pd1x_p1 = pos; }
    Double_t GetPdx1_p1() { return Pd1x_p1; }

    void SetPdy1_p1(Double_t pos) { Pd1y_p1 = pos; }
    Double_t GetPdy1_p1() { return Pd1y_p1; }

    void Setpd2mul(Int_t mul) { Pd2mul = mul; }
    Double_t Getpd2mul() { return Pd2mul; }

    void SetPdx2_p1(Double_t pos) { Pd2x_p1 = pos; }
    Double_t GetPdx2_p1() { return Pd2x_p1; }

    void SetPdy2_p1(Double_t pos) { Pd2y_p1 = pos; }
    Double_t GetPdy2_p1() { return Pd2y_p1; }

    R3BDchDigi& operator=(const R3BDchDigi&) { return *this; }

  protected:
    Int_t Pd1mul;
    Double32_t Pd1x_p1;
    Double32_t Pd1y_p1;

    Int_t Pd2mul;
    Double32_t Pd2x_p1;
    Double32_t Pd2y_p1;

    ClassDef(R3BDchDigi, 1)
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
// -----                      R3BDch2pDigi header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BDch2pDigi.h
 **/

#ifndef R3BDCH2PDIGI_H
#define R3BDCH2PDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BDch2pDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BDch2pDigi();
    R3BDch2pDigi(Int_t pd1mul,
                 Double_t Pdx1_p1,
                 Double_t Pdy1_p1,
                 Double_t Pdx1_p2,
                 Double_t Pdy1_p2,
                 Int_t pd2mul,
                 Double_t Pdx2_p1,
                 Double_t Pdy2_p1,
                 Double_t Pdx2_p2,
                 Double_t Pdy2_p2);

    /** Copy constructor **/
    R3BDch2pDigi(const R3BDch2pDigi&);

    /** Destructor **/
    virtual ~R3BDch2pDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setpd1mul(Int_t mul) { Pd1mul = mul; }
    Double_t Getpd1mul() { return Pd1mul; }

    void SetPdx1_p1(Double_t pos) { Pd1x_p1 = pos; }
    Double_t GetPdx1_p1() { return Pd1x_p1; }

    void SetPdy1_p1(Double_t pos) { Pd1y_p1 = pos; }
    Double_t GetPdy1_p1() { return Pd1y_p1; }

    void SetPdx1_p2(Double_t pos) { Pd1x_p2 = pos; }
    Double_t GetPdx1_p2() { return Pd1x_p2; }

    void SetPdy1_p2(Double_t pos) { Pd1y_p2 = pos; }
    Double_t GetPdy1_p2() { return Pd1y_p2; }

    void Setpd2mul(Int_t mul) { Pd2mul = mul; }
    Double_t Getpd2mul() { return Pd2mul; }

    void SetPdx2_p1(Double_t pos) { Pd2x_p1 = pos; }
    Double_t GetPdx2_p1() { return Pd2x_p1; }

    void SetPdy2_p1(Double_t pos) { Pd2y_p1 = pos; }
    Double_t GetPdy2_p1() { return Pd2y_p1; }

    void SetPdx2_p2(Double_t pos) { Pd2x_p2 = pos; }
    Double_t GetPdx2_p2() { return Pd2x_p2; }

    void SetPdy2_p2(Double_t pos) { Pd2y_p2 = pos; }
    Double_t GetPdy2_p2() { return Pd2y_p2; }

    R3BDch2pDigi& operator=(const R3BDch2pDigi&) { return *this; }

  protected:
    Int_t Pd1mul;
    Double32_t Pd1x_p1;
    Double32_t Pd1y_p1;
    Double32_t Pd1x_p2;
    Double32_t Pd1y_p2;

    Int_t Pd2mul;
    Double32_t Pd2x_p1;
    Double32_t Pd2y_p1;
    Double32_t Pd2x_p2;
    Double32_t Pd2y_p2;

    ClassDef(R3BDch2pDigi, 1)
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
// -----                      R3BTofDigi header file                  -----
// -----                  Created 29/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTofDigi.h
 **/

#ifndef R3BTOFDIGI_H
#define R3BTOFDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTofDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTofDigi();
    R3BTofDigi(Int_t tfmul,
               Double_t tfwx_p1,
               Double_t tfwy_p1,
               Double_t tfwt_p1,
               Double_t tfwpath_p1,
               Double_t tfwpx_p1,
               // Double_t tfwpy_p1,Double_t tfwpz_p1);
               Double_t tfwpy_p1,
               Double_t tfwpz_p1,
               Double_t tfwe_p1);

    /** Copy constructor **/
    R3BTofDigi(const R3BTofDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTofDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Settfmul(Int_t mul) { Tfmul = mul; }
    Double_t Gettfmul() { return Tfmul; }

    void Settfwx_p1(Double_t pos) { Tfx_p1 = pos; }
    Double_t Gettfwx_p1() { return Tfx_p1; }

    void Settfwy_p1(Double_t pos) { Tfy_p1 = pos; }
    Double_t Gettfwy_p1() { return Tfy_p1; }

    void Settfwt_p1(Double_t time) { Tft_p1 = time; }
    Double_t Gettfwt_p1() { return Tft_p1; }

    void Settfwpath_p1(Double_t length) { Tfpath_p1 = length; }
    Double_t Gettfwpath_p1() { return Tfpath_p1; }

    void Settfwpx_p1(Int_t mom) { Tfwpx_p1 = mom; }
    Double_t Gettfwpx_p1() { return Tfwpx_p1; }

    void Settfwpy_p1(Int_t mom) { Tfwpy_p1 = mom; }
    Double_t Gettfwpy_p1() { return Tfwpy_p1; }

    void Settfwpz_p1(Int_t mom) { Tfwpz_p1 = mom; }
    Double_t Gettfwpz_p1() { return Tfwpz_p1; }

    void Settfwe_p1(Double_t en) { Tfe_p1 = en; }
    Double_t Gettfwe_p1() { return Tfe_p1; }

  protected:
    Int_t Tfmul;
    Double32_t Tfx_p1;
    Double32_t Tfy_p1;
    Double32_t Tft_p1;
    Double32_t Tfpath_p1;
    Double32_t Tfwpx_p1;
    Double32_t Tfwpy_p1;
    Double32_t Tfwpz_p1;
    Double32_t Tfe_p1;

    ClassDef(R3BTofDigi, 1)
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
// -----                      R3BTofDigi header file                  -----
// -----                  Created 29/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTofDigi.h
 **/

#ifndef R3BTOF2PDIGI_H
#define R3BTOF2PDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTof2pDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTof2pDigi();
    R3BTof2pDigi(
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

    /** Copy constructor **/
    R3BTof2pDigi(const R3BTof2pDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTof2pDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Settfmul(Int_t mul) { Tfmul = mul; }
    Double_t Gettfmul() { return Tfmul; }

    void Settfwx_p1(Double_t pos) { Tfx_p1 = pos; }
    Double_t Gettfwx_p1() { return Tfx_p1; }

    void Settfwy_p1(Double_t pos) { Tfy_p1 = pos; }
    Double_t Gettfwy_p1() { return Tfy_p1; }

    void Settfwt_p1(Double_t time) { Tft_p1 = time; }
    Double_t Gettfwt_p1() { return Tft_p1; }

    void Settfwpath_p1(Double_t length) { Tfpath_p1 = length; }
    Double_t Gettfwpath_p1() { return Tfpath_p1; }

    void Settfwpx_p1(Int_t mom) { Tfwpx_p1 = mom; }
    Double_t Gettfwpx_p1() { return Tfwpx_p1; }

    void Settfwpy_p1(Int_t mom) { Tfwpy_p1 = mom; }
    Double_t Gettfwpy_p1() { return Tfwpy_p1; }

    void Settfwpz_p1(Int_t mom) { Tfwpz_p1 = mom; }
    Double_t Gettfwpz_p1() { return Tfwpz_p1; }

    void Settfwe_p1(Double_t en) { Tfe_p1 = en; }
    Double_t Gettfwe_p1() { return Tfe_p1; }

    void Settfwx_p2(Double_t pos) { Tfx_p2 = pos; }
    Double_t Gettfwx_p2() { return Tfx_p2; }

    void Settfwy_p2(Double_t pos) { Tfy_p2 = pos; }
    Double_t Gettfwy_p2() { return Tfy_p2; }

    void Settfwt_p2(Double_t time) { Tft_p2 = time; }
    Double_t Gettfwt_p2() { return Tft_p2; }

    void Settfwpath_p2(Double_t length) { Tfpath_p2 = length; }
    Double_t Gettfwpath_p2() { return Tfpath_p2; }

    void Settfwpx_p2(Int_t mom) { Tfwpx_p2 = mom; }
    Double_t Gettfwpx_p2() { return Tfwpx_p2; }

    void Settfwpy_p2(Int_t mom) { Tfwpy_p2 = mom; }
    Double_t Gettfwpy_p2() { return Tfwpy_p2; }

    void Settfwpz_p2(Int_t mom) { Tfwpz_p2 = mom; }
    Double_t Gettfwpz_p2() { return Tfwpz_p2; }

    void Settfwe_p2(Double_t en) { Tfe_p2 = en; }
    Double_t Gettfwe_p2() { return Tfe_p2; }

  protected:
    Int_t Tfmul;
    Double32_t Tfx_p1;
    Double32_t Tfy_p1;
    Double32_t Tft_p1;
    Double32_t Tfpath_p1;
    Double32_t Tfwpx_p1;
    Double32_t Tfwpy_p1;
    Double32_t Tfwpz_p1;
    Double32_t Tfe_p1;

    Double32_t Tfx_p2;
    Double32_t Tfy_p2;
    Double32_t Tft_p2;
    Double32_t Tfpath_p2;
    Double32_t Tfwpx_p2;
    Double32_t Tfwpy_p2;
    Double32_t Tfwpz_p2;
    Double32_t Tfe_p2;

    ClassDef(R3BTof2pDigi, 1)
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
// -----                      R3BGfiDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BGfiDigi.h
 **/

#ifndef R3BGFIDIGI_H
#define R3BGFIDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BGfiDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BGfiDigi();
    R3BGfiDigi(Int_t gf1mul, Double_t gf1_01x, Int_t gf2mul, Double_t gf2_01x);

    /** Copy constructor **/
    R3BGfiDigi(const R3BGfiDigi&);

    /** Destructor **/
    virtual ~R3BGfiDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setgf1mul(Int_t mul) { Gf1mul = mul; }
    Double_t Getgf1mul() { return Gf1mul; }

    void Setgf1_01x(Double_t pos) { Gf1_01x = pos; }
    Double_t Getgf1_01x() { return Gf1_01x; }

    void Setgf2mul(Int_t mul) { Gf2mul = mul; }
    Double_t Getgf2mul() { return Gf2mul; }

    void Setgf2_01x(Double_t pos) { Gf2_01x = pos; }
    Double_t Getgf2_01x() { return Gf2_01x; }

  protected:
    Int_t Gf1mul;
    Double32_t Gf1_01x;
    Int_t Gf2mul;
    Double32_t Gf2_01x;

    ClassDef(R3BGfiDigi, 1)
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
// -----                      R3BTraDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTraDigi.h
 **/

#ifndef R3BTRADIGI_H
#define R3BTRADIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTraDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTraDigi();
    R3BTraDigi(Double_t ss03_se_f,
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

    /** Copy constructor **/
    R3BTraDigi(const R3BTraDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTraDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setss03_se_f(Double_t en) { Ss03_se_f = en; }
    Double_t Getss03_se_f() { return Ss03_se_f; }

    void Setss03_spos_f(Double_t pos) { Ss03_spos_f = pos; }
    Double_t Getss03_spos_f() { return Ss03_spos_f; }

    void Setss03_sbw_f(Double_t bw) { Ss03_sbw_f = bw; }
    Double_t Getss03_sbw_f() { return Ss03_sbw_f; }

    void Setss03_sarea_f(Double_t area) { Ss03_sarea_f = area; }
    Double_t Getss03_sarea_f() { return Ss03_sarea_f; }

    void Setss03_seta_f(Double_t eta) { Ss03_seta_f = eta; }
    Double_t Getss03_seta_f() { return Ss03_seta_f; }

    void Setss03_ke_f(Double_t en) { Ss03_ke_f = en; }
    Double_t Getss03_ke_f() { return Ss03_ke_f; }

    void Setss03_kpos_f(Double_t pos) { Ss03_kpos_f = pos; }
    Double_t Getss03_kpos_f() { return Ss03_kpos_f; }

    void Setss03_kbw_f(Double_t bw) { Ss03_kbw_f = bw; }
    Double_t Getss03_kbw_f() { return Ss03_kbw_f; }

    void Setss03_karea_f(Double_t area) { Ss03_karea_f = area; }
    Double_t Getss03_karea_f() { return Ss03_karea_f; }

    void Setss03_keta_f(Double_t eta) { Ss03_keta_f = eta; }
    Double_t Getss03_keta_f() { return Ss03_keta_f; }

    void Setss06_se_f(Double_t en) { Ss06_se_f = en; }
    Double_t Getss06_se_f() { return Ss06_se_f; }

    void Setss06_spos_f(Double_t pos) { Ss06_spos_f = pos; }
    Double_t Getss06_spos_f() { return Ss06_spos_f; }

    void Setss06_sbw_f(Double_t bw) { Ss06_sbw_f = bw; }
    Double_t Getss06_sbw_f() { return Ss06_sbw_f; }

    void Setss06_sarea_f(Double_t area) { Ss06_sarea_f = area; }
    Double_t Getss06_sarea_f() { return Ss06_sarea_f; }

    void Setss06_seta_f(Double_t eta) { Ss06_seta_f = eta; }
    Double_t Getss06_seta_f() { return Ss06_seta_f; }

    void Setss06_ke_f(Double_t en) { Ss06_ke_f = en; }
    Double_t Getss06_ke_f() { return Ss06_ke_f; }

    void Setss06_kpos_f(Double_t pos) { Ss06_kpos_f = pos; }
    Double_t Getss06_kpos_f() { return Ss06_kpos_f; }

    void Setss06_kbw_f(Double_t bw) { Ss06_kbw_f = bw; }
    Double_t Getss06_kbw_f() { return Ss06_kbw_f; }

    void Setss06_karea_f(Double_t area) { Ss06_karea_f = area; }
    Double_t Getss06_karea_f() { return Ss06_karea_f; }

    void Setss06_keta_f(Double_t eta) { Ss06_keta_f = eta; }
    Double_t Getss06_keta_f() { return Ss06_keta_f; }

    void Setss03_se_p1(Double_t en) { Ss03_se_p1 = en; }
    Double_t Getss03_se_p1() { return Ss03_se_p1; }

    void Setss03_spos_p1(Double_t pos) { Ss03_spos_p1 = pos; }
    Double_t Getss03_spos_p1() { return Ss03_spos_p1; }

    void Setss03_sbw_p1(Double_t bw) { Ss03_sbw_p1 = bw; }
    Double_t Getss03_sbw_p1() { return Ss03_sbw_p1; }

    void Setss03_sarea_p1(Double_t area) { Ss03_sarea_p1 = area; }
    Double_t Getss03_sarea_p1() { return Ss03_sarea_p1; }

    void Setss03_seta_p1(Double_t eta) { Ss03_seta_p1 = eta; }
    Double_t Getss03_seta_p1() { return Ss03_seta_p1; }

    void Setss03_ke_p1(Double_t en) { Ss03_ke_p1 = en; }
    Double_t Getss03_ke_p1() { return Ss03_ke_p1; }

    void Setss03_kpos_p1(Double_t pos) { Ss03_kpos_p1 = pos; }
    Double_t Getss03_kpos_p1() { return Ss03_kpos_p1; }

    void Setss03_kbw_p1(Double_t bw) { Ss03_kbw_p1 = bw; }
    Double_t Getss03_kbw_p1() { return Ss03_kbw_p1; }

    void Setss03_karea_p1(Double_t area) { Ss03_karea_p1 = area; }
    Double_t Getss03_karea_p1() { return Ss03_karea_p1; }

    void Setss03_keta_p1(Double_t eta) { Ss03_keta_p1 = eta; }
    Double_t Getss03_keta_p1() { return Ss03_keta_p1; }

    void Setss06_se_p1(Double_t en) { Ss06_se_p1 = en; }
    Double_t Getss06_se_p1() { return Ss06_se_p1; }

    void Setss06_spos_p1(Double_t pos) { Ss06_spos_p1 = pos; }
    Double_t Getss06_spos_p1() { return Ss06_spos_p1; }

    void Setss06_sbw_p1(Double_t bw) { Ss06_sbw_p1 = bw; }
    Double_t Getss06_sbw_p1() { return Ss06_sbw_p1; }

    void Setss06_sarea_p1(Double_t area) { Ss06_sarea_p1 = area; }
    Double_t Getss06_sarea_p1() { return Ss06_sarea_p1; }

    void Setss06_seta_p1(Double_t eta) { Ss06_seta_p1 = eta; }
    Double_t Getss06_seta_p1() { return Ss06_seta_p1; }

    void Setss06_ke_p1(Double_t en) { Ss06_ke_p1 = en; }
    Double_t Getss06_ke_p1() { return Ss06_ke_p1; }

    void Setss06_kpos_p1(Double_t pos) { Ss06_kpos_p1 = pos; }
    Double_t Getss06_kpos_p1() { return Ss06_kpos_p1; }

    void Setss06_kbw_p1(Double_t bw) { Ss06_kbw_p1 = bw; }
    Double_t Getss06_kbw_p1() { return Ss06_kbw_p1; }

    void Setss06_karea_p1(Double_t area) { Ss06_karea_p1 = area; }
    Double_t Getss06_karea_p1() { return Ss06_karea_p1; }

    void Setss06_keta_p1(Double_t eta) { Ss06_keta_p1 = eta; }
    Double_t Getss06_keta_p1() { return Ss06_keta_p1; }

  protected:
    Double32_t Ss03_se_f;
    Double32_t Ss03_spos_f;
    Double32_t Ss03_sbw_f;
    Double32_t Ss03_sarea_f;
    Double32_t Ss03_seta_f;

    Double32_t Ss03_ke_f;
    Double32_t Ss03_kpos_f;
    Double32_t Ss03_kbw_f;
    Double32_t Ss03_karea_f;
    Double32_t Ss03_keta_f;

    Double32_t Ss06_se_f;
    Double32_t Ss06_spos_f;
    Double32_t Ss06_sbw_f;
    Double32_t Ss06_sarea_f;
    Double32_t Ss06_seta_f;

    Double32_t Ss06_ke_f;
    Double32_t Ss06_kpos_f;
    Double32_t Ss06_kbw_f;
    Double32_t Ss06_karea_f;
    Double32_t Ss06_keta_f;

    Double32_t Ss03_se_p1;
    Double32_t Ss03_spos_p1;
    Double32_t Ss03_sbw_p1;
    Double32_t Ss03_sarea_p1;
    Double32_t Ss03_seta_p1;

    Double32_t Ss03_ke_p1;
    Double32_t Ss03_kpos_p1;
    Double32_t Ss03_kbw_p1;
    Double32_t Ss03_karea_p1;
    Double32_t Ss03_keta_p1;

    Double32_t Ss06_se_p1;
    Double32_t Ss06_spos_p1;
    Double32_t Ss06_sbw_p1;
    Double32_t Ss06_sarea_p1;
    Double32_t Ss06_seta_p1;

    Double32_t Ss06_ke_p1;
    Double32_t Ss06_kpos_p1;
    Double32_t Ss06_kbw_p1;
    Double32_t Ss06_karea_p1;
    Double32_t Ss06_keta_p1;

    ClassDef(R3BTraDigi, 1)
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
// -----                      R3BTra2pDigi header file                  -----
// -----                  Created 13/07/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTra2pDigi.h
 **/

#ifndef R3BTRA2PDIGI_H
#define R3BTRA2PDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTra2pDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTra2pDigi();
    R3BTra2pDigi(Double_t ss03_se_p1,
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

    /** Copy constructor **/
    R3BTra2pDigi(const R3BTra2pDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTra2pDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setss03_se_p1(Double_t en) { Ss03_se_p1 = en; }
    Double_t Getss03_se_p1() { return Ss03_se_p1; }

    void Setss03_spos_p1(Double_t pos) { Ss03_spos_p1 = pos; }
    Double_t Getss03_spos_p1() { return Ss03_spos_p1; }

    void Setss03_sbw_p1(Double_t bw) { Ss03_sbw_p1 = bw; }
    Double_t Getss03_sbw_p1() { return Ss03_sbw_p1; }

    void Setss03_sarea_p1(Double_t area) { Ss03_sarea_p1 = area; }
    Double_t Getss03_sarea_p1() { return Ss03_sarea_p1; }

    void Setss03_seta_p1(Double_t eta) { Ss03_seta_p1 = eta; }
    Double_t Getss03_seta_p1() { return Ss03_seta_p1; }

    void Setss03_ke_p1(Double_t en) { Ss03_ke_p1 = en; }
    Double_t Getss03_ke_p1() { return Ss03_ke_p1; }

    void Setss03_kpos_p1(Double_t pos) { Ss03_kpos_p1 = pos; }
    Double_t Getss03_kpos_p1() { return Ss03_kpos_p1; }

    void Setss03_kbw_p1(Double_t bw) { Ss03_kbw_p1 = bw; }
    Double_t Getss03_kbw_p1() { return Ss03_kbw_p1; }

    void Setss03_karea_p1(Double_t area) { Ss03_karea_p1 = area; }
    Double_t Getss03_karea_p1() { return Ss03_karea_p1; }

    void Setss03_keta_p1(Double_t eta) { Ss03_keta_p1 = eta; }
    Double_t Getss03_keta_p1() { return Ss03_keta_p1; }

    void Setss06_se_p1(Double_t en) { Ss06_se_p1 = en; }
    Double_t Getss06_se_p1() { return Ss06_se_p1; }

    void Setss06_spos_p1(Double_t pos) { Ss06_spos_p1 = pos; }
    Double_t Getss06_spos_p1() { return Ss06_spos_p1; }

    void Setss06_sbw_p1(Double_t bw) { Ss06_sbw_p1 = bw; }
    Double_t Getss06_sbw_p1() { return Ss06_sbw_p1; }

    void Setss06_sarea_p1(Double_t area) { Ss06_sarea_p1 = area; }
    Double_t Getss06_sarea_p1() { return Ss06_sarea_p1; }

    void Setss06_seta_p1(Double_t eta) { Ss06_seta_p1 = eta; }
    Double_t Getss06_seta_p1() { return Ss06_seta_p1; }

    void Setss06_ke_p1(Double_t en) { Ss06_ke_p1 = en; }
    Double_t Getss06_ke_p1() { return Ss06_ke_p1; }

    void Setss06_kpos_p1(Double_t pos) { Ss06_kpos_p1 = pos; }
    Double_t Getss06_kpos_p1() { return Ss06_kpos_p1; }

    void Setss06_kbw_p1(Double_t bw) { Ss06_kbw_p1 = bw; }
    Double_t Getss06_kbw_p1() { return Ss06_kbw_p1; }

    void Setss06_karea_p1(Double_t area) { Ss06_karea_p1 = area; }
    Double_t Getss06_karea_p1() { return Ss06_karea_p1; }

    void Setss06_keta_p1(Double_t eta) { Ss06_keta_p1 = eta; }
    Double_t Getss06_keta_p1() { return Ss06_keta_p1; }

    void Setss03_se_p2(Double_t en) { Ss03_se_p2 = en; }
    Double_t Getss03_se_p2() { return Ss03_se_p2; }

    void Setss03_spos_p2(Double_t pos) { Ss03_spos_p2 = pos; }
    Double_t Getss03_spos_p2() { return Ss03_spos_p2; }

    void Setss03_sbw_p2(Double_t bw) { Ss03_sbw_p2 = bw; }
    Double_t Getss03_sbw_p2() { return Ss03_sbw_p2; }

    void Setss03_sarea_p2(Double_t area) { Ss03_sarea_p2 = area; }
    Double_t Getss03_sarea_p2() { return Ss03_sarea_p2; }

    void Setss03_seta_p2(Double_t eta) { Ss03_seta_p2 = eta; }
    Double_t Getss03_seta_p2() { return Ss03_seta_p2; }

    void Setss03_ke_p2(Double_t en) { Ss03_ke_p2 = en; }
    Double_t Getss03_ke_p2() { return Ss03_ke_p2; }

    void Setss03_kpos_p2(Double_t pos) { Ss03_kpos_p2 = pos; }
    Double_t Getss03_kpos_p2() { return Ss03_kpos_p2; }

    void Setss03_kbw_p2(Double_t bw) { Ss03_kbw_p2 = bw; }
    Double_t Getss03_kbw_p2() { return Ss03_kbw_p2; }

    void Setss03_karea_p2(Double_t area) { Ss03_karea_p2 = area; }
    Double_t Getss03_karea_p2() { return Ss03_karea_p2; }

    void Setss03_keta_p2(Double_t eta) { Ss03_keta_p2 = eta; }
    Double_t Getss03_keta_p2() { return Ss03_keta_p2; }

    void Setss06_se_p2(Double_t en) { Ss06_se_p2 = en; }
    Double_t Getss06_se_p2() { return Ss06_se_p2; }

    void Setss06_spos_p2(Double_t pos) { Ss06_spos_p2 = pos; }
    Double_t Getss06_spos_p2() { return Ss06_spos_p2; }

    void Setss06_sbw_p2(Double_t bw) { Ss06_sbw_p2 = bw; }
    Double_t Getss06_sbw_p2() { return Ss06_sbw_p2; }

    void Setss06_sarea_p2(Double_t area) { Ss06_sarea_p2 = area; }
    Double_t Getss06_sarea_p2() { return Ss06_sarea_p2; }

    void Setss06_seta_p2(Double_t eta) { Ss06_seta_p2 = eta; }
    Double_t Getss06_seta_p2() { return Ss06_seta_p2; }

    void Setss06_ke_p2(Double_t en) { Ss06_ke_p2 = en; }
    Double_t Getss06_ke_p2() { return Ss06_ke_p2; }

    void Setss06_kpos_p2(Double_t pos) { Ss06_kpos_p2 = pos; }
    Double_t Getss06_kpos_p2() { return Ss06_kpos_p2; }

    void Setss06_kbw_p2(Double_t bw) { Ss06_kbw_p2 = bw; }
    Double_t Getss06_kbw_p2() { return Ss06_kbw_p2; }

    void Setss06_karea_p2(Double_t area) { Ss06_karea_p2 = area; }
    Double_t Getss06_karea_p2() { return Ss06_karea_p2; }

    void Setss06_keta_p2(Double_t eta) { Ss06_keta_p2 = eta; }
    Double_t Getss06_keta_p2() { return Ss06_keta_p2; }

  protected:
    Double32_t Ss03_se_p1;
    Double32_t Ss03_spos_p1;
    Double32_t Ss03_sbw_p1;
    Double32_t Ss03_sarea_p1;
    Double32_t Ss03_seta_p1;

    Double32_t Ss03_ke_p1;
    Double32_t Ss03_kpos_p1;
    Double32_t Ss03_kbw_p1;
    Double32_t Ss03_karea_p1;
    Double32_t Ss03_keta_p1;

    Double32_t Ss06_se_p1;
    Double32_t Ss06_spos_p1;
    Double32_t Ss06_sbw_p1;
    Double32_t Ss06_sarea_p1;
    Double32_t Ss06_seta_p1;

    Double32_t Ss06_ke_p1;
    Double32_t Ss06_kpos_p1;
    Double32_t Ss06_kbw_p1;
    Double32_t Ss06_karea_p1;
    Double32_t Ss06_keta_p1;

    Double32_t Ss03_se_p2;
    Double32_t Ss03_spos_p2;
    Double32_t Ss03_sbw_p2;
    Double32_t Ss03_sarea_p2;
    Double32_t Ss03_seta_p2;

    Double32_t Ss03_ke_p2;
    Double32_t Ss03_kpos_p2;
    Double32_t Ss03_kbw_p2;
    Double32_t Ss03_karea_p2;
    Double32_t Ss03_keta_p2;

    Double32_t Ss06_se_p2;
    Double32_t Ss06_spos_p2;
    Double32_t Ss06_sbw_p2;
    Double32_t Ss06_sarea_p2;
    Double32_t Ss06_seta_p2;

    Double32_t Ss06_ke_p2;
    Double32_t Ss06_kpos_p2;
    Double32_t Ss06_kbw_p2;
    Double32_t Ss06_karea_p2;
    Double32_t Ss06_keta_p2;

    ClassDef(R3BTra2pDigi, 1)
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
// -----                      R3BTraFraDigi header file                  -----
// -----                  Created 13/07/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTraFraDigi.h
 **/

#ifndef R3BTRAFRADIGI_H
#define R3BTRAFRADIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTraFraDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTraFraDigi();
    R3BTraFraDigi(Double_t ss03_se_f,
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

    /** Copy constructor **/
    R3BTraFraDigi(const R3BTraFraDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTraFraDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setss03_se_f(Double_t en) { Ss03_se_f = en; }
    Double_t Getss03_se_f() { return Ss03_se_f; }

    void Setss03_spos_f(Double_t pos) { Ss03_spos_f = pos; }
    Double_t Getss03_spos_f() { return Ss03_spos_f; }

    void Setss03_sbw_f(Double_t bw) { Ss03_sbw_f = bw; }
    Double_t Getss03_sbw_f() { return Ss03_sbw_f; }

    void Setss03_sarea_f(Double_t area) { Ss03_sarea_f = area; }
    Double_t Getss03_sarea_f() { return Ss03_sarea_f; }

    void Setss03_seta_f(Double_t eta) { Ss03_seta_f = eta; }
    Double_t Getss03_seta_f() { return Ss03_seta_f; }

    void Setss03_ke_f(Double_t en) { Ss03_ke_f = en; }
    Double_t Getss03_ke_f() { return Ss03_ke_f; }

    void Setss03_kpos_f(Double_t pos) { Ss03_kpos_f = pos; }
    Double_t Getss03_kpos_f() { return Ss03_kpos_f; }

    void Setss03_kbw_f(Double_t bw) { Ss03_kbw_f = bw; }
    Double_t Getss03_kbw_f() { return Ss03_kbw_f; }

    void Setss03_karea_f(Double_t area) { Ss03_karea_f = area; }
    Double_t Getss03_karea_f() { return Ss03_karea_f; }

    void Setss03_keta_f(Double_t eta) { Ss03_keta_f = eta; }
    Double_t Getss03_keta_f() { return Ss03_keta_f; }

    void Setss06_se_f(Double_t en) { Ss06_se_f = en; }
    Double_t Getss06_se_f() { return Ss06_se_f; }

    void Setss06_spos_f(Double_t pos) { Ss06_spos_f = pos; }
    Double_t Getss06_spos_f() { return Ss06_spos_f; }

    void Setss06_sbw_f(Double_t bw) { Ss06_sbw_f = bw; }
    Double_t Getss06_sbw_f() { return Ss06_sbw_f; }

    void Setss06_sarea_f(Double_t area) { Ss06_sarea_f = area; }
    Double_t Getss06_sarea_f() { return Ss06_sarea_f; }

    void Setss06_seta_f(Double_t eta) { Ss06_seta_f = eta; }
    Double_t Getss06_seta_f() { return Ss06_seta_f; }

    void Setss06_ke_f(Double_t en) { Ss06_ke_f = en; }
    Double_t Getss06_ke_f() { return Ss06_ke_f; }

    void Setss06_kpos_f(Double_t pos) { Ss06_kpos_f = pos; }
    Double_t Getss06_kpos_f() { return Ss06_kpos_f; }

    void Setss06_kbw_f(Double_t bw) { Ss06_kbw_f = bw; }
    Double_t Getss06_kbw_f() { return Ss06_kbw_f; }

    void Setss06_karea_f(Double_t area) { Ss06_karea_f = area; }
    Double_t Getss06_karea_f() { return Ss06_karea_f; }

    void Setss06_keta_f(Double_t eta) { Ss06_keta_f = eta; }
    Double_t Getss06_keta_f() { return Ss06_keta_f; }

  protected:
    Double32_t Ss03_se_f;
    Double32_t Ss03_spos_f;
    Double32_t Ss03_sbw_f;
    Double32_t Ss03_sarea_f;
    Double32_t Ss03_seta_f;

    Double32_t Ss03_ke_f;
    Double32_t Ss03_kpos_f;
    Double32_t Ss03_kbw_f;
    Double32_t Ss03_karea_f;
    Double32_t Ss03_keta_f;

    Double32_t Ss06_se_f;
    Double32_t Ss06_spos_f;
    Double32_t Ss06_sbw_f;
    Double32_t Ss06_sarea_f;
    Double32_t Ss06_seta_f;

    Double32_t Ss06_ke_f;
    Double32_t Ss06_kpos_f;
    Double32_t Ss06_kbw_f;
    Double32_t Ss06_karea_f;
    Double32_t Ss06_keta_f;

    ClassDef(R3BTraFraDigi, 1)
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
// -----                      R3BTargetDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTargetDigi.h
 **/

#ifndef R3BTARGETDIGI_H
#define R3BTARGETDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTargetDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTargetDigi();
    R3BTargetDigi(Double_t ss03_smul,
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

    /** Copy constructor **/
    R3BTargetDigi(const R3BTargetDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTargetDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setss03_smul(Double_t mul) { Ss03_smul = mul; }
    Double_t Getss03_smul() { return Ss03_smul; }

    void Setss03_kmul(Double_t mul) { Ss03_kmul = mul; }
    Double_t Getss03_kmul() { return Ss03_kmul; }

    void Setss06_smul(Double_t mul) { Ss06_smul = mul; }
    Double_t Getss06_smul() { return Ss06_smul; }

    void Setss06_kmul(Double_t mul) { Ss06_kmul = mul; }
    Double_t Getss06_kmul() { return Ss06_kmul; }

    void Setx0(Double_t pos) { X0 = pos; }
    Double_t Getx0() { return X0; }

    void Sety0(Double_t pos) { Y0 = pos; }
    Double_t Gety0() { return Y0; }

    void Sett0(Double_t time) { T0 = time; }
    Double_t Gett0() { return T0; }

    void Setestar(Double_t energy) { Estar = energy; }
    Double_t Getestar() { return Estar; }

    void SetPxf(Double_t mom) { pxf = mom; }
    Double_t GetPxf() { return pxf; }
    void SetPyf(Double_t mom) { pyf = mom; }
    Double_t GetPyf() { return pyf; }
    void SetPzf(Double_t mom) { pzf = mom; }
    Double_t GetPzf() { return pzf; }
    void SetPf_tot(Double_t mom) { pf_tot = mom; }
    Double_t GetPf_tot() { return pf_tot; }
    void Setf_beta(Double_t vel) { f_Beta = vel; }
    Double_t Getf_beta() { return f_Beta; }

    void SetPxp1(Double_t mom) { pxp1 = mom; }
    Double_t GetPxp1() { return pxp1; }
    void SetPyp1(Double_t mom) { pyp1 = mom; }
    Double_t GetPyp1() { return pyp1; }
    void SetPzp1(Double_t mom) { pzp1 = mom; }
    Double_t GetPzp1() { return pzp1; }
    void SetPp1_tot(Double_t mom) { pp1_tot = mom; }
    Double_t GetPp1_tot() { return pp1_tot; }
    void Setp1_beta(Double_t vel) { p1_Beta = vel; }
    Double_t Getp1_beta() { return p1_Beta; }

  protected:
    Double32_t Ss03_smul;
    Double32_t Ss03_kmul;
    Double32_t Ss06_smul;
    Double32_t Ss06_kmul;

    Double32_t X0;
    Double32_t Y0;
    Double32_t T0;

    Double32_t Estar;

    Double32_t pxf;
    Double32_t pyf;
    Double32_t pzf;
    Double32_t pf_tot;
    Double32_t f_Beta;

    Double32_t pxp1;
    Double32_t pyp1;
    Double32_t pzp1;
    Double32_t pp1_tot;
    Double32_t p1_Beta;

    ClassDef(R3BTargetDigi, 1)
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
// -----                      R3BTarget2pDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTarget2pDigi.h
 **/

#ifndef R3BTARGET2PDIGI_H
#define R3BTARGET2PDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTarget2pDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTarget2pDigi();
    R3BTarget2pDigi(Double_t ss03_smul,
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

    /** Copy constructor **/
    R3BTarget2pDigi(const R3BTarget2pDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTarget2pDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setss03_smul(Double_t mul) { Ss03_smul = mul; }
    Double_t Getss03_smul() { return Ss03_smul; }

    void Setss03_kmul(Double_t mul) { Ss03_kmul = mul; }
    Double_t Getss03_kmul() { return Ss03_kmul; }

    void Setss06_smul(Double_t mul) { Ss06_smul = mul; }
    Double_t Getss06_smul() { return Ss06_smul; }

    void Setss06_kmul(Double_t mul) { Ss06_kmul = mul; }
    Double_t Getss06_kmul() { return Ss06_kmul; }

    void Setx0(Double_t pos) { X0 = pos; }
    Double_t Getx0() { return X0; }

    void Sety0(Double_t pos) { Y0 = pos; }
    Double_t Gety0() { return Y0; }

    void Sett0(Double_t time) { T0 = time; }
    Double_t Gett0() { return T0; }

    void Setestar(Double_t energy) { Estar = energy; }
    Double_t Getestar() { return Estar; }

    void SetPxf(Double_t mom) { pxf = mom; }
    Double_t GetPxf() { return pxf; }
    void SetPyf(Double_t mom) { pyf = mom; }
    Double_t GetPyf() { return pyf; }
    void SetPzf(Double_t mom) { pzf = mom; }
    Double_t GetPzf() { return pzf; }
    void SetPf_tot(Double_t mom) { pf_tot = mom; }
    Double_t GetPf_tot() { return pf_tot; }
    void Setf_beta(Double_t vel) { f_Beta = vel; }
    Double_t Getf_beta() { return f_Beta; }

    void SetPxp1(Double_t mom) { pxp1 = mom; }
    Double_t GetPxp1() { return pxp1; }
    void SetPyp1(Double_t mom) { pyp1 = mom; }
    Double_t GetPyp1() { return pyp1; }
    void SetPzp1(Double_t mom) { pzp1 = mom; }
    Double_t GetPzp1() { return pzp1; }
    void SetPp1_tot(Double_t mom) { pp1_tot = mom; }
    Double_t GetPp1_tot() { return pp1_tot; }
    void Setp1_beta(Double_t vel) { p1_Beta = vel; }
    Double_t Getp1_beta() { return p1_Beta; }

    void SetPxp2(Double_t mom) { pxp2 = mom; }
    Double_t GetPxp2() { return pxp2; }
    void SetPyp2(Double_t mom) { pyp2 = mom; }
    Double_t GetPyp2() { return pyp2; }
    void SetPzp2(Double_t mom) { pzp2 = mom; }
    Double_t GetPzp2() { return pzp2; }
    void SetPp2_tot(Double_t mom) { pp2_tot = mom; }
    Double_t GetPp2_tot() { return pp2_tot; }
    void Setp2_beta(Double_t vel) { p2_Beta = vel; }
    Double_t Getp2_beta() { return p2_Beta; }

    void Setalpha(Double_t ang) { Alpha = ang; }
    Double_t Getalpha() { return Alpha; }

    void Setppmul(Double_t mul) { Ppmul = mul; }
    Double_t Getppmul() { return Ppmul; }

  protected:
    Double32_t Ss03_smul;
    Double32_t Ss03_kmul;
    Double32_t Ss06_smul;
    Double32_t Ss06_kmul;

    Double32_t X0;
    Double32_t Y0;
    Double32_t T0;

    Double32_t Estar;

    Double32_t pxf;
    Double32_t pyf;
    Double32_t pzf;
    Double32_t pf_tot;
    Double32_t f_Beta;

    Double32_t pxp1;
    Double32_t pyp1;
    Double32_t pzp1;
    Double32_t pp1_tot;
    Double32_t p1_Beta;

    Double32_t pxp2;
    Double32_t pyp2;
    Double32_t pzp2;
    Double32_t pp2_tot;
    Double32_t p2_Beta;

    Double32_t Alpha;

    Double32_t Ppmul;

    ClassDef(R3BTarget2pDigi, 1)
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
// -----                      R3BMfiPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BMfiPoint.h
 **/

#ifndef R3BMFIPOINT_H
#define R3BMFIPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BMfiPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BMfiPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BMfiPoint(Int_t trackID,
                Int_t detID,
                Int_t plane,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BMfiPoint(const R3BMfiPoint&);

    /** Destructor **/
    virtual ~R3BMfiPoint();

    R3BMfiPoint& operator=(const R3BMfiPoint&) { return *this; }

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fModule;

    ClassDef(R3BMfiPoint, 1)
};

inline void R3BMfiPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BMfiPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BMfiDigi header file                  -----
// -----                  Created 30/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BMfiDigi.h
 **/

#ifndef R3BMFIDIGI_H
#define R3BMFIDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BMfiDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BMfiDigi();
    R3BMfiDigi(Int_t mf1mul, Double_t mf1x, Int_t fiber);

    /** Copy constructor **/
    R3BMfiDigi(const R3BMfiDigi&);

    /** Destructor **/
    virtual ~R3BMfiDigi();

    R3BMfiDigi& operator=(const R3BMfiDigi&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetMf1mul(Int_t mul) { Mf1mul = mul; }
    Double_t GetMf1mul() { return Mf1mul; }

    void SetMf1x(Double_t pos) { Mf1x = pos; }
    Double_t GetMf1x() { return Mf1x; }

    void SetMf01ni(Double_t fib) { Mf01ni = fib; }
    Int_t GetMf01ni() { return Mf01ni; }

    /*
    void SetMf1mul(Int_t mul){MFI1n = mul;}
    Double_t GetMf1mul(){return MFI1n;}

    void SetMf1x(Double_t pos){MFI1x = pos;}
    Double_t GetMf1x(){return MFI1x;}
    */

  protected:
    Int_t Mf1mul;
    Double32_t Mf1x;
    Int_t Mf01ni;
    //      Int_t MFI1n; //ggland_tracker
    //      Double32_t MFI1x;

    ClassDef(R3BMfiDigi, 1)
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
// -----                      R3BPspPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BPspPoint.h
 **/

#ifndef R3BPSPPOINT_H
#define R3BPSPPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BPspPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BPspPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BPspPoint(Int_t trackID,
                Int_t detID,
                Int_t plane,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BPspPoint(const R3BPspPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BPspPoint();

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fModule;

    ClassDef(R3BPspPoint, 1)
};

inline void R3BPspPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BPspPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BPspDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BPspDigi.h
 **/

#ifndef R3BPSPDIGI_H
#define R3BPSPDIGI_H

#include "R3BHit.h"
#include "TVector3.h"

class R3BPspDigi : public R3BHit
{

  public:
    /** Default constructor **/
    R3BPspDigi();
    R3BPspDigi(Int_t psp3mul, Double_t psp3x, Double_t psp3y, Double_t psp3e);

    /** Copy constructor **/
    R3BPspDigi(const R3BPspDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BPspDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetPsp3mul(Int_t mul) { Ps03mul = mul; }
    Double_t GetPsp3mul() { return Ps03mul; }

  protected:
    Int_t Ps03mul;

    ClassDef(R3BPspDigi, 2)
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

#ifndef R3BNEULANDTACQUILAMAPPEDDATA_H
#define R3BNEULANDTACQUILAMAPPEDDATA_H

#include "TObject.h"
#include <iostream>

class R3BNeulandTacquilaMappedData : public TObject
{
  public:
    R3BNeulandTacquilaMappedData() = default;
    R3BNeulandTacquilaMappedData(UShort_t clock,
                                 UShort_t tacData,
                                 UShort_t stopT,
                                 UShort_t qdcData,
                                 Int_t plane,
                                 Int_t paddle,
                                 Int_t side);

    UShort_t GetClock() const { return fClock; }
    UShort_t GetTacData() const { return fTacData; }
    UShort_t GetStopT() const { return fStopT; }
    UShort_t GetQdcData() const { return fQdcData; }
    Int_t GetPlane() const { return fPlane; }
    Int_t GetPaddle() const { return fPaddle; }
    Int_t GetSide() const { return fSide; }

    void Print(const Option_t*) const override;

  private:
    UShort_t fClock;
    UShort_t fTacData;
    UShort_t fStopT;
    UShort_t fQdcData;
    Int_t fPlane;
    Int_t fPaddle;
    Int_t fSide;

    ClassDefOverride(R3BNeulandTacquilaMappedData, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandTacquilaMappedData&); // Support easy printing

#endif // R3BNEULANDTACQUILAMAPPEDDATA_H
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

#ifndef R3BNEULANDCALDATA_H
#define R3BNEULANDCALDATA_H

#include "TObject.h"
#include <iostream>

class R3BNeulandCalData : public TObject
{
  public:
    R3BNeulandCalData() = default;
    R3BNeulandCalData(Int_t barId, Int_t side, Double_t time, Int_t qdc);

    Int_t GetBarId() const { return fBarId; }
    Int_t GetSide() const { return fSide; }
    Double_t GetTime() const { return fTime; }
    Int_t GetQdc() const { return fQdc; }

    void Print(const Option_t*) const override;

  private:
    Int_t fBarId;
    Int_t fSide;
    Double_t fTime;
    Int_t fQdc;

    ClassDefOverride(R3BNeulandCalData, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandCalData&); // Support easy printing

#endif // R3BNEULANDCALDATA_H
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

#ifndef R3BNEULANDPOINT_H
#define R3BNEULANDPOINT_H

#include "FairMCPoint.h"
#include "TObject.h"
#include "TVector3.h"
#include <iostream>

class R3BNeulandPoint : public FairMCPoint
{

  public:
    R3BNeulandPoint()
        : FairMCPoint()
        , fLightYield(0)
    {
    }

    R3BNeulandPoint(const Int_t trackID,
                    const Int_t detID,
                    const TVector3& pos,
                    const TVector3& mom,
                    const Double_t tof,
                    const Double_t length,
                    const Double_t eLoss,
                    const UInt_t EventId,
                    const Double_t lightYield)
        : FairMCPoint(trackID, detID, pos, mom, tof, length, eLoss, EventId)
        , fLightYield(lightYield)
    {
    }

    R3BNeulandPoint(const FairMCPoint& point, const Double_t lightYield)
        : FairMCPoint(point)
        , fLightYield(lightYield)
    {
    }

    TVector3 GetMomentum() const;
    TVector3 GetPosition() const;
    Int_t GetPaddle() const { return GetDetectorID(); }
    Double_t GetLightYield() const { return fLightYield; }

    void Print(const Option_t*) const override;

  protected:
    Double_t fLightYield;

  public:
    ClassDefOverride(R3BNeulandPoint, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandPoint&); // Support easy printing

#endif // R3BNEULANDPOINT_H
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

#ifndef R3BNEULANDHIT_H
#define R3BNEULANDHIT_H

#include "TObject.h"
#include "TVector3.h"
#include <iostream>

class R3BNeulandHit : public TObject
{
  public:
    R3BNeulandHit() = default;
    R3BNeulandHit(Int_t paddle,
                  Double_t TdcL,
                  Double_t TdcR,
                  Double_t time,
                  Double_t QdcL,
                  Double_t QdcR,
                  Double_t energy,
                  const TVector3& pos,
                  const TVector3& pix);

    Int_t GetPaddle() const { return fPaddle; }
    Double_t GetTdcR() const { return fTdcR; }
    Double_t GetTdcL() const { return fTdcL; }
    Double_t GetT() const { return fT; }
    Double_t GetQdcR() const { return fQdcR; }
    Double_t GetQdcL() const { return fQdcL; }
    Double_t GetE() const { return fE; }
    TVector3 GetPosition() const { return fPosition; }
    TVector3 GetPixel() const { return fPixel; }

    Double_t GetBeta() const;
    Double_t GetEToF(Double_t mass = 939.565) const; // 939.565379

    void Print(const Option_t*) const override;

    bool operator==(const R3BNeulandHit& b) const
    {
        // TODO: Change this if multi-hit capability is introduced
        return this->GetPaddle() == b.GetPaddle();
    }

  private:
    Int_t fPaddle;
    Double_t fTdcL;
    Double_t fTdcR;
    Double_t fT;
    Double_t fQdcL;
    Double_t fQdcR;
    Double_t fE;
    TVector3 fPosition;
    TVector3 fPixel;

    ClassDefOverride(R3BNeulandHit, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandHit&); // Support easy printing

#endif // R3BNEULANDHIT_H
#ifndef R3BROOT_R3BNEULANDMULTIPLICITY_H
#define R3BROOT_R3BNEULANDMULTIPLICITY_H

#include "TObject.h"
#include <array>
#include <iostream>

static constexpr int NEULAND_MAX_MULT = 6 + 1;

class R3BNeulandMultiplicity : public TObject
{
  public:
    using MultiplicityProbabilities = std::array<double, NEULAND_MAX_MULT>;

    R3BNeulandMultiplicity();
    R3BNeulandMultiplicity(MultiplicityProbabilities mult);
    ~R3BNeulandMultiplicity() override = default;

    void Print(const Option_t* = "") const override;

    MultiplicityProbabilities m;
    int GetMultiplicity() const;

    ClassDefOverride(R3BNeulandMultiplicity, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandMultiplicity&); // Support easy printing

#endif // R3BROOT_R3BNEULANDMULTIPLICITY_H
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

#ifndef R3BNEULANDCLUSTER_H
#define R3BNEULANDCLUSTER_H

#include "R3BNeulandHit.h"
#include "TObject.h"
#include <iostream>
#include <utility>
#include <vector>

class R3BNeulandCluster : public TObject
{
  public:
    R3BNeulandCluster() = default;
    explicit R3BNeulandCluster(const R3BNeulandHit& hit)
        : fHits({ hit })
    {
    }
    R3BNeulandCluster(std::vector<R3BNeulandHit>::iterator begin, std::vector<R3BNeulandHit>::iterator end)
        : fHits(begin, end)
    {
    }
    explicit R3BNeulandCluster(std::vector<R3BNeulandHit> hits)
        : fHits(std::move(hits))
    {
    }

    void Clear(Option_t*) override
    {
        fHits.clear();
        fHits.shrink_to_fit();
    }

    const std::vector<R3BNeulandHit>& GetHits() const { return fHits; }
    R3BNeulandHit GetFirstHit() const;
    R3BNeulandHit GetLastHit() const;
    R3BNeulandHit GetMaxEnergyHit() const;
    R3BNeulandHit GetForemostHit() const;
    TVector3 GetPosition() const;
    Double_t GetT() const;
    Double_t GetE() const;
    Double_t GetBeta() const { return GetFirstHit().GetBeta(); }
    Double_t GetEToF() const { return GetFirstHit().GetEToF(); }
    Size_t GetSize() const { return fHits.size(); }
    TVector3 GetEnergyCentroid() const;
    Double_t GetEnergyMoment() const;
    Double_t GetRCluster(Double_t beta) const;
    Double_t GetRECluster(Double_t ekin) const;

    void Print(const Option_t*) const override;

    bool operator==(const R3BNeulandCluster& b) const { return this->GetHits() == b.GetHits(); }

  private:
    std::vector<R3BNeulandHit> fHits;

    ClassDefOverride(R3BNeulandCluster, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandCluster&); // Support easy printing

#endif // R3BNEULANDCLUSTER_H
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

#ifndef R3BNEULANDNEUTRON_H
#define R3BNEULANDNEUTRON_H

#include "R3BNeulandCluster.h"
#include "R3BNeulandHit.h"
#include "TObject.h"
#include "TVector3.h"
#include <iostream>

class R3BNeulandNeutron : public TObject
{
  public:
    R3BNeulandNeutron() = default;
    R3BNeulandNeutron(Int_t paddle, Double_t time, const TVector3& pos, const TVector3& pix);
    explicit R3BNeulandNeutron(const R3BNeulandHit&);
    explicit R3BNeulandNeutron(const R3BNeulandCluster&);

    Int_t GetPaddle() const { return fPaddle; }
    Double_t GetT() const { return fT; }
    TVector3 GetPosition() const { return fPosition; }
    TVector3 GetPixel() const { return fPixel; }

    Double_t GetEtot() const;
    Double_t GetEkin() const;
    Double_t GetGamma() const;
    TVector3 GetP() const;

    void Print(const Option_t*) const override;

  private:
    Int_t fPaddle;
    Double_t fT;
    TVector3 fPosition;
    TVector3 fPixel;

    ClassDefOverride(R3BNeulandNeutron, 1)
};

std::ostream& operator<<(std::ostream&, const R3BNeulandNeutron&); // Support easy printing

#endif // R3BNEULANDNEUTRON_H
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

#ifndef R3BPSPXMAPPEDDATA_H
#define R3BPSPXMAPPEDDATA_H

#include "TObject.h"

/**
 * Class containing PSPX detector data on Mapped level.
 * @author Ralf Plag, Ina Syndikus
 * @since January 2016
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxMappedData : public TObject
{
  public:
    /** Default Constructor **/
    R3BPspxMappedData();

    /** Standard Constructor **/
    R3BPspxMappedData(Int_t strip1, Int_t strip2, Int_t energy1, Int_t energy2);

    /** Destructor **/
    virtual ~R3BPspxMappedData() {}

    void SetValue(Int_t, Int_t, Int_t);
    // Getters
    inline const Int_t& GetStrip1() const { return fStrip[0]; }
    inline const Int_t& GetStrip2() const { return fStrip[1]; }
    inline const Int_t& GetEnergy1() const { return fEnergy[0]; }
    inline const Int_t& GetEnergy2() const { return fEnergy[1]; }

  private:
    Int_t fStrip[2];  // Channel number, counting from 1, one entry for each side of each strip
    Int_t fEnergy[2]; // Energy/Collected charge, one entry for each side of each strip

  public:
    ClassDef(R3BPspxMappedData, 5)
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

#ifndef R3BPSPXPRECALDATA_H
#define R3BPSPXPRECALDATA_H

#include "TObject.h"

/**
 * Class containing PSPX detector data on Precal level.
 * @author Ina Syndikus
 * @since March 2017
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxPrecalData : public TObject
{
  public:
    /** Default Constructor **/
    R3BPspxPrecalData();

    /** Standard Constructor **/
    R3BPspxPrecalData(Int_t strip, Float_t energy1, Float_t energy2);

    /** Destructor **/
    virtual ~R3BPspxPrecalData() {}

    // Getters
    inline const Int_t& GetStrip() const { return fStrip; }
    inline const Float_t& GetEnergy1() const { return fEnergy1; }
    inline const Float_t& GetEnergy2() const { return fEnergy2; }

  private:
    Int_t fStrip;     // Strip number, counting from 1 */
    Float_t fEnergy1; // Energy/Collected charge for side 1 of the strip. This value needs no gain correction
                      // (Mapped2Precal Position Calibration).
    Float_t fEnergy2; // Energy/Collected charge for side 2 of  the strip. This value is gain corrected (Mapped2Precal
                      // Position Calibration).

  public:
    ClassDef(R3BPspxPrecalData, 3)
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

#ifndef R3BPSPXCALDATA_H
#define R3BPSPXCALDATA_H

#include "TObject.h"

/**
 * Class containing PSPX detector data on Cal level.
 * @author Ralf Plag, Ina Syndikus
 * @since January 2016
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxCalData : public TObject
{
  public:
    /** Default Constructor **/
    R3BPspxCalData();

    /** Standard Constructor **/
    R3BPspxCalData(Int_t strip, Float_t energy, Float_t pos);

    /** Destructor **/
    virtual ~R3BPspxCalData() {}

    // Getters
    inline const Int_t& GetStrip() const { return fStrip; }
    inline const Float_t& GetEnergy() const { return fEnergy; }
    inline const Float_t& GetPos() const { return fPos; }

  private:
    Int_t fStrip;    // Strip number, counting from 1
    Float_t fEnergy; // Total energy/collected charge from both sides of hit strip. This value is gainmatched.
    Float_t fPos;    // Position calculated from energy difference from both sides. Internal coordinates from -1 to +1

  public:
    ClassDef(R3BPspxCalData, 7)
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

#ifndef R3BPSPXHITDATA_H
#define R3BPSPXHITDATA_H

#include "TObject.h"

/**
 * Class containing PSPX detector data on Hit level.
 * @author Ina Syndikus
 * @since April 2016
 * Modified Dec 2019 by M. Holl
 */

class R3BPspxHitData : public TObject
{
  public:
    /** Default Constructor **/
    R3BPspxHitData();

    /** Standard Constructor **/
    R3BPspxHitData(Float_t energy, Float_t pos);

    /** Destructor **/
    virtual ~R3BPspxHitData() {}

    // Getters
    inline const Float_t& GetEnergy() const { return fEnergy; }
    inline const Float_t& GetPos() const { return fPos; }

  private:
    Float_t fEnergy; // Energy/Collected charge in MeV
    Float_t fPos;    // Position in x cm in the range [-l/2:l/2]

  public:
    ClassDef(R3BPspxHitData, 7)
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

#ifndef R3BLOSMAPPEDITEM_H
#define R3BLOSMAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the LOS detectors.
// Introduced by Ralf, Jan 2016

class R3BLosMappedData : public TObject
{
  public:
    // Default Constructor
    R3BLosMappedData();

    // Standard Constructor
    R3BLosMappedData(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);

    UInt_t GetDetector() const;
    UInt_t GetChannel() const;
    UInt_t GetType() const;
    UInt_t GetTimeFine() const;
    UInt_t GetTimeCoarse() const;

  public:
    UInt_t fDetector; // 1..n
    UInt_t fChannel;  // 1..n (n=4 or 8 or 18)
    UInt_t fType;     // 0 (VFTX), 1 (TAMEX leading), 2 (TAMEX trailing)
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BLosMappedData, 1) // 2
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

#ifndef R3BLOSCALITEM_H
#define R3BLOSCALITEM_H

#include "TObject.h"

// for the data analysis of the LOS detectors.
// Introduced by Ralf, FEB 2016
// September 2016 - TAMEX readout of MCFD amplitudes added by Aleksandra.
class R3BLosCalData : public TObject
{
  public:
    // Default Constructor
    R3BLosCalData();

    // Standard Constructor
    R3BLosCalData(UInt_t);

    // Destructor
    virtual ~R3BLosCalData() {}

    UInt_t GetDetector() const;
    UInt_t GetVFTXNcha();
    UInt_t GetTAMEXLNcha();
    UInt_t GetTAMEXTNcha();
    UInt_t GetMTDC32Ncha();

    Double_t GetTimeV_ns(UInt_t) const;
    Double_t GetTimeL_ns(UInt_t) const;
    Double_t GetTimeT_ns(UInt_t) const;
    Double_t GetTimeM_ns(UInt_t) const;

    Double_t GetMeanTime();
    Double_t GetMeanTimeTAMEXL();
    Double_t GetMeanTimeTAMEXT();
    Double_t GetMeanTimeVFTX();
    Double_t GetMeanTimeMTDC32();

  private:
    UInt_t fDetector;
    void Reset();

  public:
    Double_t fTimeV_ns[8]; // VFTX
    Double_t fTimeL_ns[8]; // TAMEX leading
    Double_t fTimeT_ns[8]; // TAMEX trailing
    Double_t fTimeM_ns[8]; // MTDC32

    ClassDef(R3BLosCalData, 2)
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

#ifndef R3BLOSHITITEM_H
#define R3BLOSHITITEM_H

#include "TObject.h"

// for the data analysis of the LOS detectors.
// Introduced by Ralf, FEB 2016

class R3BLosHitData : public TObject
{
  public:
    // Default Constructor
    R3BLosHitData();

    // Standard Constructor
    R3BLosHitData(UChar_t detector, Double_t t, Double_t x, Double_t y, Double_t Z);

    // Destructor
    virtual ~R3BLosHitData() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }

  private:
    UChar_t fDetector; // 1..n
                       //    Double_t fTimeDiff2Ref_ns; // difference to master trigger time

  public:
    Double_t fTime_ns; // average time of the scintillators
    Double_t fX_cm;    // position in cm
    Double_t fY_cm;
    Double_t fZ; // Charge

    ClassDef(R3BLosHitData, 1)
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

#ifndef R3BROLUMAPPEDITEM_H
#define R3BROLUMAPPEDITEM_H

#include "TObject.h"

// for the data analysis of ROLU following LOS

class R3BRoluMappedData : public TObject
{
  public:
    // Default Constructor
    R3BRoluMappedData();

    // Standard Constructor
    R3BRoluMappedData(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);

    UInt_t GetDetector() const;
    UInt_t GetChannel() const;
    UInt_t GetType() const;
    UInt_t GetTimeFine() const;
    UInt_t GetTimeCoarse() const;

  public:
    UInt_t fDetector; // 1..n
    UInt_t fChannel;  // 1..n (n=4 )
    UInt_t fType;     // 0 (TAMEX leading), 1 (TAMEX trailing)
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BRoluMappedData, 1)
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

#ifndef R3BROLUCALITEM_H
#define R3BROLUCALITEM_H

#include "TObject.h"

// for the data analysis of the ROLU following LOS.

class R3BRoluCalData : public TObject
{
  public:
    // Default Constructor
    R3BRoluCalData();

    // Standard Constructor
    R3BRoluCalData(UInt_t);

    // Destructor
    virtual ~R3BRoluCalData() {}

    UInt_t GetDetector() const;
    UInt_t GetTAMEXLNcha();
    UInt_t GetTAMEXTNcha();

    Double_t GetTimeL_ns(UInt_t) const;
    Double_t GetTimeT_ns(UInt_t) const;

    Double_t GetMeanTime();
    Double_t GetMeanTimeTAMEXL();
    Double_t GetMeanTimeTAMEXT();

  private:
    UInt_t fDetector;
    void Reset();

  public:
    Double_t fTimeL_ns[4]; // TAMEX leading
    Double_t fTimeT_ns[4]; // TAMEX trailing

    ClassDef(R3BRoluCalData, 1)
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

#ifndef R3BROLUHITITEM_H
#define R3BROLUHITITEM_H

#include "TObject.h"

// for the data analysis of the ROLU following LOS

class R3BRoluHitData : public TObject
{
  public:
    // Default Constructor
    R3BRoluHitData();

    // Standard Constructor
    R3BRoluHitData(UChar_t detector, Double_t tot_r, Double_t tot_o, Double_t tot_l, Double_t tot_u);

    // Destructor
    virtual ~R3BRoluHitData() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }

  private:
    UChar_t fDetector; // 1..n

  public:
    Double_t ftot_r;
    Double_t ftot_o;
    Double_t ftot_l;
    Double_t ftot_u;

    ClassDef(R3BRoluHitData, 1)
};

#endif
#ifndef R3BSCI2MAPPEDITEM_H
#define R3BSCI2MAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the SCI2 detectors.

class R3BSci2MappedData : public TObject
{
  public:
    // Default Constructor
    R3BSci2MappedData();

    // Standard Constructor
    R3BSci2MappedData(UInt_t detector, UInt_t channel, UInt_t type, UInt_t timeFine, UInt_t timeCoarse);

    // Destructor
    virtual ~R3BSci2MappedData() {}

    // Getters
    inline const UInt_t& GetDetector() const { return fDetector; }
    inline const UInt_t& GetChannel() const { return fChannel; }
    inline const UInt_t& GetType() const { return fType; }
    inline const UInt_t& GetTimeFine() const { return fTimeFine; }
    inline const UInt_t& GetTimeCoarse() const { return fTimeCoarse; }

    // private:
  public:
    UInt_t fDetector; // 1..n
    UInt_t fChannel;  // 1..n (n=4 or 8 or 18)
    UInt_t fType;     // 0 (VFTX), 1 (TAMEX leading), 2 (TAMEX trailing)
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;
    Int_t fNEvents = 0;

  public:
    ClassDef(R3BSci2MappedData, 1)
};

#endif
#ifndef R3BSCI2TCALITEM_H
#define R3BSCI2TCALITEM_H

#include "TObject.h"

// for the data analysis of the Sci2 detectors.

class R3BSci2TcalData : public TObject
{
  public:
    // Default Constructor
    R3BSci2TcalData();

    // Standard Constructor
    R3BSci2TcalData(UInt_t d, UInt_t c, Double_t t);

    // Destructor
    virtual ~R3BSci2TcalData() {}

    // Getters
    inline const UInt_t& GetDetector() const { return fDetector; }
    inline const UInt_t& GetChannel() const { return fChannel; }
    inline const Double_t& GetRawTimeNs() const { return fRawTimeNs; }

  private:
    UInt_t fDetector;
    UInt_t fChannel;
    Double_t fRawTimeNs;

    ClassDef(R3BSci2TcalData, 1)
};

#endif
#ifndef R3BSCI2CALITEM_H
#define R3BSCI2CALITEM_H

#include "TObject.h"

// for the data analysis of the Sci2 detectors.

class R3BSci2CalData : public TObject
{
  public:
    // Default Constructor
    R3BSci2CalData();

    // Standard Constructor
    R3BSci2CalData(UInt_t detector);

    // Destructor
    virtual ~R3BSci2CalData() {}

    // Getters
    inline const UInt_t& GetDetector() const { return fDetector; }

    Double_t GetMeanTime();
    Double_t GetMeanTimeTAMEXL();
    Double_t GetMeanTimeTAMEXT();
    Double_t GetMeanTimeVFTX();
    UInt_t GetVFTXNcha();
    UInt_t GetTAMEXLNcha();
    UInt_t GetTAMEXTNcha();

  private:
    UInt_t fDetector;

  public:
    Double_t fTimeV_r_ns; // right VFTX
    Double_t fTimeV_l_ns; // left VFTX
    Double_t fTimeL_r_ns; // right TAMEX leading
    Double_t fTimeL_l_ns; // left TAMEX leading
    Double_t fTimeT_r_ns; // right  TAMEX trailing
    Double_t fTimeT_l_ns; // left  TAMEX trailing

    ClassDef(R3BSci2CalData, 1)
};

#endif
#ifndef R3BSCI2HITITEM_H
#define R3BSCI2HITITEM_H

#include "TObject.h"

// for the data analysis of the SCI2 detectors.

class R3BSci2HitData : public TObject
{
  public:
    // Default Constructor
    R3BSci2HitData();

    // Standard Constructor
    R3BSci2HitData(UChar_t detector, Double_t t, Double_t x, Double_t Z);

    // Destructor
    virtual ~R3BSci2HitData() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }

  private:
    UChar_t fDetector; // 1..n
    Double_t fTime_ns; // average time of the scintillators
    Double_t fX_cm;    // position in cm
    Double_t fZ;       // Charge

  public:
    ClassDef(R3BSci2HitData, 1)
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

#ifndef R3BSCI8MAPPEDITEM_H
#define R3BSCI8MAPPEDITEM_H

#include "TObject.h"

// for the data analysis of the SCI8 detectors.

class R3BSci8MappedData : public TObject
{
  public:
    // Default Constructor
    R3BSci8MappedData();

    // Standard Constructor
    R3BSci8MappedData(UInt_t detector, UInt_t channel, UInt_t type, UInt_t timeFine, UInt_t timeCoarse);

    // Destructor
    virtual ~R3BSci8MappedData() {}

    // Getters
    inline const UInt_t& GetDetector() const { return fDetector; }
    inline const UInt_t& GetChannel() const { return fChannel; }
    inline const UInt_t& GetType() const { return fType; }
    inline const UInt_t& GetTimeFine() const { return fTimeFine; }
    inline const UInt_t& GetTimeCoarse() const { return fTimeCoarse; }

    // private:
  public:
    UInt_t fDetector; // 1..n
    UInt_t fChannel;  // 1..n (n=4 or 8 or 18)
    UInt_t fType;     // 0 (VFTX), 1 (TAMEX leading), 2 (TAMEX trailing)
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;
    Int_t fNEvents = 0;

  public:
    ClassDef(R3BSci8MappedData, 1)
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

#ifndef R3BSCI8CALITEM_H
#define R3BSCI8CALITEM_H

#include "TObject.h"

// for the data analysis of the Sci8 detectors.

class R3BSci8CalData : public TObject
{
  public:
    // Default Constructor
    R3BSci8CalData();

    // Standard Constructor
    R3BSci8CalData(UInt_t detector);

    // Destructor
    virtual ~R3BSci8CalData() {}

    // Getters
    inline const UInt_t& GetDetector() const { return fDetector; }

    Double_t GetMeanTime();
    Double_t GetMeanTimeTAMEXL();
    Double_t GetMeanTimeTAMEXT();
    Double_t GetMeanTimeVFTX();
    UInt_t GetVFTXNcha();
    UInt_t GetTAMEXLNcha();
    UInt_t GetTAMEXTNcha();

  private:
    UInt_t fDetector;

  public:
    Double_t fTimeV_r_ns; // right VFTX
    Double_t fTimeV_l_ns; // left VFTX
    Double_t fTimeL_r_ns; // right TAMEX leading
    Double_t fTimeL_l_ns; // left TAMEX leading
    Double_t fTimeT_r_ns; // right  TAMEX trailing
    Double_t fTimeT_l_ns; // left  TAMEX trailing

    ClassDef(R3BSci8CalData, 1)
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

#ifndef R3BSCI8HITITEM_H
#define R3BSCI8HITITEM_H

#include "TObject.h"

// for the data analysis of the SCI8 detectors.

class R3BSci8HitData : public TObject
{
  public:
    // Default Constructor
    R3BSci8HitData();

    // Standard Constructor
    R3BSci8HitData(UChar_t detector, Double_t t, Double_t x, Double_t Z);

    // Destructor
    virtual ~R3BSci8HitData() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }

  private:
    UChar_t fDetector; // 1..n
    Double_t fTime_ns; // average time of the scintillators
    Double_t fX_cm;    // position in cm
    Double_t fZ;       // Charge

  public:
    ClassDef(R3BSci8HitData, 1)
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
// -----                      R3BActarPoint header file                -----
// -----                  Created 27/04/16  by D. Kresan               -----
// -------------------------------------------------------------------------

#ifndef R3BACTARPOINT_H
#define R3BACTARPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BActarPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BActarPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BActarPoint(Int_t trackID,
                  Int_t detID,
                  Int_t plane,
                  TVector3 posIn,
                  TVector3 posOut,
                  TVector3 momIn,
                  TVector3 momOut,
                  Double_t tof,
                  Double_t length,
                  Double_t eLoss);

    /** Copy constructor **/
    R3BActarPoint(const R3BActarPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BActarPoint();

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Int_t fModule;
    Double32_t fX_out;
    Double32_t fY_out;
    Double32_t fZ_out;
    Double32_t fPx_out;
    Double32_t fPy_out;
    Double32_t fPz_out;

    ClassDef(R3BActarPoint, 1)
};

inline void R3BActarPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BActarPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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

#ifndef R3BSTRAWTUBESMAPPEDITEM_H
#define R3BSTRAWTUBESMAPPEDITEM_H

#include "TObject.h"

class R3BStrawtubesMappedData : public TObject
{
  public:
    R3BStrawtubesMappedData(UChar_t, UChar_t, UChar_t, UInt_t, UInt_t);
    virtual ~R3BStrawtubesMappedData();
    UChar_t GetPlane() const { return fPlane; }
    UChar_t GetSide() const { return fSide; }
    UChar_t GetStraw() const { return fStraw; }
    UInt_t GetTimeCoarse() const { return fTimeCoarse; }
    UInt_t GetTimeFine() const { return fTimeFine; }

  private:
    UChar_t fPlane;
    UChar_t fStraw;
    UChar_t fSide;
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BStrawtubesMappedData, 0)
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

#ifndef R3BSTRAWTUBESCALITEM_H
#define R3BSTRAWTUBESCALITEM_H

#include "TObject.h"

class R3BStrawtubesCalData : public TObject
{
  public:
    R3BStrawtubesCalData(UChar_t, UChar_t);
    virtual ~R3BStrawtubesCalData();
    UChar_t GetPlane() const;
    UChar_t GetStraw() const;
    Double_t GetTime(UChar_t) const;
    void SetTime(UChar_t, Double_t);

  private:
    UChar_t fPlane;
    UChar_t fStraw;
    Double_t fTime_ns[2];

  public:
    ClassDef(R3BStrawtubesCalData, 0)
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

#ifndef R3BSTRAWTUBESHITDATA_H
#define R3BSTRAWTUBESHITDATA_H

#include "TObject.h"

class R3BStrawtubesCalData;

class R3BStrawtubesHitData : public TObject
{
  public:
    R3BStrawtubesHitData(R3BStrawtubesCalData const&);
    virtual ~R3BStrawtubesHitData();

  private:
    UChar_t fPlane;
    UChar_t fStraw;
    Double_t fAverage_ns;
    Double_t fDiff_ns;

  public:
    ClassDef(R3BStrawtubesHitData, 0)
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

#ifndef R3BPADDLETAMEXMAPPEDITEM_H
#define R3BPADDLETAMEXMAPPEDITEM_H

#include "TObject.h"

class R3BPaddleTamexMappedData : public TObject
{
  public:
    R3BPaddleTamexMappedData();
    R3BPaddleTamexMappedData(Int_t planeId, Int_t barId);

    // Getters
    inline const Int_t& GetPlaneId() const { return fPlane; }
    inline const Int_t& GetBarId() const { return fBar; }
    inline const Int_t& GetSideId() const { return fSide; }
    inline const Int_t& GetEdgeId() const { return fEdge; }

    inline const Int_t& GetCoarseTime1LE() const { return fCoarseTime1LE; }
    inline const Int_t& GetFineTime1LE() const { return fFineTime1LE; }
    inline const Int_t& GetCoarseTime1TE() const { return fCoarseTime1TE; }
    inline const Int_t& GetFineTime1TE() const { return fFineTime1TE; }

    inline const Int_t& GetCoarseTime2LE() const { return fCoarseTime2LE; }
    inline const Int_t& GetFineTime2LE() const { return fFineTime2LE; }
    inline const Int_t& GetCoarseTime2TE() const { return fCoarseTime2TE; }
    inline const Int_t& GetFineTime2TE() const { return fFineTime2TE; }

    inline const Int_t& GetFineTime(int t, int e) const
    {
        return t ? (e ? fFineTime2TE : fFineTime2LE) : (e ? fFineTime1TE : fFineTime1LE);
    }

    inline const Int_t& GetCoarseTime(int t, int e) const
    {
        return t ? (e ? fCoarseTime2TE : fCoarseTime2LE) : (e ? fCoarseTime1TE : fCoarseTime1LE);
    }

    // To be compatible with Tacquila data:
    inline Bool_t Is17() const { return false; }

  public:
    Int_t fSide; //... number of side  1/2
    Int_t fEdge; //... number of edge  1/2

  protected:
    Int_t fPlane; //... number of plane 1..n
    Int_t fBar;   //... number of bar   1..n

  public:
    // PM1:
    Int_t fCoarseTime1LE; //... coarse time of leading edge
    Int_t fFineTime1LE;   //... fine time of leading edge
    Int_t fCoarseTime1TE; //... coarse time of trailing edge
    Int_t fFineTime1TE;   //... fine time of trailing edge
    // PM2:
    Int_t fCoarseTime2LE; //... coarse time of leading edge
    Int_t fFineTime2LE;   //... fine time of leading edge
    Int_t fCoarseTime2TE; //... coarse time of trailing edge
    Int_t fFineTime2TE;   //... fine time of trailing edge

  public:
    ClassDef(R3BPaddleTamexMappedData, 1)
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

#ifndef R3BTOFDMAPPEDITEM_H
#define R3BTOFDMAPPEDITEM_H

#include "TObject.h"

class R3BTofdMappedData : public TObject
{
  public:
    R3BTofdMappedData();
    R3BTofdMappedData(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);

    UInt_t GetDetectorId() const;
    UInt_t GetSideId() const;
    UInt_t GetBarId() const;
    UInt_t GetEdgeId() const;
    UInt_t GetTimeCoarse() const;
    UInt_t GetTimeFine() const;

  private:
    UInt_t fDetector; // 1..n
    UInt_t fSide;     // 1 = bottom, 2 = top
    UInt_t fBar;      // 1..n
    UInt_t fEdge;     // 1 = leading, 2 = trailing
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BTofdMappedData, 1)
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

#ifndef R3BTOFDCALITEM_H
#define R3BTOFDCALITEM_H

#include "TObject.h"

class R3BTofdCalData : public TObject
{
  public:
    R3BTofdCalData();
    R3BTofdCalData(UInt_t, UInt_t, UInt_t, Double_t, Double_t);

    UInt_t GetDetectorId() const;
    UInt_t GetBarId() const;
    UInt_t GetSideId() const;
    Double_t GetTimeLeading_ns() const;
    Double_t GetTimeTrailing_ns() const;

  private:
    UInt_t fDetector; // 1..4
    UInt_t fBar;      // 1..44
    UInt_t fSide;     // 1..2
    Double_t fLeading_ns;
    Double_t fTrailing_ns;

    ClassDef(R3BTofdCalData, 2)
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

#ifndef R3BTOFDHITDATA_H
#define R3BTOFDHITDATA_H

#include "R3BHit.h"

// for the data analysis of the Tofd detectors.
// Introduced by M.Heil, May 2016

class R3BTofdHitData : public R3BHit
{
  public:
    // Default Constructor
    R3BTofdHitData();

    // Standard Constructor
    R3BTofdHitData(Double_t t, Double_t x, Double_t y, Double_t Z, Double_t tdiff, Double_t ELoss = 0, Double_t ID = 0);

    // Destructor
    virtual ~R3BTofdHitData() {}

    ClassDef(R3BTofdHitData, 2)
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

#ifndef R3BPADDLECALITEM_H
#define R3BPADDLECALITEM_H

#include "TObject.h"
#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
// for the data analysis of the paddle-type detectors.
// Introduced by Ralf, Apr 2016

class R3BPaddleCalData : public TObject
{
  public:
    // Default Constructor
    R3BPaddleCalData();

    // Standard Constructor
    R3BPaddleCalData(UInt_t plane, UInt_t bar); //, Double_t r,Double_t t,Double_t l,Double_t b,Double_t tref);

    // Destructor
    virtual ~R3BPaddleCalData() {}

    // Getters
    // inline const UChar_t&  GetDetector()  const { return fDetector; }
    UInt_t GetPlane() const { return fPlane; }
    UInt_t GetBar() const { return fBar; }

    // tube: 0,1 edge: 0,1 time: in ns
    void SetTime(int tube, int edge, Double_t t)
    {
        if (tube == 0)
        {
            if (edge == 0)
                fTime1L_ns = t;
            else
                fTime1T_ns = t;
        }
        else
        {
            if (edge == 0)
                fTime2L_ns = t;
            else
                fTime2T_ns = t;
        }
    }

    void SetTimeL(int tube, int edge, Double_t t)
    {
        if (tube == 0)
            fTime1L_ns = t;
        else
            fTime2L_ns = t;
        // cout<< "PaddleCalData lead "<<tube<<", "<<edge<<", "<<fTime1L_ns<<"; "<<fTime2L_ns<<endl;
    }

    void SetTimeT(int tube, int edge, Double_t t)
    {
        if (tube == 0)
            fTime1T_ns = t;
        else
            fTime2T_ns = t;
        //	cout<< "PaddleCalData trail "<<tube<<", "<<edge<<", "<<fTime1T_ns<<"; "<<fTime2T_ns<<endl;
    }
    /*
    void SetTime(int tube, int edge,Double_t t)
    {
        if (edge==1) fTime1L_ns=t;
        if (edge==2) fTime1T_ns=t;
        if (edge==3) fTime2L_ns=t;
        if (edge==4) fTime2T_ns=t;
    }*/

  private:
    UInt_t fPlane;
    UInt_t fBar;

  public:
    // ToDo: Would it be better to have arrays here?
    Double_t fTime1L_ns; // both PMs of a paddle
    Double_t fTime1T_ns; // both PMs of a paddle
    Double_t fTime2L_ns;
    Double_t fTime2T_ns;

    ClassDef(R3BPaddleCalData, 2)
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
// -----                      R3BTofdPoint header file                 -----
// -----                  Created 18/05/15  by D. Kresan               -----
// -------------------------------------------------------------------------

/**  R3BTofdPoint.h
 **/

#ifndef R3BTOFDPOINT_H
#define R3BTOFDPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BTofdPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BTofdPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BTofdPoint(Int_t trackID,
                 Int_t detID,
                 TVector3 posIn,
                 TVector3 posOut,
                 TVector3 momIn,
                 TVector3 momOut,
                 Double_t tof,
                 Double_t length,
                 Double_t eLoss);

    /** Copy constructor **/
    R3BTofdPoint(const R3BTofdPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTofdPoint();

    /** Accessors **/
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;

    ClassDef(R3BTofdPoint, 1)
};

inline void R3BTofdPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BTofdPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----                      R3BTofdDigi header file                  -----
// -----                  Created 28/06/11  by D.Bertini/Justyna               -----
// -------------------------------------------------------------------------

/**  R3BTofdDigi.h
 **/

#ifndef R3BTOFDDIGI_H
#define R3BTOFDDIGI_H

#include "TObject.h"
#include "TVector3.h"

class R3BTofdDigi : public TObject
{

  public:
    /** Default constructor **/
    R3BTofdDigi();
    R3BTofdDigi(Int_t ntmul,
                Double_t ntfx,
                Double_t ntfy,
                Double_t ntft,
                Double_t ntfpath,
                Double_t ntfpx,
                // Double_t ntfpy,Double_t ntfpz);
                Double_t ntfpy,
                Double_t ntfpz,
                Double_t ntfe);

    /** Copy constructor **/
    R3BTofdDigi(const R3BTofdDigi& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BTofdDigi();

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void Setntmul(Int_t mul) { Ntmul = mul; }
    Double_t Getntmul() { return Ntmul; }

    void Setntfx(Double_t pos) { Ntx = pos; }
    Double_t Getntfx() { return Ntx; }

    void Setntfy(Double_t pos) { Nty = pos; }
    Double_t Getntfy() { return Nty; }

    void Setntft(Double_t time) { Ntt = time; }
    Double_t Getntft() { return Ntt; }

    void Setntfpath(Double_t length) { Ntpath = length; }
    Double_t Getntfpath() { return Ntpath; }

    void Setntfpx(Int_t mom) { Ntfpx = mom; }
    Double_t Getntfpx() { return Ntfpx; }

    void Setntfpy(Int_t mom) { Ntfpy = mom; }
    Double_t Getntfpy() { return Ntfpy; }

    void Setntfpz(Int_t mom) { Ntfpz = mom; }
    Double_t Getntfpz() { return Ntfpz; }

    void Setntfe(Double_t en) { Nte = en; }
    Double_t Getntfe() { return Nte; }

  protected:
    Int_t Ntmul;
    Double32_t Ntx;
    Double32_t Nty;
    Double32_t Ntt;
    Double32_t Ntpath;
    Double32_t Ntfpx;
    Double32_t Ntfpy;
    Double32_t Ntfpz;
    Double32_t Nte;

    ClassDef(R3BTofdDigi, 1)
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

#ifndef R3BPTOFHIT_H
#define R3BPTOFHIT_H

#include "TObject.h"

class R3BPtofHit : public TObject
{

  public:
    /** Default constructor **/
    R3BPtofHit();
    R3BPtofHit(Int_t paddle, Double_t charge, Double_t tdc, Double_t xx, Double_t yy, Double_t zz);

    /** Copy constructor **/
    R3BPtofHit(const R3BPtofHit&);

    /** Destructor **/
    virtual ~R3BPtofHit();

    R3BPtofHit& operator=(const R3BPtofHit&) { return *this; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

    void SetCharge(Double_t charge) { fCharge = charge; }
    Double_t GetCharge() const { return fCharge; }

    void SetTdc(Double_t time) { fTdc = time; }
    Double_t GetTdc() const { return fTdc; }

    void SetXX(Double_t pos) { fxx = pos; }
    Double_t GetXX() { return fxx; }

    void SetYY(Double_t pos) { fyy = pos; }
    Double_t GetYY() { return fyy; }

    void SetZZ(Double_t pos) { fzz = pos; }
    Double_t GetZZ() { return fzz; }

    void SetPaddleNr(Int_t paddleNb) { fPaddleNb = paddleNb; }
    Int_t GetPaddleNr() { return fPaddleNb; }

  protected:
    Int_t fPaddleNb;
    Double32_t fCharge;
    Double32_t fTdc;
    Double32_t fxx;
    Double32_t fyy;
    Double32_t fzz;

    ClassDef(R3BPtofHit, 1)
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

#ifndef R3BPDCMAPPEDITEM_H
#define R3BPDCMAPPEDITEM_H

#include "TObject.h"

class R3BPdcMappedData : public TObject
{
  public:
    R3BPdcMappedData();
    R3BPdcMappedData(UInt_t, UInt_t, UInt_t, UInt_t, UInt_t);

    UInt_t GetPlaneId() const;
    UInt_t GetWireId() const;
    UInt_t GetEdgeId() const;
    UInt_t GetTimeCoarse() const;
    UInt_t GetTimeFine() const;

  private:
    UInt_t fPlane;      // 1..n
    UInt_t fWire;       // 1..n
    UInt_t fEdge;       // 1 = leading, 2 = trailing
    UInt_t fTimeCoarse;
    UInt_t fTimeFine;

  public:
    ClassDef(R3BPdcMappedData, 1)
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

#ifndef R3BPDCCALITEM_H
#define R3BPDCCALITEM_H

#include "TObject.h"

class R3BPdcCalData : public TObject
{
  public:
    R3BPdcCalData();
    R3BPdcCalData(UInt_t, UInt_t, UInt_t, Double_t);

    UInt_t GetPlaneId() const;
    UInt_t GetWireId() const;
    UInt_t GetEdgeId() const;
    Double_t GetTime_ns() const;

  private:
    UInt_t fPlane;      // 1..n
    UInt_t fWire;       // 1..n
    UInt_t fEdge;       // 1 = leading, 2 = trailing
    Double_t fTime_ns;

  public:
    ClassDef(R3BPdcCalData, 1)
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

#ifndef R3BPDCHITDATA_H
#define R3BPDCHITDATA_H

#include "R3BHit.h"

// for the data analysis of the Pdc detectors.
// Introduced by M.Heil, June 2020

class R3BPdcHitData : public R3BHit
{
  public:
    // Default Constructor
    R3BPdcHitData();

    // Standard Constructor
    R3BPdcHitData(Double_t t, Double_t x, Double_t y, Double_t ELoss = 0, Double_t ID = 0, Int_t wire = 0);

    // Destructor
    virtual ~R3BPdcHitData() {}
    Int_t GetWireId() const;

	private:
    Int_t fWireId;

    ClassDef(R3BPdcHitData, 2)
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

// Introduced by M. Heil, Jan 2018
//
// This class contains calibrated data for one electronic channel in a bunched
// fiber detector, still not one fiber!
//

#ifndef R3BBUNCHEDFIBERCALDATA_H
#define R3BBUNCHEDFIBERCALDATA_H

#include "TObject.h"

class R3BBunchedFiberCalData : public TObject
{
  public:
    R3BBunchedFiberCalData();
    R3BBunchedFiberCalData(Int_t, Int_t, Bool_t, Double_t);
    virtual ~R3BBunchedFiberCalData();

    Int_t GetChannel() const;
    Double_t GetTime_ns() const;
    Bool_t IsMAPMT() const;
    Bool_t IsSPMT() const;
    Bool_t IsMAPMTTrigger() const;
    Bool_t IsSPMTTrigger() const;
    Bool_t IsLeading() const;
    Bool_t IsSortable() const;
    Bool_t IsTrailing() const;

  private:
    Int_t fSide;
    Int_t fChannel;
    Bool_t fIsLeading;
    Double_t fTime_ns;

    ClassDef(R3BBunchedFiberCalData, 2)
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
// This class contains hit-level data for one fiber.
//

#ifndef R3BBUNCHEDFIBERHITDATA_H
#define R3BBUNCHEDFIBERHITDATA_H

#include "R3BHit.h"

class R3BBunchedFiberHitData: public R3BHit
{
  public:
    R3BBunchedFiberHitData();
    R3BBunchedFiberHitData(Int_t detId, Double_t x, Double_t y, Double_t eloss, Double_t time, Int_t a_fiber_id, Double_t
    a_mapmt_time_ns, Double_t a_spmt_time_ns, Double_t a_mapmt_tot_ns, Double_t a_spmt_tot_ns);
    
    virtual ~R3BBunchedFiberHitData();

    Int_t GetFiberId() const;
    Double_t GetMAPMTTime_ns() const;
    Double_t GetSPMTTime_ns() const;
    Double_t GetTime_ns() const;
    Double_t GetMAPMTToT_ns() const;
    Double_t GetSPMTToT_ns() const;

  private:
    Int_t fFiberId;
    Double_t fMAPMTTime_ns;
    Double_t fSPMTTime_ns;
    Double_t fTime_ns;
    Double_t fMAPMTToT_ns;
    Double_t fSPMTToT_ns;

    ClassDef(R3BBunchedFiberHitData, 2)
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
// -----              R3BBunchedFiberMappedData                -----
// -----         Created Jan 2018 by M.Heil        -----
// ----------------------------------------------------------------

//
// This class contains mapped data for one fiber electronics channel and
// logical signal edge, not for one fiber!
//

#ifndef R3BBUNCHEDFIBERMAPPEDDATA_H
#define R3BBUNCHEDFIBERMAPPEDDATA_H

#include "TObject.h"

class R3BBunchedFiberMappedData : public TObject
{
  public:
    R3BBunchedFiberMappedData();
    R3BBunchedFiberMappedData(Int_t, Int_t, Bool_t, Int_t, Int_t);
    virtual ~R3BBunchedFiberMappedData();

    Int_t GetChannel() const;
    Int_t GetCoarse() const;
    Int_t GetFine() const;
    Int_t GetSide() const;
    Bool_t IsMAPMT() const;
    Bool_t IsSPMT() const;
    Bool_t IsMAPMTTrigger() const;
    Bool_t IsSPMTTrigger() const;
    Bool_t IsLeading() const;
    Bool_t IsTrailing() const;

  protected:
    Int_t fSide;       // 0 = MAPMT, 1 = SPMT, 2 = MAPMT trigger, 3 = SPMT trigger.
    Int_t fChannel;
    Bool_t fIsLeading;
    Int_t fCoarse;
    Int_t fFine;

  public:
    ClassDef(R3BBunchedFiberMappedData, 2)
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
// -----                      R3BFi4Point header file                  -----
// -----                  Created 09/08/17  by A.Kripko                -----
// -------------------------------------------------------------------------

/**  R3BFi4Point.h
 **/

#ifndef R3BFi4Point_H
#define R3BFi4Point_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BFi4Point : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BFi4Point();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BFi4Point(Int_t trackID,
                Int_t detID,
                Int_t plane,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BFi4Point(const R3BFi4Point&);

    /** Destructor **/
    virtual ~R3BFi4Point();

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fModule;

    ClassDef(R3BFi4Point, 1)
};

inline void R3BFi4Point::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BFi4Point::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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

#ifndef R3BFi4CALITEM_H
#define R3BFi4CALITEM_H

#include "TObject.h"

// for the data analysis of the s438b PSPX detectors.
// Introduced by Ralf, Jan 2016

class R3BFi4CalItem : public TObject
{
  public:
    // Default Constructor
    R3BFi4CalItem();

    // Standard Constructor
    R3BFi4CalItem(UChar_t detector,
                  UInt_t fiber_n,
                  UInt_t mppc_top,
                  UInt_t mppc_bottom,
                  Float_t energy_top,
                  Float_t energy_bottom,
                  Float_t time_top,
                  Float_t time_bottom);

    // Destructor
    virtual ~R3BFi4CalItem() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }
    inline const UInt_t& GetFiber() const { return fFiber_n; }
    inline const UInt_t& GetMPPC_top() const { return fMPPC_top; }
    inline const UInt_t& GetMPPC_bottom() const { return fMPPC_bottom; }
    inline const Float_t& GetEnergy_top() const { return fEnergy_top; }
    inline const Float_t& GetEnergy_bottom() const { return fEnergy_bottom; }
    inline const Float_t& GetTime_top() const { return fTime_top; }
    inline const Float_t& GetTime_bottom() const { return fTime_bottom; }

  private:
    UChar_t fDetector;
    UInt_t fFiber_n;
    UInt_t fMPPC_top;
    UInt_t fMPPC_bottom;
    Float_t fEnergy_top; // 0xfff is energy data, Anything in 0xfffff000 indicates an error or overflow
    Float_t fEnergy_bottom;
    Float_t fTime_top;
    Float_t fTime_bottom;

  public:
    ClassDef(R3BFi4CalItem, 2)
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

#ifndef R3BFi4HITITEM_H
#define R3BFi4HITITEM_H

#include "R3BHit.h"

// for the data analysis of the s438b PSPX detectors.
// Introduced by Ralf, Jan 2016
// adapted by Joachim March 2016

class R3BFi4HitItem : public R3BHit
{
  public:
    // Default Constructor
    R3BFi4HitItem();

    // Standard Constructor
    R3BFi4HitItem(UInt_t detector,
                  UInt_t fiber,
                  Float_t xpos,
                  Float_t ypos,
                  Float_t zpos, // pos
                  Float_t energy_top,
                  Float_t energy_bottom, // energy
                  Float_t time_top,
                  Float_t time_bottom); // time

    // Destructor
    virtual ~R3BFi4HitItem() {}

    // Getters
    inline const UChar_t& GetDetector() const { return fDetector; }
    inline const UInt_t& GetFiber() const { return fFiber_n; }
    inline const Float_t& GetEnergy_top() const { return fEnergy_top; }
    inline const Float_t& GetEnergy_bottom() const { return fEnergy_bottom; }
    inline const Float_t& GetTime_top() const { return fTime_top; }
    inline const Float_t& GetTime_bottom() const { return fTime_bottom; }

  private:
    UChar_t fDetector;
    UInt_t fFiber_n;
    Float_t fEnergy_top; // 0xfff is energy data, Anything in 0xfffff000 indicates an error or overflow
    Float_t fEnergy_bottom;
    Float_t fTime_top;
    Float_t fTime_bottom;

  public:
    ClassDef(R3BFi4HitItem, 3)
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
// -----              R3BFibMappedData                -----
// -----         Created Jan 2018 by M.Heil        -----
// ----------------------------------------------------------------

#ifndef R3BFIBMAPPEDITEM_H
#define R3BFIBMAPPEDITEM_H

#include "TObject.h"

class R3BFibMappedData : public TObject
{
  public:
    /* Default Constructor */
    R3BFibMappedData();

    /* Standard Constructor */
    R3BFibMappedData(Int_t planeId, Int_t fiberId);

    // Destructor
    virtual ~R3BFibMappedData() {}

    // Getters
    inline const Int_t& GetPlaneId() const { return fPlane; }
    inline const Int_t& GetFiberId() const { return fFiber; }

    inline const Int_t& GetCoarseTime1LE() const { return fCoarseTime1LE; }
    inline const Int_t& GetFineTime1LE() const { return fFineTime1LE; }
    inline const Int_t& GetCoarseTime1TE() const { return fCoarseTime1TE; }
    inline const Int_t& GetFineTime1TE() const { return fFineTime1TE; }

    inline const Int_t& GetCoarseTime2LE() const { return fCoarseTime2LE; }
    inline const Int_t& GetFineTime2LE() const { return fFineTime2LE; }
    inline const Int_t& GetCoarseTime2TE() const { return fCoarseTime2TE; }
    inline const Int_t& GetFineTime2TE() const { return fFineTime2TE; }

    inline const Int_t& GetFineTime(int t, int e) const
    {
        return t ? (e ? fFineTime2TE : fFineTime2LE) : (e ? fFineTime1TE : fFineTime1LE);
    }

    inline const Int_t& GetCoarseTime(int t, int e) const
    {
        return t ? (e ? fCoarseTime2TE : fCoarseTime2LE) : (e ? fCoarseTime1TE : fCoarseTime1LE);
    }

    // To be compatible with Tacquila data:
    inline Bool_t Is17() const { return false; }

  protected:
    Int_t fPlane; //... number of plane 1..n
    Int_t fFiber; //... number of Fiber   1..n

  public:
    // PM1:
    Int_t fCoarseTime1LE; //... coarse time of leading edge
    Int_t fFineTime1LE;   //... fine time of leading edge
    Int_t fCoarseTime1TE; //... coarse time of trailing edge
    Int_t fFineTime1TE;   //... fine time of trailing edge
    // PM2:
    Int_t fCoarseTime2LE; //... coarse time of leading edge
    Int_t fFineTime2LE;   //... fine time of leading edge
    Int_t fCoarseTime2TE; //... coarse time of trailing edge
    Int_t fFineTime2TE;   //... fine time of trailing edge

  public:
    ClassDef(R3BFibMappedData, 1)
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

#ifndef R3BFIBCALITEM_H
#define R3BFIBCALITEM_H

#include "TObject.h"

// for the data analysis of fiber detectors.
// Introduced by M. Heil, Jan 2018

class R3BFibCalData : public TObject
{
  public:
    // Default Constructor
    R3BFibCalData();

    // Standard Constructor
    R3BFibCalData(UInt_t plane, UInt_t fiber); //, Double_t r,Double_t t,Double_t l,Double_t b,Double_t tref);

    // Destructor
    virtual ~R3BFibCalData() {}

    // Getters
    // inline const UChar_t&  GetDetector()  const { return fDetector; }
    UInt_t GetPlane() const { return fPlane; }
    UInt_t GetFiber() const { return fFiber; }

    // tube: 0,1 edge: 0,1 time: in ns
    void SetTime(int tube, int edge, Double_t t)
    {
        if (tube == 0)
        {
            if (edge == 0)
                fTime1L_ns = t;
            else
                fTime1T_ns = t;
        }
        else
        {
            if (edge == 0)
                fTime2L_ns = t;
            else
                fTime2T_ns = t;
        }
    }

  private:
    UInt_t fPlane;
    UInt_t fFiber;

  public:
    // ToDo: Would it be better to have arrays here?
    Double_t fTime1L_ns; // both PMs of a fiber
    Double_t fTime1T_ns; // both PMs of a fiber
    Double_t fTime2L_ns;
    Double_t fTime2T_ns;

    ClassDef(R3BFibCalData, 1)
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
// -----                      R3BFibPoint header file                  -----
// -----                  Created 26/03/09  by D.Bertini               -----
// -------------------------------------------------------------------------

/**  R3BFibPoint.h
 **/

#ifndef R3BFIBPOINT_H
#define R3BFIBPOINT_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BFibPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BFibPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param plane    Module ID
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BFibPoint(Int_t trackID,
                Int_t detID,
                Int_t plane,
                TVector3 posIn,
                TVector3 posOut,
                TVector3 momIn,
                TVector3 momOut,
                Double_t tof,
                Double_t length,
                Double_t eLoss);

    /** Copy constructor **/
    R3BFibPoint(const R3BFibPoint&);

    /** Destructor **/
    virtual ~R3BFibPoint();

    /** Accessors **/
    Int_t GetModule() const { return fModule; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fModule;

    ClassDef(R3BFibPoint, 1)
};

inline void R3BFibPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BFibPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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

// ---------------------------------------------------------------------------
// -----                                                                 -----
// -----                      R3BAmsMappedData                           -----
// -----                  Created 12/05/2018 by J.L. Rodriguez           -----
// -----                                                                 -----
// ---------------------------------------------------------------------------

#ifndef R3BAmsMappedData_H
#define R3BAmsMappedData_H
#include "TObject.h"

class R3BAmsMappedData : public TObject
{

  public:
    // Default Constructor
    R3BAmsMappedData();

    /** Standard Constructor
     *@param detId       Detector unique identifier
     *@param stripId     Strip unique identifier
     *@param energy      Total energy deposited in the strip
     **/
    R3BAmsMappedData(Int_t detId, Int_t stripId, Int_t energy);

    // Destructor
    virtual ~R3BAmsMappedData() {}

    // Getters
    inline const Int_t& GetDetectorId() const { return fDetId; }
    inline const Int_t& GetStripId() const { return fStripId; }
    inline const Int_t& GetEnergy() const { return fEnergy; }

  protected:
    Int_t fDetId, fStripId; // detector and strip unique identifiers
    Int_t fEnergy;          // total energy in the strip

  public:
    ClassDef(R3BAmsMappedData, 1)
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
// -----              R3BAmsStripCalData header file                   -----
// -----             Created 29/05/18  by J.L. Rodriguez-Sanchez       -----
// -------------------------------------------------------------------------

/**  R3BAmsStripCalData.h
 **  A strip CalData is the representation of the
 **  information obtained from each strip in the silicon detector.
 **/

#ifndef R3BAmsStripCalData_H
#define R3BAmsStripCalData_H

#include "FairMultiLinkedData.h"
#include "TObject.h"

class R3BAmsStripCalData : public FairMultiLinkedData
{
  public:
    /** Default constructor **/
    R3BAmsStripCalData();

    /** Constructor with arguments
     *@param fDetId    Detector unique identifier
     *@param fSideId   Side unique identifier
     *@param fStripId  Strip unique identifier
     *@param fEnergy   Total energy deposited on the strip ([GeV] in sim)
     **/
    R3BAmsStripCalData(Int_t detid, Int_t sideid, Int_t stripid, Double_t energy);

    /** Copy constructor **/
    R3BAmsStripCalData(const R3BAmsStripCalData&);

    R3BAmsStripCalData& operator=(const R3BAmsStripCalData&) { return *this; }

    /** Destructor **/
    virtual ~R3BAmsStripCalData();

    /** Accessors **/
    inline const Int_t& GetDetId() const { return fDetId; }
    inline const Int_t& GetSideId() const { return fSideId; }
    inline const Int_t& GetStripId() const { return fStripId; }
    inline const Double_t& GetEnergy() const { return fEnergy; }

    /** Modifiers **/
    void SetDetId(Int_t detid) { fDetId = detid; }
    void SetSideId(Int_t sideid) { fSideId = sideid; }
    void SetStripId(Int_t stripid) { fStripId = stripid; }
    void SetEnergy(Double32_t energy) { fEnergy = energy; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Int_t fDetId;     // detector unique identifier
    Int_t fSideId;    // side unique identifier
    Int_t fStripId;   // strip unique identifier
    Double_t fEnergy; // total energy in the strip

    ClassDef(R3BAmsStripCalData, 1)
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
// -----              R3BAmsHitData header file                        -----
// -----             Created 01/06/18  by J.L. Rodriguez-Sanchez       -----
// -------------------------------------------------------------------------

/**  R3BAmsHitData.h
 **  A HitData is the representation of the
 **  information obtained from each ams detector.
 **/

#ifndef R3BAmsHitData_H
#define R3BAmsHitData_H

#include "FairMultiLinkedData.h"
#include "TObject.h"
#include "TVector3.h"

class R3BAmsHitData : public FairMultiLinkedData
{
  public:
    /** Default constructor **/
    R3BAmsHitData();

    /** Constructor with arguments
     *@param fDetId     Detector unique identifier
     *@param fNumHit    Number of hits
     *@param fX         Position X (S-Side) [mm] local coordinate (detector frame)
     *@param fY         Position Y (K-Side) [mm] local coordinate (detector frame)
     *@param fTheta     Angle theta [rad] (lab frame)
     *@param fPhi       Angle Phi [rad] (lab frame)
     *@param fEnergyS   Total energy deposited on S-side by hit ([GeV] in sim)
     *@param fEnergyK   Total energy deposited on K-side by hit ([GeV] in sim)
     **/
    R3BAmsHitData(Int_t detid,
                  Int_t numhit,
                  Double_t x,
                  Double_t y,
                  TVector3 master,
                  Double_t energy_x,
                  Double_t energy_y,
                  Int_t mulS = 0,
                  Int_t mulK = 0);

    /** Copy constructor **/
    R3BAmsHitData(const R3BAmsHitData&);

    R3BAmsHitData& operator=(const R3BAmsHitData&) { return *this; }

    /** Destructor **/
    virtual ~R3BAmsHitData();

    /** Accessors **/
    inline const Int_t& GetDetId() const { return fDetId; }
    inline const Int_t& GetNumHit() const { return fNumHit; }
    inline const Int_t& GetMulS() const { return fMulS; }
    inline const Int_t& GetMulK() const { return fMulK; }
    inline const Double_t& GetX() const { return fX; }
    inline const Double_t& GetY() const { return fY; }
    inline const Double_t& GetPos_S() const { return fX; }
    inline const Double_t& GetPos_K() const { return fY; }
    inline const Double_t& GetTheta() const { return fTheta; }
    inline const Double_t& GetPhi() const { return fPhi; }
    inline const TVector3 GetPosLab() const { return fmaster; }
    inline const Double_t& GetEnergyS() const { return fEnergyS; }
    inline const Double_t& GetEnergyK() const { return fEnergyK; }

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Int_t fDetId;
    Int_t fNumHit;
    Int_t fMulS, fMulK;
    Double_t fX, fY, fTheta, fPhi;
    TVector3 fmaster;
    Double_t fEnergyS, fEnergyK;

    ClassDef(R3BAmsHitData, 1)
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

#ifndef R3BBEAMMONITORMAPPEDITEM_H
#define R3BBEAMMONITORMAPPEDITEM_H

#include "TObject.h"

class R3BBeamMonitorMappedData : public TObject
{
  public:
    // Default Constructor
    R3BBeamMonitorMappedData();

    // Standard Constructor
    R3BBeamMonitorMappedData(UInt_t, UInt_t, UInt_t);

    UInt_t GetIC() const;
    UInt_t GetSEETRAM() const;
    UInt_t GetTOFDOR() const;

  public:
    UInt_t fIC;
    UInt_t fSEETRAM;
    UInt_t fTOFDOR;

  public:
    ClassDef(R3BBeamMonitorMappedData, 1)
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
// -----                      R3BMusicPoint header file                -----
// -----                  Created 08/10/19  by JL Rodriguez            -----
// -------------------------------------------------------------------------

/**  R3BMusicPoint.h
 **/

#ifndef R3BMusicPoint_H
#define R3BMusicPoint_H

#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"

class R3BMusicPoint : public FairMCPoint
{

  public:
    /** Default constructor **/
    R3BMusicPoint();

    /** Constructor with arguments
     *@param trackID  Index of MCTrack
     *@param detID    Detector ID
     *@param detVolID Detector Copy ID
     *@param Z        Atomic number fragment
     *@param A        Mass number fragment
     *@param posIn    Ccoordinates at entrance to active volume [cm]
     *@param posOut   Coordinates at exit of active volume [cm]
     *@param momIn    Momentum of track at entrance [GeV]
     *@param momOut   Momentum of track at exit [GeV]
     *@param tof      Time since event start [ns]
     *@param length   Track length since creation [cm]
     *@param eLoss    Energy deposit [GeV]
     **/
    R3BMusicPoint(Int_t trackID,
                  Int_t detID,
                  Int_t detCopyID,
                  Double_t Z,
                  Double_t A,
                  TVector3 posIn,
                  TVector3 posOut,
                  TVector3 momIn,
                  TVector3 momOut,
                  Double_t tof,
                  Double_t length,
                  Double_t eLoss);

    /** Copy constructor **/
    R3BMusicPoint(const R3BMusicPoint& point) { *this = point; };

    /** Destructor **/
    virtual ~R3BMusicPoint();

    /** Accessors **/
    Int_t GetDetCopyID() const { return fDetCopyID; }
    Double_t GetXIn() const { return fX; }
    Double_t GetYIn() const { return fY; }
    Double_t GetZIn() const { return fZ; }
    Double_t GetXOut() const { return fX_out; }
    Double_t GetYOut() const { return fY_out; }
    Double_t GetZOut() const { return fZ_out; }
    Double_t GetPxOut() const { return fPx_out; }
    Double_t GetPyOut() const { return fPy_out; }
    Double_t GetPzOut() const { return fPz_out; }
    Double_t GetZFF() const { return fZFF; }
    Double_t GetAFF() const { return fAFF; }

    void PositionIn(TVector3& pos) { pos.SetXYZ(fX, fY, fZ); }
    void PositionOut(TVector3& pos) { pos.SetXYZ(fX_out, fY_out, fZ_out); }
    void MomentumOut(TVector3& mom) { mom.SetXYZ(fPx_out, fPy_out, fPz_out); }

    /** Point coordinates at given z from linear extrapolation **/
    Double_t GetX(Double_t z) const;
    Double_t GetY(Double_t z) const;

    /** Check for distance between in and out **/
    Bool_t IsUsable() const;

    /** Modifiers **/
    void SetPositionOut(TVector3 pos);
    void SetMomentumOut(TVector3 mom);
    void SetDetCopyID(Int_t id) { fDetCopyID = id; };

    /** Output to screen **/
    virtual void Print(const Option_t* opt) const;

  protected:
    Double32_t fX_out, fY_out, fZ_out;
    Double32_t fPx_out, fPy_out, fPz_out;
    Int_t fDetCopyID;
    Double32_t fZFF, fAFF;

    ClassDef(R3BMusicPoint, 1)
};

inline void R3BMusicPoint::SetPositionOut(TVector3 pos)
{
    fX_out = pos.X();
    fY_out = pos.Y();
    fZ_out = pos.Z();
}

inline void R3BMusicPoint::SetMomentumOut(TVector3 mom)
{
    fPx_out = mom.Px();
    fPy_out = mom.Py();
    fPz_out = mom.Pz();
}

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
// -----              R3BMusicMappedData header file                   -----
// -----             Created 15/10/19  by J.L. Rodriguez-Sanchez       -----
// -------------------------------------------------------------------------

/**  R3BMusicMappedData
 **  A HitData is the representation of the
 **  information obtained from the MUSIC detector.
 **/

#ifndef R3BMusicMappedData_H
#define R3BMusicMappedData_H
#include "TObject.h"

class R3BMusicMappedData : public TObject
{

  public:
    /** Default constructor **/
    R3BMusicMappedData();

    /** Constructor with arguments
     *@param anodeID  Anode ID
     *@param time     Time [channels]
     *@param energy   Energy deposit [channels]
     **/
    R3BMusicMappedData(UShort_t anodeID, UShort_t time, UShort_t energy);

    /** Destructor **/
    virtual ~R3BMusicMappedData() {}

    /** Accessors **/
    inline const UShort_t& GetAnodeID() const { return fAnodeID; }
    inline const UShort_t& GetTime() const { return fTime; }
    inline const UShort_t& GetEnergy() const { return fEnergy; }

    /** Modifiers **/
    void SetAnodeID(UShort_t id) { fAnodeID = id; };
    void SetTime(UShort_t time) { fTime = time; };
    void SetEnergy(UShort_t energy) { fEnergy = energy; };

  protected:
    UShort_t fAnodeID;
    UShort_t fTime;
    UShort_t fEnergy;

    ClassDef(R3BMusicMappedData, 1)
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
// -----                      R3BMusicCalData header file              -----
// -----                  Created 15/10/19 by JL Rodriguez             -----
// -------------------------------------------------------------------------

#ifndef R3BMusicCalData_H
#define R3BMusicCalData_H
#include "TObject.h"

class R3BMusicCalData : public TObject
{

  public:
    /** Default constructor **/
    R3BMusicCalData();

    /** Constructor with arguments
     *@param anodeID  Anode ID
     *@param dtime    Drift time calibrated in [mm] for the position
     *@param energy   Energy deposit [channels], for simulation in [MeV]
     **/
    R3BMusicCalData(UShort_t anodeID, Double_t dtime, Double_t energy);

    /** Destructor **/
    virtual ~R3BMusicCalData() {}

    /** Accessors **/
    inline const UShort_t& GetAnodeID() const { return fAnodeID; }
    inline const Double_t& GetDTime() const { return fDT; }
    inline const Double_t& GetEnergy() const { return fEnergy; }

    /** Modifiers **/
    void SetAnodeID(UShort_t id) { fAnodeID = id; };
    void SetDTime(Double_t dt) { fDT = dt; };
    void SetEnergy(Double_t energy) { fEnergy = energy; };

  protected:
    UShort_t fAnodeID;
    Double_t fDT, fEnergy;

    ClassDef(R3BMusicCalData, 1)
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
// -----                      R3BMusicHitData header file              -----
// -----                  Created 15/10/19 by JL Rodriguez             -----
// -------------------------------------------------------------------------

#ifndef R3BMusicHitData_H
#define R3BMusicHitData_H
#include "TObject.h"

class R3BMusicHitData : public TObject
{

  public:
    /** Default constructor **/
    R3BMusicHitData();

    /** Constructor with arguments
     *@param theta    Angle theta in [mrad]
     *@param z        Atomic number Z in charge units
     **/
    R3BMusicHitData(Double_t theta, Double_t z);
    R3BMusicHitData(Double_t theta, Double_t z, Double_t ene);

    /** Destructor **/
    virtual ~R3BMusicHitData() {}

    /** Accessors **/
    inline const Double_t& GetTheta() const { return fTheta; }
    inline const Double_t& GetZcharge() const { return fZ; }
    inline const Double_t& GetEave() const { return fE; }

    /** Modifiers **/
    void SetTheta(Double_t theta) { fTheta = theta; };
    void SetZcharge(Double_t z) { fZ = z; };
    void SetEave(Double_t ene) { fE = ene; };

  protected:
    Double_t fTheta, fZ, fE;

    ClassDef(R3BMusicHitData, 1)
};

#endif
#ifndef R3BSAMPLERMAPPEDITEM_H
#define R3BSAMPLERMAPPEDITEM_H

#include "TObject.h"

// For the data analysis of the SAMPLER.

class R3BSamplerMappedData : public TObject
{
  public:
    // Default Constructor
    R3BSamplerMappedData();

    // Standard Constructor
    R3BSamplerMappedData(UInt_t);

    UInt_t GetTime() const;

  public:
    UInt_t fTime;

  public:
    ClassDef(R3BSamplerMappedData, 1)
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
// -----              R3BSfibMappedData                -----
// -----         Created Nov 2020 by A. Falduto        -----
// ----------------------------------------------------------------

#ifndef R3BSFIBMAPPEDDATA_H
#define R3BSFIBMAPPEDDATA_H

#include "TObject.h"

class R3BSfibMappedData : public TObject
{
  public:
    R3BSfibMappedData();
    R3BSfibMappedData(Int_t, Int_t, Bool_t, Int_t, Int_t);
    virtual ~R3BSfibMappedData();

    Int_t GetChannel() const;
    Int_t GetCoarse() const;
    Int_t GetFine() const;
    Bool_t IsTop() const;
    Bool_t IsBottom() const;
    Bool_t IsLeading() const;
    Bool_t IsTrailing() const;

  protected:
    Int_t fIsBottom;
    Int_t fChannel;
    Bool_t fIsLeading;
    Int_t fCoarse;
    Int_t fFine;

  public:
    ClassDef(R3BSfibMappedData, 1)
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

// Introduced by M. Heil, Jan 2018
//
// This class contains calibrated data for one electronic channel in a bunched
// fiber detector, still not one fiber!
//

#ifndef R3BSFIBCALDATA_H
#define R3BSFIBCALDATA_H

#include "TObject.h"

class R3BSfibCalData : public TObject
{
  public:
    R3BSfibCalData();
    R3BSfibCalData(Int_t, Int_t, Bool_t, Double_t);
    virtual ~R3BSfibCalData();

    Int_t GetChannel() const;
    Double_t GetTime_ns() const;
    Bool_t IsTop() const;
    Bool_t IsBot() const;
    Bool_t IsLeading() const;
    Bool_t IsTrailing() const;

  private:
    Int_t fSide;
    Int_t fChannel;
    Bool_t fIsLeading;
    Double_t fTime_ns;

    ClassDef(R3BSfibCalData, 1)
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
// This class contains hit-level data for one fiber.
//

#ifndef R3BSFIBHITDATA_H
#define R3BSFIBHITDATA_H

#include "R3BHit.h"

class R3BSfibHitData: public R3BHit
{
  public:
    R3BSfibHitData();
    R3BSfibHitData(Int_t, Double_t, Double_t, Double_t, Double_t);
    
    virtual ~R3BSfibHitData();

    Int_t GetFiberId() const;
    Double_t GetTopTime_ns() const;
    Double_t GetBotTime_ns() const;
    Double_t GetTime_ns() const;
    Double_t GetTopToT_ns() const;
    Double_t GetBotToT_ns() const;

  private:
    Int_t fFiberId;
    Double_t fTopTime_ns;
    Double_t fBotTime_ns;
    Double_t fTime_ns;
    Double_t fTopToT_ns;
    Double_t fBotToT_ns;

    ClassDef(R3BSfibHitData, 1)
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

// ---------------------------------------------------------------
// -----                  R3BFrsData                         -----
// -----     Created 30/04/2021 by J.L. Rodriguez            -----
// ---------------------------------------------------------------

#ifndef R3BFrsData_H
#define R3BFrsData_H
#include "TObject.h"

class R3BFrsData : public TObject
{

  public:
    // Default Constructor
    R3BFrsData();

    /** Standard Constructor
     *@param fStaId  ID of Start Sci starting from 1
     *@param fStoId  ID of Stop Sci starting from 1
     *@param fZ      Z of fragments
     *@param fAq     A/q of fragments
     *@param fBeta   Beta of fragments
     *@param fBrho   Brho of fragments
     *@param cs2     Position at S2
     *@param xc      Position at Cave
     **/
    R3BFrsData(Int_t StaId,
               Int_t StoId,
               Double_t z,
               Double_t aq,
               Double_t beta,
               Double_t brho,
               Double_t xs2 = 0.,
               Double_t xc = 0.);

    // Destructor
    virtual ~R3BFrsData() {}

    // Getters
    inline const Double_t GetStaId() const { return fStaId; }
    inline const Double_t GetStoId() const { return fStoId; }
    inline const Double_t GetZ() const { return fZ; }
    inline const Double_t GetAq() const { return fAq; }
    inline const Double_t GetBeta() const { return fBeta; }
    inline const Double_t GetBrho() const { return fBrho; }
    inline const Double_t GetXS2() const { return fxs2; }
    inline const Double_t GetXCave() const { return fxc; }

  protected:
    Int_t fStaId, fStoId;
    Double_t fZ, fAq;
    Double_t fBeta, fBrho, fxs2, fxc;

  public:
    ClassDef(R3BFrsData, 1)
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
// -----                  R3BDetectorList.header file                  -----
// -----                 Created 11/02/09  by D.Bertini                -----
// -------------------------------------------------------------------------

/** Unique identifier for all R3B detector systems **/

#ifndef R3BDETECTORLIST_H
#define R3BDETECTORLIST_H 1

enum DetectorId
{
    kREF,
    kDCH,
    kCAL,
    kLAND,
    kGFI,
    kMTOF,
    kTOFD,
    kTOF,
    kTRA,
    kCALIFA,
    kMFI,
    kPSP,
    kVETO,
    kSTARTRACK,
    kLUMON,
    kNEULAND,
    kDNNNEULAND,
    kDNNVETO,
    kDNNNEBULA,
    kDNNNEBULAVETO,
    kFI3a,
    kFI3b,
    kFI4,
    kFI4t,
    kFI6,
    kFI7,
    kFI8,
    kFI5,
    kFI10,
    kFI11,
    kFI12,
    kFI13,
    kSFI,
    kMUSIC,
    kHPGE,//Added because of Ensar internship
#ifdef SOFIA
    kSOFSCI,
    kSOFAT,
    kSOFTRIM,
    kSOFMWPC0,
    kSOFMWPC1,
    kSOFTWIM,
    kSOFMWPC2,
    kSOFMWPC3,
    kSOFTofWall,
#endif
#ifdef GTPC
    kGTPC,
#endif
    kLAST
};
/** Unique identifier for all R3B Point and Hit types **/
enum fDetectorType
{
    kUnknownDetector,
    kDchPoint,
    kCalPoint,
    kLandPoint,
    kGfiPoint,
    kmTofPoint,
    kTofdPoint,
    kTofPoint,
    kTraPoint,
    kCalifaPoint,
    kMfiPoint,
    kPspPoint,
    kVetoPoint,
    kStartrackPoint,
    kLuMonPoint,
    kNeulandPoint,
    kDNNNeulandPoint,
    kDNNVETOPoint,
    kDNNNEBULAPoint,
    kDNNNEBULAVETOPoint,
    kFI3aPoint,
    kFI3bPoint,
    kFI4Point,
    kFI4tPoint,
    kFI6Point,
    kFI7Point,
    kFI8Point,
    kFI5Point,
    kFI10Point,
    kFI11Point,
    kFI12Point,
    kFI13Point,
    kSFIPoint,
    kMUSICPoint,
    kHPGEPoint,
    kHPGEHit,
#ifdef SOFIA
    kSOFSCIPoint,
    kSOFATPoint,
    kSOFTRIMPoint,
    kSOFMWPC0Point,
    kSOFMWPC1Point,
    kSOFTWIMPoint,
    kSOFMWPC2Point,
    kSOFMWPC3Point,
    kSOFTofWallPoint
#endif
#ifdef GTPC
    /* note that the value of kGTPCPoint will depend on
     * whether SOFIA is defined. --pklenze
     */
    ,
    kGTPCPoint
#endif
};

enum SensorSide
{
    kTOP,
    kBOTTOM
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"ELILuMonPoint", payloadCode, "@",
"R3BActarPoint", payloadCode, "@",
"R3BAmsHitData", payloadCode, "@",
"R3BAmsMappedData", payloadCode, "@",
"R3BAmsStripCalData", payloadCode, "@",
"R3BBeamMonitorMappedData", payloadCode, "@",
"R3BBunchedFiberCalData", payloadCode, "@",
"R3BBunchedFiberHitData", payloadCode, "@",
"R3BBunchedFiberMappedData", payloadCode, "@",
"R3BCalifaCrystalCalData", payloadCode, "@",
"R3BCalifaHitData", payloadCode, "@",
"R3BCalifaMappedData", payloadCode, "@",
"R3BCalifaPoint", payloadCode, "@",
"R3BDch2pDigi", payloadCode, "@",
"R3BDchDigi", payloadCode, "@",
"R3BDchFullPoint", payloadCode, "@",
"R3BDchPoint", payloadCode, "@",
"R3BDouble", payloadCode, "@",
"R3BFi4CalItem", payloadCode, "@",
"R3BFi4HitItem", payloadCode, "@",
"R3BFi4Point", payloadCode, "@",
"R3BFibCalData", payloadCode, "@",
"R3BFibMappedData", payloadCode, "@",
"R3BFibPoint", payloadCode, "@",
"R3BFrsData", payloadCode, "@",
"R3BGfiDigi", payloadCode, "@",
"R3BGfiPoint", payloadCode, "@",
"R3BHPGeDetPoint", payloadCode, "@",
"R3BHit", payloadCode, "@",
"R3BLandDigi", payloadCode, "@",
"R3BLandFirstHits", payloadCode, "@",
"R3BLandHit", payloadCode, "@",
"R3BLandPoint", payloadCode, "@",
"R3BLosCalData", payloadCode, "@",
"R3BLosHitData", payloadCode, "@",
"R3BLosMappedData", payloadCode, "@",
"R3BMCTrack", payloadCode, "@",
"R3BMfiDigi", payloadCode, "@",
"R3BMfiPoint", payloadCode, "@",
"R3BMusicCalData", payloadCode, "@",
"R3BMusicHitData", payloadCode, "@",
"R3BMusicMappedData", payloadCode, "@",
"R3BMusicPoint", payloadCode, "@",
"R3BNeulandCalData", payloadCode, "@",
"R3BNeulandCluster", payloadCode, "@",
"R3BNeulandHit", payloadCode, "@",
"R3BNeulandMultiplicity", payloadCode, "@",
"R3BNeulandNeutron", payloadCode, "@",
"R3BNeulandPoint", payloadCode, "@",
"R3BNeulandTacquilaMappedData", payloadCode, "@",
"R3BNeutronTrack", payloadCode, "@",
"R3BPaddleCalData", payloadCode, "@",
"R3BPaddleCrystalHit", payloadCode, "@",
"R3BPaddleTamexMappedData", payloadCode, "@",
"R3BPdcCalData", payloadCode, "@",
"R3BPdcHitData", payloadCode, "@",
"R3BPdcMappedData", payloadCode, "@",
"R3BPspDigi", payloadCode, "@",
"R3BPspPoint", payloadCode, "@",
"R3BPspxCalData", payloadCode, "@",
"R3BPspxHitData", payloadCode, "@",
"R3BPspxMappedData", payloadCode, "@",
"R3BPspxPrecalData", payloadCode, "@",
"R3BPtofHit", payloadCode, "@",
"R3BRoluCalData", payloadCode, "@",
"R3BRoluHitData", payloadCode, "@",
"R3BRoluMappedData", payloadCode, "@",
"R3BSamplerMappedData", payloadCode, "@",
"R3BSci2CalData", payloadCode, "@",
"R3BSci2HitData", payloadCode, "@",
"R3BSci2MappedData", payloadCode, "@",
"R3BSci2TcalData", payloadCode, "@",
"R3BSci8CalData", payloadCode, "@",
"R3BSci8HitData", payloadCode, "@",
"R3BSci8MappedData", payloadCode, "@",
"R3BSfibCalData", payloadCode, "@",
"R3BSfibHitData", payloadCode, "@",
"R3BSfibMappedData", payloadCode, "@",
"R3BSitrackerHit", payloadCode, "@",
"R3BStack", payloadCode, "@",
"R3BStartrackCalData", payloadCode, "@",
"R3BStartrackHit", payloadCode, "@",
"R3BStartrackMappedData", payloadCode, "@",
"R3BStartrackPoint", payloadCode, "@",
"R3BStartrackerDigitHit", payloadCode, "@",
"R3BStrawtubesCalData", payloadCode, "@",
"R3BStrawtubesHitData", payloadCode, "@",
"R3BStrawtubesMappedData", payloadCode, "@",
"R3BTarget2pDigi", payloadCode, "@",
"R3BTargetDigi", payloadCode, "@",
"R3BTof2pDigi", payloadCode, "@",
"R3BTofDigi", payloadCode, "@",
"R3BTofPoint", payloadCode, "@",
"R3BTofdCalData", payloadCode, "@",
"R3BTofdDigi", payloadCode, "@",
"R3BTofdHitData", payloadCode, "@",
"R3BTofdMappedData", payloadCode, "@",
"R3BTofdPoint", payloadCode, "@",
"R3BTra2pDigi", payloadCode, "@",
"R3BTraDigi", payloadCode, "@",
"R3BTraFraDigi", payloadCode, "@",
"R3BTraHit", payloadCode, "@",
"R3BTraPoint", payloadCode, "@",
"R3BTrack", payloadCode, "@",
"R3BTrackerHit", payloadCode, "@",
"R3BVetoPoint", payloadCode, "@",
"R3BWRAmsData", payloadCode, "@",
"R3BWRCalifaData", payloadCode, "@",
"R3BWRMasterData", payloadCode, "@",
"R3BXBallCrystalHit", payloadCode, "@",
"R3BXBallCrystalHitSim", payloadCode, "@",
"R3BXBallPoint", payloadCode, "@",
"R3BmTofDigi", payloadCode, "@",
"R3BmTofPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BDataDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BDataDict() {
  TriggerDictionaryInitialization_G__R3BDataDict_Impl();
}
