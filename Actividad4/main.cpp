#include "SeccionLista.h"
#include <conio.h>
#include <iostream>

int main()
{
	SeccionLista AN;
	char x = 'R';
	char y = 'L';
	char z = 'Z';

	AN.agregarAlumno(&x, 70);
	AN.agregarAlumno(&y, 50);
	AN.agregarAlumno(&z, 90);
	AN.listarSeccion();

	std::cout << "Cantidad total de aprobados: " << AN.cantidadAprobados();
	_getch();
}