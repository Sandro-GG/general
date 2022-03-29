/*
    CH-230-A
    a3_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

int main() {
    char c;
    int n, i;
    double sum;
    scanf("%c", &c);
    
    // enter how many values you want to be in the array
    scanf("%d", &n);

    double arr[n];

    // enter values for the array n times
    for (i = 0; i < n; i++) 
        scanf("%lf", &arr[i]);

    // sum of all the values
    for (i = 0; i < n; i++)
        sum += arr[i];

    // different outputs for each case
    switch (c) {
        case 's':
            printf("%lf\n", sum);
            break; // prints sum

        case 'p':
            for(i = 0; i < n; i++)
                printf("%lf\n", arr[i]);
            break; // printing each value

        case 't':
            for (i = 0; i < n; i++)
                printf("%lf\n", arr[i] * 9 * 0.2 + 32);
            break; // conversion to fahrenheit

        default:
            printf("%lf\n", sum / n); // printing mean
    }

    return 0;
}