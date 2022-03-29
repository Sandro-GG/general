/* 
    CH-230-A
    a9_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
using namespace std;

int main() {
    // declare
    int n;
    double x;
    string s;
    
    // input
    cin >> n;
    cin >> x;
    getline(cin, s);
    
    // print n times
    for (int i = 0; i < n; i++)
        cout << s << ":" << x << endl;

    return 0;
}