/* 
    CH-230-A
    a11_p3
    Creature.h
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>

using namespace std;

class Creature {
	public:
		Creature();
		~Creature(); // added constructor
        void run() const;
        
	protected:
		int distance;
};

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard(); // added destructor
        void hover() const;
        
	private:
		int distFactor;
};

class Vampire : public Creature {
    public:
        Vampire();
        ~Vampire();
        void drink() const; // blood drinking

    private:
        double blood; // litres of blood
};

class Werewolf : public Creature {
    public:
        Werewolf();
        ~Werewolf(); // added destructor
        void eat() const;

    private:
        double flesh; // kg of flesh
};
