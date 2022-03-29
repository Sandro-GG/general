/*
    CH-230-A
    a2_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    // declare integer, input, print
    int a;
    scanf("%d", &a);
    printf("a=%d\n", a);

    // declare pointer, point to a, print address
    int *ptr_a;
    ptr_a = &a;
    printf("address=%p\n", ptr_a);

    // increase value of a by 5 and print
    *ptr_a = *ptr_a + 5;
    printf("modified value:%d\n", a);
    printf("variable address:%p\n", &a); // &a because address

    return 0;
}