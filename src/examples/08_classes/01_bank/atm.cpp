//atm.cpp
#include "atm.h"

using std::cout;
using std::cin;

void ATM::display_balamce()
{
    cout<<"ATM balance: "<<account.get_balance()<<"\n";
}

void ATM::make_deposit()
{
    auto amount = 0;
    cout<<"Enter amount to deposit: ";
    cin>>amount;

    account.deposit(amount);
}

void ATM::make_withdrawl()
{
    auto amount = 0;
    cout<<"Enter amount to withdraw: ";
    cin>>amount;
    account.withdraw(amount);
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

    do
    {
        display_menu();

        cout<<"Enter menu option: ";
        cin>>option;
        handle_menu_option(option, atm);

    }while(option != 4);
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