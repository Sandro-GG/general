/* 
    CH-230-A
    a10_p2
    testcritter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
#include <cstdlib>
#include "Critter.h"

int main(int argc, char** argv)
{
	Critter c;

	std::string name;
	int hunger;
	int health;
	int age;
 
	std::cout << std::endl << "Please enter data: " << std::endl;
	std::cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(std::cin, name);
	c.setName(name);

	std::cout << "Hunger: ";
	std::cin >> hunger;
	c.setHunger(hunger);

	// added these two cout and cin s
	std::cout << "Health: ";
	std::cin >> health;
	c.setHealth(health);

	std::cout << "Age: ";
	std::cin >> age;
	c.setAge(age);

	std::cout << "You have created:" << std::endl;
	c.print();
        return 0;
}