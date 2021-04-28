#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	std::cout << "***  ENTEROS MAYOR Y MENOR ***\n\n";

	int mayor=0, menor=0, temp;

	for (int i = 0; i < 5; i++)
	{
		cout << "Ingrese un numero: " << endl;
		cin >> temp;

		if (temp>=mayor)
		{
			temp = mayor;
		}

		if (temp <=menor)
		{
			temp = menor;
		}
	}
	
	cout << "Numero mayor = " << mayor << endl;
	cout << "Numero menor = " << menor << endl;
	

	_getch();
}