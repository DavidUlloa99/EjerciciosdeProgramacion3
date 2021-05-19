#include "Conjunto.h"

Conjunto::Conjunto(void)
{
	for (int i = 0; i < 10; i++)
	{
		cadena[i] = -1;
	}
}

Conjunto::Conjunto(const char* _cadena)
{
	for (int i = 0; i < 10; i++)
	{
		cadena[i] = (int)_cadena[i] - 48;
	}
}

std::ostream& operator<<(std::ostream& out, const Conjunto& _c)
{
	for (int i = 0; i < 10; i++)
	{
		out << _c.cadena[i];
	}

	return out;
}

std::istream& operator>>(std::istream& in, const Conjunto& _c)
{
	
	for (size_t i = 0; i < 10; i++)
	{
		in >> _c.cadena[i];
	}
	return in;
}