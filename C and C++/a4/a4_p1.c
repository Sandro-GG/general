/* 
    CH-230-A
    a4_p1.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

// M_PI is pi function in math.h
int main() {
    // declaration
    float upper, lower, step;
    float x;

    // input
    scanf("%f", &lower);
    scanf("%f", &upper);
    scanf("%f", &step);

    // x starts at lower, ends at upper
    // and increases each time by step
    for (x = lower; x <= upper; x += step) {
        printf("%f %f %f\n", x, x * x * M_PI, 2 * M_PI * x);
    }
    return 0;
}