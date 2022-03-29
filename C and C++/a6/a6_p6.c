/* 
    CH-230-A
    a6_p6.c
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
    printf("The binary representation is: ");
    
    // we only need this loop 8 times
    int b, i = 0;
    while (i < 8) {
        // 128 is 10000000 so when the first bit of c is 1 
        // b is 128 when that happens assign 1 to b 
        b = c & 128;
        if (b == 128)
            b = 1;
        // shift to right to get the bits on the first pos
        c = c << 1;
        printf("%d", b);
        i++;
    }
    printf("\n");

    return 0;
}