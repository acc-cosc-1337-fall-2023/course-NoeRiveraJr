#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "ref_pointers.h"
#include "my_vector.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*
TEST_CASE("Test my vector creation from existing Vector")
{
	Vector v1(3);
	Vector v2 = v1;

}*/

TEST_CASE("Test my vector creation overwrite an existing Vector variable")
{
	Vector v1(3);
	Vector v2(3);
	v2 = v1;
	
}
