#include "TournamentMember.h"
#include <iostream>
#include <string>

using namespace std;

// initialize static variable
string TournamentMember::location = "Tbilisi";

// functions for constructors
TournamentMember::TournamentMember(const char *firstname, const char *lastname,
                 const char *birthdate, int height, int weight) {
    strcpy(this->firstname, firstname);
    strcpy(this->lastname, lastname);
    strcpy(this->birthdate, birthdate);
    this->height = height;
    this->weight = weight;
    cout << "calling member parametric constructor\n";
}

TournamentMember::TournamentMember(const TournamentMember& obj) {
    strcpy(this->firstname, obj.firstname); 
    strcpy(this->lastname, obj.lastname);
    strcpy(this->birthdate, obj.birthdate);
    this->height = obj.height;
    this->weight = obj.weight;
    cout << "calling member copy constructor\n";
}

// method functions
void TournamentMember::printinfo() const {
    cout << "First name: " << getfirstname() << endl;
    cout << "Last name: " << getlastname() << endl;
    cout << "Birth date: " << getbirthdate() << endl;
    cout << "Height: " << getheight() << endl;
    cout << "Weight: " << getweight() << endl;
    cout << "Location: " << getlocation() << endl;
    cout << endl;
}

// static method function
void TournamentMember::changeloc(string nlocation) {
    location = nlocation;
}