// simple class for fractions
#include <iostream>
using namespace std;

#ifndef FRACTION_H_
#define FRACTION_H_

class Fraction {
    private:						
        int num;					
        int den;					

        int gcd(int a, int b);		
        int lcm(int a, int b);

    public:
        Fraction();					
        Fraction(int, int = 1); 	// constructor taking values for fractions and
                                    // integers. Denominator by default is 1

        friend ostream& operator<<(ostream& out, const Fraction &obj); 
        friend istream& operator>>(istream& in, Fraction &obj);

        Fraction operator*(const Fraction &obj);
        Fraction operator/(const Fraction &obj);
};


#endif /* FRACTION_H_ */