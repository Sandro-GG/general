#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// function for uppercasing string
void upper(char str[100]) {
    // creating new temp string so that the main one doesn't change
    char str2[100]; 
    strcpy(str2, str);
    for (int i = 0; i < strlen(str2) - 1; i++) { //checking with ascii
        if (str2[i] >= 97 && str2[i] <= 122)
            str2[i] -= 32;
    }
    printf("%s", str2);
}

// function for lowercasing string
void lower(char str[100]) {
    char str2[100];
    strcpy(str2, str);
    for (int i = 0; i < strlen(str2) - 1; i++) { //checking with ascii
        if (str2[i] >= 65 && str2[i] <= 90)
            str2[i] += 32;
    }
    printf("%s", str2);
}

// function for swaping lower/upper case chars
void swaplowup(char str[100]) {
    char str2[100];
    strcpy(str2, str);
    for (int i = 0; i < strlen(str2) - 1; i++) {
        if (str2[i] >= 65 && str2[i] <= 90) {
            str2[i] = tolower(str2[i]);
        } else {
            str2[i] = toupper(str2[i]);
        }
    }
    printf("%s", str2);
}

// quick quit 
void quit() {
    exit(1);
}

// main func
int main() {
    char str[100];
    fgets(str, 100, stdin); // string input
    int n = 0;
    
    // function pointer array with char* argument
    void (*ptrfunc[4])(char*);
    ptrfunc[0] = upper;
    ptrfunc[1] = lower;
    ptrfunc[2] = swaplowup;
    ptrfunc[3] = quit;

    // endless while loop for calling functions
    while (1) {
        scanf("%d", &n);
        (ptrfunc[n - 1])(str);
    }
}
