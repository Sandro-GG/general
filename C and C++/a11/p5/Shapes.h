/* 
    CH-230-A
    a11_p5
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
        void setName(std::string& nname);
        std::string getName();

		Shape(const std::string&);  // builds a shape with a name
		Shape();					// empty shape
		Shape(const Shape&);		// copy constructor
		void printName() const ;  	// prints the name  
};

class CenteredShape : public Shape {  // inherits from Shape
	private: 
		double x, y;  // the center of the shape
	public:
        void setx(double nx); // setters
        void sety(double ny);
        double getx(); // getters
        double gety();

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
        void setEdges(int nEdgesNumber);
        int getEdges();

		RegularPolygon(const std::string&, double, double, int);
		RegularPolygon();
		RegularPolygon(const RegularPolygon&);
};

// a Circle is a shape with a center and a radius
class Circle : public CenteredShape {
	private:
		double Radius;
	public:
        void setRadius(double nRadius);
        double getRadius();

        double perimeter(); // perimeter and area methods
        double area();

        // usual trio
		Circle(const std::string&, double, double, double);
		Circle();
		Circle(const Circle&);
};

class Rectangle : public RegularPolygon {
    private:
        double width;
        double height;
    public:
        void setWidth(double nwidth);
        void setHeight(double nheight);
        double getwidth();
        double getheight();

        double perimeter(); // methods
        double area();

        // usual trio
        Rectangle(const std::string&, double, double, double, double);
        Rectangle();
        Rectangle(const Rectangle&);
};

class Square: public Rectangle {
    private:
        double side;
    public:
        void setSide(double nside);
        double getSide();

        double perimeter(); // methods
        double area();

        // usual trio
        Square(const std::string&, double, double, double);
        Square();
        Square(const Square&);
};

#endif