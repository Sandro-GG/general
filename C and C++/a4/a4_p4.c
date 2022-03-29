/* 
    CH-230-A
    a4_p4.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

// function 
int count_consonants(char str[]) {
    int count = 0;
    // checking each letter in the string
    for (int i = 0; i < strlen(str); i++) {
        // if the letter is a vowel the count doesn't change
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || 
            str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || 
            str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
            str[i] == 'U') 
                count = count;
        // if it's any other letter count increases
        else if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                count++;
    }
    return count;
}

// main function
int main() {
    // string declaration
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