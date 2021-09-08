#include "Cuenta.h"


Cuenta::Cuenta(int id, string titular, int saldo)
{
	this->id = id;
	this->titular = titular;
	this->saldo = saldo;
}
Cuenta::~Cuenta()
{

}

Cuenta::Cuenta(int id)
{
	this->id = id;
}

string Cuenta::toString()
{
	stringstream ss;
	ss << "{id:" << id << ",titular:" << titular << ",saldo:" <<saldo<<",transacciones:"<<transacciones.toString()<<"}";
	return ss.str();
}

string Cuenta::toStringCuenta()
{
	stringstream ss;
	ss << "{id:" << id << ",titular:" << titular << ",saldo:" << saldo << "}";
	return ss.str();
}

void Cuenta::registrarTransaccion(Transaccion* transaccion)
{
	transacciones.registrar(transaccion);
	saldo = transaccion->modificarSaldo(saldo);

}


bool Cuenta::operator == (Cuenta* cuenta)
{
	if (id == cuenta->id)
		return id == cuenta->id;
	return false;
}

bool Cuenta:: operator<(Cuenta* cuenta)
{
	if (id < cuenta->id)
		return true;
	return false;
}


bool Cuenta::compara(Cuenta* cuenta1, Cuenta* cuenta2)
{
	return cuenta1->id < cuenta2->id;
}


void Cuenta::setSaldo(int saldo) 
{
	this->saldo = saldo;
}

int Cuenta::getSaldo()
{
	return saldo;
}