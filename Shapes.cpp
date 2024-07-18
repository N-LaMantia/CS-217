//
//Author: Nicholas LaMantia
// Date: November 3, 2023
// Program: Shapes.cpp
// Purpose: To define the functions of the different shapes. 
//
//
//
//
//
#include <iostream>
#include "Shapes.h"
#include <math.h>
#include <vector> 

//2D Shapes Below! 


//SQUARE - inherits from Shape2D

Square::Square() :side_(0) {}; //default constructor 

Square::Square(float side) : side_(side) {}; //if input value, goes to this contructor 

Square::~Square() {

  //deconstructor 
  
}

float Square::Area() const //returns the area of a square
{

	return pow(side_, 2);
}

void Square::ShowArea() const { //couts the area using the Area function above 



  std::cout << "The area is: " << Area() << std::endl; 

}

std::string Square::GetName2D() const { //gets the name of the shape 

  return name; 




}

void Square::Display() const { // displays info about the shape. 

  std::cout << "Shape: " << GetName2D() << std::endl; 

  ShowArea(); 
  
  std::cout << "The length is: " << side_ << std::endl; 
  //add more later (?) 




}

void Square::Scale(float scaleFactor) { //scales the shape based on user input for scaleFactor. 


  side_ *= scaleFactor; 


}


//RECTANGLE - Inherits from shape2D


Rectangle::Rectangle() :width_(0), height_(0) {}; //default contructor 

Rectangle::Rectangle(float width, float height) : width_(width), height_(height) {}; //if there's input, then this constructor is called

Rectangle::~Rectangle() {
//deconstructor 
}


float Rectangle::Area() const //returns the area of a rectangle. 
{
	return width_ * height_; 
}

void Rectangle::ShowArea() const { //gets the area and displays it. 
  
  std::cout << "The area is: " << Area() << std::endl; 


}

void Rectangle::Scale(float scaleFactor)  { //scales the shape 

  width_ *= scaleFactor; 
  height_ *= scaleFactor; 

}

void Rectangle::Display() const { //displays info about shape

  std::cout << "Shape: " << GetName2D() << std::endl; 

  std::cout << "The width of your rectangle is: " << width_ << std::endl; 
  std::cout << "The height of your rectangle is: " << height_ << std::endl; 

  ShowArea(); 

}

std::string Rectangle::GetName2D() const //gets the name of the shape 
{
  return name; 
}




//TRIANGLE - Inherits from shape2D



Triangle::Triangle() : base_(0), height_(0) //default constructor 
{
}

Triangle::Triangle(float base, float height) : base_(base), height_(height) {}; //if there's arguments, this constructor is called. 

Triangle::~Triangle() {}; //deconstructor. 


float Triangle::Area() const //returns the area of a triangle. 
{
	return (0.5 * base_ * height_);
}

void Triangle::ShowArea() const{ //shows the area

  std::cout << "The area of the triangle is: " << Area() << std::endl; 

}

std::string Triangle::GetName2D() const //gets the name of the shape 
{
  return name; 
}

void Triangle::Scale(float scaleFactor) //scales the triangle. 
{

  base_ *= scaleFactor; 
  height_ *= scaleFactor; 

}

void Triangle::Display() const //displays important info. 
{

  std::cout << "Shape: " << GetName2D() << std::endl; 

  std::cout << "The base length is: " << base_ << std::endl; 

  std::cout << "The height is: " << height_ << std::endl; 

  ShowArea(); 

}




//CIRCLE - Inherits from shape2D



Circle::Circle() : radius_(0) //default constructor
{
}

Circle::Circle(float radius) : radius_(radius) {}; //if there's arguments, this constructor is called.. 

Circle::~Circle() {
//deconstructor
}; 

float Circle::Area() const //returns the area of a circle. 
{
	const float PI = 3.14159f; //pi.. 3.14159265358979... 


	return (PI * pow(radius_, 2)); 

}

void Circle::ShowArea() const //displays the area...
{

  std::cout << "The area is: " << Area() << std::endl;


}

void Circle::Scale(float scaleFactor) //scales the circle 
{

  radius_ *= scaleFactor; 

}

void Circle::Display() const //displays info 
{

  std::cout << "Shape: " << GetName2D() << std::endl; 

  std::cout << "The radius is: " << radius_ << std::endl; 

  ShowArea(); 


}

std::string Circle::GetName2D() const //gets the name 
{
  return name; 

}











//ELIPSE - Inherits from shape2D



Ellipse::Ellipse() : semi_major_axis_(0), semi_minor_axis_(0) //default constructor 
{
}
Ellipse::Ellipse(float semi_minor_axis, float semi_major_axis) : semi_major_axis_(semi_major_axis), semi_minor_axis_(semi_minor_axis)
{ //if there's arguments, this constructor gets called. 
}

Ellipse::~Ellipse()
{
  //deconstructor
}



float Ellipse::Area() const //returns area of ellipse. 
{

	const float PI = 3.14159f;

	return (PI * semi_minor_axis_ * semi_major_axis_); 
}

void Ellipse::ShowArea() const //displays area of ellipse
{

  std::cout << "The area is: " << Area() << std::endl; 

}

void Ellipse::Scale(float scaleFactor) //scales the shape 
{

  semi_major_axis_ *= scaleFactor; 
  semi_minor_axis_ *= scaleFactor; 

}

void Ellipse::Display() const //displays the ellipse info 
{

  std::cout << "Shape: " << GetName2D() << std::endl;

  std::cout << "Semi-major axis: " << semi_major_axis_ << std::endl; 

  std::cout << "Semi-minor axis: " << semi_minor_axis_ << std::endl; 

  ShowArea(); 


}

std::string Ellipse::GetName2D() const //gets the name of the shape. 
{
  return name; 
}






//TRAPEZOID - Inherits from shape2D


Trapezoid::Trapezoid() : side_length_a_(0), side_length_b_(0), height_(0) //default constructor 
{
}

Trapezoid::Trapezoid(float side_length_a, float side_length_b, float height) : side_length_a_(side_length_a), side_length_b_(side_length_b), height_(height)
{// non-default constructor. See others above... 
}

Trapezoid::~Trapezoid()
{ //deconstructor 
}


float Trapezoid::Area() const //returns the area of the trapezoid 
{
	return (0.5 * (side_length_a_ + side_length_b_) * height_);
}

void Trapezoid::ShowArea() const // displays area 
{
  std::cout << "The area of the Trapezoid is: " << Area() << std::endl; 
}

void Trapezoid::Scale(float scaleFactor) //scales the shape
{

  side_length_a_ *= scaleFactor; 
  side_length_b_ *= scaleFactor; 
  height_ *= scaleFactor; 

}

void Trapezoid::Display() const //displays the shape info
{

  std::cout << "Shape: " << GetName2D() << std::endl;

  std::cout << "Side length a: " << side_length_a_ << std::endl; 

  std::cout << "Side length b: " << side_length_b_ << std::endl; 

  std::cout << "The height is: " << height_ << std::endl; 

  ShowArea(); 


}

std::string Trapezoid::GetName2D() const //gets the name of the shape. 
{
  return name; 
}







//SECTOR - Inherits from shape2D 


Sector::Sector() : radius_(0), angle_in_degrees_(0) {}; //default constructor

Sector::Sector(float radius, float angle_in_degrees) : radius_(radius), angle_in_degrees_(angle_in_degrees) {}; 
//above is the non-default constructor. See above shapes for details. 
Sector::~Sector() {}; //deconstructor. 



float Sector::Area() const //returns the area. 
{
	const float PI = 3.14159f;
	float angle_in_radians = angle_in_degrees_ * (PI / 180); //converting from degrees to radians 



	return (0.5 * pow(radius_, 2) * angle_in_radians); 

}

void Sector::ShowArea() const //displays area
{

  std::cout << "The area is: " << Area() << std::endl; 

}

std::string Sector::GetName2D() const //returns the name of the shape. 
{
  return name; 
}

void Sector::Scale(float scaleFactor) //scales the shape. 
{

  radius_ *= scaleFactor; 

}

void Sector::Display() const //displays sector info 
{

  std::cout << "Shape: " << GetName2D() << std::endl; 

  std::cout << "The radius is: " << radius_ << std::endl; 

  std::cout << "The angle in degrees is: " << angle_in_degrees_ << std::endl; 

  ShowArea(); 


}








//3D shapes below 



//Triangular Pyramid - Inherits from shape3D and triangle. 

TriangularPyramid::TriangularPyramid() : pyramid_height_(0), Triangle() {}; //default constructor 

TriangularPyramid::TriangularPyramid(float pyramid_height, float triangle_height, float triangle_base) 
  : pyramid_height_(pyramid_height), Triangle(triangle_height, triangle_base)  {}; //non-default constructor , see above shapes. 
//also, this constructor creates a triangle object within it so it can pull information such as the height and base of the traingle for
//calculation. 

TriangularPyramid::~TriangularPyramid() {
  //deconstructor 
}

float TriangularPyramid::Volume() const //gets the volume instead of area because it's 3D. 
{
  
  float triangle_area_ = Triangle::Area(); 
  return (triangle_area_ * pyramid_height_) / 3; 
	
}

void TriangularPyramid::ShowVolume() const // displays the volume. 
{
  std::cout << "The volume of the triangular pyramid is: " << Volume() << std::endl; 

}

void TriangularPyramid::Scale(float scaleFactor) //scales the shape. 
{
  Triangle::Scale(scaleFactor); 

  pyramid_height_ *= scaleFactor; 


}

void TriangularPyramid::Display() const //displays info about shape. 
{

  std::cout << "Shape: " << GetName3D() << std::endl; 


  std::cout << "The area of the base triangle is: " << Triangle::Area() << std::endl; 

  std::cout << "The height of the pyramid is: " << pyramid_height_ << std::endl; 

  ShowVolume(); 

}

std::string TriangularPyramid::GetName3D() const //gets the name. 
{
  return name; 
}








//Rectangular Pyramid - Inherits from shape3D and rectangle. 



RectangularPyramid::RectangularPyramid() : height_(0) {};//default constructor
RectangularPyramid::RectangularPyramid(float height, float length, float width) : height_(height), Rectangle(width, length) {}; 
//non-default constructor. Creates a rectangle object to pull width and length from. 

RectangularPyramid::~RectangularPyramid() {}; //deconstructor. 


float RectangularPyramid::Volume() const //returns volume. 
{
  float rectangle_area_ = Rectangle::Area(); 
  return (rectangle_area_ * height_) / 3;


}

void RectangularPyramid::ShowVolume() const //displays volume. 
{

  std::cout << "The volume of the rectangle is: " << Volume() << std::endl; 

}

void RectangularPyramid::Scale(float scaleFactor)//sclaes the shape 
{
  Rectangle::Scale(scaleFactor); 

  height_ *= scaleFactor; 
}

void RectangularPyramid::Display() const //displays information about shape. 
{
  std::cout << "Shape: " << GetName3D() << std::endl; 

  std::cout << "The area of the rectangle is: " << Rectangle::Area() << std::endl; 

  std::cout << "The height of the rectangular pyramid is: " << height_ << std::endl; 

  ShowVolume(); 



}

std::string RectangularPyramid::GetName3D() const //gets name of shape. 
{
  return name; 
}






//Cylinder - inherits from shape3D and circle. 

Cylinder::Cylinder() : height_(0) {}; //default constructor 

Cylinder::Cylinder(float height, float radius) : height_(height), Circle(radius) {}; //non-default constructor. Creates a circle object to 
//use for calcualtion and functions. 

Cylinder::~Cylinder() {} //deconstructor. 


float Cylinder::Volume() const // returns volume. 
{
  

  return Circle::Area() * height_; 
  
}

void Cylinder::ShowVolume() const //displays volume 
{
  
  std::cout << "The volume of the cylinder is: " << Volume() << std::endl; 
}

void Cylinder::Scale(float scaleFactor) //scales shape 
{

  Circle::Scale(scaleFactor); 
  height_ *= scaleFactor; 

}

void Cylinder::Display() const //displays info about shape. 
{
  std::cout << "Shape: " << GetName3D() << std::endl; 

  std::cout << "The area of the circle is: " << Circle::Area() << std::endl; 

  std::cout << "The height of the cylinder is: " << height_ << std::endl; 

  ShowVolume(); 

}

std::string Cylinder::GetName3D() const //gets name of shape. 
{
  return name; 
}










//Sphere - Inherits from shape3D and circle

Sphere::Sphere() : radius_(0) {}; //defualt constructor

Sphere::Sphere(float radius) : radius_(radius), Circle(radius) {}; //non-default constructor. Creates circle object to use for calculation and 
//functions. 

Sphere::~Sphere() {} //deconstructor. 


float Sphere::Volume() const //returns volume 
{

  const float pi = 3.14159f; 

  return (4 * pi * pow(radius_, 3)) / 3; 

}

void Sphere::ShowVolume() const //displays volume 
{

  std::cout << "The volume of the sphere is: " << Volume() << std::endl; 

}

void Sphere::Scale(float scaleFactor) //scales object. 
{

  Circle::Scale(scaleFactor); 
  radius_ *= scaleFactor; 

}

void Sphere::Display() const //displays info on object. 
{

  std::cout << "Shape: " << GetName3D() << std::endl; 

  std::cout << "The area of the circle is: " << Circle::Area() << std::endl; 

  std::cout << "The radius of the sphere is: " << radius_  << std::endl; 

  ShowVolume(); 

}

std::string Sphere::GetName3D() const //gets name of shape. 
{
  return name; 
}



bool Shape2D::operator>(const Shape2D& rhs) const //2D: overloading > operator. Returns a comparison: called object > argument object. 
{
  return this->Area() > rhs.Area(); 
}

bool Shape2D::operator<(const Shape2D& rhs) const //2D: overloading < operator. Returns a comparison: called object < argument object.
{
  return this->Area() < rhs.Area(); 
}

bool Shape2D::operator==(const Shape2D& rhs) const //2D: overloading == operator. Returns a comparison: called object == argument object.
{
  return this->Area() == rhs.Area(); 
}

bool Shape3D::operator>(const Shape3D& rhs) const //3D: verloading > operator. Returns a comparison: called object > argument object.
{
  return this->Volume() > rhs.Volume(); 

}

bool Shape3D::operator<(const Shape3D& rhs) const //3D: overloading < operator. Returns a comparison: called object < argument object.
{
  return this->Volume() < rhs.Volume(); 

}

bool Shape3D::operator==(const Shape3D& rhs) const //3D: overloading == operator. Returns a comparison: called object == argument object.
{
  return this->Volume() == rhs.Volume(); 
}


