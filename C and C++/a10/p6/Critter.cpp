/* 
    CH-230-A
    a10_p6
    Critter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Crittter.h"
#include <iostream>
using namespace std;

// setter and getter functions
void Critter::setname(string& newname) {
    name = newname;
}

void Critter::sethunger(int newhunger) {
    hunger = newhunger;
}

void Critter::setboredom(int newboredom) {
    boredom = newboredom;
}

void Critter::setheight(double newheight) {
    height = newheight;
}

string Critter::getname() {
    return name;
}

int Critter::gethunger() {
    return hunger;
}

int Critter::getboredom() {
    return boredom;
}

double Critter::getheight() {
    return height;
}

// constructors
Critter::Critter() {
    name = "default_critter";
    height = 5;
    hunger = 0;
    boredom = 0;
    thirst = hunger; // added this
    // to know which is called
    cout << "constructor one is being called" << endl;
}

Critter::Critter(string newname) {
    name = newname;
    height = 5;
    hunger = 0;
    boredom = 0;
    thirst = hunger; // added this

    cout << "constructor two is being called" << endl;
}

Critter::Critter(string newname, int newhunger, int newboredom, 
                 double newheight) {
    name = newname;
    hunger = gethungerd(newhunger);
    boredom = newboredom;
    height = newheight;
    thirst = hunger; // added this

    cout << "constructor three is being called" << endl;
}

// output
void Critter::print() {
    cout << "name: " << getname() << endl;
    cout << "hunger: " << gethunger() << endl;
    cout << "boredom: " << getboredom() << endl;
    cout << "height: " << getheight() << endl;
    cout << "thirst: " << getthirst() << endl; // added this
}

double Critter::gethungerd(int newhunger) {
    return ((double) newhunger) / 10.0;
}

int Critter::gethungeri() {
    return (hunger * 10);
}

// thirst setter
void Critter::setthirst(double newthirst) {
    thirst = newthirst;
}

// thirst getter
double Critter::getthirst() {
    return thirst;
}

// new critter including thirst
Critter::Critter(string newname, int newhunger, int newboredom,
                 double newheight, double newthirst) {
    name = newname;
    hunger = gethungerd(newhunger);
    boredom = newboredom;
    height = newheight;
    thirst = newthirst;

    cout << "constructor five is being called" << endl;
}