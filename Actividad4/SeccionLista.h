#pragma once
#ifndef SECCIONLISTA_H
#define SECCIONLISTA_H

#include "AlumnoNodo.h"

class SeccionLista
{
public:
	AlumnoNodo* primero;
	SeccionLista(void);
	bool estaVacia();
	void agregarAlumno(char* nombre, int nota);
	void listarSeccion();
	int cantidadAprobados();
};
#endif // !SECCIONLISTA_H
