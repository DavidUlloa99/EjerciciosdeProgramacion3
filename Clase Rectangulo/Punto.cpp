#include "Punto.h"

Punto::Punto() : x(0),y(0)
{}

Punto::Punto(int xn, int yn) : x(xn), y(yn)
{
	setX(xn);
	setY(yn);
}

void Punto::setX(int n)
{
	this->x = n;
}

void Punto::setY(int n)
{
	this->y = n;
}

int Punto::getX()
{
	return x;
}

int Punto::getY()
{
	return y;
}