//add include statements
#include "func.h"
//add function code here

using std::string;
using std::cout;
using std::cin;

double get_gc_content(const string dna)
{
    int i = 0;
    int size = dna.size();

    double result;
    do
    {
        if(dna[i] == 'G' || dna[i]=='C')
        {
            result+=1.0;
        }
        i++;
    } while (i < size);
    
    return result/size;
}


string get_dna_complement(string dna)
{
    string loop = reverse_string(dna);
    string result;
    for(int i = 0; i < loop.size(); i++)
    {
        if(loop[i] == 'A')
        {
            result+='T';
        }
        else if(loop[i] == 'T')
        {
            result+= 'A';
        }
        else if(loop[i] == 'C')
        {
            result += 'G';
        }
        else if(loop[i] == 'G')
        {
            result += 'C';
        }
    }

    return result;
}

string reverse_string(string dna)
{
    string reverse = "";
    
    for(int i = dna.size() - 1; i >= 0; i--)
    {
        reverse+=dna[i];
    }

    return reverse;
}

void menu()
{
    int check = 0;
    int useroption = 0;
    string dna;
    double gc_result;
    string dna_Complement;
    while(check != 1)
    {
        cout<<"1-Get GC Content\n";
	    cout<<"2-Get DNA Complement\n";
	    cout<<"3-Exit\n";
        cout<<"Please enter a number to use a menu option: ";
        cin>>useroption;
        if(useroption ==1 || useroption == 2 || useroption == 3)
        {
            switch(useroption)
            {
                case 1:
                    cout<<"Please enter a DNA strand to compute GC content: ";
                    cin>>dna;
                    gc_result = get_gc_content(dna);
                    cout<<"The GC content for "<<dna<<" is: "<<gc_result<<".\n\n";
                    break;
                case 2:
                    cout<<"Please enter a DNA strand to compute DNA complement: ";
                    cin>>dna;
                    dna_Complement = get_dna_complement(dna);
                    cout<<"The DNA complement for "<<dna<<" is: "<<dna_Complement<<".\n\n";
                    break;
                case 3:
                    cout<<"Thank you for using my program, goodbye.\n";
                    check++;
                    break;
                default:
                    break;
            }
        }
        else
        {
            cout<<"You have entered an invalid option, please try again!\n\n";
        }
    }
}
