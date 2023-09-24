//add include statements
#include "repetition.h"
//add function(s) code here
using std::cout;
using std::cin;
using std::string;

int factorial(int num)
{
    int sum = 1;
    while(num > 0)
    {
        sum = sum * num;
        num--;
    }
    return sum;
}

int gcd(int num1, int num2)
{
    while (num2 != 0)
    {
        int remainder = num1 % num2;
        num1 = num2;
        num2 = remainder;
    }
    return num1;
}

void menu()
{
    int menukill = 0;
    int menuselect = 0;
    cout<<"Welcome to my program!"<<"\n";
    while(menukill != 1)
    {
        int num1, num2, result;
        string quitcheck;
        cout<<"1-Factorial\n";
        cout<<"2-Greatest Common Divisor\n";
        cout<<"3-Exit\n";
        cout<<"Please select one of the following options from this menu: ";
        cin>>menuselect;
        switch(menuselect)
        {
            case 1:
                cout<<"Please enter a number to perform a factorial on: ";
                cin>>num1;
                result = factorial(num1);
                cout<<"The factorial of "<<num1<<" is "<<result<<".\n\n";
                break;
            case 2: 
                cout<<"Please enter 2 numbers to find the greatest common divisor!\n";
                cout<<"Number 1: ";
                cin>>num1;
                cout<<"Number 2: ";
                cin>>num2;
                result = gcd(num1, num2);
                cout<<"The greatest commmon divisor of "<<num1<<" and "<<num2<<" is "<<result<<".\n\n";
                break;
            case 3:
                cout<<"Are you sure you want to exit?\n";
                cout<<"Please enter Y for yes or N for no: ";
                cin>>quitcheck;
                if(quitcheck == "Y" || quitcheck == "y")
                {
                    cout<<"Thank you for using this program!\n";
                    menukill = 1;
                }
                else if(quitcheck == "N" || quitcheck == "n")
                {
                    cout<<"Okay, you will be returned to the main menu.\n\n";
                }
                else
                {
                    cout<<"You have entered an invalid option, so you will be returned to the main menu.\n\n";
                }
                break;
            default:
                cout<<"You have entered an invalid option, please try again.\n\n";
        }
    }

}