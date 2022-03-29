/*
    CH-230-A
    a3_p10.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// first function 
float product(float a, float b) {
    float product = a * b;
    return product;
}

// using a pointer to return the product by reference
void productbyref(float a, float b, float *p) {
    *p = a * b;
}

// using pointers to return modified variables
void modifybyref(float *a, float *b) {
    *a += 3;
    *b += 11;
}


int main() {
    // declaration
    float x, y; 
    float prod;
    
    // input
    scanf("%f", &x);
    scanf("%f", &y);
    
    // calling the first function as the argument in printf
    printf("%f\n", product(x, y));

    // calling the second function which prints
    // the same result as the first one
    productbyref(x, y, &prod);
    printf("%f\n", prod); 

    // calling the third function and printing the result
    // by reference which works because of pointers
    modifybyref(&x, &y);
    printf("%f, %f\n", x, y);

    return 0;
}