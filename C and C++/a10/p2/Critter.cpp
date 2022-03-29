/* 
    CH-230-A
    a10_p2
    Critter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
#include "Critter.h"

void Critter::setName(std::string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}

// added these two functions
void Critter::setHealth(int newhealth) {
    health = newhealth;
}

void Critter::setAge(int newage) {
    age = newage;
}

void Critter::print() {
	std::cout << "I am " << name << ". My hunger level is "
              << hunger << "." << std::endl;
    // added two more cout s
    std::cout << "My health level is " << health << "." << std::endl;
    std::cout << "I am " << age << " years old." << std::endl;
}

int Critter::getHunger() {
	return hunger;
}