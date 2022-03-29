/* 
    CH-230-A
    a11_p5
    Shapes.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

// please refer to shapes.h for methods documentation

#include <iostream>
#include "Shapes.h"
// everything's self-explanatory here
using namespace std; 

void Shape::printName() const {
	cout << "Shape name: " << name << endl;
}

void Shape::setName(string& newname) {
    name = newname;
}

string Shape::getName() {
    return name;
}

Shape::Shape(const string& n) : name(n) {
}

Shape::Shape() {
    name = "default shape";
}

void CenteredShape::setx(double newx) {
    x = newx;
}

void CenteredShape::sety(double newy) {
    y = newy;
}

double CenteredShape::getx() {
    return x;
}

double CenteredShape::gety() {
    return y;
}

CenteredShape::CenteredShape(const string& n, double nx, double ny): Shape(n) {
	x = nx;
	y = ny;
}

CenteredShape::CenteredShape() : Shape() {
    x = 0;
    y = 0;
}

void RegularPolygon::setEdges(int newEdgesNumber) {
    EdgesNumber = newEdgesNumber;
}

int RegularPolygon::getEdges() {
    return EdgesNumber;
}

RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nl) :
	CenteredShape(n,nx,ny) 
{
	EdgesNumber = nl;
}

RegularPolygon::RegularPolygon() : CenteredShape() {
    EdgesNumber = 0;
}

void Circle::setRadius(double newRadius) {
    Radius = newRadius;
}

double Circle::getRadius() {
    return Radius;
}

double Circle::perimeter() {
    return 2 * 3.14 * Radius;
}

double Circle::area() {
    return 3.14 * Radius * Radius;
}

Circle::Circle() : CenteredShape() {
    Radius = 0;
}

Circle::Circle(const string& n, double nx, double ny, double r) : 
    CenteredShape(n,nx,ny) 
{
	Radius = r;
}

void Rectangle::setWidth(double newwidth) {
    width = newwidth;
}

void Rectangle::setHeight(double newheight) {
    height = newheight;
}

double Rectangle::getwidth() {
    return width;
}

double Rectangle::getheight() {
    return height;
}

double Rectangle::perimeter() {
    return (width + height) * 2;
}

double Rectangle::area() {
    return width * height;
}

Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth,
                     double nheight) : RegularPolygon(n, nx, ny, 4) {
    width = nwidth;
    height = nheight;
}

Rectangle::Rectangle() : RegularPolygon() {
    width = 0;
    height = 0;
}

void Square::setSide(double nside) {
    side = nside;
}

double Square::getSide() {
    return side;
}

double Square::perimeter() {
    return 4 * side;
}

double Square::area() {
    return side * side;
}

Square::Square(const string& n, double nx, double ny, double nside) :
        Rectangle(n, nx, ny, nside, nside) {
    side = nside;
}

Square::Square() : Rectangle() {
    side = 0;
}