#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "casting.h"
#include "data_type_size.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test int to double", "interest rate")
{
	REQUIRE(convert_to_double(10,.5) == 5.0);
}


TEST_CASE("Test convert double to int", "truncate fucntion")
{
	REQUIRE(convert_double_to_int(10.5982394) == 10);
}

TEST_CASE("Test int is 4 bytes w sizeof")
{
	REQUIRE(get_int_data_type(4) == 4);
	REQUIRE(get_int_data_type(10) == 4);
	REQUIRE(get_double_data_type(10.1234) == 8);

}

TEST_CASE("Test char is 1 w sizeof")
{
	REQUIRE(get_char_size('A') == 1);
	REQUIRE(get_char_size('9') == 1);
	REQUIRE(get_char_size('#') == 1);
}


