/* 
    CH-230-A
    a6_p4.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // declare and input dimension
    int n;
    scanf("%d", &n);

    // declare vectors and input values
    int v[n], w[n], i;
    for (i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (i = 0; i < n; i++)
        scanf("%d", &w[i]);
    
    // compute scalar product of vectors
    int scal = 0;
    for (i = 0; i < n; i++)
        scal += v[i] * w[i];

    // if defined then print intermediates and scalar product
    #ifdef INTERMEDIATE
        printf("The intermediate product values are:\n");
        for (int i = 0; i < n; i++)
            printf("%d\n", v[i] * w[i]);
        printf("The scalar product is: %d\n", scal);
    #endif

    // if not defined print only scalar product
    #ifndef INTERMEDIATE
        printf("The scalar product is: %d\n", scal);
    #endif

    return 0;
}