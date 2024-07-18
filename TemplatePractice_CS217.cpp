// TemplatePractice_CS217.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
Author: Nicholas LaMantia 
Date: October 27, 2023
Program: TemplatePractice_CS217.cpp
Description: This file is meant to give us a better understanding at how to build types from a function 
and how they are used. 



*/
#include <iostream>
#include <cassert> 




template <class T>
T array_max(T data[], size_t n)
{
    size_t i; // size_t type is an unsigned integer.
   
    assert(n > 0); // Terminates the program if condition is false

    T answer = data[0];
    for (i = 1; i < n; i++)
        if (data[i] > answer) answer = data[i];
    return answer;
}

int main()
{
    int array_Temp[] = { 1, 2, 3, -44, 5, 0 }; 

    double array_Double[] = { 1.2, 5.5, 3.14159, 90.2, 123123 }; 

    std::cout << "The maximum integer is: " << array_max<int>(array_Temp, sizeof(array_Temp) / sizeof(array_Temp[0]));
    std::cout << "\n"; 
    //gets the array, then finds the max int. I get it now because as you can see below and above,
    //the type of value we are looking for is defined after the function call. 


    std::cout << "The max double from the array is: " << array_max<double>(array_Double, sizeof(array_Double) / sizeof(array_Double[0])); 
    //same thing here, it gets the maximum value of the array using simple code. 
    return 0; 
}




