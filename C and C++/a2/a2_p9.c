/*
    CH-230-A
    a2_p9.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);

    // digits are between 48 and 57 on ASCII table 
    if ((c >= 48) && (c <= 57)) {
        printf("%c is a digit\n", c);
    }
    // letters are between 65 and 90 or between 97 and 122 on ASCII 
    else if (((c >= 65) && (c <= 90)) || ((c >= 97) && (c <= 122))) {
        printf("%c is a letter\n", c);
    }
    // every other number on ASCII table is some other symbol
    else {
        printf("%c is some other symbol\n", c);
    }

    return 0;
}