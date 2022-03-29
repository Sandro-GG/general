/* 
    CH-230-A
    a5_p4.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


void divby5(float arr[], int size) {
    // dividing each element by 5
    for (int i = 0; i < size; i++)
        arr[i] /= 5;
}


int main() {
    // declaration and input of n
    int n, i;
    scanf("%d", &n);
    
    // dynamically allocating memory
    float *arr;
    arr = (float *) malloc(sizeof(float) * n);
    if (arr == NULL)
        exit(1);

    // input elements
    for (i = 0; i < n; i++)
        scanf("%f", &arr[i]);

    printf("Before:\n");
    // printing each element before modifying them
    for (i = 0; i < n; i++)
        printf("%f ", arr[i]);
    printf("\n");
    
    divby5(arr, n);
    // printing every modified element after function call
    printf("After:\n");
    for (i = 0; i < n; i++)
        printf("%f ", arr[i]);
    printf("\n");

    // freeing memory
    free(arr);

    return 0;
}