/* 
    CH-230-A
    a6_p7.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

// using pointer to return by reference
void set3bits(unsigned char *p, int a, int b, int n) {
    // using bitwise or for turn on
    *p |= 1 << a;
    *p |= 1 << b;
    *p |= 1 << n;
}


int main() {
    // declare and input char
    unsigned char c, p;
    scanf("%c", &c);
    p = c;

    // declare and input bits
    int a, b, n;
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &n);

    printf("The decimal representation is: %d\n", c);
    printf("The binary representation is: ");

    // print in binary
    int k, i = 0;
    while (i < 8) {
        // 128 is 10000000 so when the first bit of c is 1 
        // k is 128 when that happens assign 1 to k 
        k = c & 128;
        if (k == 128)
            k = 1;
        c = c << 1;
        // shift to right to get the bits on the first pos
        printf("%d", k);
        i++;
    }
    printf("\n");

    // call function
    set3bits(&p, a, b, n);

    printf("After setting the bits: ");
    // print the modified version
    i = 0;
    while (i < 8) {
        // using same method
        k = p & 128;
        if (k == 128)
            k = 1;
        p = p << 1;
        printf("%d", k);
        i++;
    }
    printf("\n");

    return 0;
}