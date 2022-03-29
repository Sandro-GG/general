#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction f1, f2;
	
	cin >> f1;
	cout << "First fraction:" << f1 << endl;

	cin >> f2;
	cout << "Second fraction: " << f2 << endl;

	cout << "\nProduct: " << f1 * f2 << endl;
	cout << "Quotient: " << f1 / f2 << endl;

	return 0;
}