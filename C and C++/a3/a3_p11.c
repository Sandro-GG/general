/*
    CH-230-A
    a3_p11.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int main() {
    // declaration
    char one[50];
    char two[50];
    char three[50];
    int result;
    char c;
    int i;
    int len1;
    int len2;
    
    // using fgets for string input
    fgets(one, sizeof(one), stdin);
    fgets(two, sizeof(two), stdin);
    
    // comparing lengths of strings 'one' and 'two'
    result = strcmp(one, two);

    // using strtok to remove \n from strings
    strtok(one, "\n");
    strtok(two, "\n");

    // using strlen() to get the size of strings
    len1 = strlen(one);
    len2 = strlen(two);
    printf("length1=%d\n", len1);
    printf("length2=%d\n", len2);

    // putting 'two' in 'one' next to it
    strcat(one, two);
    printf("concatenation=%s\n", one);
    
    // copying string 'two' to 'three'
    strcpy(three, two);
    printf("copy=%s\n", three);
    
    // if value is > 0 first is bigger. if > 0 
    // second is bigger. if = 0 they're equal
    if (result < 0) {
        printf("one is smaller than two\n");
    }
    else if (result == 0) {
        printf("one is equal to two\n");
    }
    else {
        printf("one is larger than two\n");
    }

    scanf("%c", &c);

    // variable i compares each letter in the string to character c. so 
    // if c is equal to a character in the string, the 'if' happens and it
    // gets printed. also, the whole code stops so it doesn't print again
    for(i = 0; i <= strlen(two); i++) {
        if (c == two[i]) {
            printf("position=%d\n", i);
            return 0;
        }
    }
    
    // in case the code does not stop during the loop,
    // it means the character is not in the string
    printf("The character is not in the string\n");
    
    return 0;
}