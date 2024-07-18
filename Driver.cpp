// CS-217-Project.cpp : This file contains the 'main' function. Program execution begins and ends there.
//



//Author: Nicholas LaMantia 
//Date: 12/2/2023
//Program: Driver.cpp
//Purpose: This file includes the main function and code. 


#include "Shapes.h"
#include <iostream>
#include <vector>
#include <string>

int main()
{

  float scaleFactor = 0;
  std::vector<Shape2D*> two_d_shape; //2D shape vector

  two_d_shape.push_back(new Square);
  two_d_shape.push_back(new Square(4)); //do this for all shapes. 
  //this will create a long vector with initialized shapes. 
  two_d_shape.push_back(new Rectangle);
  two_d_shape.push_back(new Rectangle(3, 4));
  two_d_shape.push_back(new Triangle);
  two_d_shape.push_back(new Triangle(4, 4.4));
  two_d_shape.push_back(new Circle);
  two_d_shape.push_back(new Circle(4));
  two_d_shape.push_back(new Ellipse);
  two_d_shape.push_back(new Ellipse(4.5, 2.5));
  two_d_shape.push_back(new Trapezoid);
  two_d_shape.push_back(new Trapezoid(3, 5.5, 9));
  two_d_shape.push_back(new Sector);
  two_d_shape.push_back(new Sector(12, 90));



  std::vector<Shape3D*> three_d_shape; //3D shape vector

  three_d_shape.push_back(new TriangularPyramid);
  three_d_shape.push_back(new TriangularPyramid(4, 4, 4)); //do this for all shapes. 
  //this will create a long vector with initialized shapes. 
  three_d_shape.push_back(new RectangularPyramid);
  three_d_shape.push_back(new RectangularPyramid(3, 3, 3));
  three_d_shape.push_back(new Cylinder);
  three_d_shape.push_back(new Cylinder(4, 4.4));
  three_d_shape.push_back(new Sphere);
  three_d_shape.push_back(new Sphere(3.9));



  std::vector<Shape*> all_shapes; //Shapes in general vector

  all_shapes.push_back(new Square);//initializing all shapes
  all_shapes.push_back(new Square(4));
  all_shapes.push_back(new Rectangle);
  all_shapes.push_back(new Rectangle(3, 4));
  all_shapes.push_back(new Triangle);
  all_shapes.push_back(new Triangle(4, 4.4));
  all_shapes.push_back(new Circle);
  all_shapes.push_back(new Circle(4));
  all_shapes.push_back(new Ellipse);
  all_shapes.push_back(new Ellipse(4.5, 2.5));
  all_shapes.push_back(new Trapezoid);
  all_shapes.push_back(new Trapezoid(3, 5.5, 9));
  all_shapes.push_back(new Sector);
  all_shapes.push_back(new Sector(12, 90));
  all_shapes.push_back(new TriangularPyramid);
  all_shapes.push_back(new TriangularPyramid(4, 4, 4));
  all_shapes.push_back(new RectangularPyramid);
  all_shapes.push_back(new RectangularPyramid(3, 3, 3));
  all_shapes.push_back(new Cylinder);
  all_shapes.push_back(new Cylinder(4, 4.4));
  all_shapes.push_back(new Sphere);
  all_shapes.push_back(new Sphere(3.9));



  //MENU BELOW

  int input_ = 0;
  std::cout << "     MENU      " << std::endl;
  /*
  std::cout << "1. Make a Square." << std::endl;
  std::cout << "2. Make a Rectangle." << std::endl;
  std::cout << "3. Make a Triangle." << std::endl;
  std::cout << "4. Make a Circle." << std::endl;
  std::cout << "5. Make a Ellipse." << std::endl;
  std::cout << "6. Make a Trapezoid." << std::endl;
  std::cout << "7. Make a Sector." << std::endl;

  std::cout << "8. Make a Triangular Pyramid." << std::endl;
  std::cout << "9. Make a Rectangular Pyramid." << std::endl;
  std::cout << "10. Make a Cylinder." << std::endl;
  std::cout << "11. Make a Sphere." << std::endl;
  */
  std::cout << "12. Quit." << std::endl;
  std::cout << "13. Scale." << std::endl;
  std::cout << "14. Get smallest 2D shape. " << std::endl;
  std::cout << "15. Get largest 2D shape. " << std::endl;
  std::cout << "16. Get smallest 3D shape. " << std::endl;
  std::cout << "17. Get largest 3D shape. " << std::endl;
  std::cout << "18. Sort! " << std::endl;
  std::cout << "19. Search! Sort first please. " << std::endl;
  std::cout << "20. Test 2D Shapes. " << std::endl;
  std::cout << "21. Test 3D Shapes. " << std::endl;
  std::cout << "22. Test all shapes. " << std::endl;


  std::cout << "What decision do you want to make? " << std::endl;

  std::cin >> input_;

  while (input_ != 12) {

    int low = 0; //variables
    float x = 0;
    int mid = 0; 
    int position = -1; 
    int high = two_d_shape.size();

    switch (input_) { //switch statement based on user input
    case 12:
    {
      //quit
      for (int i = 0; i < two_d_shape.size(); i++) { //deletes shapes from memory

        delete two_d_shape[i]; 

      }
      for (int i = 0; i < three_d_shape.size(); i++) { //deletes shapes from memory

        delete three_d_shape[i];

      }
      for (int i = 0; i < all_shapes.size(); i++) { //deletes shapes from memory 


        delete all_shapes[i];

      }


      exit(0);
      break;
    }
    case 13:
    {//scale

      std::cout << "Enter a scale factor: " << std::endl;
      std::cin >> scaleFactor;

      std::cout << "Scaling..." << std::endl << std::endl;

      for (unsigned int i = 0; i < all_shapes.size(); i++) { //uses the scale function for each shape in the all_shapes vector,
        //then displays them and their new values. 

        all_shapes[i]->Scale(scaleFactor);

        all_shapes[i]->Display();

        std::cout << std::endl;
      }
      break;
    }
    case 14:
    {
      //get smallest 2d shape. 
      int position = 0;


      for (int i = 0; i < two_d_shape.size(); i++) { //for every shape in the two-D shape vector.. 

        if (*two_d_shape[i] < *two_d_shape[position]) { 

          position = i;

        }
      }
      std::cout << "The smallest 2D shape is: " << std::endl; 
      two_d_shape[position]->Display();
      std::cout << std::endl; 

      break;
    }
    case 15:
    { //get largest 2D shape
      int position = 0;

      for (int i = 0; i < two_d_shape.size(); i++) {//for every shape in the two-D vector.. 

        if (*two_d_shape[i] > *two_d_shape[position]) {

          position = i;

        }
      }
      std::cout << "The largest 2D shape is: " << std::endl;
      two_d_shape[position]->Display();
      std::cout << std::endl; 

      break;
    }
    case 16:
    {
      //get smallest 3D shape
      int position = 0;

      for (int i = 0; i < three_d_shape.size(); i++) { //for every shape in the three-D vector... 

        if (*three_d_shape[i] < *three_d_shape[position]) {

          position = i;
        }
      }
      std::cout << "The smallest 3D shape is: " << std::endl;
      three_d_shape[position]->Display();
      std::cout << std::endl; 
      break;

    }
    case 17:
    {
      //get largest 3D shape
      int position = 0;
      for (int i = 0; i < three_d_shape.size(); i++) { //for every shape in the three-D vector... 

        if (*three_d_shape[i] > *three_d_shape[position]) {

          position = i;
        }
      }
      std::cout << "The largest 3D shape is: " << std::endl;
      three_d_shape[position]->Display();
      std::cout << std::endl; 

      break;

    }
    case 18:
    {
      //sort
      for (int i = 1; i < two_d_shape.size(); i++) {// for every shape in the two-D vector...

        Shape2D* som = two_d_shape[i]; //new Shape2D* variable... 
        int j = i - 1;

        //Moves elements of shapes[0..i - 1] that are greater than 'som' to one
          // position ahead of their current position

        while (j >= 0 && two_d_shape[j]->Area() > som->Area()) {// Insertion sorting... 

          two_d_shape[j + 1] = two_d_shape[j];

          j--;

        }
        two_d_shape[j + 1] = som;


      }
      std::cout << "The vector is sorted." << std::endl;
      break;
    }

    case 19:
    {
      //binary search 
      position = 0; 

      std::cout << "Enter an area to find the shapes greater to or equal to that area: " << std::endl;
      std::cin >> x;

      while (low <= high) { //binary search reduces the amount of items we're searching by half every time, resulting in low = high at the end.
        int mid = low + (high - low) / 2;
        if (two_d_shape[mid]->Area() < x) {// shape at mid's area is less than user input... 

          low = mid + 1;
        }
        else { //greater than user input...
          position = mid; 
          high = mid - 1;
        }
        
        
      }
      two_d_shape[position]->Display(); 

      break;
    }
    case 20:
    {
      //test 2d shapes; 
      std::cout << std::endl;

      std::cout << "2D shapes: " << std::endl;

      for (unsigned int i = 0; i < two_d_shape.size(); i++) { //displays all 2D shapes in the shape2D vector

        two_d_shape[i]->Display();
        std::cout << std::endl;
      }
      std::cout << "\n \n \n \n";
      break;

    }
    case 21:
    {
      //test 3d shapes
      std::cout << std::endl;

      std::cout << "3D shapes: " << std::endl;

      for (unsigned int i = 0; i < three_d_shape.size(); i++) {//displays all 3D shapes in the shape3D vector

        three_d_shape[i]->Display();
        std::cout << std::endl;

      }

      std::cout << "\n \n \n \n";
      break;
    }
    case 22:
    {
      //test all shapes 
      std::cout << std::endl;

      std::cout << "All shapes: " << std::endl;

      for (unsigned int i = 0; i < all_shapes.size(); i++) {//displays all  shapes in the all_shapes vector

        all_shapes[i]->Display();
        std::cout << std::endl;

      }
      std::cout << "\n \n \n \n";
      break;
    }



    }

    std::cout << "     MENU      " << std::endl; //cout the menu again, so that the input can change and the while loop can end. 

    std::cout << "12. Quit." << std::endl;
    std::cout << "13. Scale." << std::endl;
    std::cout << "14. Get smallest 2D shape. " << std::endl;
    std::cout << "15. Get largest 2D shape. " << std::endl;
    std::cout << "16. Get smallest 3D shape. " << std::endl;
    std::cout << "17. Get largest 3D shape. " << std::endl;
    std::cout << "18. Sort! " << std::endl;
    std::cout << "19. Search! Sort first please." << std::endl;
    std::cout << "20. Test 2D Shapes. " << std::endl;
    std::cout << "21. Test 3D Shapes. " << std::endl;
    std::cout << "22. Test all shapes. " << std::endl;

    std::cout << "What decision do you want to make? " << std::endl;

    std::cin >> input_;




    }
  }


  /*
  Square box(10);
  Square box_b(); 
  box.Display(); 

  std::cout << "\n"; 

  Rectangle box_two(3, 3);
  Rectangle box_three(); 
  box_two.Display(); 
  std::cout << "\n";
  
  Triangle triangle(2, 15);
  Triangle trian(); 
  triangle.Display(); 
  std::cout << "\n";


  Circle circle(4); 
  Circle circle_default(); 
  circle.Display(); 
  std::cout << "\n"; 


  Ellipse elipse(4, 16);
  Ellipse elipse_default(); 
  elipse.Display(); 
  std::cout << std::endl; 

  Trapezoid trapezoid(3, 4, 6);
  Trapezoid trapezoid_default();
  trapezoid.Display();
  std::cout << std::endl;


  Sector sector(3, 90);
  Sector sector_default();
  sector.Display();
  std::cout << std::endl;

  TriangularPyramid trianglePyramid(10, 5, 5); 
  trianglePyramid.Display(); 
  std::cout << std::endl; 

  RectangularPyramid rectanglepyramid(10, 5, 5); 
  rectanglepyramid.Display(); 
  std::cout << std::endl; 


  Cylinder cylinder(10, 5); 
  cylinder.Display(); 
  std::cout << std::endl; 


  Sphere sphere(10); 
  sphere.Display(); 
  std::cout << std::endl; 
  
  Square s = new Square; 
  float s; 
  std::cout << "Enter a number for the side length"; 
  std::cin >> s; 

  Square::Area(s); 
  */


  /*
    vector<Shape *> shapes;
    shapes.push_back(new Square);
    shapes.push_back(new Square(1.1));
    shapes.push_back(new Rectangle);
    shapes.push_back(new Rectangle(2.2, 3.3));
    //add more shapes, you should have two different kinds of the same shape per shape.
}*/

