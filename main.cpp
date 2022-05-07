/*
Emmy Veselinov
CSCI 135 Lab-13
Recursion
*/

#include <iostream>
#include "funcs.h"

int main(){
    //task A
    std::cout << "--------Task A--------" << std::endl;
    std::cout << "Print [-2,10]: ";
    std::string output1 = printRange(-2,10);
    std::cout << output1 << "\n";
    std::cout << "\n";

    std::cout << "Print [0,8]: ";
    std::string output2 = printRange(0,8);
    std::cout << output2 << "\n";
    std::cout << "\n";

    std::cout << "Print [11,4] (empty range): ";
    std::string output3 = printRange(11,4);
    std::cout << output3 << "\n";


    //task B
    std::cout << "\n-------Task B--------" << std::endl;
    std::cout << "Print the sum of [1,3]: ";
    int x = sumRange(1,3);
    std::cout << x << "\n";
    std::cout << "\n";

    std::cout << "Print the sume of [-2,10]: ";
    int y = sumRange(-2,10);
    std::cout << y << "\n";
    std::cout << "\n";

    std::cout << "Print the sum of [1,1]: ";
    int z = sumRange(1,1);
    std::cout << z << "\n";
    

    //task C
    std::cout << "\n--------Task C--------" << std::endl;
    int size = 10;
    int *arr = new int[size];
    arr[0] = 12;
    arr[1] = 17;
    arr[2] = -5;
    arr[3] = 3;
    arr[4] = 7;
    arr[5] = -15;
    arr[6] = 27;
    arr[7] = 5;
    arr[8] = 13;
    arr[9] = -21;

    std::cout << "Array: [12,17,-5,3,7,-15,27,5,13,21]" << "\n";
    std::cout << "\n";

    int sum1 = sumArray(arr,size);
    std::cout << "Sum of all elements: ";
    std::cout << sum1 << "\n";
    std::cout << "\n";

    int sum2 = sumArray(arr,5);
    std::cout << "Sum of the first 5 elements: ";
    std::cout << sum2 << "\n";
    std::cout << "\n";

    int sum3 = sumArray(arr,1);
    std::cout << "Sum of the first element: ";
    std::cout << sum3 << "\n";

    delete[] arr;



}