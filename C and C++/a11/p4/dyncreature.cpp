/* 
    CH-230-A
    a11_p4
    dyncreature.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Creature.h"
#include <iostream>
using namespace std;

int main()
{ 
    string str;
    cin >> str;
    
    // "quit" exits the program
    while (str != "quit") {
        // dynamically allocating memory, declaring
        // object, calling methods, and freeing memory
        // depending on input
        if (str == "wizard") {
            cout << "\nCreating a Wizard.\n";
            Wizard *w;
            w = new Wizard;
            w->run();
            w->hover();
            delete w;
        }
        else if (str == "vampire") {
            cout << "\nCreating a Vampire.\n";
            Vampire *v;
            v = new Vampire;
            v->run();
            v->drink();
            delete v;
        }
        else if (str == "werewolf") {
            cout << "\nCreating a Werewolf.\n";
            Werewolf *ww;
            ww = new Werewolf;
            ww->run();
            ww->eat();
            delete ww;
        }
        cout << endl;
        cin >> str;
    }

    return 0;
}