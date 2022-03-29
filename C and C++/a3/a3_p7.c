/*
    CH-230-A
    a3_p7.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// printing c m times on one line
void print_thing(int m, char c) {
    int i;
    for (i = 0; i < m; i++) {
        printf("%c", c);
    }
}

void print_form(int n, int m, char c) {
    int i;
    for (i = 0; i < n; i++) {
    // calling function to print m times on every line
        print_thing(m, c); 
        printf("\n");
    // increasing m in order to print one more c every line
        m++; 
    // eventually reaches m + n - 1
    }
}

int main() {
    // declaration
    int n;
    int m;
    char c;

    // input
    scanf("%d", &n);
    scanf("%d", &m);

    getchar();
    scanf("%c", &c); 

    // calling the function
    print_form(n, m, c);

    return 0;
}
