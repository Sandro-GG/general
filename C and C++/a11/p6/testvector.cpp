/* 
    CH-230-A
    a11_p6
    testvector.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Vector.h"
#include <iostream>
using namespace std;

int main() {
    // input size
    int size;
    cout << "Enter size: ";
    cin >> size;

    // input v2 components
    double *comp2 = new double[size];
    cout << "Enter components for v2:" << endl;
    for (int i = 0; i < size; i++)
        cin >> comp2[i];
    
    // input v2 components
    double *comp4 = new double[size];
    cout << "Enter componentes for v4:" << endl;
    for (int i = 0; i < size; i++)
        cin >> comp4[i];

    // initialize 
    Vector v1, v2(size, comp2);
    Vector v3(v2);
    Vector v4(size, comp4);

    // print components of vectors
    cout << "v1: ";
    v1.print();
    cout << "v2: ";
    v2.print();
    cout << "v3: ";
    v3.print();
    cout << "v4: ";
    v4.print();

    // print methods
    cout << "norm of v2: " << v2.norm() << endl;
    cout << "scalar product of v2 and v4: " << v2.scalProd(v4) << endl;
    cout << "sum of v2 and v4: ";
    (v2.add(v4)).print();
    cout << "difference of v2 and v4: ";
    (v2.diff(v4)).print();
    
    return 0;
}