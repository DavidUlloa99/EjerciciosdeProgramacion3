#include "Empleado.h"

Empleado::Empleado():nombre(),apellido(),salario(0)
{}

Empleado::Empleado(string nombren, string apellidon,int salarion):nombre(nombren),apellido(apellidon),salario(salarion)
{
	if (salarion<0)
	{
		setSalario(0);
	}
}

void Empleado::setNombre(string nom)
{
	this->nombre = nom;
}

void Empleado::setApellido(string ape)
{
	this->apellido = ape;
}

void Empleado::setSalario(int sal)
{
	this->salario = sal;
}

string Empleado::getNombre()
{
	return nombre;
}

string Empleado::getApellido()
{
	return apellido;
}

int Empleado::getSalario()
{
	return salario;
}

void Empleado::aumentoSalarial()
{
	int sal, salnovo,aum;

	sal = getSalario();
	aum = sal * 0.10;
	salnovo = sal + aum;
	setSalario(salnovo);
}

void Empleado::salarioAnual()
{
	int anual;
	anual = getSalario() * 12;
	cout << "Nombre :" << getNombre() << " Apellido : " << getApellido() << " Salario Anual: " << anual << endl;
}