/* 
    CH-230-A
    a1_p1.c
    Sandro Gakharia
    sgakharia@jacobs-university.de
*/

#include <stdio.h> 

int main() {
    double result; /* The result of our calculation */
    result = (3 + 1.0) / 5;
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}

/* 
   The initial result is 0.000 due to variable "result" being double,
   and we were assigning the value we got by dividing two integers.
   what I did is I changed one of the numbers to a float by typing 5.0,
   which changed the answer to the equation from an integer to a float.
*/
