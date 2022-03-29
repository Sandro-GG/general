/* 
    CH-230-A
    a9_p6.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/

#include <iostream>
#include <cmath>
using namespace std;

int i;

// simple function
int myfirst(int *arr) {
    for (i = 0; i < 10; i++)
        if ((arr[i] > 0) && (arr[i] % 2 == 0))
            return arr[i];
    return -1;
}

double myfirst(double *arr) {
    double intpart;
    // using modf() to get the fractional part
    for (i = 0; i < 10; i++)
        if ((arr[i] < 0) && (modf(arr[i], &intpart) == 0))
            return arr[i];
    return -1.1;
}

char myfirst(char *arr) {
    // as long as letter isn't a vowel
    for (i = 0; i < 10; i++)
        if (arr[i] != 65  && arr[i] != 69  && arr[i] != 73  &&
            arr[i] != 79  && arr[i] != 85  && arr[i] != 97  &&
            arr[i] != 101 && arr[i] != 105 && arr[i] != 111 &&
            arr[i] != 117)
                return arr[i];
    return '0';
}

int main() {
    // you can change the data type here to test the result
    char arr[10];

    // input values
    for (i = 0; i < 10; i++)
        cin >> arr[i];

    cout << myfirst(arr) << endl;

    return 0;
}