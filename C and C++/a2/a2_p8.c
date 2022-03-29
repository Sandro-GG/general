/*
    CH-230-A
    a2_p8.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main () {
    int a;
    scanf("%d", &a);

    // for a number to be divisible by both 2 and 7
    // it must be divisible by 14.
    if (a % 14 == 0) {
        printf("The number is divisible by 2 and 7\n");
    }
    else {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    
    return 0;
}