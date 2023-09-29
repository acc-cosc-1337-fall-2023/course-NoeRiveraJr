#include<vector>
#include<iostream>

using std::cout;
using std::vector;

int main()
{
    vector<int> nums{7,4,20};
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";
    
    for (auto i = 0; i < nums.size(); i++)
    {
        cout<<nums[i]<<"\n";
    }

    nums.push_back(3);
    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    for(auto num: nums)
    {
        cout<<num<<"\n";
    }

    nums.push_back(25);
    nums.push_back(20);

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";
    
    nums.push_back(20);

    cout<<"Capacity: "<<nums.capacity()<<"\n";
    cout<<"Size: "<<nums.size()<<"\n";

    return 0;
}