#include "Persona.h"



Persona::~Persona()
{

}
Persona::Persona(int codigo, int CIoNIT, string nombre) : Cliente(codigo, CIoNIT, nombre)
{

}

string Persona::toString()
{
	stringstream ss;
	ss << "{codigo:" << codigo << ",ci:" << CIoNIT << ",nombre:" << nombre << "}";
	return ss.str();
}