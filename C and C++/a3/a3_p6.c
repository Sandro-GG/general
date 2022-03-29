/*
    CH-230-A
    a3_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// function that converts kg and g to pound by a simple formula
float to_pounds(int kg, int g) {
    float pound = kg * 2.2 + g * 0.001 * 2.2;
    return pound;
}

int main () {
    // declaration
    int x_kg;
    int y_g;

    // input   
    scanf("%d", &x_kg);
    scanf("%d", &y_g);

    // printing the result by calling the function in the argument
    printf("Result of conversion: %f\n", to_pounds(x_kg, y_g));
    
    return 0;
}