#include <iostream>
#include "Cuenta.h"

int main()
{
	Cuenta c1;
	Cuenta c2(5000);

	c1.obtenerSaldo();
	c2.obtenerSaldo();

	c1.abonar(10500);
	c2.cargar(8000);

	c1.obtenerSaldo();

	return 0;
}