/* 
    CH-230-A
    a4_p12.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void replaceAll(char *str, char c, char e) {
    // iterating with a pointer to pass by reference
    // replacing every element that's c with e
    for (int i = 0; i < strlen(str); i++)
        if (*(str + i) == c)
            *(str + i) = e;
}


int main() {
    // delcaration
    char str[80];
    char c, e;
    
    // keep this loop going until input is "stop" 
    while (1) {   
        // input string 
        fgets(str, sizeof(str), stdin);

        // using strtok to remove '\n' from the end of the string
        strtok(str, "\n");
        
        // if input is stop then break the loop
        if (strlen(str) == 4 && str[0] == 's' && str[1] == 't'
            && str[2] == 'o' && str[3] == 'p')
            break;

        // input characters
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);

        // print the string before calling the function and modifying it
        printf("unmodified string:%s\n", str);
        
        // function call
        replaceAll(str, c, e);

        // print results
        printf("modified string:%s\n", str);
        printf("replaced character:%c\n", c);
        printf("replacing character:%c\n", e);
          
        // using getchar() to read \n, so that string input properly works again
        getchar();
    }

    return 0;
}