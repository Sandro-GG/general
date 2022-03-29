/* 
    CH-230-A
    a1_p1.c
    Sandro Gakharia
    sgakharia@jacobs-university.de
*/
#include <stdio.h>

int main () {
    // declaring everything
    double x, y;
    int a, b;
    char c, d; 
    
    scanf("%lf", &x);
    scanf("%lf", &y);
    
    scanf("%d", &a);
    scanf("%d", &b);
    
    // using getchar() in order to avoid probrems with scanf
    getchar();
    scanf("%c", &c);
    getchar();
    scanf("%c", &d);


    // printing everything
    printf("sum of doubles=%lf\n", x + y);
    printf("difference of doubles=%lf\n", x - y);
    printf("square=%lf\n", x * x);
    printf("sum of integers=%d\n", a + b);
    printf("product of integers=%d\n", a * b);

    // printing sum and product of chars as integers from ASCII
    printf("sum of chars=%d\n", c + d);
    printf("product of chars=%d\n", c * d);
    
    // printing sum and product of chars as characters
    printf("sum of chars=%c\n", c + d);
    printf("product of chars=%c\n", c * d);

    return 0;
}