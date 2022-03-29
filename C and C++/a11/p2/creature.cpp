/* 
    CH-230-A
    a11_p2
    creature.cpp
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

class Wizard : public Creature {
	public:
		Wizard();
		~Wizard(); // added destructor
        void hover() const;
        
	private:
		int distFactor;
};

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

// added Vampire derived class
class Vampire : public Creature {
    public:
        Vampire();
        ~Vampire();
        void drink() const; // blood drinking

    private:
        double blood; // litres of blood
};

Vampire::Vampire() : blood(6.34) {
    // initializing blood = 6.34 in an empty constructor
}

void Vampire::drink() const {
    cout << "drinking " << blood << "litres of blood.\n";
}

// added destructor function
Vampire::~Vampire() {
    cout << "Vampire destructor.\n";
}

// added Werewolf derived class
class Werewolf : public Creature {
    public:
        Werewolf();
        ~Werewolf(); // added destructor
        void eat() const;

    private:
        double flesh; // kg of flesh
};

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