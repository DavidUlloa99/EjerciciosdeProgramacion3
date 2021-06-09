#include "AlumnoNodo.h"
#include <iostream>
#include <conio.h>

using namespace std;

AlumnoNodo::AlumnoNodo() : nombre(), nota(0.0), siguiente(nullptr)
{}

AlumnoNodo::AlumnoNodo(char* _nombre, float _nota, AlumnoNodo* _siguiente) : nombre(_nombre),
nota(_nota), siguiente(_siguiente)
{

}

void AlumnoNodo::setNombre(char* _nombre)
{
	this->nombre = _nombre;
}

char* AlumnoNodo::getNombre()
{
	return nombre;
}

void AlumnoNodo::setNota(float _nota)
{
	this->nota = _nota;
}

float AlumnoNodo::getNota()
{
	return nota;
}

void AlumnoNodo::setSiguiente(AlumnoNodo* _siguiente)
{
	this->siguiente = _siguiente;
}

AlumnoNodo* AlumnoNodo::getSiguiente()
{
	return siguiente;
}

