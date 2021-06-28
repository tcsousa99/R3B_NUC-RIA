// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME dIworkdIR3BRootdIbuilddItcaldIG__R3BTCalDict

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
#include "R3BTCalModulePar.h"
#include "R3BTCalPar.h"
#include "R3BTCalContFact.h"
#include "R3BTCalEngine.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_R3BTCalModulePar(void *p = 0);
   static void *newArray_R3BTCalModulePar(Long_t size, void *p);
   static void delete_R3BTCalModulePar(void *p);
   static void deleteArray_R3BTCalModulePar(void *p);
   static void destruct_R3BTCalModulePar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTCalModulePar*)
   {
      ::R3BTCalModulePar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTCalModulePar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTCalModulePar", ::R3BTCalModulePar::Class_Version(), "", 37,
                  typeid(::R3BTCalModulePar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTCalModulePar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTCalModulePar) );
      instance.SetNew(&new_R3BTCalModulePar);
      instance.SetNewArray(&newArray_R3BTCalModulePar);
      instance.SetDelete(&delete_R3BTCalModulePar);
      instance.SetDeleteArray(&deleteArray_R3BTCalModulePar);
      instance.SetDestructor(&destruct_R3BTCalModulePar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTCalModulePar*)
   {
      return GenerateInitInstanceLocal((::R3BTCalModulePar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTCalModulePar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTCalPar(void *p = 0);
   static void *newArray_R3BTCalPar(Long_t size, void *p);
   static void delete_R3BTCalPar(void *p);
   static void deleteArray_R3BTCalPar(void *p);
   static void destruct_R3BTCalPar(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTCalPar*)
   {
      ::R3BTCalPar *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTCalPar >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTCalPar", ::R3BTCalPar::Class_Version(), "", 184,
                  typeid(::R3BTCalPar), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTCalPar::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTCalPar) );
      instance.SetNew(&new_R3BTCalPar);
      instance.SetNewArray(&newArray_R3BTCalPar);
      instance.SetDelete(&delete_R3BTCalPar);
      instance.SetDeleteArray(&deleteArray_R3BTCalPar);
      instance.SetDestructor(&destruct_R3BTCalPar);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTCalPar*)
   {
      return GenerateInitInstanceLocal((::R3BTCalPar*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTCalPar*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_R3BTCalContFact(void *p = 0);
   static void *newArray_R3BTCalContFact(Long_t size, void *p);
   static void delete_R3BTCalContFact(void *p);
   static void deleteArray_R3BTCalContFact(void *p);
   static void destruct_R3BTCalContFact(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTCalContFact*)
   {
      ::R3BTCalContFact *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTCalContFact >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTCalContFact", ::R3BTCalContFact::Class_Version(), "", 335,
                  typeid(::R3BTCalContFact), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTCalContFact::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTCalContFact) );
      instance.SetNew(&new_R3BTCalContFact);
      instance.SetNewArray(&newArray_R3BTCalContFact);
      instance.SetDelete(&delete_R3BTCalContFact);
      instance.SetDeleteArray(&deleteArray_R3BTCalContFact);
      instance.SetDestructor(&destruct_R3BTCalContFact);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTCalContFact*)
   {
      return GenerateInitInstanceLocal((::R3BTCalContFact*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTCalContFact*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_R3BTCalEngine(void *p);
   static void deleteArray_R3BTCalEngine(void *p);
   static void destruct_R3BTCalEngine(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::R3BTCalEngine*)
   {
      ::R3BTCalEngine *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::R3BTCalEngine >(0);
      static ::ROOT::TGenericClassInfo 
         instance("R3BTCalEngine", ::R3BTCalEngine::Class_Version(), "", 412,
                  typeid(::R3BTCalEngine), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::R3BTCalEngine::Dictionary, isa_proxy, 4,
                  sizeof(::R3BTCalEngine) );
      instance.SetDelete(&delete_R3BTCalEngine);
      instance.SetDeleteArray(&deleteArray_R3BTCalEngine);
      instance.SetDestructor(&destruct_R3BTCalEngine);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::R3BTCalEngine*)
   {
      return GenerateInitInstanceLocal((::R3BTCalEngine*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::R3BTCalEngine*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr R3BTCalModulePar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTCalModulePar::Class_Name()
{
   return "R3BTCalModulePar";
}

//______________________________________________________________________________
const char *R3BTCalModulePar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalModulePar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTCalModulePar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalModulePar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTCalModulePar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalModulePar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTCalModulePar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalModulePar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTCalPar::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTCalPar::Class_Name()
{
   return "R3BTCalPar";
}

//______________________________________________________________________________
const char *R3BTCalPar::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalPar*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTCalPar::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalPar*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTCalPar::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalPar*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTCalPar::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalPar*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTCalContFact::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTCalContFact::Class_Name()
{
   return "R3BTCalContFact";
}

//______________________________________________________________________________
const char *R3BTCalContFact::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalContFact*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTCalContFact::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalContFact*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTCalContFact::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalContFact*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTCalContFact::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalContFact*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr R3BTCalEngine::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *R3BTCalEngine::Class_Name()
{
   return "R3BTCalEngine";
}

//______________________________________________________________________________
const char *R3BTCalEngine::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalEngine*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int R3BTCalEngine::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalEngine*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *R3BTCalEngine::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalEngine*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *R3BTCalEngine::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::R3BTCalEngine*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void R3BTCalModulePar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTCalModulePar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTCalModulePar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTCalModulePar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTCalModulePar(void *p) {
      return  p ? new(p) ::R3BTCalModulePar : new ::R3BTCalModulePar;
   }
   static void *newArray_R3BTCalModulePar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTCalModulePar[nElements] : new ::R3BTCalModulePar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTCalModulePar(void *p) {
      delete ((::R3BTCalModulePar*)p);
   }
   static void deleteArray_R3BTCalModulePar(void *p) {
      delete [] ((::R3BTCalModulePar*)p);
   }
   static void destruct_R3BTCalModulePar(void *p) {
      typedef ::R3BTCalModulePar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTCalModulePar

//______________________________________________________________________________
void R3BTCalPar::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTCalPar.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTCalPar::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTCalPar::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTCalPar(void *p) {
      return  p ? new(p) ::R3BTCalPar : new ::R3BTCalPar;
   }
   static void *newArray_R3BTCalPar(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTCalPar[nElements] : new ::R3BTCalPar[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTCalPar(void *p) {
      delete ((::R3BTCalPar*)p);
   }
   static void deleteArray_R3BTCalPar(void *p) {
      delete [] ((::R3BTCalPar*)p);
   }
   static void destruct_R3BTCalPar(void *p) {
      typedef ::R3BTCalPar current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTCalPar

//______________________________________________________________________________
void R3BTCalContFact::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTCalContFact.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTCalContFact::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTCalContFact::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_R3BTCalContFact(void *p) {
      return  p ? new(p) ::R3BTCalContFact : new ::R3BTCalContFact;
   }
   static void *newArray_R3BTCalContFact(Long_t nElements, void *p) {
      return p ? new(p) ::R3BTCalContFact[nElements] : new ::R3BTCalContFact[nElements];
   }
   // Wrapper around operator delete
   static void delete_R3BTCalContFact(void *p) {
      delete ((::R3BTCalContFact*)p);
   }
   static void deleteArray_R3BTCalContFact(void *p) {
      delete [] ((::R3BTCalContFact*)p);
   }
   static void destruct_R3BTCalContFact(void *p) {
      typedef ::R3BTCalContFact current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTCalContFact

//______________________________________________________________________________
void R3BTCalEngine::Streamer(TBuffer &R__b)
{
   // Stream an object of class R3BTCalEngine.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(R3BTCalEngine::Class(),this);
   } else {
      R__b.WriteClassBuffer(R3BTCalEngine::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_R3BTCalEngine(void *p) {
      delete ((::R3BTCalEngine*)p);
   }
   static void deleteArray_R3BTCalEngine(void *p) {
      delete [] ((::R3BTCalEngine*)p);
   }
   static void destruct_R3BTCalEngine(void *p) {
      typedef ::R3BTCalEngine current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::R3BTCalEngine

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
  void TriggerDictionaryInitialization_G__R3BTCalDict_Impl() {
    static const char* headers[] = {
0    };
    static const char* includePaths[] = {
"/work/R3BRoot/tcal",
"/opt/fairsoft/include/root6",
"/opt/fairsoft/include",
"/opt/fairroot/include",
"/opt/fairsoft/include/root6",
"/work/R3BRoot/build/tcal/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "G__R3BTCalDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class R3BTCalModulePar;
class R3BTCalPar;
class R3BTCalContFact;
class R3BTCalEngine;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "G__R3BTCalDict dictionary payload"

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

#ifndef R3BTCALMODULEPAR_H
#define R3BTCALMODULEPAR_H

#include "FairParGenericSet.h"

#define NCHMAX 5000

class FairParamList;

/**
 * Parameter container for time calibration of a single module. This class is used for
 * storage of time calibration parameters for a detector module. It contains
 * parametrisation of a table, used for TDC -> time [ns] conversion. Currently
 * supported systems: TACQUILA and VFTX.
 * @author D. Kresan
 * @since September 2, 2015
 */

class R3BTCalModulePar : public FairParGenericSet
{
  public:
    /**
     * Standard constructor.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BTCalModulePar(const char* name = "TCalModulePar",
                     const char* title = "TCAL calibration of a module",
                     const char* context = "TestDefaultContext",
                     Bool_t own = kTRUE);

    /**
     * Destructor.
     * Frees the memory allocated by the object.
     */
    virtual ~R3BTCalModulePar(void);

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

    /**
     * Member function for converting TDC value into time [ns]
     * using calibration parameters for clock TDC electronics.
     * @param tdc a TDC value.
     * @return time value in nanoseconds.
     */
    Double_t GetTimeClockTDC(Int_t tdc);

    /**
     * Member function for converting TDC value into time [ns]
     * using calibration parameters for TACQUILA electronics.
     * @param tdc a TDC value.
     * @return time value in nanoseconds.
     */
    Double_t GetTimeTacquila(Int_t tdc);

    /**
     * Member function for converting TDC value into time [ns]
     * using calibration parameters for VFTX electronics.
     * @param tdc a TDC value.
     * @return time value in nanoseconds.
     */
    Double_t GetTimeVFTX(Int_t tdc);

    /** Accessor functions **/
    Int_t GetPlane() const { return fPlane; }
    Int_t GetPaddle() const { return fPaddle; }
    Int_t GetSide() const { return fSide; }
    Int_t GetNofChannels() const { return fNofChannels; }
    Double_t GetSlopeAt(Int_t i) const { return fSlope[i]; }
    Double_t GetOffsetAt(Int_t i) const { return fOffset[i]; }
    Int_t GetBinLowAt(Int_t i) const { return fBinLow[i]; }
    Int_t GetBinUpAt(Int_t i) const { return fBinUp[i]; }
    void SetPlane(Int_t i) { fPlane = i; }
    void SetPaddle(Int_t i) { fPaddle = i; }
    void SetSide(Int_t i) { fSide = i; }
    void IncrementNofChannels() { fNofChannels += 1; }
    void SetBinLowAt(Int_t ch, Int_t i) { fBinLow[i] = ch; }
    void SetBinUpAt(Int_t ch, Int_t i) { fBinUp[i] = ch; }
    void SetSlopeAt(Double_t slope, Int_t i) { fSlope[i] = slope; }
    void SetOffsetAt(Double_t offset, Int_t i) { fOffset[i] = offset; }

  private:
    Int_t fPlane;             /**< Index of a plane. */
    Int_t fPaddle;            /**< Index of a paddle. */
    Int_t fSide;              /**< Side of a module: for NeuLAND - L/R PMT. */
    Int_t fNofChannels;       /**< Number of calibration parameters. */
    Int_t fBinLow[NCHMAX];    /**< Lower TDC range of a linear segment. */
    Int_t fBinUp[NCHMAX];     /**< Upper TDC range of a linear segment. */
    Double_t fSlope[NCHMAX];  /**< Slope of liear interpolation. */
    Double_t fOffset[NCHMAX]; /**< Offset of linear interpolation [ns]. */

    ClassDef(R3BTCalModulePar, 1);
};

#endif /* !R3BTCALMODULEPAR_H*/
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

#ifndef R3BTCALPAR_H
#define R3BTCALPAR_H

#define NMODULEMAX 6000

#define N_PLANE_MAX 100
#define N_PADDLE_MAX 2048
#define N_SIDE_MAX 10

#include "FairParGenericSet.h" // for FairParGenericSet
#include "R3BTCalModulePar.h"
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
class R3BTCalPar : public FairParGenericSet
{

  public:
    /**
     * Standard constructor. Creates instance of this class.
     * @param name a name of container.
     * @param title a title of container.
     * @param context context/purpose for parameters and conditions.
     * @param own class ownership, if flag is kTRUE FairDB has the par.
     */
    R3BTCalPar(const char* name = "TCalPar",
               const char* title = "TCAL calibration",
               const char* context = "TestDefaultContext",
               Bool_t own = kTRUE);
    /**
     * Destructor. Cleares the memory used by the object.
     */
    virtual ~R3BTCalPar(void);

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
    void PrintModuleParams(Int_t plane, Int_t paddle, Int_t side); // *MENU*

    /**
     * Method to draw value of parameters for a specific module on a current Canvas.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * Accessible from Context menu in TBrowser.
     */
    void DrawModuleParams(Int_t plane, Int_t paddle, Int_t side); // *MENU*

    /**
     * Method to manually set the time calibration in standalone ROOT session.
     * @param plane an index of detector plane
     * @param paddle a paddle index within the plane
     * @param side a side of a paddle
     * @param tac_channel a hardware time channel number
     * @param value time value in [ns] for the specified channel
     * @return kTRUE if electronics is VFTX and setting was successful
     */
    Bool_t SetModuleParValue(Int_t plane, Int_t paddle, Int_t side, Int_t tac_channel, Double_t value);

    /**
     * Method to save the edited parameters. New version will be created and
     * corresponding entry in FairRtdbRun will be added.
     * @param runNumber a run id of the current data set, for example "267"
     */
    void SavePar(TString runNumber);

    /**
     * Method to add parameter container for a module.
     * Extends the array.
     * @param tch a parameter container for a detector module.
     */
    void AddModulePar(R3BTCalModulePar* tch);

    /**
     * Method to retrieve the arrray with module containers.
     * @return an array with parameter containers of type R3BTCalModulePar.
     */
    TObjArray* GetListOfModulePar() { return fTCalParams; }

    /**
     * Method to get number of modules storred in array.
     * @return size of array.
     */
    Int_t GetNumModulePar() { return fTCalParams->GetEntries(); }

    /**
     * Method to get single parameter container for a specific module.
     * @param idx an index of a module.
     * @return parameter container of this module.
     */
    R3BTCalModulePar* GetModuleParAt(Int_t plane, Int_t paddle, Int_t side);

  private:
    const R3BTCalPar& operator=(const R3BTCalPar&); /**< an assignment operator */
    R3BTCalPar(const R3BTCalPar&);                  /**< a copy constructor */

    TObjArray* fTCalParams; /**< an array with parameter containers of all modules */

    Bool_t fMapInit;             /**< a boolean flag for indication whether the indexing map is initialized */
    map<Int_t, Int_t> fIndexMap; /**< a map between index of a container in array and plane,paddle,side */

    ClassDef(R3BTCalPar, 1);
};

#endif /* !R3BTCALPAR_H*/
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

#ifndef R3BTCALCONTFACT_H
#define R3BTCALCONTFACT_H

#include "FairContFact.h"

#include "Rtypes.h"

class FairParSet;

/**
 * Factory class for all TCAL parameter containers.
 * Currently supported:
 * NeuLAND - LandTCalPar
 * LOS - LosTCalPar
 * @author D. Kresan
 * @since September 3, 2015
 */
class R3BTCalContFact : public FairContFact
{
  public:
    /**
     * Default constructor.
     */
    R3BTCalContFact();

    /**
     * Destructor.
     */
    ~R3BTCalContFact() {}

    /**
     * Method to create a parameter container.
     * Called by FairRuntimeDB singleton class.
     * @param c a parameter container.
     * @return an instance of created parameter set.
     */
    FairParSet* createContainer(FairContainer* c);

  private:
    /**
     * Method to add a standard container
     */
    void addContainer(TString, TString);
    /**
     * Method to specify a list of parameter containers managed by this factory.
     * Support for additional detrectors has to be implemented in this function.
     */
    void setAllContainers();

    ClassDef(R3BTCalContFact, 1);
};

#endif /* !R3BTCALCONTFACT_H */
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

#ifndef _R3BTCAL_ENGINE_
#define _R3BTCAL_ENGINE_

#define MAX_TACQUILA_SAM 7     // 0 .. 7
#define MAX_TACQUILA_GTB 1     // 0 and 1
#define MAX_TACQUILA_MODULE 20 // 0 .. 20
#define TACQUILA_NUM_GEOM ((MAX_TACQUILA_SAM + 1) * (MAX_TACQUILA_GTB + 1) * (MAX_TACQUILA_MODULE + 1))

#define TACQUILA_CLOCK_MHZ 40.002903
#define VFTX_CLOCK_MHZ 200
#define CTDC_16_CLOCK_MHZ 150

#include "R3BTCalPar.h"
#include "TObject.h"

class TH1F;

/**
 * Class with implementation of TCAL time calibration.
 * Currently supported electronics: Clock TDC, Tacquila, and VFTX.
 * Clock frequency is set as a constant in MHz and the
 * clock cycle in ns is calculated from it.
 * Recommended value of minimum statistics per module is
 * 10000 entries.
 * @author D. Kresan
 * @since September 4, 2015
 */
class R3BTCalEngine : public TObject
{
  public:
    // CTDC variants.
    enum CTDCVariant {
	  // To make sure the user doesn't just put a 0...
	  CTDC_INVALID = 0,
	  // 8..12 bins for fine time.
	  // Fine time forwards from last cycle.
	  // 250 Mhz.
	  CTDC_8_12_FWD_250,
	  // 16 bins for fine time.
	  // Fine time backwards from last cycle.
	  // 150 Mhz.
	  CTDC_16_BWD_150
	};

    /**
     * Standard constructor.
     * Creates instance of TCAL engine. To be used in
     * analysis task for specific detector.
     * @param param a pointer to parameter container.
     * @param nModules a number of detector modules.
     * @param minStats a minimum number of entries per module.
     */
    R3BTCalEngine(R3BTCalPar* param, Int_t minStats = 10000);

    /**
     * Destructor.
     * Releases memory used by the object.
     */
    virtual ~R3BTCalEngine();

    /**
     * A method to fill TDC distribution for a specific module.
     * To be called from event loop of an analysis task.
     * @param iModule an index of a module.
     * @param tdc a raw TDC value.
     */
    void Fill(Int_t plane, Int_t paddle, Int_t side, Int_t tdc);

    /**
     * A method to calculate calibration parameters for clock TDC
     * electronics. Parameters will be automatically stored.
     * To be called from FinishTask() method of an analysis task.
     */
    void CalculateParamClockTDC(enum CTDCVariant);

    /**
     * A method to calculate calibration parameters for Tacquila
     * electronics. Parameters will be automatically stored.
     * To be called from FinishTask() method of an analysis task.
     */
    void CalculateParamTacquila();

    /**
     * A method to calculate calibration parameters for VFTX
     * electronics. Parameters will be automatically stored.
     * To be called from FinishTask() method of an analysis task.
     */
    void CalculateParamVFTX();

  protected:
    /**
     * A method to determine the range of a TDC distribution.
     * @param h1 a pointer to the histogram with data.
     * @param ic output: center of distribution.
     * @param iMin output: lower bound.
     * @param iMax output: upper bound.
     */
    void FindRange(TH1F* h1, Int_t& ic, Int_t& iMin, Int_t& iMax);

    /**
     * A method to interpolate a section of the raw TDC distribution
     * starting from the middle towards the lower bound.
     * @param h1 a pointer to the histogram with data.
     * @param iMin a lower bound.
     * @param iMax an upper bound.
     * @param il an initial value and output of a lower bound of the section.
     * @param ih an initial value and output of an upper bound of the section.
     * @param slope output: a slope of linear interpolation.
     * @param offset output: an offset of linear interpolation (value at il).
     */
    void LinearUp(TH1F* h1, Int_t iMin, Int_t iMax, Int_t& il, Int_t& ih, Double_t& slope, Double_t& offset);

    /**
     * A method to interpolate a section of the raw TDC distribution
     * starting from the middle towards the upper bound.
     * @param h1 a pointer to the histogram with data.
     * @param iMin a lower bound.
     * @param iMax an upper bound.
     * @param il an initial value and output of a lower bound of the section.
     * @param ih an initial value and output of an upper bound of the section.
     * @param slope output: a slope of linear interpolation.
     * @param offset output: an offset of linear interpolation (value at il).
     */
    void LinearDown(TH1F* h1, Int_t iMin, Int_t iMax, Int_t& il, Int_t& ih, Double_t& slope, Double_t& offset);

  private:
    Int_t fMinStats; /**< Minimum number of entries in raw TDC distribution per module */
    TH1F* fhData[N_PLANE_MAX][N_PADDLE_MAX][N_SIDE_MAX]; /**< An array of histograms to store raw TDC distributions. */
    TH1F* fhTime[N_PLANE_MAX][N_PADDLE_MAX]
                [N_SIDE_MAX]; /**< An array of histograms to store unparametrized bin-by-bin calibration. */
    R3BTCalPar* fCal_Par;     /**< A pointer to the parameter container. */
    Double_t fClockFreq;      /**< A clock cycle in [ns]. */

  public:
    ClassDef(R3BTCalEngine, 1)
};

#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[]={
"R3BTCalContFact", payloadCode, "@",
"R3BTCalEngine", payloadCode, "@",
"R3BTCalModulePar", payloadCode, "@",
"R3BTCalPar", payloadCode, "@",
nullptr};

    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("G__R3BTCalDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_G__R3BTCalDict_Impl, {}, classesHeaders, /*has no C++ module*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_G__R3BTCalDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_G__R3BTCalDict() {
  TriggerDictionaryInitialization_G__R3BTCalDict_Impl();
}
