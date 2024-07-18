/*
Author: Nicholas LaMantia, 2256663, nicholas.lamantia@snhu.edu
Date: 9/27/2023
Class: CS217
Title: Assignment 2
Purpose: The purpose of this program is to define the methods listed in DoublyLinkedList.h.


*/

#include <iostream>
#include "DoublyLinkedList.h" //link to header file 
#include <string>
#include <vector>

//this is where I define my methods


DoublyLinkedList::DoublyLinkedList() {

    
     
    head_ = nullptr; 
    tail_ = nullptr; 
    DoublyLinkedList::current_pos_ = 0;
    DoublyLinkedList::num_entries_ = 0;





}

//Constructor to initialize the data members of an object

DoublyLinkedList::~DoublyLinkedList() {

    
    ClearList(); 
    
   


}
//deconstructor to delete the list to save memory. 
void DoublyLinkedList::ClearList() {

    Node* death_ptr_; 
    while (head_ != nullptr) {

        death_ptr_ = head_; 
        head_ = head_->next; 
        delete death_ptr_; 

    }
    tail_ = nullptr; 
    num_entries_ = 0; //there would be no entries left after this runs. 

    

}
/*

short DoublyLinkedList::GetCap()
{

    return capacity_;





}

//Returns the maximum array size (capacity_)
*/
short DoublyLinkedList::GetNumOfItems()
{

    return num_entries_;
}

//Returns the number of inserted students in the array (num_entries_)

Node DoublyLinkedList::GetStudentInfo() {

    Node temporary; //temp variable is necessary. 

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


void DoublyLinkedList::AddStudentInfo(Node temp_Student, unsigned short position) {


    if (position <= num_entries_ && position >= 0) {

        current_pos_ = position;
        Node* pointer_ = new Node;
        pointer_->id = temp_Student.id;
        pointer_->phone = temp_Student.phone;
        pointer_->address = temp_Student.address;
        pointer_->name = temp_Student.name;

        pointer_->prev = nullptr;
        pointer_->next = nullptr;

        if (num_entries_ == 0) {

            head_ = tail_;
            tail_ = pointer_;
        }
        else if (position == 0) {
            pointer_->next = head_;
            head_->prev = pointer_;
            head_ = pointer_;
        }
        else if (position = num_entries_) {
            pointer_->prev = tail_;
            tail_->next = pointer_;
            tail_ = pointer_;
        }
        else {

            Node* tempCurrPos = head_;
            for (int p = 0; p < position; p++) {

                tempCurrPos = tempCurrPos->next;


            }
            pointer_->next = tempCurrPos;
            pointer_->prev = tempCurrPos->prev;
            tempCurrPos->prev->next = pointer_;
            tempCurrPos->prev = pointer_;


        }
        num_entries_++;


    }
    else { std::cout << "Error! Invalid position!!" << std::endl; }


}




//Inserts a student's info into the array at certain position. This position cannot be too large. If there is room for the information
// of the student, then it will run the PushStudentInfo() to make room for the incoming information. 

void DoublyLinkedList::UpdateStudentInfo(Node temp_Student, unsigned short position) {

    int num = 0;
    
    Node* temp = new Node; 
    Node* currentPos = head_; 
    /*temp->name = temp_Student.name;
    temp->address = temp_Student.address;
    temp->phone = temp_Student.phone; 
    temp->id = temp_Student.id; */

    for (int o = 0; 0 < position; o++) {

        currentPos = currentPos->next; 
    }
    //to get to the position you need to change. 

    if (position <= (num_entries_ + 1) and position >= 0) {


        std::cout << "1: Address. 2: Name. 3: Phone. 4: ID. \n" << std::endl;
        std::cout << "Which variable would you like to change? " << std::endl;

        std::cin >> num;
        switch (num) {

        case 1:

            std::cout << "Enter the new Address (no spaces): " << std::endl;
            std::cin >> temp_Student.address;

            currentPos->address = temp_Student.address; 


            break;
        case 2:

            std::cout << "Enter the new first name: " << std::endl;
            std::cin >> temp_Student.name;

            currentPos->name = temp_Student.name;



            break;
        case 3:
            std::cout << "Enter the new phone number (no dashes): " << std::endl;
            std::cin >> temp_Student.phone;

            currentPos->phone = temp_Student.phone;



            break;

        case 4:
            std::cout << "Enter the new ID: " << std::endl;
            std::cin >> temp_Student.id;

            currentPos->id = temp_Student.id;



            break;
        }

    }
    else {
        std::cout << "The position you entered is out of the scope." << std::endl;

    }





}
//Updates a student's info at certain position

void DoublyLinkedList::DisplayStudentInfo(unsigned short position) {

    if (position < GetNumOfItems() && position >= 0) {

        Node *current = head_;
        for (int i = 0; i < position; i++) { // Loops from the beginning to the position. 
            current = current->next;
        }
        std::cout << "The info for " << current->name << " is as follows: " << std::endl;

        std::cout << "\nID: " << current->id << std::endl;
        std::cout << "Name: " << current->name << std::endl;
        std::cout << "Phone Number: " << current->phone << std::endl;
        std::cout << "Address: " << current->address << std::endl;


    }
    else {
        std::cout << "Error! There is nobody to speak of in that index." << std::endl;
    }
    

}
//Displays info of a student at certain position.

Node DoublyLinkedList::RetrieveStudentInfo(unsigned short position) {

    while (position > GetNumOfItems() and position < 0) {

        std::cout << "Wrong input. Please enter a valid position: " << std::endl;
        std::cin >> position;

    }

    
    if (position <= GetNumOfItems() and position > 0) {

        Node* current = head_;
        for (int i = 0; i < position; i++) { // Loops from the beginning till the position trying to update
            current = current->next;
        }

        return *current; 

    }



}
//Returns a student's info from a certain position
void DoublyLinkedList::RemoveStudentatPosition(unsigned short position) {

    if (position >= 0 && position <= num_entries_) {
        Node* curr_position_ = head_; 
        
        if (position == num_entries_) {

            curr_position_ = curr_position_->prev;
        }
        else if (position == 0) {

            curr_position_ = curr_position_->next; 
            if (head_ != nullptr) {

                head_->prev = nullptr; 

            }
            else {
                tail_ = nullptr;
            }

        }
        else {
            for (int snake_ = 0; snake_ < position; snake_++) {
                curr_position_->prev->next = curr_position_->next; //to point from previous to next 
                curr_position_->next->prev = curr_position_->prev; 

            }
        }


    }

}

void DoublyLinkedList::Menu() {

    int menu_option_ = 0;
    int remove_pos_ = 0;
    Node* current = head_; 

    while (menu_option_ != 200) {

        std::cout << "         MENU    " << std::endl;
        std::cout << "1. Get Capacity of the list. (DELETED). " << std::endl;
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

            break; 

        case 2:

            std::cout << "The list is deleted." << std::endl;
            DoublyLinkedList::~DoublyLinkedList();
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

            std::cout << "What position is your student in? " << std::endl;
            std::cin >> i_;

            RemoveStudentatPosition(i_); 

            std::cout << "Your student is deleted." << std::endl; 
            

            break;

        case 7:


            std::cout << "What position is your student in? " << std::endl;
            std::cin >> i_;

            if (i_ > num_entries_) {
                std::cout << "Enter a position that has a student next time." << std::endl;
            }
            else {

                RetrieveStudentInfo(i_);

                DoublyLinkedList::DisplayStudentInfo(i_);

                while (choice != 3) { //if the user enters a valid position, then it will reveal these options. 

                    std::cout << "Here are your options: " << std::endl;
                    std::cout << "1. Go to next person in list." << std::endl;
                    std::cout << "2. Go to previous person in list." << std::endl;
                    std::cout << "3. Quit." << std::endl;
                    std::cout << "4. Remove current. (DELETED)." << std::endl;
                    std::cout << "Which option do you pick? ";

                    std::cin >> choice;

                    switch (choice) {

                    case 1:
                        i_ += 1;

                        RetrieveStudentInfo(i_);
                        DoublyLinkedList::DisplayStudentInfo(i_);
                        break;

                    case 2:

                        i_ -= 1;

                        RetrieveStudentInfo(i_);
                        DoublyLinkedList::DisplayStudentInfo(i_);
                        break;

                    case 3:

                        break;

                    case 4:

                     
                         
                        //idk what goes here. 

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








 










