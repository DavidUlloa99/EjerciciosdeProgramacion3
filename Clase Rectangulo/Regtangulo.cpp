#include "Rectangulo.h"

Rectangulo::Rectangulo(Punto arri, Punto arrd, Punto abi, Punto abd) 
{
	if (arri.getX() < 20 && arri.getY() < 20 
		&& arrd.getX() < 20 && arrd.getY() < 20
		&& abi.getX() < 20 && abi.getY() < 20
		&& abd.getX() < 20 && abd.getY() < 20)
	{
		arrIz = arri;
		arrDer = arrd;
		abIz = abi;
		abDer = abd;
	}
	else
	{
		cout << "Los puntos no concuerdan para un rectangulo"<< endl;
	}

	if (arri.getX()!= abi.getX())
	{
		cout << "Valores de los puntos superior izquierdo y bajo izquierdo no concuerdan para un rectangulo" << endl;
	}

	if (arrd.getX() != abd.getX())
	{
		cout << "Valores de los puntos superior derecho y bajo derecho no concuerdan para un rectangulo" << endl;
	}
}

Punto Rectangulo::getArrIz()
{
	return arrIz;
}

Punto Rectangulo::getArrDer()
{
	return arrDer;
}

Punto Rectangulo::getAbIz()
{
	return abIz;
}

Punto Rectangulo::getAbDer()
{
	return abDer;
}

float Rectangulo::getLongitud()
{
	Punto supIz = getArrIz();
	Punto supDer = getArrDer();

	return supDer.getX() - supIz.getX();
}

float Rectangulo::getAnchura()
{
	Punto supIz = getArrIz();
	Punto bajIz = getAbIz();

	return supIz.getY() - bajIz.getY();
}

float Rectangulo::perimetro()
{
	float p = getAnchura() * 2 + getLongitud() * 2;
	return p;
}

float Rectangulo::area()
{
	float a = getAnchura() * getLongitud();
	return a;
}

void Rectangulo::Cuadrado()
{
	if (getAnchura() == getLongitud())
	{
		cout << "La figura es un cuadrado" << endl;
	}
}