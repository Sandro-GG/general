/* 
    CH-230-A
    a6_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

// x is either 1 or 0 depending on c
#define BIT(x, c) x = c & 1;

int main() {
    // declare and input c
    unsigned char c;
    scanf("%c", &c);

    int x; // x represents last bit
    printf("The decimal representation is: %d\n", c);

    // using macro
    BIT(x, c);

    // print result
    printf("The least significant bit is: %d\n", x);

    return 0;
}