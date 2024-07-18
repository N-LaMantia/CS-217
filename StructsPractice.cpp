// StructsPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

/*   
This is practice for building structs
*/

#include <iostream>
#include <string>
using namespace std; 

int main()
{
#pragma region Struct 

    struct structInfo {

        string name; 
        string address; 
        string phone; 
        unsigned char age; 
        int id; 


    };

#pragma endregion;

    structInfo student; 
    structInfo *ptrStudent = NULL; 

    cout << "Input student name: " << endl; // you can add more lines of code to get more information
    cin >> student.name; 

    cout << endl << "The student's name is: " << student.name << endl; 

    cout << "Enter the address of the student (without spaces): " << endl; 
    cin >> student.address; 

    cout << endl << "The student's address is: " << student.address << endl << endl; //not adding all variables in the Struct
    //because 1) you said "Request the user to input a student information." (a meaning one), and 2) it's the same 
    //process for every variable. So, if I know how to do one, I know how to do all. 

    ptrStudent = &student; 
    
  

    cout << "The student's name is: " << ptrStudent->name << " using pointers." << endl;

    



}

