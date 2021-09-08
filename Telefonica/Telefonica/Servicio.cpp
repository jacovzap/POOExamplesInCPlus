#include "Servicio.h"



Servicio::~Servicio()
{

}
Servicio::Servicio(string codigo, int velocidad_minutos)
{
	this->codigo = codigo;
	this->velocidad_minutos = velocidad_minutos;
}

Servicio::Servicio(string codigo)
{
	this->codigo = codigo;
}

bool Servicio::operator == (Servicio* servicio)
{
	if (codigo == servicio->codigo)
		return codigo == servicio->codigo;
	return false;
}

bool Servicio:: operator>(Servicio* servicio)
{
	if (codigo > servicio->codigo)
		return true;
	return false;
}


bool Servicio::compara(Servicio* servicio1, Servicio* servicio2)
{
	return servicio1->codigo > servicio2->codigo;
}


