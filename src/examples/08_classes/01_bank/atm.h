//atm.h
#include "bank_account.h"
#include "customer.h"
#include<iostream>
#include<vector>
#include<stdlib.h>

class ATM
{
    public:
        ATM(std::vector<Customer>& a) : customers(a){}
        void display_balamce();
        void make_deposit();
        void make_withdrawl();
        void scan_card();
    private:
        std::vector<Customer>& customers;
        int customer_index;
        int account_index;

};

//Free function
void display_menu();
void run_menu(ATM& atm);
void handle_menu_option(int option, ATM& atm);