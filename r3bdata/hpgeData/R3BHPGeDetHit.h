// -------------------------------------------------------------------------
// -----                  R3BHPGeDetHit header file                  -----
// -----                Created 04/09/19  by P.Cabanelas               -----
// -------------------------------------------------------------------------


/**  R3BHPGeDetHit.h
 **/


#ifndef R3BHPGeDetHit_H
#define R3BHPGeDetHit_H


#include "TObject.h"
#include "FairMultiLinkedData.h"


class R3BHPGeDetHit : public FairMultiLinkedData
{

 public:

  /** Default constructor **/
  R3BHPGeDetHit();


  /** Constructor with arguments
   *@param fEnergy         Energy deposit [GeV]
   *@param fTime           Time since event start [ns]
   **/
  R3BHPGeDetHit(Double_t energy, Double_t time);


  /** Copy constructor **/
  R3BHPGeDetHit(const R3BHPGeDetHit&);
  
  R3BHPGeDetHit& operator=(const R3BHPGeDetHit&){return *this;}


  /** Destructor **/
  virtual ~R3BHPGeDetHit();


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
 
  ClassDef(R3BHPGeDetHit,2)  //se ha de canviar la version cada vez que se hace una modificacion grande

};


#endif
