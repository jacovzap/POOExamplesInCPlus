#include "Transaccion.h"

Transaccion::Transaccion()
{

}
Transaccion::~Transaccion()
{

}
Transaccion::Transaccion(int id, int monto, int fecha)
{
	this->id = id;
	this->monto = monto;
	this->fecha = fecha;
}


bool Transaccion::operator == (Transaccion* cuenta)
{
	if (id == cuenta->id)
		return id == cuenta->id;
	return false;
}

bool Transaccion:: operator>(Transaccion* cuenta)
{
	if (id > cuenta->id)
		return true;
	return false;
}


bool Transaccion::compara(Transaccion* cuenta1, Transaccion* cuenta2)
{
	return cuenta1->id > cuenta2->id;
}
