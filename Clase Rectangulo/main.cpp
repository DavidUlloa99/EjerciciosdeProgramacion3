#include "Rectangulo.h"
#include <conio.h>
#include <iostream>

int main()
{
	Punto p1(1, 3);  	
	Punto p2(3, 3);
	Punto p3(1, 1);   	
	Punto p4(3, 1);
	
	Rectangulo r1(p1, p2, p3, p4);
	
	cout << "Longitud: " << r1.getLongitud() << endl;
	cout << "Anchura: " << r1.getAnchura() << endl;
	cout << "Perimetro: " << r1.perimetro() << endl;
	cout << "Area: " << r1.area() << endl;
	cout << "Es un Cuadrado " << r1.Cuadrado() << endl;
	

	Punto p5(1, 7);  	
	Punto p6(3, 7);
	Punto p7(1, 1);   	
	Punto p8(3, 1);
	
	Rectangulo r2(p5, p6, p7, p8);
	
	cout << "Longitud: " << r2.getLongitud() << endl;
	cout << "Anchura: " << r2.getAnchura() << endl;
	cout << "Perimetro: " << r2.perimetro() << endl;
	cout << "Area: " << r2.area() << endl;
	cout << "Es Un Cuadrado: " << r2.Cuadrado() << endl;


	return 0;
}