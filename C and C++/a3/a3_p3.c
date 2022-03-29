/*
    CH-230-A
    a3_p3.c
    Sandro Gakharia
    s.gakharia@jacobs-university.de
*/
#include <stdio.h>

// this function takes a variable and multiplies
// it by 0.00001 to convert it to float km
// and then returns it
float convert(int cm) {
    float km = cm * 0.00001;
    return km;
}

int main() {
    int x; // variable for centimeters
    
    scanf("%d", &x);
    
    // y 'becomes' km by calling the function
    float y = convert(x); 
    
    printf("Result of conversion: %f\n", y);

    return 0;
}