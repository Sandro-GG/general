#include "TournamentMember.h"
#include <iostream>

using namespace std;

int main() {
    // instances
    Player p1("Sandro", "Gakharia", "27.11.2002", 175, 60,
              10, "Midfield", "Right-footed");
    Player p2("Dachi", "Chabashvili", "07.08.2000", 190, 90,
              13, "Defence", "Right-footed");
    Player p3("Luka", "Kvavilashvili", "02.11.1999", 178, 65,
              23, "Forward", "Right-footed");
    
    // print the parameters
    p1.printplayer();
    p2.printplayer();
    p3.printplayer();

    // change location using static method
    Player::changeloc("Hamburg");
    
    // print again to show results
    p1.printplayer();
    p2.printplayer();
    p3.printplayer();

    return 0;
}