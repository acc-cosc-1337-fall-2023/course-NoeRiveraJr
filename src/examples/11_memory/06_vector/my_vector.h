//
#include<iostream>

class Vector
{
public:
    Vector();
    Vector(int size);
    Vector(const Vector& v1);
    Vector& operator=(const Vector& v1);
    Vector(Vector&& v1);
    Vector& operator=(Vector&& v1);
    int& operator[](int index){return elements[index];}
    int& operator[](int index)const{return elements[index];}
    void Push_Back(int value);
    ~Vector();
private:
    int size;
    int capacity;
    int *elements;
    const int RESERVE_DEFAULT_SIZE{8};
    const int RESERVE_DEFAULT_MULTIPLIER{2};
    void Reserve(int new_size);
};

//FREE FUNCTIONS
void use_vector();