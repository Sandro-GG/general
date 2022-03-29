/* 
    CH-230-A
    a5_p11.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

int prime(int x, int y) {
    
    // y decreases by one each time so when it 
    // reaches 1 that means x could not be divided
    // by anything else hence it is prime
    if (y == 1)
        return 1;
    else if (x % y == 0)
        return 0;
    
    // dividing x by one less each time to see if it's divisible
    return prime(x, y - 1);
}

int main() {
    int x;
    scanf("%d", &x);

    // special case for when input is 1 
    if (x == 1) {
        printf("%d is not prime\n", x);
        return 0;
    }

    int y = x;
    // print corresponding message depending on result
    if (prime(x, y - 1) == 1)
        printf("%d is prime\n", x);
    else 
        printf("%d is not prime\n", x);


    return 0;
}