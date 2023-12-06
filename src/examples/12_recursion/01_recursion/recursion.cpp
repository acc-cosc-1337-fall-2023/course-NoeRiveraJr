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
int recursive_function(int num)
{
    int f; //num *r
    int r; //track return value of function

    if(num == 0)
    {
        cout<<"Base case\n";
        return 1;
    }
    cout<<"Load to stack "<<num-1<<"\n";
    r = recursive_function(num-1);
    f = num * r;
    cout<<"Unload from stack "<<num<<" r "<<r<< " f "<<f<<"\n";

    return f;


}