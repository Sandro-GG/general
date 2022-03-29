/* 
    CH-230-A
    a2_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main () {
    int h, d, w; // hours, days, weeks
    int total;

    // read from keyboard
    scanf("%d",&h);
    scanf("%d",&d);
    scanf("%d",&w);

    // "formula" for total hours
    total = h + d * 24 + w * 7 * 24;
    
    printf("total hours: %d\n", total);
    
    return 0;
}