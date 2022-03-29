#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction()
{
	num = 1;
	den = 1;
}

Fraction::Fraction(int n, int d)
{
	int tmp_gcd = gcd(n, d);

	num = n / tmp_gcd;
	den = d / tmp_gcd;
}

int Fraction::gcd(int a, int b)
{
	int tmp_gcd = 1;

	// Implement GCD of two numbers;

	return tmp_gcd;
}

int Fraction::lcm(int a, int b)
{
	return a * b / gcd(a, b);

}

ostream& operator<<(ostream& out, const Fraction &obj) {
	out << obj.num << "/" << obj.den << endl;
	return out;
}

istream& operator>> (istream& in, Fraction &obj) {
	cout << "Enter numerator: ";
	in >> obj.num;
	cout << "Enter denumerator: ";
	in >> obj.den;

	while (obj.den == 0) {
		cout << "Enter valid denumerator: ";
		in >> obj.den;
	}

	return in;
}

Fraction Fraction::operator*(const Fraction &obj) {
	Fraction prod(this->num * obj.num, this->den * obj.den);
	return prod;
}

Fraction Fraction::operator/(const Fraction &obj) {
	Fraction quo(this->num * obj.den, this->den * obj.num);
	return quo;
}