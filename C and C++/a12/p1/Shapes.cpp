/* 
    CH-230-A
    a12_p1
    Shapes.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include <cmath>
#include "Shapes.h"

using namespace std; 

// added empty and copy constructors to each class
Shape::Shape(const string& n) : name(n) {
}

void Shape::printName() const {
	cout << name << endl;
}

Shape::Shape() {
	name = "default shape";
}

Shape::Shape(const Shape& h) {
	name = h.name;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape() {
	x = 0;
	y = 0;
}

CenteredShape::CenteredShape(const CenteredShape& h) : Shape(h) {
	x = h.x;
	y = h.y;
}	

RegularPolygon::RegularPolygon() : CenteredShape() {
	EdgesNumber = 0;
}

RegularPolygon::RegularPolygon(const RegularPolygon& h)
				: CenteredShape(h) {
	EdgesNumber = h.EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
  CenteredShape(n,nx,ny) 
{
	Radius = r;
}

void Hexagon::setside(double nside) {
	side = nside;
}

void Hexagon::setcolor(string ncolor) {
	color = ncolor;
}

double Hexagon::getside() const {
	return side;
}

string Hexagon::getcolor() const {
	return color;
}

// empty constructor
Hexagon::Hexagon() : RegularPolygon() {
	side = 0;
	color = "default color";
}

// parametric constructor
Hexagon::Hexagon(const string& n, double nx, double ny, int nl, double nside, 
				 const string& ncolor) : RegularPolygon(n, nx, ny, 6) {
	side = nside;
	color = ncolor;
}

// copy constructor
Hexagon::Hexagon(const Hexagon& h) : RegularPolygon(h) {
	side = h.side;
	color = h.color;
}

// destructor
Hexagon::~Hexagon() {
	cout << "Hexagon destructor being called" << endl;
}

// computing area
double Hexagon::area() const {
	return (side * side * 3 * sqrt(3) / 2);
}

// computing perimeter 
double Hexagon::perimeter() const {
	return (6 * side);
}