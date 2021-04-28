#include <iostream>
#include <conio.h>

using namespace std;
int binarioADecimal(long n);

int binarioADecimal(long n)
{
	int numDec = 0, x = 0, residuo;

	while (n != 0)
	{
		residuo = n % 10;
		n /= 10;
		numDec += residuo * pow(2, x);
		x++;
	}
	return numDec;
}

int main()
{
	std::cout << "***  BINARIO A DECIMAL ***\n\n";

	long numBin;
	cout << "Ingrese un numero binario (base 2 ):\n";
	cin >> numBin;

	cout << "Numero en decimal: " << binarioADecimal(numBin) << endl;

	_getch();
}