#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include <iostream>
#include <cctype>
#include "funcs.h"
#include "doctest.h"


//task A
TEST_CASE("Print All Numbers in a Range"){
    CHECK(printRange(-2,10) == "-2 -1 0 1 2 3 4 5 6 7 8 9 10");
    CHECK(printRange(-12,1) == "-12 -11 -10 -9 -8 -7 -6 -5 -4 -3 -2 -1 0 1");
    CHECK(printRange(3,6) == "3 4 5 6");
    CHECK(printRange(1,1) == "1");
    CHECK(printRange(5,0) == "");
}

//task B
TEST_CASE("Print the Sum of Numbers in a Range"){
    CHECK(sumRange(-2,10) == 52);
    CHECK(sumRange(-2,-3) == 0);
    CHECK(sumRange(4,8) == 30);
    CHECK(sumRange(-4,-2) == -9);
}

TEST_CASE("Print the Sum of Elements in an Array"){
    int size = 8;
    int *arr = new int[size];
    arr[0] = 2;
    arr[1] = 4;
    arr[2] = 6;
    arr[3] = 8;
    arr[4] = 10;
    arr[5] = 12;
    arr[6] = 14;
    arr[7] = 16;
    CHECK(sumArray(arr,size) == 72);
    CHECK(sumArray(arr,1) == 2);
    CHECK(sumArray(arr,3) == 12);
    CHECK(sumArray(arr,6) == 42);
    CHECK(sumArray(arr,0) == 0);
}

//task D
TEST_CASE("Checks if a String is Alphanumeric"){
    CHECK(isAlphanumeric("ABCD") == 1);
    CHECK(isAlphanumeric("Abcd1234xyz") == 1);
    CHECK(isAlphanumeric("KLMN 8-7-6") == 0);
    CHECK(isAlphanumeric("") == 1);
    CHECK(isAlphanumeric("e") == 1);
    CHECK(isAlphanumeric("***star***") == 0);
    CHECK(isAlphanumeric("+flowers") == 0);
    CHECK(isAlphanumeric("moreFlowers+") == 0);
}

//task E
TEST_CASE("Checks if a String is a Sequence of Nested Parantheses"){
    CHECK(nestedParens("(())") == 1);
    CHECK(nestedParens("") == 1);
    CHECK(nestedParens(")(") == 0);
    CHECK(nestedParens("(()") == 0);
    CHECK(nestedParens("a(b)c") == 0);
    CHECK(nestedParens("(") == 0);
    CHECK(nestedParens("()()") == 0);
    CHECK(nestedParens("(((())))") == 1);
    CHECK(nestedParens("{}") == 0);
    CHECK(nestedParens("(hello)") == 0);
    CHECK(nestedParens("(((((())))))") == 1);
}