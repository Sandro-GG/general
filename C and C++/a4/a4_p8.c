/* 
    CH-230-A
    a4_p8.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>

// this function prints the values in a matrix
void matrix(int arr[30][30], int n) {
    int i, j;
    printf("The entered matrix is:\n");
    // iterating over each row and column
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", arr[i][j]);
        printf("\n"); // next row
    }
}

// this function prints values under the main diagonal
void diag(int arr[30][30], int n) {
    int i, j;
    printf("Under the secondary diagonal:\n");
    // iterates over every i and j under n
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            // the sum of indeces of values on the secondary diagonal
            // is n and everything under is > n. So we print those
            if (i + j >= n) 
                printf("%d ", arr[i][j]);
    printf("\n");

}

int main() {
    // declaration
    int arr[30][30];
    int n, i, j;
    // input of amount of rows and columns
    scanf("%d", &n);

    // input of every value in the matrix
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    // calling the functions
    matrix(arr, n);
    diag(arr, n);

    return 0;
}