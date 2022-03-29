/* 
    CH-230-A
    a6_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

int main() {
    // declare and input char
    unsigned char c;
    scanf("%c", &c);

    // printing results
    printf("The decimal representation is: %d\n", c);
    printf("The backwards binary representation is: ");
    
    // b is the last bit of c after each shift
    int b;
    // loop continues until c is shifted to 0
    while (c) {
        b = c & 1;
        c = c >> 1;
        // printing each bit one by one with b
        printf("%d", b);
    }
    printf("\n");

    return 0;
}