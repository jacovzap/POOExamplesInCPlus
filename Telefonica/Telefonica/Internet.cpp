#include "Internet.h"


Internet::Internet(string codigo) : Servicio(codigo)
{

}

Internet::~Internet()
{

}
Internet::Internet(string codigo, int velocidad) : Servicio(codigo, velocidad)
{
	this->tipo = "internet";
}

string Internet::toString()
{
	stringstream ss;
	ss << "{tipo:" << tipo << ",codigo:" << codigo << ",velocidad:" << velocidad_minutos << "}";
	return ss.str();
}