#include "Cuenta.h"

Cuenta::Cuenta() :saldo(0)
{}

Cuenta::Cuenta(int saldoN) : saldo(saldoN)
{
	if (saldo < 0) {
		cout << "Saldo inicial no valido" << endl;
		saldo = 0;
	}
}

void Cuenta::setSaldo(int saldoN)
{
	this->saldo = saldoN;
}

int Cuenta::getSaldo()
{
	return this->saldo;
}

void Cuenta::abonar(int abono)
{
	int novo = 0;
	novo = getSaldo();

	novo = novo + abono;
	setSaldo(novo);

	cout << "Nuevo saldo: " + getSaldo() << endl;
}

void Cuenta::cargar(int cargo)
{
	int sal = getSaldo();

	if (sal < cargo)
	{
		cout << "El monto a cargar excede el saldo de la cuenta." << endl;
	}
	else
	{
		sal = sal - cargo;
		setSaldo(sal);
	}
	cout << "Operacion concluida, saldo actual : " << getSaldo() << endl;
}

void Cuenta::obtenerSaldo()
{
	cout << "Saldo actual: " << getSaldo() << endl;
}
