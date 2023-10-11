//atm.cpp
#include "atm.h"

using std::cout;

void ATM::display_balamce()
{
    cout<<"ATM balance: "<<account.get_balance()<<"\n";
}