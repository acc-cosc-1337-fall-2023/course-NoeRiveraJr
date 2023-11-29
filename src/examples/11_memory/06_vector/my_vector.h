//
#include<iostream>
class Vector
{
public:
    Vector(int size);
    ~Vector();
private:
    int size;
    int capacity;
    int *elements;
};

//FREE FUNCTIONS
void use_vector();