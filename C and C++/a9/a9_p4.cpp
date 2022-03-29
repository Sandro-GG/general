/* 
    CH-230-A
    a9_p4.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
using namespace std;

// simple function
int mycount(int a, int b) {
    return b - a;
}

int mycount(char c, string s) {
    int count = 0;

    // using .length() to see the length of our string
    for (unsigned int i = 0; i < s.length(); i++)
        if (s[i] == c)
            count++;

    return count;
}

int main() {
    // demonstration
    cout << mycount(7, 3) << endl;
    cout << mycount('i', "this is a string") << endl;

    return 0;
}