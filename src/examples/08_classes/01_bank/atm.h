//atm.h
#include "bank_account.h"
#include<iostream>
#include<vector>
#include<stdlib.h>

class ATM
{
    public:
        ATM(std::vector<BankAccount*> a) : accounts(a){}
        void display_balamce();
        void make_deposit();
        void make_withdrawl();
        void scan_card();
    private:
        std::vector<BankAccount*> accounts;
        BankAccount* account;
        int account_index;
};

//Free function
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);