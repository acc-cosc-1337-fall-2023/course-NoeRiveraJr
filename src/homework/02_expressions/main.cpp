//write include statements

#include<iostream>
#include "hwexpressions.h"

//write namespace using statement for cout

using std::cin;
using std::cout;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;

	cout<<"Please enter the meal amount: ";
	cin>>meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<<"Please enter the tip rate: ";
	cin>>tip_rate;
	tip_amount = get_tip_amount(meal_amount,tip_rate);
	
	total = meal_amount + tax_amount + tip_amount;

	cout<<"Meal Amount: $"<<meal_amount<<"\n";
	cout<<"Sales Tax: $"<<tax_amount<<"\n";
	cout<<"Tip Amount: $"<<tip_amount<<"\n";
	cout<<"Total: $"<<total<<"\n";


	return 0;
}
