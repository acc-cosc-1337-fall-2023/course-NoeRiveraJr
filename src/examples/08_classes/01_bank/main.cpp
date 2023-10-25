#include "bank_account.h"
#include<time.h>
#include "atm.h"
#include "checking_account.h"
#include "savings_account.h"
using std::cout;

int main()
{
	srand(time(NULL));

	BankAccount* account;
	
	/*CheckingAccount checking_account(500);
	account = &checking_account;
	cout<<account->get_balance()<<"\n"; */
	
	SavingsAccount savings_account(500);
	account = &savings_account;

	cout<<account->get_balance()<<"\n"; 

	 //BankAccount account; //create a variable/an object ---customer 1
	
	ATM atm(account);
	run_menu(atm);

	cout<<"Balance: "<<account->get_balance()<<"\n"; 
	

	return 0;
}