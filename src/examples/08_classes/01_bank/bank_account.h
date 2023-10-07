//bank_account.h
#include<iostream>

class BankAccount
{
    public: //access specifier-other code can access these functions
        //constructor
        BankAccount(){}//no parameter-default constructor
        BankAccount(int b) : balance(b){/*empty class function*/} //constructor
        void deposit(int amount);
        void withdraw(int amount);
        int get_balance() const {return balance;}
    private: //access specifier-only this class can access function or variables 
        int balance{0};

};


void say_hello();