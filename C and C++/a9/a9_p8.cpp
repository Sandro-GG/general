/* 
    CH-230-A
    a9_p8.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int i;

void subtract_max(int *arr, int n) {
    // finding maximum value
    int max = arr[0];
    for (i = 0; i < n; i++)
        if (arr[i] > max)
            max = arr[i];
    
    // subtracting that value
    for (i = 0; i < n; i++)
        arr[i] -= max;
}

// deallocating memory
void deallocate(int *arr) {
    free(arr);
}

int main() {
    // declare and input number of elements
    int n;
    cin >> n;

    // dynamically allocate array
    int *arr;
    arr = (int *) malloc(sizeof(int) * n);
    if (arr == NULL)
        exit(1);
    
    // input every value
    for (i = 0; i < n; i++)
        cin >> arr[i];
    
    // output of results
    cout << "subtraction completed:" << endl;
    subtract_max(arr, n);
    for (i = 0; i < n; i++)
        cout << arr[i] << endl;

    // deallocation
    deallocate(arr);

    return 0;
}