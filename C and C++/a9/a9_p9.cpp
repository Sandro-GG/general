#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cctype>
#include <cstring>
using namespace std;

int main() {
    string word[17] = {"computer", "television", "keyboard", "laptop",
                       "laptop", "mouse", "camera", "antenna", "console",
                       "station", "paranoid", "airbag", "scrutiny",
                       "gasoline", "lightsaber", "zimbabwe", "nugget"};
    
    string guess;
    int count = 0;
    string randword;
    string modword;
    string again;
    int randomNumber;
    int i;

    do {
        srand(static_cast<unsigned int>(time(0)));
        randomNumber = rand();
        randomNumber = (randomNumber % 17) + 1;
        randword = word[randomNumber];
        modword = randword;
        
        for (i = 0; i < 20; i++)
            if (modword[i] == 65  || modword[i] == 69  || modword[i] == 73  ||
                modword[i] == 79  || modword[i] == 85  || modword[i] == 97  ||
                modword[i] == 101 || modword[i] == 105 || modword[i] == 111 ||
                modword[i] == 117)
                    modword[i] = '_';

        cout << "Enter your guess for this word: " << modword << endl;

        getline(cin, guess);
        count++;
        while (guess != randword) {
            count++;
            cout << "Try again: ";
            cin >> guess;
            
            if (guess == "quit") return 0;
        }

        cout << "Congratulations, do you wish to play again? ";
        cout << "Enter 'yes' or 'no':" << endl;

        do {
            cin >> again;
            if (again == "no") 
                return 0;
            else if (again != "yes") 
                cout << "Please enter 'yes' or 'no':" << endl;
        } while (again != "yes");

    } while (again == "yes");



    return 0;
}