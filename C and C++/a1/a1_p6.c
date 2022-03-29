/* 
    CH-230-A
    a1_p1.c
    Sandro Gakharia
    sgakharia@jacobs-university.de
*/

#include <stdio.h>

int main() {
    char c = 'F';
    printf("third character after c is %c\n", c + 3);
    // I wrote c + 3 to increase ASCII code value by 3
    printf("corresponding ASCII code for it is %d\n", c + 3);
    // writing %d means we get an integer which would be from ASCII code
    return 0;
}