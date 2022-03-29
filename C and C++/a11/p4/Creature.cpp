/* 
    CH-230-A
    a11_p4
    Creature.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
using namespace std;

Creature::Creature(): distance(10)
{}    

void Creature::run() const
{ 
    cout << "running " << distance << " meters!\n";
}  

// added destructor function
Creature::~Creature() {
    cout << "Creature destructor.\n";
}

Wizard::Wizard() : distFactor(3)
{}  

void Wizard::hover() const
{
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

// added destructor function
Wizard::~Wizard() {
    cout << "Wizard destructor.\n";
}

Vampire::Vampire() : blood(6.34) {
    // initializing blood = 6.34 in an empty constructor
}

void Vampire::drink() const {
    cout << "drinking " << blood << " litres of blood.\n";
}

// added destructor function
Vampire::~Vampire() {
    cout << "Vampire destructor.\n";
}


Werewolf::Werewolf() : flesh(9.8) {
    // initializing flesh = 9.8 in empty constructor
}

void Werewolf::eat() const {
    cout << "eating " << flesh << "kg of flesh.\n";
}

// added destructor function
Werewolf::~Werewolf() {
    cout << "Werewolf destructor.\n";
}