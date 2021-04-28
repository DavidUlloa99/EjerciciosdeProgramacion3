#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	std::cout << "***  TABLA DE CUADRADOS Y CUBOS ***\n\n";

	cout<<"Entero	Cuadrado	Cubo"<<endl;
	for (int i = 0; i <=10; i++)
	{
		cout<<i<<"	"<<i*i<<"		"<<i*i*i<<endl;
	}


	_getch();
}