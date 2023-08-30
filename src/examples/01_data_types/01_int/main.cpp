#include<iostream>
#include "int.h" //I have access to the echo_variable function in my library

using std::cout;

int main()
{
    int num =5;

    int result = echo_variable(num);

    cout<<"Result: "<<result<<"\n";
    cout<<"Num: "<<num<<"\n";

    num = 100;

    cout<<"Num: "<<num<<"\n";

    return 0;
}