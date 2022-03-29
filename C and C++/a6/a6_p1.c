/* 
    CH-230-A
    a6_p1.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

// declare a new variable Z and do initialization to swap values
#define SWAP(X, Y, T) { T Z;   \
                        Z = X; \
                        X = Y; \
                        Y = Z; \
                      }

int main() {
    // declare and input integers 
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);
    
    // declare and input doubles
    double c, d;
    scanf("%lf", &c);
    scanf("%lf", &d);

    // swap the values
    SWAP(a, b, int);
    SWAP(c, d, double);

    // print results
    printf("After swapping:\n%d\n%d", a, b);
    printf("\n%.6lf\n%.6lf\n", c, d);

    return 0;
}