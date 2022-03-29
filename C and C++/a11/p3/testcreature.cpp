/* 
    CH-230-A
    a11_p3
    testcreature.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
using namespace std;

int main()
{ 
    cout << "Creating a Creature.\n";
    Creature c;
    c.run();

    cout << "\nCreating a Wizard.\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating a Vampire.\n";
    Vampire v;
    v.run();
    v.drink();

    cout << "\nCreating a Werewolf.\n";
    Werewolf ww;
    ww.run();
    ww.eat();
    cout << endl;
    
    return 0;
}