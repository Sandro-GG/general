/* 
    CH-230-A
    a5_p1.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

void triangle(int n, char ch) {
    // declaring new integer m to use it
    // for decreasing chars per line 
    int m = n;

    for (int i = 0; i < n; i++) {
        // types char m times on a line
        for (int j = m; j > 0; j--)
            printf("%c", ch);
        printf("\n"); // newline n times
        m--; // decrease m in order to type one
             // less times on the next line
    }
}



int main() {
    // declaration
    int n;
    char ch;
    
    // input
    scanf("%d", &n);
    getchar();
    scanf("%c", &ch);

    // function call
    triangle(n, ch);

    return 0;
}