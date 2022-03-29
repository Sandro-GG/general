/* 
    CH-230-A
    a5_p6.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // declare and input number of elements
    int n;
    scanf("%d", &n);
    float *arr; // declare array

    int count;

    // dynamically allocate memory for n elements of the array
    arr = (float *) malloc(sizeof(float) * n);
    if (arr == NULL)
        exit(1);
    
    // elements input
    for (int i = 0; i < n; i++)
        scanf("%f", &arr[i]);
    
    // pointing the pointer to the first element
    float *base = &arr[0];
    float *ptr = &arr[0];

    // while the element of the array is positive increase the pointer
    while ((*ptr >= 0)) {
        ptr++;
    }

    // subtracting the first pointer from the ptr to get the count
    count = ptr - base;

    // printing result
    printf("Before the first negative value: %d elements\n", count);

    // freeing memory
    free(arr);

    return 0;
}