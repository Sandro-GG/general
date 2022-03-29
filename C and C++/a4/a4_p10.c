/* 
    CH-230-A
    a4_p10.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, 
                   float *div, float *pwr, float *invb) {
        // computing results
        *prod = a * b;
        *div = a / b;
        *pwr = pow(a, b); // using pow() function from math.h
        *invb = 1 / b;
    }

int main() {
    // declaration and input of a and b
    float a, b;
    scanf("%f", &a);
    scanf("%f", &b);
    
    float prod, div, pwr, invb;

    // calling the function and modifying values
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    
    // printing results 
    printf("product=%f\ndivision=%f\n", prod, div);
    printf("a to the power of b=%f\ninverse of b=%f\n", pwr, invb);


    return 0;
}