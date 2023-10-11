//atm.h
#include "bank_account.h"
#include<iostream>

class ATM
{
    public:
        ATM(BankAccount& a) : account(a){}
        void display_balamce();
        void make_deposit();
        void make_withdrawl();
    private:
        BankAccount& account;


};