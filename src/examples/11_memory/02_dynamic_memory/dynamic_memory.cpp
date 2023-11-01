#include "dynamic_memory.h"

using std::cout; using std::unique_ptr; using std::make_unique; using std::shared_ptr; using std::weak_ptr;

void use_dynamic_memory()
{
    int* num = new int(10);
    cout<<*num<<"\n";
    delete num;
}

void use_unique_ptr()
{
    unique_ptr<int> num_up = make_unique<int>(10);
	cout<<*num_up<<"\n";
}

void use_shared_ptr()
{
    shared_ptr<int> num_sp1 = make_unique<int>(10);
    cout<<*num_sp1<<"\n";
    cout<<num_sp1.use_count()<<"\n";

    shared_ptr<int>num_sp2 = num_sp1;
    cout<<*num_sp2<<"\n";
    cout<<num_sp2.use_count()<<"\n";
}

void use_weak_ptr()
{
    shared_ptr<int> num_sp1 = make_unique<int>(10);
    weak_ptr<int> num_wp1 = num_sp1;
    cout<<*num_wp1.lock()<<"\n";

}
