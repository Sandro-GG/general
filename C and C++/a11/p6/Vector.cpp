/* 
    CH-230-A
    a11_p6
    Vector.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
#include <math.h>
using namespace std;

// empty constructor
Vector::Vector() {
    size = 0;
}

// parametric constructor
Vector::Vector(int nsize, double*& ncomp) {
    cout << "Copy constructor called" << endl;
    comp = new double[nsize];
    size = nsize;
    for (int i = 0; i < size; i++) {
        comp[i] = ncomp[i];
    }
}

// copy constructor
Vector::Vector(Vector& v) {
    comp = new double[v.size];
    size = v.size;
    for (int i = 0; i < size; i++)
        comp[i] = v.comp[i];
}

// destructor
Vector::~Vector() {
    delete [] comp;
}

// setter getter functions
void Vector::setSize(int nsize) {
    size = nsize;
}

void Vector::setComp(double*& ncomp) {
    comp = ncomp;
}

int Vector::getSize() const {
    return size;
}

double* Vector::getComp() const {
    return comp;
}

// functions for methods
void Vector::print() const {
    for (int i = 0; i < size; i++) {
        cout << comp[i] << " ";
    }
    cout << endl;
}

double Vector::norm() const {
    double temp = 0;
    // computing norm
    for (int i = 0; i < size; i++)
        temp += comp[i] * comp[i];
    return sqrt(temp);
}

Vector Vector::add(const Vector& v) const {
    double *temp;
    temp = new double[size];
    // computing sum
    for (int i = 0; i < size; i++)
        temp[i] = comp[i] + v.comp[i];
    
    Vector s(size, temp);    
    return s;
}

Vector Vector::diff(const Vector& v) const {
    double *temp;
    temp = new double[size];
    // computing difference
    for (int i = 0; i < size; i++)
        temp[i] = comp[i] - v.comp[i];
    
    Vector d(size, temp);
    return d;
}

double Vector::scalProd(const Vector& v) const {
    double *temp;
    temp = new double[size];
    double s = 0;
    // computing scalar product
    for (int i = 0; i < size; i++) {
        temp[i] = comp[i] * v.comp[i];
        s += temp[i];
    }

    return s;
}