#include <iostream>
#include <conio.h>
#include "Conjunto.h"

using namespace std;

int main()
{
	Conjunto a;
	Conjunto b;

	cout << "Ingrese conjunto a: ";
	cin >> a;

	cout << "Ingrese conjunto b: ";
	cin >> b;

	Conjunto c = a + b;
	Conjunto d = a - b;

	cout << "Conjunto c: ";
	cout << c;

	cout << "Conjunto d: ";
	cout << d;

	_getch();
}