#include "Cliente.h"



Cliente::~Cliente()
{

}

Cliente::Cliente(int codigo, int CIoNIT, string nombre)
{
	this->codigo = codigo;
	this->CIoNIT = CIoNIT;
	this->nombre = nombre;
}


Cliente::Cliente(int codigo)
{
	this->codigo = codigo;
}




bool Cliente::operator == (Cliente* cliente)
{
	if (codigo == cliente->codigo)
		return codigo == cliente->codigo;
	return false;
}

bool Cliente:: operator>(Cliente* cliente)
{
	if (codigo > cliente->codigo)
		return true;
	return false;
}


bool Cliente::compara(Cliente* cliente1, Cliente* cliente2)
{
	return cliente1->codigo > cliente2->codigo;
}
