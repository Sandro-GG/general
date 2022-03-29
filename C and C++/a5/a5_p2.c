/* 
    CH-230-A
    a5_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size) {
    // dividing each element by 5
    for (int i = 0; i < size; i++)
        arr[i] /= 5;
}


int main() {
    // declaring array with 6 given floats
    float arr[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};

    printf("Before:\n");
    // printing each element before modifying them
    for (int i = 0; i < 6; i++)
        // %.3f in order to satisfy testcases
        printf("%.3f ", arr[i]);
    printf("\n");
    
    divby5(arr, 6);
    // printing every modified element after function call
    printf("After:\n");
    for (int i = 0; i < 6; i++)
        // %.3f in order to satisfy testcases
        printf("%.3f ", arr[i]); 
    printf("\n");

    return 0;
}