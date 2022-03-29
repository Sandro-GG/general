/* 
    CH-230-A
    a5_p10.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

void recurs(int n) {
    // if n reaches 0 the function stops
    if (n == 0)
        return;
    // print current n
    printf("%d\n", n);
    // keep calling this function until n = 0
    recurs(n - 1);
}

int main() {
    // declare and input n
    int n;
    scanf("%d", &n);
    // call function
    recurs(n);
    return 0;
}