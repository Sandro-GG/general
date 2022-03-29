/* 
    CH-230-A
    a5_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char *str) {
    int count = 0;

    // count increases when lowercase character appears
    for (int i = 0; i < strlen(str); i++) 
        // using a pointer to walk through array
        // lowercase letters and between 97 and 122 in ASCII
        if(*(str + i) >= 97 && *(str + i) <= 122)
            count++; 

    return count;
}

int main() {
    // string declaration
    char str[50];
    
    // string input
    fgets(str, sizeof(str), stdin);

    // unless the first and only element is '\n' keep printing and reading
    while (str[0] != '\n' && strlen(str) != 1) {
        printf("number of lowercase characters:%d\n", count_lower(str));
        fgets(str, sizeof(str), stdin);
    }
    
    
    return 0;
}