/*
    CH-230-A
    a3_p8.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// idx is the number of values in this array
// this function returns sum of values in array
float sum_func(float array[], int idx) {
    int k;
    float sum;
    for (k = 0; k < idx; k++)
        sum += array[k];
    return sum;
}

// this function calls sum function and divides
// it by the number of values in the array 
float avg_func(float array[], int idx) {
    float average = sum_func(array, idx) / idx;
    return average;
}

int main() {
    float arr[10];
    
    // inputting every value of the array
    int i = 0;
    while ((i < 10) && (arr[i - 1] != -99)) {
        scanf("%f", &arr[i]);
        i++;
    }

    // n is the number of values in the array
    // if the last value isn't -99 then n is 10
    // otherwise i - 1
    int n;
    if (arr[i - 1] != -99)
        n = 10;
    else 
        n = i - 1;

    // printing sum and average by calling functions
    printf("Sum=%f\n", sum_func(arr, n));
    printf("Average=%f\n", avg_func(arr, n));

    return 0;
}