
#include <iostream>
#include <conio.h>
#include "SeccionLista.h"

using namespace std;

SeccionLista::SeccionLista() : primero(nullptr)
{}

bool SeccionLista::estaVacia()
{
	return primero == nullptr;
}

void SeccionLista::agregarAlumno(char* nombre, int nota)
{

	AlumnoNodo* nuevo = new AlumnoNodo(nombre, nota, nullptr);

	if (estaVacia())
	{
		primero = nuevo;
	}
	else
	{

		AlumnoNodo* actual = primero;

		while (actual->getSiguiente() != nullptr)
		{
			actual = actual->getSiguiente();
		}

		actual->setSiguiente(nuevo);

	}

	cout << "¡Nodo agregado!\n";
}

void SeccionLista::listarSeccion()
{
	AlumnoNodo* actual = primero;

	while (actual != nullptr)
	{
		cout << "Alumno { nombre: " << actual->getNombre() << ", nota: " << actual->getNota() << " } ";
		actual = actual->getSiguiente();
	}

	cout << "\n";
}

int SeccionLista::cantidadAprobados()
{
	int aprobados = 0;

	AlumnoNodo* actual = primero;

	while (actual != nullptr)
	{
		if (actual->getNota() >= 70)
		{
			aprobados++;
		}
		actual = actual->getSiguiente();
	}
	return aprobados;
}