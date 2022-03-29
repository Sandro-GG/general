/* 
    CH-230-A
    a6_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

// declaring variables globally for macros
int min;
int max;
float mid;

// determining the minimum of three values
#define MIN(a, b, c) { if (a < b && a < c)      \
                           min = a;             \
                       else if (b < a && b < c) \
                           min = b;             \
                       else                     \
                           min = c; }

// determining the maximum of three values
#define MAX(a, b, c) { if (a > b && a > c)      \
                           max = a;             \
                       else if (b > a && b > c) \
                           max = b;             \
                       else                     \
                           max = c; }

// computing midrange value
#define MID_RANGE(min, max) mid = (min + max) / 2.0;

int main() {
    // declare and input of three values
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    // using macros 
    MIN(a, b, c);
    MAX(a, b, c);
    MID_RANGE(min, max);
    
    // print result
    printf("The mid-range is: %.6f\n", mid);

    return 0;
}