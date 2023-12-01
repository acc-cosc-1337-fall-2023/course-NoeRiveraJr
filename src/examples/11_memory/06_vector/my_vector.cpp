#include "my_vector.h"

using std::cout;


Vector::Vector(int size)
: size{0},capacity{size},elements{new int[size]}
{
    cout<<"Constructor-New memory created at "<<elements<<"\n";
}

Vector::Vector()
:size{0},capacity{0},elements{nullptr}
{
    
}

/**
 Copy Constructor
 1-Copy size from v1 to v2
 2-Copy capacity from v1 to v2
 3-Create new memoey for v2
 4-Copy the values from v1 to v2
*/
Vector::Vector(const Vector& v1)
: size{v1.size}, capacity{v1.capacity},elements{new int[v1.size]}
{
    cout<<"Copy constructor-created memory at "<<elements<<"\n";
    for(auto i = 0; i < v1.size; i++)
    {
        elements[i] = v1.elements[i];
    }
}
/*
1-Create temp memory for v2
2-Copy values 





*/

Vector& Vector::operator=(const Vector& v1)
{
    int* temp = new int[v1.size];
    for(auto i =0; i < v1.size;i++)
    {
        temp[i] = v1.elements[i];
    }
    cout<<"Copy Assignment delete memory at "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    temp = nullptr;

    cout<<"Copy assignment create memory at "<<elements<<"\n";
    size = v1.size;
    return *this;
}


Vector::Vector(Vector&& v1)
: size{v1.size}, elements{v1.elements}
{
    cout<<"Move constructor-Memory pointer switched"<<"\n";
    v1.elements = nullptr;
    v1.size = 0;
}

Vector& Vector::operator=(Vector&& v2)
{
    cout<<"Move assignment-Delete memory"<<elements<<"\n";
    delete[] elements;

    elements = v2.elements;
    cout<<"Move assignment-Memory pointer switched"<<elements<<"\n";

    size = v2.size;
    v2.elements = nullptr;
    v2.size = 0;

    return *this;

}


void Vector::Reserve(int new_size)
{
    if(new_size <= capacity)
    {
        return;
    }

    int* temp = new int[new_size];
    cout<<"Reserve-Memory created.."<<temp<<"\n";

    for(auto i = 0; i < size;i++)
    {
        temp[i] = elements[i];
    }
    
    cout<<"Reserve-Delete old memory "<<elements<<"\n";
    delete[] elements;

    elements = temp;
    capacity = new_size;
}

void Vector::Push_Back(int value)
{
    
    if(capacity == 0)
    {
        Reserve(RESERVE_DEFAULT_SIZE);
    }
    else if(capacity == size)
    {
        Reserve(capacity * RESERVE_DEFAULT_MULTIPLIER);
    }

    elements[size] = value;
    size++;

}

Vector::~Vector()
{
    cout<<"Delete memory at "<<elements<<"\n";
    delete[] elements;
}



void use_vector()
{
    //NOT recommended; use a stack variable instead -- Vector v(3);
    Vector* v = new Vector(3);
    cout<<"Exiting use_vector free function...\n";
    delete v;
}