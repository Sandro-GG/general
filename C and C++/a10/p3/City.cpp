/* 
    CH-230-A
    a10_p3
    City.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "City.h"
#include <iostream>
using namespace std;

// setting and getting with functions

void City::setName(string& newname) {
    name = newname;
}

void City::setInhab(int newinhab) {
    inhab = newinhab;
}

void City::setMayor(string& newmayor) {
    mayor = newmayor;
}

void City::setArea(double newarea) {
    area = newarea;
}

string City::getName() {
    return name;
}

int City::getInhab() {
    return inhab;
}

string City::getMayor() {
    return mayor;
}

double City::getArea() {
    return area;
}

void City::print() {
    // print results
    cout << endl;
    cout << "City name: " << name << endl;
    cout << "Number of inhabitants: " << inhab << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Area: " << area << endl;
}