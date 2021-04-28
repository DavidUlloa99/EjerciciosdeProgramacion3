#include <iostream>
#include <conio.h>

using namespace std;
int invertir(int n);

int invertir(int n)
{
	int novo = 0;

	while (n > 0)
	{
		novo = novo + n % 10;
		novo = novo * 10;
		n = n / 10;
	}
	return novo / 10;
}

int main()
{
	std::cout << "***  PALINDROMO ***\n\n";

	int num;
	cout << "Ingrese un numero para verificar si es palindromo: \n";
	cin >> num;

	int f = invertir(num);
	cout << f << endl;
	if (num == f)
	{
		cout << "Es Palindromo" << endl;
	}
	else
	{
		cout << "No es un palindromo" << endl;
	}



	_getch();
}