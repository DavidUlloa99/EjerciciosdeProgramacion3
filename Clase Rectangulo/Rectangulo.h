#pragma once
#ifndef RECTANGULO_H
#define RECTANGULO_H
#include <iostream>
#include "Punto.h"

using namespace std;

class Rectangulo
{
private:
	Punto arrIz;
	Punto arrDer;
	Punto abIz;
	Punto abDer;

public:
	
	Rectangulo(Punto,Punto,Punto,Punto);

	Punto getArrIz();
	Punto getArrDer();
	Punto getAbIz();
	Punto getAbDer();

	float getLongitud();
	float getAnchura();
	float perimetro();
	float area();
	void Cuadrado();
};
#endif // !RECTANGULO_H
