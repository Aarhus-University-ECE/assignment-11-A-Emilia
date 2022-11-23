#define CATCH_CONFIG_MAIN // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"

extern "C"
{
#include "sum.h"
#include "sumn.h"
#include "fib.h"
}


// See Catch2's documentation: https://github.com/catchorg/Catch2/blob/devel/docs/tutorial.md#scaling-up

TEST_CASE("sumtail")
{
    // Add the tests for excercise 3 "sumtail" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumtail(1,0)==1);       // 1=1
    REQUIRE(sumtail(2,0)==3);       // 1+2=3
    REQUIRE(sumtail(42,0)==903);    // 1+2+3+...+42=903
    REQUIRE(sumtail(69,0)==2415);   // 1+2+3+...69=2415
}

TEST_CASE("sumwhile")
{
    // Add the tests for excercise 3 "sumwhile" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(sumwhile(1)==1);       // 1=1
    REQUIRE(sumwhile(2)==3);       // 1+2=3
    REQUIRE(sumwhile(42)==903);    // 1+2+3+...+42=903
    REQUIRE(sumwhile(69)==2415);   // 1+2+3+...69=2415
}

TEST_CASE("sumn")
{
    REQUIRE(sumn(1)==1); // sum(1) must be 1
    REQUIRE(sumn(3)==9); //sum(3) = 1+3+5 = 9
    REQUIRE(sumn(33)==1089); //sum(33) = 1+3+5+...+65 = 1089
}

TEST_CASE("fib")
{
   // Add the tests for excercise 4 "fib" function here. Use "REQUIRE()" statement to check. 
    REQUIRE(fib(1,0,1)==0);     // Fib(1)=0
    REQUIRE(fib(2,0,1)==1);     // Fib(2)=1
    REQUIRE(fib(3,0,1)==1);     // Fib(3)=0+1=1
    REQUIRE(fib(4,0,1)==2);     // Fib(4)=1+1=2
    REQUIRE(fib(5,0,1)==3);     // Fib(5)=1+2=3
    REQUIRE(fib(6,0,1)==5);     // Fib(6)=2+3=5
    REQUIRE(fib(7,0,1)==8);     // Fib(7)=3+5=8
    REQUIRE(fib(8,0,1)==13);    // Fib(8)=5+8=13
    REQUIRE(fib(9,0,1)==21);    // Fib(9)=8+13=21
    REQUIRE(fib(10,0,1)==34);   // Fib(10)=13+21=34
}


