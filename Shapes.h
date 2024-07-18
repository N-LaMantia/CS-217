#pragma once
#include <iostream>


//Author: Nicholas LaMantia
//Date: November 14, 2023
//Program: Shapes.h
//Purpose: the header file to declare every function within each class. 


class Shape { //parent class
public:
	virtual void Scale(float scaleFactor) = 0; //scales the values per shape
	virtual void Display() const = 0; //each shape will have a display function, displaying important information about the shape. 
	//virtual ~Shape() = 0;
};

class Shape2D : virtual public Shape { //child class to shape 
public:
	virtual float Area() const = 0; //each 2D shape will have an area, this will calculate it. 
	void ShowArea() const;// each shape2D will have a show area, this will pull from the Area() function. 
	virtual std::string GetName2D() const = 0;// each shape2D will have a GetName2D() function which gets the name of the shape. 
	bool operator>(const Shape2D& rhs) const; //shape2D shapes have overloaded operators so we can determine which one is biggest and smallest. 
	bool operator<(const Shape2D& rhs) const;
	bool operator==(const Shape2D& rhs) const;
};

class Shape3D : virtual public Shape { //child class to shape 
public:
	virtual float Volume() const = 0;//each shape3D has a Volume() 
	void ShowVolume() const;
	virtual std::string GetName3D() const = 0;
	bool operator>(const Shape3D& rhs) const;
	bool operator<(const Shape3D& rhs) const;
	bool operator==(const Shape3D& rhs) const;
};

class Square : virtual public Shape2D {   //child class to shape2d

  std::string name = "Square"; 
public: 
  Square(); //constructor
  ~Square(); //deconstructor 
  Square(float side); //constructor
  float Area() const;
  void ShowArea() const;
  std::string GetName2D() const;
  void Scale(float scaleFactor);
  void Display() const;

private:
  float side_; 

	
};

class Rectangle : virtual public Shape2D {    //child class to shape2d

  std::string name = "Rectangle";


public:
  Rectangle(); 
  Rectangle(float width, float height); 
  ~Rectangle(); 
	float Area() const;
	void ShowArea() const; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName2D() const; 

private:
  float width_;
  float height_; 

};

class Triangle : virtual public Shape2D {

  std::string name = "Triangle"; 

public: 

  Triangle(); 
  Triangle(float base, float height); 
  ~Triangle(); 
	float Area() const;
	void ShowArea() const;
	std::string GetName2D() const; 
	 
	void Scale(float scaleFactor);
	void Display() const;

private:
  float base_; 
  float height_; 

};

class Circle : virtual public Shape2D {

  std::string name = "Circle"; 

public:

  Circle(); 
  Circle(float radius); 
  ~Circle(); 
	float Area() const; 
	void ShowArea() const;
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName2D() const; 

private:
  float radius_; 
};

class Ellipse : virtual public Shape2D {

  std::string name = "Elipse"; 

public: 
  Ellipse(); 
  Ellipse(float semi_minor_axis, float semi_major_axis); 
  ~Ellipse(); 
	float Area() const;
	void ShowArea() const; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName2D() const; 

private:
  float semi_minor_axis_, semi_major_axis_; 

};

class Trapezoid : virtual public Shape2D {

  std::string name = "Trapezoid"; 


public: 
  Trapezoid(); 
  Trapezoid(float side_length_a, float side_length_b, float height); 
  ~Trapezoid(); 
	float Area() const; 
	void ShowArea() const; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName2D() const; 

private:
  float side_length_a_, side_length_b_, height_; 

};

class Sector : virtual public Shape2D {

  std::string name = "Sector"; 

public: 
  Sector(); 
  Sector(float radius, float angle_in_degrees); 
  ~Sector(); 
	float Area() const; 
	void ShowArea() const; 
	std::string GetName2D() const; 
	void Scale(float scaleFactor);
	void Display() const;

private:
  float radius_, angle_in_degrees_; 

};



class TriangularPyramid : virtual public Shape3D, private Triangle {

  std::string name = "Triangular Pyramid"; 
private:
  float pyramid_height_; 
 

public: 
  TriangularPyramid(); 
  TriangularPyramid(float pyramid_height, float triangle_height, float triangle_base); 
  ~TriangularPyramid(); 
  float Volume() const; 
	void ShowVolume() const; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName3D() const; 

};

class RectangularPyramid : virtual public Shape3D, private Rectangle {

std::string name = "Rectangular Pyramid"; 
private:
  float height_; 

public: 
  RectangularPyramid(); 
  RectangularPyramid(float height, float length, float width); 
  ~RectangularPyramid(); 
	float Volume() const; 
	void ShowVolume() const;
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName3D() const; 
};

class Cylinder : virtual public Shape3D, private Circle {


  std::string name = "Cylinder"; 

private: 
  float height_; 

public: 
  Cylinder(); 
  Cylinder(float height, float radius); 
  ~Cylinder(); 
	float Volume() const; 
	void ShowVolume()const ; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName3D() const; 


};

class Sphere : virtual public Shape3D, private Circle {

  std::string name = "Sphere"; 
private: 
  float radius_; 

public: 
  Sphere(); 
  Sphere(float radius); 
  ~Sphere(); 

	float Volume() const; 
	void ShowVolume() const; 
	void Scale(float scaleFactor);
	void Display() const;
	std::string GetName3D() const; 

};

float menu(); 

