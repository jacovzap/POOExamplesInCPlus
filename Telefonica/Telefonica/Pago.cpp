#include "Pago.h"



Pago::~Pago()
{

}
Pago::Pago(int id, int monto, int fecha)
{
	this->id = id;
	this->monto = monto;
	this->fecha = fecha;
}
string Pago::toString()
{
	stringstream ss;
	ss << "{fecha:" << fecha << ",monto:" << monto << "}";
	return ss.str();
}