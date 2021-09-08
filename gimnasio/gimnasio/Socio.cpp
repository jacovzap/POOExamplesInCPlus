#include "Socio.h"


Socio::Socio(int ci)
{
	this->ci = ci;
}
Socio::~Socio()
{

}


Socio::Socio(int ci, string nombre)
{
	this->ci = ci;
	this->nombre = nombre;
}


string Socio::toString()
{
	stringstream ss;
	ss << "{ci:" << ci << ",nombre:" << nombre << "}";
	return ss.str();
}



bool Socio::operator == (Socio* socio)
{
	if (ci == socio->ci)
		return ci == socio->ci;
	return false;
}

bool Socio:: operator>(Socio* socio)
{
	if (ci > socio->ci)
		return true;
	return false;
}


bool Socio::compara(Socio* socio1, Socio* socio2)
{
	return socio1->nombre > socio2->nombre;
}


string Socio::getNombre(){
	return nombre;
}


int Socio::getCi()
{
	return ci;
}