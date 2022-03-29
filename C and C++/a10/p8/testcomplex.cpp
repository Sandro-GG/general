/* 
    CH-230-A
    a10_p8
    testcomplex.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Complex.h"
#include <iostream>
using namespace std;

int main() {
    Complex c1, c2, c3; // declare instances
    
    // input the complex numbers for the instances
    float a, b;
    cout << "input real and imaginary parts of first instance:" << endl;
    cin >> a;
    cin >> b;
    c1.setReal(a);
    c1.setImag(b);
    cout << "first complex number:" << endl;
    c1.print();

    float c, d;
    cout << "input real and imaginary parts of second instance:" << endl;
    cin >> c;
    cin >> d;
    c2.setReal(c);
    c2.setImag(d);
    cout << "second complex number:" << endl;
    c2.print();

    // print results
    cout << "conjugate of the first instance: ";
    c1.conjugate().print();

    c3 = c1.add(c2);
    cout << "sum of two instances: ";
    c3.print();

    c3 = c1.subtract(c2);
    cout << "difference between second and first: ";
    c3.print();

    c3 = c1.multiply(c2);
    cout << "multiplication of first and second: ";
    c3.print();
}