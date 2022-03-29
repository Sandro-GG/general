/* 
    CH-230-A
    a10_p3
    testcity.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
#include "City.h"
using namespace std;

int main() {
    // instances
    City bremen;
    City paris;
    City london;

    // parameters
    string name;
    int inhab;
    string mayor;
    double area;

    // input from keyboard
    cout << "Bremen:" << endl << "City name: ";
    cin >> name;
    bremen.setName(name);
    cout << "Inhabitants: ";
    cin >> inhab;
    bremen.setInhab(inhab);
    cout << "Mayor: ";
    cin >> mayor;
    bremen.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    bremen.setArea(area);

    cout << "Paris:" << endl << "City name: ";
    cin >> name;
    paris.setName(name);
    cout << "Inhabitants: ";
    cin >> inhab;
    paris.setInhab(inhab);
    cout << "Mayor: ";
    cin >> mayor;
    paris.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    paris.setArea(area);
    
    cout << "London:" << endl << "City name: ";
    cin >> name;
    london.setName(name);
    cout << "Inhabitants: ";
    cin >> inhab;
    london.setInhab(inhab);
    cout << "Mayor: ";
    cin >> mayor;
    london.setMayor(mayor);
    cout << "Area: ";
    cin >> area;
    london.setArea(area);

    // output
    bremen.print();
    paris.print();
    london.print();

    return 0;
}