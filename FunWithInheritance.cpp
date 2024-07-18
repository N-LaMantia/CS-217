// FunWithInheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include <list>
#include "myList.h"


int main()
{
   
	MyList my_list_ = MyList(); 

	int i = -1; 
	

	while (i != 0) {


		std::cout << "Enter integers to be entered in a list "; 
		std::cin >> i; 

		my_list_.push_front(i); 

	}

	my_list_.DisplayAndRemoveAll(); 


	if (my_list_.size() == 0) {

		std::cout << "The list is clear."; 
	}


}

