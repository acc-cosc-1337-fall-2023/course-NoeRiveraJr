#include "bank_account.h"

using std::cout;

int main()
{
	say_hello();
	BankAccount account; //create a variable/an object ---customer 1

	cout<<"Balance: "<<account.get_balance()<<"\n";

	BankAccount account2(1000); //customer2

	cout<<"Balance: "<<account2.get_balance()<<"\n";

	return 0;
}