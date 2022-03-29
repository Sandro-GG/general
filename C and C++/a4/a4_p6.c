/* 
    CH-230-A
    a4_p6.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// this function prints two biggest values of an array
void greatest2(int arr[], int n) {
    //declaration
    int i = 0;
    // giving max1 and max2 the first value of the array
    int max1 = arr[i];
    int max2 = arr[i];
    
    // iterate through array
    for (i = 1; i < n; i++) {
        // if a value is bigger than the previous then 
        // max2 stays the same and max1 gets bigger value
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        }
        // if value is > max2 then max2 becomes second biggest
        else if (arr[i] > max2) {
            max2 = arr[i];
        }        
    }
    //printing results
    printf("two greatest values: %d and %d\n", max1, max2);
}


int main() {
    // declare and input n
    int n;
    scanf("%d", &n);

    // dynamic memory allocation
    int *dyn_array;
    dyn_array = (int *) malloc(sizeof(int) * n);

    if (dyn_array == NULL)
        exit(1);

    // input of values in array
    for (int i = 0; i < n; i++) 
        scanf("%d", &dyn_array[i]);

    // function call
    greatest2(dyn_array, n);    
    
    // releasing the memory
    free(dyn_array);

    return 0;
}