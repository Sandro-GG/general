/* 
    CH-230-A
    a2_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    char c;
    
    scanf("%c", &c); // read character from keyboard

    // %c for character, %d for decimal,
    // %o for octal, %x for hexadecimal
    printf("character=%c\n", c);
    printf("decimal=%d\n", c);
    printf("octal=%o\n", c);
    printf("hexadecimal=%x\n", c);
    
    return 0;
}