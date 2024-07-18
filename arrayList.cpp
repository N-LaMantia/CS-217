/*
Author: Nicholas LaMantia, 2256663, nicholas.lamantia@snhu.edu
Date: 9/27/2023
Class: CS217
Title: Assignment 2
Purpose: The purpose of this program is to define the methods listed in arraylist.h. 


*/

#include <iostream>
#include "arraylist.h" //link to header file 
#include <string>

//this is where I define my methods

    
    ArrayList::ArrayList(short cap) {
    
        

        while (cap < 1)
        {
            std::cout << "This is invalid, please enter a valid integer: " << std::endl; 
            std::cin >> cap; 
        }

        student_list_ = new StudentInfo[cap]; 
        ArrayList::capacity_ = cap; 
        ArrayList::current_pos_ = 0; 
        ArrayList::num_entries_ = 0; 
        
        
    
    

    }

    //Constructor to initialize the data members of an object
    ArrayList::~ArrayList() {

        int o = 0; 

        delete[] student_list_; 

        std::cout << "Enter a size (integer) or -1 to exit: " << std::endl;
        std::cin >> o;

        if (o == -1) {
            exit(0); 
        }
        else {
            ArrayList new_list = ArrayList(o);

        }
      

        
    }
    //deconstructor to delete the list to save memory. 

    short ArrayList::GetCap()
    {
       
        return capacity_; 
        

        

        
    }
    
    //Returns the maximum array size (capacity_)

    short ArrayList::GetNumOfItems()
    {
        
        return num_entries_; 
    }
    
    //Returns the number of inserted students in the array (num_entries_)

    StudentInfo ArrayList::GetStudentInfo() {

        StudentInfo temporary; //temp variable is necessary. 

        std::cout << "Enter a student ID: ";
        std::cin >> temporary.id;
        std::cout << "\n"; 

        std::cout << "Enter a student's first name: ";
        std::cin >> temporary.name; 
        std::cout << "\n";

        std::cout << "Enter a student's phone number (without dashes): ";
        std::cin >> temporary.phone; 
        std::cout << "\n";

        std::cout << "Enter a student's address (without spaces): "; 
        std::cin >> temporary.address;
        std::cout << "\n";

        return temporary; 

    }
    //Gets a student's info from the user


    void ArrayList::AddStudentInfo(StudentInfo temp_Student, unsigned short position) {


        if (GetCap() == GetNumOfItems())
        {
            std::cout << "Error! Too many inputs. The limit has been reached for the list.";

        }
        else if (position <= GetNumOfItems())
        {
            std::cout << "Error! Enter a different integer.";
        }
        else if (position > ArrayList::GetNumOfItems()) {

            num_entries_ += 1;

            student_list_[position] = temp_Student; 
        }
       
    }
    //Inserts a student's info into the array at certain position. This position cannot be too large. If there is room for the information
    // of the student, then it will run the PushStudentInfo() to make room for the incoming information. 

    void ArrayList::UpdateStudentInfo(StudentInfo temp_Student, unsigned short position) {

        int num = 0; 
        if (position <= (num_entries_ + 1) and position >= 0) {

            
            std::cout << "1: Address. 2: Name. 3: Phone. 4: ID. \n" << std::endl;
            std::cout << "Which variable would you like to change? " << std::endl;

            std::cin >> num;
            switch (num) {

            case 1:

                std::cout << "Enter the new Address (no spaces): " << std::endl;
                std::cin >> temp_Student.address;

                student_list_[position].address = temp_Student.address;

                
                break;
            case 2:

                std::cout << "Enter the new first name: " << std::endl;
                std::cin >> temp_Student.name; 

                student_list_[position].name = temp_Student.name;

                

                break;
            case 3:
                std::cout << "Enter the new phone number (no dashes): " << std::endl;
                std::cin >> temp_Student.phone;

                student_list_[position].phone = temp_Student.phone;

                

                break;
            case 4:
                std::cout << "Enter the new ID: " << std::endl;
                std::cin >> temp_Student.id; 

                student_list_[position].id = temp_Student.id;

               

                break;
            }

        }
        else {
            std::cout << "The position you entered is out of the scope." << std::endl; 

        }
        
        



    }
    //Updates a student's info at certain position

    void ArrayList::DisplayStudentInfo(unsigned short position) {

        if (position >= 0) {
            std::cout << "The info for " << student_list_[position].name << " is as follows: " << std::endl; 

            std::cout << "\nID: " << student_list_[position].id << std::endl; 
            std::cout << "Name: " << student_list_[position].name << std::endl;
            std::cout << "Phone Number: " << student_list_[position].phone << std::endl; 
            std::cout << "Address: " << student_list_[position].address << std::endl; 

            
        } 
        else {
            std::cout << "Error! There is nobody to speak of in that index." << std::endl; 
        }

    }
    //Displays info of a student at certain position.

    StudentInfo ArrayList::RetrieveStudentInfo(unsigned short position) {

        while (position > GetNumOfItems() and position < 0) {

            std::cout << "Wrong input. Please enter a valid position: " << std::endl;
            std::cin >> position; 

        }
        if (position <= GetNumOfItems() and position > 0) {

            return student_list_[position]; 
            
        }
       
        
        
    }
    //Returns a student's info from a certain position

    void ArrayList::PushStudentInfo(unsigned short position) {

        if (GetNumOfItems() == GetCap()) {

            std::cout << "Error! The list is full." << std::endl; 

        }

        else if (position < GetNumOfItems()) {

            for (int p = GetNumOfItems(); p >= position; p--) {

                student_list_[p + 1] = student_list_[p];

            }
            return; 
        }

    }
    //Moves down (one position) all students start from a certain position

    void ArrayList::PopStudentInfo(unsigned short position) {

        if (GetNumOfItems() == GetCap()) {

            std::cout << "Error! The list is full." << std::endl; 
        }

        else if (position < GetNumOfItems()) {

            for (int e = position; e < GetNumOfItems(); e++) {

                student_list_[e - 1] = student_list_[e]; 
            }
        }

    }
    //Moves up (one position) all students start from a certain position
    void ArrayList::Menu() {

        int menu_option_ = 0;
        int remove_pos_ = 0; 

        while (menu_option_ != 200) {

            std::cout << "         MENU    " << std::endl; 
            std::cout << "1. Get Capacity of the list. " << std::endl;
            std::cout << "2. Delete the list. " << std::endl;
            std::cout << "3. Get the number of entries in the list. " << std::endl;
            std::cout << "4. Add student information. " << std::endl;
            std::cout << "5. Update student information. " << std::endl;
            std::cout << "6. Display student information " << std::endl;
            std::cout << "7. Go to a student. " << std::endl; //related to switching entries
            std::cout << "8. Remove Student at position." << std::endl; 
            std::cout << "200. Quit. " << std::endl;
            std::cout << "Enter a Menu Option (number): "; 

            std::cin >> menu_option_;
            int i_ = 0; 
            int choice = 0; 

            switch (menu_option_) {

            case 1:

                std::cout << "The capacity of the list is: " << GetCap() << std::endl;
                break;

            case 2: 

                std::cout << "The list is deleted." << std::endl; 
                ArrayList::~ArrayList(); 
                break; 

            case 3: 

                std::cout << "The number of entries is: " << GetNumOfItems() <<
                    " entries." << std::endl; 
                break;

            case 4: 
                
                

                std::cout << "Enter a position for the student: " << std::endl; 
                std::cin >> i_;

                AddStudentInfo(GetStudentInfo(), i_); 
                break;

            case 5: 
                

                std::cout << "Enter the position the student is in: " << std::endl;
                std::cin >> i_;

                UpdateStudentInfo(RetrieveStudentInfo(i_), i_); 
                break;

            case 6:

                std::cout << "What position is your student in? " << std::endl; 
                std::cin >> i_; 
                 
                DisplayStudentInfo(i_); 
                break;

            case 8:

                 
                std::cout << "Enter the position: ";
                std::cin >> remove_pos_; 

                
                student_list_[remove_pos_] = student_list_[remove_pos_ + 1]; 

                break;

            case 7: 
                

                std::cout << "What position is your student in? " << std::endl; 
                std::cin >> i_; 

                if (i_ > num_entries_) {
                    std::cout << "Enter a position that has a student next time." << std::endl; 
                }
                else {

                    RetrieveStudentInfo(i_);

                    ArrayList::DisplayStudentInfo(i_);

                    while (choice != 3) { //if the user enters a valid position, then it will reveal these options. 

                        std::cout << "Here are your options: " << std::endl;
                        std::cout << "1. Go to next person in list." << std::endl;
                        std::cout << "2. Go to previous person in list." << std::endl;
                        std::cout << "3. Quit." << std::endl;
                        std::cout << "4. Remove current." << std::endl;
                        std::cout << "Which option do you pick? "; 

                        std::cin >> choice;

                        switch (choice) {

                        case 1:
                            i_ += 1;

                            RetrieveStudentInfo(i_);
                            ArrayList::DisplayStudentInfo(i_);
                            break;

                        case 2:

                            i_ -= 1;

                            RetrieveStudentInfo(i_);
                            ArrayList::DisplayStudentInfo(i_);
                            break;

                        case 3:

                            break;

                        case 4:

                            


                            student_list_[current_pos_] = student_list_[current_pos_ + 1];

                            break;
                        }
                       
                    }
               

                } //while loop end-brace


            case 200:

                exit(0); 
                break; 


            }

        } //while loop end-brace 
        
    }
    //prints out the menu whenever we need it