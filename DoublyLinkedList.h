#pragma once


#pragma once
/*
Author: Nicholas LaMantia, 2256663, nicholas.lamantia@snhu.edu
Date: 9/27/2023
Class: CS217
Title: Assignment 3
Purpose: The purpose of this program is to instantiate the Stuct called Node, then write a class with Prototypes of a class called
DoublyLinkedList. 



*/
#include <iostream>
#include <string>


struct Node {
    
    int id; 
    std::string phone, address, name; 

    Node* next;
    Node* prev; 
    

}; //the struct



class DoublyLinkedList {


public:

    DoublyLinkedList();
    //Constructor to initialize the data members of an object
    ~DoublyLinkedList();
    void ClearList(); 
    //deconstructor to delete the list
   
    short GetNumOfItems();
    //Returns the number of inserted students in the array (num_entries_)
    Node GetStudentInfo();
    //Gets a student's info from the user
    void AddStudentInfo(Node temp_Student, unsigned short position);
    //Inserts a student's info into the array at certain position
    void UpdateStudentInfo(Node temp_Student, unsigned short position);
    //Updates a student's info at certain position
    void DisplayStudentInfo(unsigned short position);
    //Displays info of a student at certain position.
    Node RetrieveStudentInfo(unsigned short position);
    //Returns a student's info from certain position
    void RemoveStudentatPosition(unsigned short position);
//a function to remove a student's info at a position. 
    void Menu();
    //prints the menu when we need it. 



private:

    Node* head_; //Pointer to the first student
    Node* tail_; //Pointer to the last student
    unsigned short num_entries_; //Number of inserted students
    unsigned short current_pos_; //index of the current position

};


