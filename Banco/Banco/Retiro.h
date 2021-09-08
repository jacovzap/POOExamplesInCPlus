#pragma once
#include "Transaccion.h"
class Retiro : public Transaccion
{
private:
	string tipo;
public:
	Retiro();
	~Retiro();
	Retiro(int id, int monto, int fecha);
	int modificarSaldo(int saldoCuenta);
	string toString();
};

