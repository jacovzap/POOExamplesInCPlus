#include "Deposito.h"


Deposito::Deposito()
{
}


Deposito::~Deposito()
{
}

Deposito::Deposito(int id, int monto, int fecha) : Transaccion(id, monto, fecha)
{
	tipo = "deposito";
}

int Deposito::modificarSaldo(int saldoCuenta)
{
	return saldoCuenta + monto;
}


string Deposito::toString()
{
	stringstream ss;
	ss << "{tipo:" << tipo << ",id:" << id << ",monto:" << monto << ",fecha:" << fecha << "}";
	return ss.str();
}