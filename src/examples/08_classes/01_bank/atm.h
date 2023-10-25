//atm.h
#include "bank_account.h"
#include<iostream>

class ATM
{
    public:
        ATM(BankAccount* a) : account(a){}
        void display_balamce();
        void make_deposit();
        void make_withdrawl();
    private:
        BankAccount* account;


};

//Free function
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);