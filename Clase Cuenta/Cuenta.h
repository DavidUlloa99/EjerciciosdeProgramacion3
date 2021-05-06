#pragma once
#ifndef CUENTA_H
#define CUENTA_H
#include <iostream>

using namespace std;
class Cuenta {
private:
	int saldo;
public:
	void setSaldo(int);
	int getSaldo();

	Cuenta();
	Cuenta(int saldo);

	void abonar(int);
	void cargar(int);
	void obtenerSaldo();

};
#endif // !CUENTA_H