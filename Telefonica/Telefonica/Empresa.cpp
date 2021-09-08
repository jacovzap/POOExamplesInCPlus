#include "Empresa.h"



Empresa::~Empresa()
{

}
Empresa::Empresa(int codigo, int CIoNIT, string nombre) : Cliente(codigo, CIoNIT, nombre)
{

}

string Empresa::toString()
{
	stringstream ss;
	ss << "{codigo:" << codigo << ",nit:" << CIoNIT << ",razon:" << nombre << "}";
	return ss.str();
}