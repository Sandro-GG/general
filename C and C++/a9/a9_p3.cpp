/* 
    CH-230-A
    a9_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
using namespace std;

float absfloat(float x) {
    // easy if statement to return absolute value
    if (x < 0)
        return (-x);
    else
        return x;
}

int main() {
    // declare and input
    float x;
    cin >> x;

    // output result
    cout << "The absolute value is " << absfloat(x) << endl;
    
    return 0;
}