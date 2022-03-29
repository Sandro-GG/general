/* 
    CH-230-A
    a11_p1
    Box.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
using namespace std;

// setter functions
void Box::setHeight(double newheight) {
    height = newheight;
}

void Box::setWidth(double newwidth) {
    width = newwidth;
}

void Box::setDepth(double newdepth) {
    depth = newdepth;
}

// getter functions
double Box::getHeight() {
    return height;
}

double Box::getWidth() {
    return width;
}

double Box::getDepth() {
    return depth;
}

// constructor functions
Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double newheight, double newwidth, double newdepth) {
    height = newheight;
    width = newwidth;
    depth = newdepth;
}

Box::~Box() {

}

Box::Box(Box &b) {
    height = b.height;
    width = b.width;
    depth = b.depth;
}

// compute and print volume
void Box::printvol() {
    double vol = height * width * depth;
    cout << vol << endl;
}