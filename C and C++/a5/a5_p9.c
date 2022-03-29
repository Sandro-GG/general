/* 
    CH-230-A
    a5_p9.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void input(int ***arr, int r, int c, int d) {
    // input of every element of 3D array
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            for (int k = 0; k < d; k++)
                scanf("%d", &arr[i][j][k]);
}

void output(int ***arr, int r, int c, int d) {
    // output of every element in 2D sections of the array
    for (int k = 0; k < d; k++) {
        printf("Section %d:\n", k + 1);

        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++)
                printf("%d ", arr[i][j][k]);

            printf("\n");
        }
    }
}

int main() {
    int r, c, d; // row, column, depth
    scanf("%d", &r);
    scanf("%d", &c);
    scanf("%d", &d);

    // declaring and dynamically allocating r size memory
    int ***arr;
    arr = (int ***) malloc(sizeof(int) * r);

    if (arr == NULL)
        exit(1);

    // dynamically allocating c size memory in every allocated r
    for (int i = 0; i < r; i++) {
        arr[i] = (int **) malloc(sizeof(int) * c);

        if (arr[i] == NULL)
            exit(1);
        
        // dynamically allocating d size memory in every c in every r
        for (int j = 0; j < c; j++) {
            arr[i][j] = (int *) malloc(sizeof(int) * d);

            if (arr[i][j] == NULL)
                exit(1);
        }
    }

    // calling functions
    input(arr, r, c, d);
    output(arr, r, c, d);

    // freeing memory
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++)
            free(arr[i][j]);
        free(arr[i]);
    }
    free(arr);

    return 0;
}