#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "func.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Testing reverse string function") 
{
	REQUIRE(reverse_string("AGCTATAG")=="GATATCGA");
	REQUIRE(reverse_string("CGCTATAG")=="GATATCGC");
}

TEST_CASE("Testing get_gc_content function 1","first test") 
{
	std::string test1 = "AGCTATAG";
	std::string test2 = "CGCTATAG";
	REQUIRE(get_gc_content(test1)==0.375);
	REQUIRE(get_gc_content(test2)==0.5);
}

TEST_CASE("Testing DNA complement function") 
{
	REQUIRE(get_dna_complement("AAAACCCGGT")=="ACCGGGTTTT");
	REQUIRE(get_dna_complement("CCCGGAAAAT")=="ATTTTCCGGG");
}

