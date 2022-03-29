/* 
    CH-230-A
    a11_p1
    testbox.cpp
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include "Box.h"
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter number of boxes:" << endl;
    cin >> n;

    Box *arr;
    arr = new Box[2 * n]; // allocation

    double height, width, depth; // parameters
    int i;

    // set the dimensions for each box
    for (i = 0; i < n; i++) {
        cout << "enter dimensions of box #" << i + 1 << endl;
        cin >> height;
        arr[i].setHeight(height);
        cin >> width;
        arr[i].setWidth(width);
        cin >> depth;
        arr[i].setDepth(depth);
    }

    // copy each box
    for (i = n; i < 2 * n; i++) {
        arr[i] = Box(arr[i - n]);
    }

    // print the volume of each box
    for (i = 0; i < 2 * n; i++) {
        cout << "Volume of box #" << i + 1 << ":" << endl;
        arr[i].printvol();
    }
    
    // release memory
    delete [] arr;

    return 0;
}