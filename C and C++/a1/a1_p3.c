/* 
    CH-230-A
    a1_p3.c
    Sandro Gakharia
    sgakharia@jacobs-university.de
*/

#include <stdio.h> //added "#" before include

int main() {
    float result; /* The result of the division */
    int a = 5;
    float b = 13.5; //changed int to float because 13.5 is a float
    result = a / b;
    printf("The result is %f\n", result); //changed %d to %f to get a float
    return 0;
}

/*  without # before include the program would not compile.
    13.5 is not an integer, so we had to change it to float.
    Then changed %d to %f in print() to get a float result. */