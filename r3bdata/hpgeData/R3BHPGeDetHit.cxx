// -------------------------------------------------------------------------
// -----                      R3BHPGeDetHit source file                  -----
// -------------------------------------------------------------------------

#include "R3BHPGeDetHit.h"

#include <iostream>

using std::cout;
using std::endl;
using std::flush;


// -----   Default constructor   -------------------------------------------
R3BHPGeDetHit::R3BHPGeDetHit() 
  : FairMultiLinkedData(),
  fEnergy(-1.), fTime(-1.) 
{
}
// -------------------------------------------------------------------------



// -----   Standard constructor   ------------------------------------------
R3BHPGeDetHit::R3BHPGeDetHit(Double_t energy, Double_t time) 
  : FairMultiLinkedData(),
    fEnergy(energy), fTime(time)
{
}
// -------------------------------------------------------------------------

R3BHPGeDetHit::R3BHPGeDetHit(const R3BHPGeDetHit& right)
  : FairMultiLinkedData(right),
    fEnergy(right.fEnergy), fTime(right.fTime)
{
}
//--------------------------------------------------------------------------


// -----   Destructor   ----------------------------------------------------
R3BHPGeDetHit::~R3BHPGeDetHit() 
{
}
// -------------------------------------------------------------------------




// -----   Public method Print   -------------------------------------------
void R3BHPGeDetHit::Print(const Option_t* opt) const {
  cout << "-I- : R3BHPGeDetHit a Hit in the HPGe detector with:" << endl;
  cout << "    Energy = " << fEnergy << " GeV " << endl;
  cout << "    Time =" << fTime << " ns  " << endl;
}
// -------------------------------------------------------------------------


ClassImp(R3BHPGeDetHit)

