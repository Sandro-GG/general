/*
    CH-230-A
    a2_p10.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // initial input
    int i = 1; // we need i for the while loop later

    while (n <= 0) {
        scanf("%d", &n);
    } // this repeats until a positive input
    
      // I wrote this outside because there's no 's' in '1 day'
    printf("1 day = 24 hours\n");
    
    while (i < n) {
        i++;
        printf("%d days = %d hours\n", i, 24 * i);
    } // i variable increases until it reaches n and prints
      // each value on the way with corresponding hours value


    return 0;
}