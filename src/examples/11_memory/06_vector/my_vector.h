//
#include<iostream>
class Vector
{
public:
    Vector(int size);
    Vector(const Vector& v1);
    Vector& operator=(const Vector& v1);
    ~Vector();
private:
    int size;
    int capacity;
    int *elements;
};

//FREE FUNCTIONS
void use_vector();