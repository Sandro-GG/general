/* 
    CH-230-A
    a4_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

// this function computes and returns the geometric
// mean of every element in the array
float geometric_mean(float arr[], int num) {
    int i;
    float product = 1;
    
    // computing the product of every element in the array
    for (i = 0; i < num; i++)
        product *= arr[i];
    // taking pow function from math.h and writing 1.0 / num
    // in order to give the product numth root
    float gmean = pow(product, 1.0 / num);
    
    return gmean;
}

// this function returns the highest number in the array
float highest(float arr[], int num) {
    int i = 0;
    float highest = arr[i];

    // if next element in the array is bigger we
    // give it 'highest' and keep comparing
    for (i = 1; i <= num; i++)
        if (arr[i] > highest)
            highest = arr[i];

    return highest;
}

// this function returns the smallest value in the array
float smallest(float arr[], int num) {
    int i = 0;
    float smallest = arr[i];
    
    // if next element in the array is smaller we
    // give it 'smallest' and keep comparing
    for (i = 1; i <= num; i++)
        if (arr[i] < smallest)
            smallest = arr[i];

    return smallest;
}

// this function returns the sum of every value in the array
float sum(float arr[], int num) {
    int i;
    float sum = 0;
    for (i = 0; i < num; i++)
        sum += arr[i];
    return sum;
}

// main function
int main() {
    float arr[15];
    int i;
    
    // input of values in the array until input is negative
    for (i = 0; i < 15; i++) {
        scanf("%f", &arr[i]);
        if (arr[i] < 0)
            break;
    }

    // if there is a negative value input in 
    // the array the length is i - 1, otherwise i
    int l;
    if (arr[i - 1] < 0)
        l = i - 1;
    else 
        l = i;
    
    // declaration and input of char c for the switch loops
    char c;
    getchar();
    scanf("%c", &c);

    // different output for different cases of c
    switch (c) {
        case 'm':
            printf("geometric mean:%f\n", geometric_mean(arr, l));
            break;
        case 'h':
            printf("highest number:%f\n", highest(arr, l));
            break;     
        case 'l':
            printf("smallest number:%f\n", smallest(arr, l));
            break;
        case 's':
            printf("sum:%f\n", sum(arr, l));
            break;
    }

    return 0;
}