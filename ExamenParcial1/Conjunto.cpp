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
	
	for (int i = 0; i < 10; i++)
	{
		in >> _c.cadena[i];
	}
	return in;
}

Conjunto& operator+(const Conjunto& a, const Conjunto& b)
{
	Conjunto resultado;

	for (int i = 0; i < 10; i++)
	{
		if (a.cadena[i] == i || b.cadena[i])
		{
			resultado.cadena[i] = i;
		}
	}

	return resultado;
}

Conjunto& operator-(const Conjunto& a, const Conjunto& b)
{
	Conjunto resultado;

	for (int i = 0; i < 10; i++)
	{
		if (a.cadena[i] == b.cadena[i])
		{
			resultado.cadena[i] = -1;
		}
	}
}

Conjunto opBurbuja(const Conjunto& c1)
{
	Conjunto novo = c1;
	int n;

	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			if (novo.cadena[i] > novo.cadena[j])
			{
				n = c1.cadena[i];
				novo.cadena[i] = novo.cadena[j];
				novo.cadena[j] = n;
			}
		}
	}
	return novo;
}