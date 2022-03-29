/* 
    CH-230-A
    a1_p2.c
    Sandro Gakharia
    sgakharia@jacobs-university.de
*/

#include <stdio.h>

int main() {
    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result); // giving an argument
    return 0;
} 

// the program was printing a random number because there 
// was no argument assigned to printf() 