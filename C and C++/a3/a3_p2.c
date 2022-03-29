/*
    CH-230-A
    a3_p2.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    // declaration
    char ch;
    int n;
    int i; // we need this in the 'for' loop later

    // input
    scanf("%c", &ch);
    scanf("%d", &n);
    
    // this is outside because the first one
    // doesn't have '-%d' 
    printf("%c, ", ch); 
    
    // in the assignments it was without \n
    // that's why i didn't include it
    for(i = 1; i < n; i++) {
        printf("%c-%d, ", ch, i);
    }

    // this is outside the loop because the last one
    // doesn't have the comma at the end
    printf("%c-%d\n", ch, i);
    
    return 0;
}