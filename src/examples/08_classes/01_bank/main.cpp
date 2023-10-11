#include "bank_account.h"
#include<time.h>
#include "atm.h"
using std::cout;

int main()
{
	srand(time(NULL));
	BankAccount account; //create a variable/an object ---customer 1
	
	ATM atm(account);
	atm.display_balamce();
	cout<<"Balance: "<<account.get_balance()<<"\n";

	return 0;
}