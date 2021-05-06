#pragma once
#ifndef EMPLEADO_H
#define EMPLEADO_H
#include <iostream>

using namespace std;

class Empleado {
private:
	string nombre;
	string apellido;
	int salario;
public:
	Empleado();
	Empleado(string, string, int);

	void setNombre(string);
	void setApellido(string);
	void setSalario(int);

	string getNombre();
	string getApellido();
	int getSalario();

	void salarioAnual();
	void aumentoSalarial();
};
#endif // !EMPLEADO_H
