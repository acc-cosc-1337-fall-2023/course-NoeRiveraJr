#include "val_ref.h"

using std::cout;

void ref_param(int& num)
{
    num =20;
}

void const_ref_param(const int &num)
{
    cout<<"Const int &num is avalie in read only mode: "<<num<<"\n";
    //num = 20; this statemnt causes a read-only refernce error; can't run program
}