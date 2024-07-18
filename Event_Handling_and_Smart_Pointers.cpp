// Event_Handling_and_Smart_Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <math.h> 


class myObject {

  double* ptr;

public:

  myObject() {

    std::cout << "Constructor is called\n";

    std::cout << "Object points to 900,000,000 new doubles\n";

    double* ptr = new double[900000000]; //may throw exception

  }

  ~myObject() {

    std::cout << "Destructor is called\n";  // no call for delete
    

  }

};



int main()

{

  std::cout << "bad_alloc Exception Testing with unique_ptr\n";

  try {

    std::unique_ptr <myObject[] > ptr(new myObject[50]);

  }

  catch (std::bad_alloc& memoryAllocationException) {

    std::cerr << "Exception occured: " << memoryAllocationException.what() << std::endl;

  }

}

