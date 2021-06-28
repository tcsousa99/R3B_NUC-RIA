// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddIctndIdatadIG__EnsarHPGeDetDataDict

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
#include "EnsarHPGeDetHit.h"
#include "EnsarHPGeDetPoint.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_EnsarHPGeDetHit(void *p = 0);
   static void *newArray_EnsarHPGeDetHit(Long_t size, void *p);
   static void delete_EnsarHPGeDetHit(void *p);
   static void deleteArray_EnsarHPGeDetHit(void *p);
   static void destruct_EnsarHPGeDetHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EnsarHPGeDetHit*)
   {
      ::EnsarHPGeDetHit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EnsarHPGeDetHit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("EnsarHPGeDetHit", ::EnsarHPGeDetHit::Class_Version(), "", 24,
                  typeid(::EnsarHPGeDetHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EnsarHPGeDetHit::Dictionary, isa_proxy, 4,
                  sizeof(::EnsarHPGeDetHit) );
      instance.SetNew(&new_EnsarHPGeDetHit);
      instance.SetNewArray(&newArray_EnsarHPGeDetHit);
      instance.SetDelete(&delete_EnsarHPGeDetHit);
      instance.SetDeleteArray(&deleteArray_EnsarHPGeDetHit);
      instance.SetDestructor(&destruct_EnsarHPGeDetHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EnsarHPGeDetHit*)
   {
      return GenerateInitInstanceLocal((::EnsarHPGeDetHit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EnsarHPGeDetHit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EnsarHPGeDetPoint(void *p = 0);
   static void *newArray_EnsarHPGeDetPoint(Long_t size, void *p);
   static void delete_EnsarHPGeDetPoint(void *p);
   static void deleteArray_EnsarHPGeDetPoint(void *p);
   static void destruct_EnsarHPGeDetPoint(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EnsarHPGeDetPoint*)
   {
      ::EnsarHPGeDetPoint *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EnsarHPGeDetPoint >(0);
      static ::ROOT::TGenericClassInfo 
         instance("EnsarHPGeDetPoint", ::EnsarHPGeDetPoint::Class_Version(), "", 95,
                  typeid(::EnsarHPGeDetPoint), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EnsarHPGeDetPoint::Dictionary, isa_proxy, 4,
                  sizeof(::EnsarHPGeDetPoint) );
      instance.SetNew(&new_EnsarHPGeDetPoint);
      instance.SetNewArray(&newArray_EnsarHPGeDetPoint);
      instance.SetDelete(&delete_EnsarHPGeDetPoint);
      instance.SetDeleteArray(&deleteArray_EnsarHPGeDetPoint);
      instance.SetDestructor(&destruct_EnsarHPGeDetPoint);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EnsarHPGeDetPoint*)
   {
      return GenerateInitInstanceLocal((::EnsarHPGeDetPoint*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::EnsarHPGeDetPoint*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr EnsarHPGeDetHit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EnsarHPGeDetHit::Class_Name()
{
   return "EnsarHPGeDetHit";
}

//______________________________________________________________________________
const char *EnsarHPGeDetHit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetHit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EnsarHPGeDetHit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetHit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EnsarHPGeDetHit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetHit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EnsarHPGeDetHit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetHit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EnsarHPGeDetPoint::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *EnsarHPGeDetPoint::Class_Name()
{
   return "EnsarHPGeDetPoint";
}

//______________________________________________________________________________
const char *EnsarHPGeDetPoint::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetPoint*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int EnsarHPGeDetPoint::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetPoint*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EnsarHPGeDetPoint::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetPoint*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EnsarHPGeDetPoint::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EnsarHPGeDetPoint*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void EnsarHPGeDetHit::Streamer(TBuffer &R__b)
{
   // Stream an object of class EnsarHPGeDetHit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EnsarHPGeDetHit::Class(),this);
   } else {
      R__b.WriteClassBuffer(EnsarHPGeDetHit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EnsarHPGeDetHit(void *p) {
      return  p ? new(p) ::EnsarHPGeDetHit : new ::EnsarHPGeDetHit;
   }
   static void *newArray_EnsarHPGeDetHit(Long_t nElements, void *p) {
      return p ? new(p) ::EnsarHPGeDetHit[nElements] : new ::EnsarHPGeDetHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_EnsarHPGeDetHit(void *p) {
      delete ((::EnsarHPGeDetHit*)p);
   }
   static void deleteArray_EnsarHPGeDetHit(void *p) {
      delete [] ((::EnsarHPGeDetHit*)p);
   }
   static void destruct_EnsarHPGeDetHit(void *p) {
      typedef ::EnsarHPGeDetHit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EnsarHPGeDetHit

//______________________________________________________________________________
void EnsarHPGeDetPoint::Streamer(TBuffer &R__b)
{
   // Stream an object of class EnsarHPGeDetPoint.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EnsarHPGeDetPoint::Class(),this);
   } else {
      R__b.WriteClassBuffer(EnsarHPGeDetPoint::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EnsarHPGeDetPoint(void *p) {
      return  p ? new(p) ::EnsarHPGeDetPoint : new ::EnsarHPGeDetPoint;
   }
   static void *newArray_EnsarHPGeDetPoint(Long_t nElements, void *p) {
      return p ? new(p) ::EnsarHPGeDetPoint[nElements] : new ::EnsarHPGeDetPoint[nElements];
   }
   // Wrapper around operator delete
   static void delete_EnsarHPGeDetPoint(void *p) {
      delete ((::EnsarHPGeDetPoint*)p);
   }
   static void deleteArray_EnsarHPGeDetPoint(void *p) {
      delete [] ((::EnsarHPGeDetPoint*)p);
   }
   static void destruct_EnsarHPGeDetPoint(void *p) {
      typedef ::EnsarHPGeDetPoint current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::EnsarHPGeDetPoint

namespace {
  void TriggerDictionaryInitialization_G__EnsarHPGeDetDataDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/opt/fairsoft/include/root6",
"/opt/fairroot/include",
"/work/R3BRoot/ctn/data",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/ctn/data/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__EnsarHPGeDetDataDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate(R"ATTRDUMP(se ha de canviar la version cada vez que se hace una modificacion grande)ATTRDUMP"))) EnsarHPGeDetHit;
class __attribute__((annotate(R"ATTRDUMP(se ha de canviar la version cada vez que se hace una modificacion grande)ATTRDUMP"))) EnsarHPGeDetPoint;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__EnsarHPGeDetDataDict dictionary payload"

#ifndef G__VECTOR_HAS_CLASS_ITERATOR
  #define G__VECTOR_HAS_CLASS_ITERATOR 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// -------------------------------------------------------------------------
// -----                  EnsarHPGeDetHit header file                  -----
// -----                Created 04/09/19  by P.Cabanelas               -----
// -------------------------------------------------------------------------


/**  EnsarHPGeDetHit.h
 **/


#ifndef EnsarHPGeDetHit_H
#define EnsarHPGeDetHit_H


#include "TObject.h"
#include "FairMultiLinkedData.h"


class EnsarHPGeDetHit : public FairMultiLinkedData
{

 public:

  /** Default constructor **/
  EnsarHPGeDetHit();


  /** Constructor with arguments
   *@param fEnergy         Energy deposit [GeV]
   *@param fTime           Time since event start [ns]
   **/
  EnsarHPGeDetHit(Double_t energy, Double_t time);


  /** Copy constructor **/
  EnsarHPGeDetHit(const EnsarHPGeDetHit&);
  
  EnsarHPGeDetHit& operator=(const EnsarHPGeDetHit&){return *this;}


  /** Destructor **/
  virtual ~EnsarHPGeDetHit();


  /** Accessors **/
  Double_t GetEnergy()        const { return fEnergy; }
  Double_t GetTime()          const { return fTime; }

  /** Modifiers **/
  void SetEnergy(Double32_t energy) { fEnergy = energy; }
  void SetTime(Double32_t time)     { fTime = time; }
  void AddEnergy(Double32_t energy) { fEnergy += energy; }

  /** Output to screen **/
  virtual void Print(const Option_t* opt) const;



 protected:
  Double32_t fEnergy;    //total energy in the crystal
  Double32_t fTime;      //time of the interaction
 
  ClassDef(EnsarHPGeDetHit,2)  //se ha de canviar la version cada vez que se hace una modificacion grande

};


#endif
// -------------------------------------------------------------------------
// -----                  EnsarHPGeDetPoint header file                  -----
// -----                Created 11/09/12  by P.Cabanelas               -----
// -------------------------------------------------------------------------


/**  EnsarHPGeDetPoint.h
 **/


#ifndef EnsarHPGeDetPoint_H
#define EnsarHPGeDetPoint_H


#include "TObject.h"
#include "TVector3.h"

#include "FairMCPoint.h"


class EnsarHPGeDetPoint : public FairMCPoint 
{

 public:
  /** Default constructor **/
  EnsarHPGeDetPoint();


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
  EnsarHPGeDetPoint(Int_t trackID, Int_t detID, Int_t volid,
              TVector3 posIn, TVector3 posOut, TVector3 momIn, TVector3 momOut,
	      Double_t tof, Double_t length, Double_t eLoss);


  /** Copy constructor **/
  EnsarHPGeDetPoint(const EnsarHPGeDetPoint&);
  
  EnsarHPGeDetPoint& operator=(const EnsarHPGeDetPoint&) { return *this; }


  /** Destructor **/
  virtual ~EnsarHPGeDetPoint();


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

  ClassDef(EnsarHPGeDetPoint,2)  //se ha de canviar la version cada vez que se hace una modificacion grande
};



inline void EnsarHPGeDetPoint::SetPositionOut(TVector3 pos) {
  fX_out = pos.X();
  fY_out = pos.Y();
  fZ_out = pos.Z();
}


inline void EnsarHPGeDetPoint::SetMomentumOut(TVector3 mom) {
  fPx_out = mom.Px();
  fPy_out = mom.Py();
  fPz_out = mom.Pz();
}



#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"EnsarHPGeDetHit", payloadCode, "@",
"EnsarHPGeDetPoint", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__EnsarHPGeDetDataDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__EnsarHPGeDetDataDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__EnsarHPGeDetDataDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__EnsarHPGeDetDataDict() {
  TriggerDictionaryInitialization_G__EnsarHPGeDetDataDict_Impl();
}
