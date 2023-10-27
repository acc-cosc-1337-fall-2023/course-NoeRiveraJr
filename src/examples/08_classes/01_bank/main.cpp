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
	
	CheckingAccount checking_account;
	account = &checking_account;
	cout<<account->get_balance()<<"\n";
	
	SavingsAccount savings_account;
	account = &savings_account;
	cout<<account->get_balance()<<"\n";

	std::vector<BankAccount*> accounts;
	accounts.push_back(&checking_account);
	accounts.push_back(&savings_account);

	

	 //BankAccount account; //create a variable/an object ---customer 1
	
	ATM atm(accounts);
	run_menu(atm);

	cout<<"Balance: "<<account->get_balance()<<"\n"; 
	

	return 0;
}