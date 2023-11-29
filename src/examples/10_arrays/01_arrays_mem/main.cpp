#include "arrays_mem.h"

int main() 
{
	//use_stack_array();
	//use_parallel_array();
	//arrays_and_pointers();

	const auto SIZE = 4;

    int nums[SIZE]{5,7,0,-1}; //stack array(list)

	display_array(nums, SIZE);

	return 0;


}