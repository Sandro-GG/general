/* 
    CH-230-A
    a4_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// function 
int count_consonants(char str[]) {
    int count = 0;

    // declaring a pointer and pointing to the first element of str
    char *strptr; 
    strptr = &str[0];    
    
    // checking each letter in the string   
    for (int i = 0; i < strlen(str); i++) {
        // strptr + i because it checks every element starting from str[0]
        if (*(strptr + i) == 'a' || *(strptr + i) == 'e' || *(strptr + i) == 'i' || 
            *(strptr + i) == 'o' || *(strptr + i) == 'u' || *(strptr + i) == 'A' || 
            *(strptr + i) == 'E' || *(strptr + i) == 'I' || *(strptr + i) == 'O' ||
            *(strptr + i) == 'U') 
                count = count;
        // if it's any other letter count increases
        else if ((*(strptr + i) >= 'a' && *(strptr + i) <= 'z') || 
                 (*(strptr + i) >= 'A' && *(strptr + i) <= 'Z'))
                count++;
    }
    return count;
}

// main function
int main() {
    // declare string
    char str[100];
    
    // input string
    fgets(str, sizeof(str), stdin);
    
    // while the first(and last) letter is '\n' keep printing
    while(str[0] != '\n') {
        printf("Number of consonants=%d\n", count_consonants(str));
        fgets(str, sizeof(str), stdin);
    }

    return 0;
}