#pragma once
/*
Author: Nicholas LaMantia, 2256663, nicholas.lamantia@snhu.edu
Date: 9/27/2023
Class: CS217 
Title: Assignment 2
Purpose: The purpose of this program is to instantiate the Stuct called StudentInfo, then write a class with Prototypes called 
ArrayList. 



*/
#include <iostream>

#include <string>


struct StudentInfo {

    int id = -1;

    std::string name, phone, address = "";


}; //the struct

class ArrayList {


public:
      ArrayList(short);
      //Constructor to initialize the data members of an object
      ~ArrayList(); 
      

      short GetCap();
      //Returns the maximum array size (capacity_)
      short GetNumOfItems();
      //Returns the number of inserted students in the array (num_entries_)
      StudentInfo GetStudentInfo();
      //Gets a student's info from the user
      void AddStudentInfo(StudentInfo temp_Student, unsigned short position);
      //Inserts a student's info into the array at certain position
      void UpdateStudentInfo(StudentInfo temp_Student, unsigned short position);
      //Updates a student's info at certain position
      void DisplayStudentInfo(unsigned short position);
      //Displays info of a student at certain position.
      StudentInfo RetrieveStudentInfo(unsigned short position);
      //Returns a student's info from certain position
      void PushStudentInfo(unsigned short position);
      //Moves down (one position) all students start from a certain position
      void PopStudentInfo(unsigned short position);
      //Moves up (one position) all students start from a certain position
      void Menu(); 
      //prints the menu when we need it. 



private: 

    StudentInfo* student_list_;      //Pointer to the array

    short num_entries_;              //number of inserted students

    short current_pos_;              //index of the current position

    short capacity_;                 //Array size, i.e., maximum number of students
};

