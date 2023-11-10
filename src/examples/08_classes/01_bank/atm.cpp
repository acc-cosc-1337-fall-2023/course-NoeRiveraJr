//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;
using std::vector;

void ATM::display_balamce()
{
    cout<<"ATM balance: "<<account->get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account->deposit(amount);
}

void ATM::make_withdrawl()
{
    auto amount = 0;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    account->withdraw(amount);
}


void display_menu()
{
    cout<<"\n";
    cout<<"1-Deposit\n";
    cout<<"2-Withdraw\n";
    cout<<"3-Display Balance\n";
    cout<<"4-Exit\n";
}

void run_menu(ATM& atm)
{
    auto option = 0;
    auto input = 'C';
    do
    {
        
        cout<<"Enter to scan card: ";
        cin>>input;
        //vector<Customer> customers = get_customers();
        //auto customer_index = scan_card(customers.size());
        //Customer& customer = customers[customer_index];

        auto account_index = 0;
        cout<<"Enter 1 for Checking 2 for Savings: ";
        cin>>account_index;
        //std::unique_ptr<BankAccount>& account = customer.get_account(account_index);

        //ATM atm(account.get());
        do
        {
        
            display_menu();

            cout<<"Enter menu option: ";
            cin>>option;
            handle_menu_option(option, atm);

        }while(option != 4);
    } while (true);
}

void handle_menu_option(int option, ATM& atm)
{
    switch(option)
    {
        case 1:
            atm.make_deposit();
            break;
        case 2:
            atm.make_withdrawl();
            break;
        case 3:
            atm.display_balamce();
            break;
        case 4:
            cout<<"Exiting....\n";
            break;      
        default:
            cout<<"Invalid option.\n";
            break;          
    }
}

std::vector<Customer> get_customers()
{
    vector<Customer> customers;
	customers.push_back(Customer(1, "John Doe"));
	customers.push_back(Customer(2, "Mary Doe"));
	customers.push_back(Customer(3, "John Hancock"));
	customers.push_back(Customer(4, "Bjarne Stroustrup"));

    return customers;
}

int scan_card(int max_value)
{
   return rand() % max_value;

}