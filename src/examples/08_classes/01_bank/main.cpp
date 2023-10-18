#include "bank_account.h"
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
using std::cout;

int main()
{
	srand(time(NULL));

	CheckingAccount account(500);

	cout<<account.get_balance();
	

	 // BankAccount account; //create a variable/an object ---customer 1
	
	ATM atm(account);
	run_menu(atm);

	cout<<"Balance: "<<account.get_balance()<<"\n"; 
	

	return 0;
}