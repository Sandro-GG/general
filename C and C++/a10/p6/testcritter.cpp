/* 
    CH-230-A
    a10_p6
    testcritter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Crittter.h"
#include <iostream>
using namespace std;

int main() {

    // constructor calls
    Critter c1;
    Critter c2("c2");
    Critter c3("c3", 20, 6);
    Critter c4("c4", 20, 5, 5.7);
    Critter c5("c5", 20, 8, 6.1, 4.22); // new critter
    
    // print results
    c1.print();
    c2.print();
    c3.print();
    c4.print();
    c5.print();

    return 0;
}