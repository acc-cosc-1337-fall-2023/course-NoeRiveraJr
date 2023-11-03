#include "bank_account.h"
#include<time.h>
#include "atm.h"
#include "customer.h"
#include<memory>
#include<vector>

using std::unique_ptr; using std::make_unique;
using std::cout;
using std::vector;
int main()
{
	srand(time(NULL));

	vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Bjarne Stroustrup"));

	ATM atm(customers);
	run_menu(atm);

	return 0;
}