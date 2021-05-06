#pragma once
#ifndef PUNTO_H
#define PUNTO_H

class Punto
{
public:
	int x;
	int y;

	Punto();
	Punto(int, int);

	void setX(int);
	void setY(int);
	int getX();
	int getY();
};
#endif // !PUNTO_H
