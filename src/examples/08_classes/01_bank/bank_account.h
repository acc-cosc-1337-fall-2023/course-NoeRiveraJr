//bank_account.h
#include<iostream>

class BankAccount
{
    public:
        //constructor
        BankAccount(){}//no parameter-default constructor
        BankAccount(int b) : balance(b){/*empty class function*/} //constructor
        int get_balance(){return balance;}
    private:
        int balance{0};

};


void say_hello();