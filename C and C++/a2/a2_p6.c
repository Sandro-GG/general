/*
    CH-230-A
    a2_p6.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    // declaring and inputting doubles
    double x, y;
    scanf("%lf", &x);
    scanf("%lf", &y);

    // pointing pointers to doubles
    double *ptr_one, *ptr_two, *ptr_three;
    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    // printing pointer addresses using %p
    printf("first pointer address=%p\n", ptr_one);
    printf("second pointer address=%p\n", ptr_two);
    printf("third pointer address=%p\n", ptr_three);
        
    return 0;
}