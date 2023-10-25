//bank_account.h
#include<iostream>

//class header guards
#ifndef BANK_ACCOUNT_H
#define BANK_ACCOUNT_H


class BankAccount
{
    friend void show_balance(const BankAccount& account);

    public: //access specifier-other code can access these functions
        //constructor
        BankAccount(){get_balance_from_db();}//no parameter-default constructor
        BankAccount(int b) : balance(b){/*empty class function*/} //constructor
        void deposit(int amount);
        void withdraw(int amount);
        virtual int get_balance() const {return balance;}
    private: //access specifier-only this class can access function or variables 
        int balance{0};
        void get_balance_from_db();

};

void say_hello();
#endif

