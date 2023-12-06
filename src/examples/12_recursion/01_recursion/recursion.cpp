#include "recursion.h"
#include<iostream>
//Write code for recursive display function
using std::cout;
void say_hello(int times)
{
    if (times == 0)
    {
        cout<<"Base Case\n";
        return;
    }

    cout<<"Hello\n";
    say_hello(times-1);
}

//Write code for recursive factorial
