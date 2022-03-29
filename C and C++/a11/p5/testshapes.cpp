/* 
    CH-230-A
    a11_p5
    testshapes.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv) {
    Circle c("first circle", 3, 4, 7);
    RegularPolygon r("TRIANGLE", 1, 1, 3);

    r.printName();
    c.printName();

    // create three new instances
    Circle c2("CIRCLE", 0, 0, 3);
    Rectangle rec("RECTANGLE", 0, 0, 4, 6);
    Square s("SQUARE", 0, 0, 5);

    // printing name, perimeter, and area of shapes
    c2.printName();
    cout << "perimeter: " << c2.perimeter() << endl;
    cout << "area: " << c2.area() << endl;

    rec.printName();
    cout << "perimeter: " << rec.perimeter() << endl;
    cout << "area: " << rec.area() << endl;
    
    s.printName();
    cout << "perimeter: " << s.perimeter() << endl;
    cout << "area: " << s.area() << endl;
}