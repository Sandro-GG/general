/* 
    CH-230-A
    a4_p11.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// this function returns counts occurences of a character
int count_insensitive(char *str, char c) {
    int count = 0;
    // for every occurence of given letter 'count' increases
    for (int i = 0; i < strlen(str); i++) 
      if (*(str + i) == tolower(c) || *(str + i) == toupper(c))
        count++;
    
    return count;
}

int main() {

    // dynamically allocating 50 chars for first string
    char *str1;
    str1 = (char *) malloc(sizeof(char) * 50);
    if (str1 == NULL)
        exit(1);

    // string input
    fgets(str1, sizeof(char) * 50, stdin);

    // dynamically allocating correct size for second string
    char *str2;
    str2 = (char *) malloc(sizeof(char) * strlen(str1));
    if (str2 == NULL)
        exit(1);

    // copying the first string into the second one
    strcpy(str2, str1);

    // freeing memory from first string
    free(str1);

    // checking the occurence of these characters in input string
    printf("The character 'b' occurs %d times.\n", count_insensitive(str2, 'b'));
    printf("The character 'H' occurs %d times.\n", count_insensitive(str2, 'H'));
    printf("The character '8' occurs %d times.\n", count_insensitive(str2, '8'));
    printf("The character 'u' occurs %d times.\n", count_insensitive(str2, 'u'));
    printf("The character '$' occurs %d times.\n", count_insensitive(str2, '$'));

    // freeing memory from second string
    free(str2);

    return 0;
}