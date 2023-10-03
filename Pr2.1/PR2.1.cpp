// Lab_02.cpp
// < Ящишин Михайло >
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 31

#include <iostream>


using namespace std;

int main() {
	double z1;
	double z2;
	double a;




	cout << "a = "; cin >> a;

	z1 = (1. - 2. * (pow(sin(a), 2))) / (1 + sin(2 * a));
	z2 = (1. - tan(a)) / (1 + tan(a));

	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2;


	return 0;
}