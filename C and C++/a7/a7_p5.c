
#include <stdio.h>
#include <stdlib.h>

// comparing values for qsort
int acomparator(const void * p1, const void * p2) {
    return (*(int*)p1 - *(int*)p2);
}

// comparing values for qsort
int dcomparator(const void * p1, const void * p2) {
    return (*(int*)p2 - *(int*)p1);
}

// ascending qsort function
void asc(int arr[], int n) {
    qsort(arr, n, sizeof(int), acomparator);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// descending qsort function
void desc(int arr[], int n) {
    qsort(arr, n, sizeof(int), dcomparator);
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

// quick quit
void quit() {
    exit(1);
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];        
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // pointer function array with int* and int arguments
    void (*ptrfunc[3])(int*, int);
    ptrfunc[0] = asc;
    ptrfunc[1] = desc;
    ptrfunc[2] = quit;
    
    // endless while loop with switch
    char ch;
    while (1) {
        scanf("%c", &ch);
        switch (ch) {
            case 'a':
                (ptrfunc[0])(arr, n);
                break;
            case 'd':
                (ptrfunc[1])(arr, n);
                break;
            case 'e':
                (ptrfunc[2])(arr, n);
                break;
        }
    }
}
