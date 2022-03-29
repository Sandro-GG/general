/* 
    CH-230-A
    a5_p8.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void input(int **m1, int **m2, int n, int m, int p) {
    int i, j;
    
    // first matrix elements input
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &m1[i][j]);

    // second matrix elements input
    for (i = 0; i < m; i++)
        for (j = 0; j < p; j++)
            scanf("%d", &m2[i][j]);
}

void output(int **m1, int **m2, int n, int m, int p) {
    int i, j;

    printf("Matrix A:\n");
    

    // first matrix elements output
    for (i = 0; i < n; i++) {

        for (j = 0; j < m; j++) 
            printf("%d ", m1[i][j]);

        printf("\n");
    }

    printf("Matrix B:\n");


    // second matrix elements output
    for (i = 0; i < m; i++) {

        for (j = 0; j < p; j++) 
            printf("%d ", m2[i][j]);

        printf("\n");
    }
}

void product(int **m1, int **m2, int **m3, int n, int m, int p) {
    int i, j, k;

    printf("The multiplication result AxB:\n");
        // computing and printing multiplication of matrices
        for (i = 0; i < n; i++) {
            for (k = 0; k < p; k++) {
                m3[i][k] = 0;
                // matrix multiplication formula
                for (j = 0; j < m; j++) 
                    m3[i][k] += m1[i][j] * m2[j][k];
                // result output
                printf("%d ", m3[i][k]);
            }
            printf("\n");
        }
}


int main() {
    // dimensions declaration and input
    int n, m, p;
    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    // matrices declaration
    int **m1, **m2, **m3;
    
    // dynamically allocating memory for the first matrix
    m1 = (int **) malloc(sizeof(int) * n);
    if (m1 == NULL)
        exit(1);

    for (int i = 0; i < n; i++) {
        m1[i] = (int *) malloc(sizeof(int) * m);
        if (m1[i] == NULL)
            exit(1);
    }

    // dynamically allocating memory for the second matrix
    m2 = (int **) malloc(sizeof(int) * m);
    if (m2 == NULL)
        exit(1);

    for (int i = 0; i < m; i++) {
        m2[i] = (int *) malloc(sizeof(int) * p);
        if (m2[i] == NULL)
            exit(1);
    }

    // dynamically allocating memory for the product matrix
    m3 = (int **) malloc(sizeof(int) * n);
    if (m3 == NULL)
        exit(1);

    for (int i = 0; i < n; i++) {
        m3[i] = (int *) malloc(sizeof(int) * p);
        if (m3[i] == NULL)
            exit(1);
    }

    // calling functions and printing results
    input(m1, m2, n, m, p);
    output(m1, m2, n, m, p);
    product(m1, m2, m3, n, m, p);

   
    // freeing memory
    for (int i = 0; i < n; i++)
        free(m1[n]);
    free(m1);

    for (int i = 0; i < m; i++)
        free(m2[m]);
    free(m2);

    for (int i = 0; i < p; i++)
        free(m3[p]);
    free(m3);

    return 0;
}