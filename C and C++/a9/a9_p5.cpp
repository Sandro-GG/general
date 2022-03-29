/* 
    CH-230-A
    a9_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

// include libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    // declare
    int die;
    int randomNumber;
    string name;
    
    // input / output name
    cout << "your name: ";
    cin >> name;
    cout << "enter your guess #1: ";

    // choosing random number from 1-100
    srand(static_cast<unsigned int>(time(0)));
    randomNumber = rand();
    die = (randomNumber % 100) + 1;

    // input your guess
    int yournumber;
    cin >> yournumber;
    int count = 2;

    while (yournumber != die) {
        // different outputs depending on guess
        if (yournumber < die)
            cout << "your number is smaller" << endl;
        else if (yournumber > die)
            cout << "your number is bigger" << endl;
        
        cout << "your guess #" << count << ": ";

        // guess again and increase count
        cin >> yournumber; 
        count++;   
    }

    cout << "Congratulations you guessed correctly!";

    return 0;
}
