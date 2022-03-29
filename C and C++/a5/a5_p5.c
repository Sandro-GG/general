/* 
    CH-230-A
    a5_p5.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

// this function computes and returns the scalar product
double scalar(double *v, double *w, int size) {
    double product = 0;
    // computing the product
    for (int i = 0; i < size; i++)
        product += v[i] * w[i];

    return product;
}

void func(double *v, double *w, int size) {
    int i = 0;
    // declaration and initialization of
    // first vector's components
    double min1 = v[i];
    int min1pos = 0;
    double max1 = v[i];
    int max1pos = 0;
    
    // second vector's components
    double min2 = w[i];
    int min2pos = 0;
    double max2 = w[i];
    int max2pos = 0;
    
    // checking each element of each vector and assigning
    // minimum values and corresponsive positions
    for (i = 1; i < size; i++) {
        if (min1 > v[i]) {
            min1 = v[i];
            min1pos = i;
        }
        if (min2 > w[i]) {
            min2 = w[i];
            min2pos = i;
        }
    }

    // maximum values and corresponsive positions
    for (i = 1; i < size; i++) {
        if (max1 < v[i]) {
            max1 = v[i];
            max1pos = i;
        }
        if (max2 < w[i]) {
            max2 = w[i];
            max2pos = i;
        }
    }

    // printing results
    printf("The smallest = %lf\n", min1);
    printf("Position of smallest = %d\n", min1pos);
    printf("The largest = %lf\n", max1);
    printf("Position of largest = %d\n", max1pos);
    printf("The smallest = %lf\n", min2);
    printf("Position of smallest = %d\n", min2pos);
    printf("The largest = %lf\n", max2);
    printf("Position of largest = %d\n", max2pos);
    

}


int main() {
    // declaration
    double *v, *w;
    int i, n;
    scanf("%d", &n); // number of components input

    // dynamically allocating memory for vectors
    v = (double *) malloc(sizeof(double) * n);
    w = (double *) malloc(sizeof(double) * n);

    if (v == NULL) 
        exit(1);
    if (w == NULL)
        exit(1);

    // input of elements in vectors
    for (i = 0; i < n; i++)
        scanf("%lf", &v[i]);
    for (i = 0; i < n; i++)
        scanf("%lf", &w[i]);

    // calling functions
    printf("Scalar product=%lf\n", scalar(v, w, n));
    func(v, w, n);

    // freeing memory
    free(v);
    free(w);

    return 0;
}