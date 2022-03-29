/* 
    CH-230-A
    a2_p4.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    float a, b, h;

    // reading floats from keyboard
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    // printf with respective formulas as arguments
    printf("square area=%f\n", a * a);
    printf("rectangle area=%f\n", a * b);
    printf("triangle area=%f\n", a * h / 2);
    printf("trapezoid area=%f\n", (a + b) / 2 * h );

    return 0;
}