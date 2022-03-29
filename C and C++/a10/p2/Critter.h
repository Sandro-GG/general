/* 
    CH-230-A
    a10_p2
    Critter.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <string> // defines standard C++ string class

/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	// added health and age parameters
	int health;
	int age;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// health and age setters
	void setHealth(int newhealth);
	void setAge(int newage);
	// getter method
	int getHunger();
	// service method
	void print();
};