// FunctionArguments.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std; 

// function prototype for function defined below main
// the parameters declared in the prototype are the formal parameters
int add(int x, int y, int sum1);
int add2(int x, int y);

int main()
{
    int var1 = 0;
    int var2 = 1;
    int sum1 = 0;

    int *ptr = &sum1; 

    //call the `add` function and provide the arguments (actual parameters)
    int sum = add(var1, var2, sum1);
    cout << "Result of using pointers: " << sum << endl;
    cout << endl;
    int sum2 = add2(var1, var2); 
    cout << "Result of normally adding: " << sum2 << endl;

    return NULL;
}

// `x` and `y` are the formal parameters for the `add` function
int add(int x, int y, int sum1)
{
    int sum = x + y; 
    int *pointer = &sum; 
    cout << "Value at pointer: " << *pointer << endl; 
    return (*pointer); 
}
int add2(int x, int y) {
    
    return (x + y);
}

