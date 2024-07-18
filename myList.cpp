#include <iostream>
#include <string>
#include "myList.h"


void MyList::DisplayAndRemoveAll(){


    std::cout << "The size of the list is: " << size() << std::endl; 


    for (int i = 0, n = size(); i < n; i++) {

        std::cout << "The position at " << i << ": " << front() << std::endl;
        pop_front();

    }



}
	





