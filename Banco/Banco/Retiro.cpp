#include "Retiro.h"

Retiro::Retiro()
{

}
Retiro::~Retiro()
{

}
Retiro::Retiro(int id, int monto, int fecha): Transaccion(id, monto, fecha)
{
	tipo = "retiro";
}

int Retiro::modificarSaldo(int saldoCuenta)
{
	return saldoCuenta - monto;
}

string Retiro::toString()
{
	stringstream ss;
	ss << "{tipo:" << tipo << ",id:" <<id<<",monto:"<<monto<<",fecha:"<<fecha<<"}";
	return ss.str();
}