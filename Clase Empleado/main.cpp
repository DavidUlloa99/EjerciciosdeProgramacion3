#include "Empleado.h"

int main()
{
	Empleado e1("David", "Ulloa", 11000);
	Empleado e2("Antonio", "Andara", 8000);

	e1.salarioAnual();
	e2.salarioAnual();

	e1.aumentoSalarial();
	e2.aumentoSalarial();

	e1.salarioAnual();
	e2.salarioAnual();

	return 0;
}