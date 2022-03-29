#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main() {
    // using constructors to initialize instances and printing them
    TournamentMember m1("Sandro", "Gakharia", "27.11.2002", 175, 60);
    TournamentMember m2("Dachi", "Chabashvili", "07.08.2000", 190, 80);
    m1.printinfo();
    m2.printinfo();

    TournamentMember::changeloc("Batumi");
    m1.printinfo();
    m2.printinfo();
    
    return 0;
}