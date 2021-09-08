#include "Telefonia.h"


Telefonia::Telefonia(string codigo) : Servicio(codigo)
{

}

Telefonia::~Telefonia()
{

}
Telefonia::Telefonia(string codigo, int velocidad) : Servicio(codigo, velocidad)
{
	this->tipo = "telefonia";
}

string Telefonia::toString()
{
	stringstream ss;
	ss << "{tipo:" << tipo << ",codigo:" << codigo << ",minutos:" << velocidad_minutos << "}";
	return ss.str();
}