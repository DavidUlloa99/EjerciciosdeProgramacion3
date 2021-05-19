#pragma once
#ifndef CONJUNTO_H
#define CONJUNTO_H

#include <iostream>

class Conjunto
{
	friend std::ostream& operator<<(std::ostream&, const Conjunto&);
	friend std::istream& operator>>(std::istream&, const Conjunto&);
	friend Conjunto& operator+(const Conjunto&, const Conjunto&);
	friend Conjunto& operator-(const Conjunto&, const Conjunto&);

public:
	Conjunto(void);
	Conjunto(const char*);
	int cadena[10];
};
#endif // !CONJUNTO_H
