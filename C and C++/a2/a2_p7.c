/*
    CH-230-A
    a2_p7.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    int i = 8;
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    printf("That's it.\n");
    return 0;
}
/* the statement in while loop had to be 
surrounded by braces {}, otherwise i-- was
not included in the loop, so it was never
decreasting and always staying as i = 4 */