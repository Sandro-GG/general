/*
    CH-230-A
    a3_p1.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    // declaration
    float x;
    int n;
    int i; // we need this later in 'for' loop
    
    // input
    scanf("%f", &x);
    scanf("%d", &n);
    
    //reentering the value until its a valid integer
    while (n <= 0) {
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
    }
    
    // this will keep printing until i reaches n after
    // after when it will have printed 'x' 'n' times
    for(i = 1; i <= n; i++) {
        printf("%f\n", x);
    }
    
    return 0;
}