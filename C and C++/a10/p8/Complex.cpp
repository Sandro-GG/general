/* 
    CH-230-A
    a10_p8
    Complex.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
using namespace std;

// everything is self explanatory here
void Complex::setReal(float newreal) {
    real = newreal;
}

void Complex::setImag(float newimag) {
    imag = newimag;
}

float Complex::getReal() {
    return real;
}

float Complex::getImag() {
    return imag;
}

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(float newreal, float newimag) {
    real = newreal;
    imag = newimag;
}

Complex Complex::conjugate() {
    Complex x;
    x.real = real;
    x.imag = -imag;
    return x;
}

Complex Complex::add(Complex y) {
    Complex x;
    x.real = real + y.real;
    x.imag = imag + y.imag;
    return x;
}

Complex Complex::subtract(Complex y) {
    Complex x;
    x.real = y.real - real;
    x.imag = y.imag - imag;
    return x;
}

Complex Complex::multiply(Complex y) {
    Complex x;
    x.real = real * y.real;
    x.imag = imag * y.imag;
    return x;
}

Complex::~Complex() {

}

void Complex::print() {
    if (imag) {
		cout << noshowpos << real << showpos << imag << "i" << endl;
	} else {
		cout << noshowpos << real << showpos << endl;
	}
}