#include<iostream>

using std::cout;


int main()
{
    int num = 5;
    int& num_ref = num; //take the addresss where num is stored

    cout<<"Display the address where num is stored: "<<&num_ref<<"\n";
    cout<<"Num address via num: "<<&num<<"\n";
    cout<<"Num value via num: "<<num<<"\n";
    cout<<"Num value via num_ref: "<<num_ref<<"\n";

    return 0;
}