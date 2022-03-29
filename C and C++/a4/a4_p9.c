/* 
    CH-230-A
    a4_p9.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// this function computes and returns the product of min and max
int prodminmax(int arr[], int n) {
    // declaration and initialization
    int i = 0;
    int min = arr[i];
    int max = arr[i];

    // finding minimum element of array
    for (i = 1; i < n; i++)
        if (min > arr[i])
            min = arr[i];

    // finding maximum element of array
    for (i = 1; i < n; i++)
        if (max < arr[i])
            max = arr[i];
    
    return min * max;
}

int main() {
    // declare and input number of elements
    int n;
    scanf("%d", &n);

    // dynamic memory allocation
    int *dyn_array;
    dyn_array = (int *) malloc(sizeof(int) * n);

    if (dyn_array == NULL)
        exit(1);

    // input of the values in the array
    for (int i = 0; i < n; i++)
        scanf("%d", &dyn_array[i]);

    // calling the function as the argument of printf
    printf("Product of max and min:%d\n", prodminmax(dyn_array, n));

    // deallocating memory
    free(dyn_array);

    return 0;
}