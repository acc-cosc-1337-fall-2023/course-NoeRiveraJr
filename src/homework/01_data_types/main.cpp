//write include statements
#include<iostream>
#include "data_types.h"

//write namespace using statement for cout
using std::cout;
using std::cin;


int main()
{
	int num; 
	cout<<"Please enter a number to multiply by 5: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result is: "<<result<<"\n";

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result for the number 4 multiplied by 5 is: "<<result<<"\n";

	return 0;
}
