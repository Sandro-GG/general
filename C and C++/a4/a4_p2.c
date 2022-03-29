/* 
    CH-230-A
    a4_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char str[50];

    // string input
    fgets(str, sizeof(str), stdin);

    // for every value of the array check the if statement    
    for (int i = 0; i < strlen(str) - 1; i++) {
        // if the position is even print without space
        if (i % 2 == 0)
            printf("%c\n", str[i]);
        // if the position is odd print with space
        else 
            printf(" %c\n", str[i]);    
    }

    return 0;
}