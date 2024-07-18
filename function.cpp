

#include <iostream>
#include <string>
#include <list> 
#include "myList.h"
#include <vector>


void MyList::pop_front() {

	MyList my_list_ = MyList();

	int i = -1;


	while (i != 0) {


		std::cout << "Enter integers to be entered in a list ";
		std::cin >> i;

		my_list_.push_back(i);

	}




	std::cout << "The first element in the list is " << my_list_.front() << std::endl;

	int list_zero_ = my_list_.front(); 

	list::remove(my_list_.front()); 

	my_list_.front() = my_list_.front() + 1; 


	if (my_list_.front() != list_zero_) {

		std::cout << "The first element is deleted." << std::endl; 
	}
	else {
		std::cout << "The first element is not deleted."; 
	}

}