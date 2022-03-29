/* 
    CH-230-A
    a10_p4
    testcritter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Critter.h"
#include <iostream>
using namespace std;

int main() {
    // parameters
    string name;
    int hunger = 2;
    int boredom;
    double height;

    // input
    cout << "name: ";
    cin >> name;
    cout << "boredom: ";
    cin >> boredom;
    cout << "height: ";
    cin >> height;

    // constructor calls
    Critter c1;
    Critter c2(name);
    Critter c3(name, hunger, boredom);
    Critter c4(name, hunger, boredom, height);
    
    // print results
    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}