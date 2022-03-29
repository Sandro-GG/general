/* 
    CH-230-A
    a12_p1
    testHexagon.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Shapes.h"
#include <iostream>
using namespace std;

int main() {
    // creating instances
    Hexagon blue("Hexagon", 0, 0, 6, 9, "blue");
    Hexagon green("Hexagon", 0, 0, 6, 15, "green");
    Hexagon copy;
    copy = Hexagon(green); // copying

    // printing results
    cout << "First hexagon:" << endl << "perimeter: " << blue.perimeter();
    cout << "\narea: " << blue.area() << endl;
    cout << "Second hexagon:" << endl << "perimeter: " << green.perimeter();
    cout << "\narea: " << green.area() << endl;
    cout << "Third hexagon:" << endl << "perimeter: " << copy.perimeter();
    cout << "\narea: " << copy.area() << endl;


    return 0;
}