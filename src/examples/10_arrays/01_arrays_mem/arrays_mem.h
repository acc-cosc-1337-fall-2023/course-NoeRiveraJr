//arrays_mem.h - stack array example
#include<iostream>
#include<string>
#include<iomanip>

const int COLS = 10;
const int ROWS = 10;

//function prototype for stack_array
void use_stack_array();
void use_parallel_array();
void arrays_and_pointers();
void display_array(int* nums);
void display_array(int* nums, const int SIZE);
void populate_times_table(int times_table[][COLS], const int ROWS);
