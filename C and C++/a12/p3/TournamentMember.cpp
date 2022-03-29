#include "TournamentMember.h"
#include <iostream>
#include <string>

using namespace std;

// static variable initialization
string TournamentMember::location = "Tbilisi";

// constructor functions
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

void TournamentMember::changeloc(string nlocation) {
    location = nlocation;
}

// static variable initialization
int Player::goals = 0;

// constructor functions
Player::Player() : TournamentMember() {
    cout << "calling empty player constructor" << endl;
}

Player::~Player() {
    cout << "calling player destructor" << endl;
}

Player::Player(const Player& obj) {
    number = obj.number;
    position = obj.position;
    foot = obj.foot;
    cout << "calling player copy constructor\n";
}

Player::Player(const char *firstname, const char *lastname, const char *birthdate,
               int height, int weight, int number, string position, string foot) :
               TournamentMember(firstname, lastname, birthdate, height, weight) {
    this->number = number;
    this->position = position;
    this->foot = foot;
    cout << "calling parametric player constructor\n";
}

// static method definition
int Player::incgoals() {
    goals++;
    return goals;
}

// print method
void Player::printplayer() const {
    cout << "First name: " << getfirstname() << endl;
    cout << "Last name: " << getlastname() << endl;
    cout << "Birth date: " << getbirthdate() << endl;
    cout << "Height: " << getheight() << endl;
    cout << "Weight: " << getweight() << endl;
    cout << "Location: " << getlocation() << endl;
    cout << "Number: " << getnumber() << endl;
    cout << "Position: " << getpos() << endl;
    cout << "Goals: " << incgoals() << endl;
    cout << "Foot: " << getfoot() << endl;
    cout << endl;
}