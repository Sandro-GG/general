/* 
    CH-230-A
    a12_p1
    Shapes.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

/* 
	Classic shape examples: an inheritance tree in a geometric context
*/
#ifndef __SHAPES_H
#define __SHAPES_H
#include <string>

class Shape {			// base class
	private:   				// private access modifier: could also be protected
		std::string name;   // every shape will have a name
	public:
		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x,y;  // the center of the shape
	public:
		CenteredShape(const std::string&, double, double);  // usual three constructors
		CenteredShape();
		CenteredShape(const CenteredShape&);
		void move(double, double);	// moves the shape, i.e. it modifies it center
};

// a regular polygon is a centered_shape with a number of edges
class RegularPolygon : public CenteredShape {
	private: 
		int EdgesNumber;
	public:
		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
	private:
		double Radius;
	public:
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

// create hexagon derived class
class Hexagon : public RegularPolygon {
	private:
		double side;
		std::string color;
	public:
		// constructor
		Hexagon(const std::string&, double, double, int, double,
				const std::string&);
		Hexagon();
		Hexagon(const Hexagon&);
		~Hexagon();

		void setside(double nside);
		void setcolor(std::string ncolor);
		double getside() const;
		std::string getcolor() const;

		double area() const;
		double perimeter() const;
		
};

    
#endif