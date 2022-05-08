#include <iostream>
#include <cctype>
#include "funcs.h"

//task A
std::string printRange(int left, int right){
    std::string output = "";
    //returns a string of numbers in the range left <= x <= right that are separated by spaces
    if (left < right){
        output += std::to_string(left);
        output += " ";
        return output + printRange(left + 1, right); //recursive function from left + 1 up to right
    }

    else if (left == right){ //so there can be no space after the last num
        output += std::to_string(left);
        return output + printRange(left + 1, right);
    }

    
    else {
        return output;
    }

}

//task B
int sumRange(int left, int right){
    //computes the sum of all the numbers in the range left <= x <= right 
    if (left <= right){
        return left + sumRange(left + 1, right);
    }
    
    else {
        return 0; //base case is 0
    }
}

//task C
int sumArray(int *arr, int size){
    if (size < 0){
        return 0;
    }
    else {
        return (*(arr + (size - 1))) + sumArray(arr, size - 1); 
        //works backwards, larger index to smaller index
        //dereferences the size - 1th index (aka starts with last index and works its way down to 0) then makes a recursive call with a size lower to add the value of the next element
        //wouldn't work if we did *(arr + size) b/c that would dereference the value at index size, BUT the last index of an array is size - 1
    }

}

//task D
bool isAlphanumeric(std::string s){
    //returns true if ALL characters are letters and digits, otherwise return false
    //substr(pos,len)
    
    if (s.size() == 0){ //base case
        return true;
    }

    else if (!isalpha(s[s.size() - 1]) && !isdigit(s[s.size() - 1])){
        return false;
    }

    else {
        return isAlphanumeric(s.substr(0, s.size() - 1)); //decreases the size of the string by 1 (pos=0, len=lowers by 1)
        //the above else if statement would check if the last element of that newly constructed string is not alphanumeric
        //if it is alphanumeric, the string size is decreased by 1 and it do it all again till the size is 0 --> true
    }
    

}