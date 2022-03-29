/* 
    CH-230-A
    a5_p7.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // strings declaration
    char str1[100], str2[100];
    
    // strings input
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    // removing \n from the end of strings
    str1[strlen(str1) - 1] = '\0';
    str2[strlen(str2) - 1] = '\0';

    // declaring and initializing lengths
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // dynamically allocating exact size for str3
    char *str3;
    str3 = (char *) malloc(sizeof(char) * (len1 + len2));

    if (str3 == NULL)
        exit(1);

    // concatenation
    strcat(str1, str2);
    
    // putting concatenated string in str3
    str3 = str1;

    // printing result
    printf("Result of concatenation: %s\n", str3);


    return 0;
}