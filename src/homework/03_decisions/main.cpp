//write include statements
#include<iostream>
#include "decisions.h"

using std::string;
using std::cout;
using std::cin;

int main() 
{
	int grade;
	int choice;
	string letter_grade;

	cout<<"MAIN MENU\n\n";
	cout<<"1 - Letter grade using if\n";
	cout<<"2 - Letter grade using switch\n";
	cout<<"3 - Exit\n";
	cout<<"Please enter a corresponding number to use the menu: ";
	cin>>choice;

	if(choice >= 1 && choice <= 3)
	{
		switch(choice)
		{
			case 1: 
				cout<<"Please enter a numerical grade between 0 - 100 to be calculated into a letter grade: ";
				cin>>grade;
				if(grade >= 0 && grade <= 100)
				{
					letter_grade = get_letter_grade_using_if(grade);
					cout<<"Letter grade for the number "<<grade<<" is: "<<letter_grade<<"\n";
				}
				else
				{
					cout<<"Number is out of range, goodbye.\n";
				}
				break;
			case 2: 
				cout<<"Please enter a numerical grade between 0 - 100 to be calculated into a letter grade: ";
				cin>>grade;
				if(grade >= 0 && grade <= 100)
				{
					letter_grade = get_letter_grade_using_switch(grade);
					cout<<"Letter grade for the number "<<grade<<" is: "<<letter_grade<<"\n";
				}
				else
				{
					cout<<"Number is out of range, goodbye.\n";
				}
				break;
			case 3:
				cout<<"Exiting the program, goodbye.\n";
				break;

		}
	}
	else
	{
		cout<<"You have entered an invalid menu option, goodbye.\n";
	}


	return 0;
}