#pragma once
#include "Transaccion.h"

class Deposito : public Transaccion
{
private:
	string tipo;
public:
	Deposito();
	~Deposito();
	Deposito(int id, int monto, int fecha);
	int modificarSaldo(int saldoCuenta);
	string toString();

};

