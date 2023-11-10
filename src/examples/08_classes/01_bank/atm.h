//atm.h
#include "bank_account.h"
#include "customer.h"
#include<iostream>
#include<vector>
#include<stdlib.h>

class ATM
{
    public:
        ATM(BankAccount* a) : account(a){}
        void display_balamce();
        void make_deposit();
        void make_withdrawl();
    private:
        BankAccount* account;
        int account_index;

};

//Free function
int scan_card(int max_value);
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);