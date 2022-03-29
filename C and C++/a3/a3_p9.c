/*
    CH-230-A
    a3_p9.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// function returns -111 if the number of values is
// less than 6. otherwise it returns the sum.
double sum25(double v[], int n) {
    double sum;
    sum = v[2] + v[5];

    if (n < 6) {
        return -111;
    }

    return sum;
}

int main() {
    int m;
    scanf("%d", &m); // number of values in the array

    double arr[20];

    int i;
    for (i = 0; i < m; i++) // input of array's values
        scanf("%lf", &arr[i]);
    
    // if the former function returned -111, that means
    // one or both positions are invalid 
    if (sum25(arr, m) != -111)
        printf("sum=%lf\n", sum25(arr, m));
    else 
        printf("One or both positions are invalid\n");
    
    return 0;
}