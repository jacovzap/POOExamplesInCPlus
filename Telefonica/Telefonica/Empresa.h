#pragma once
#include "Cliente.h"

class Empresa : public Cliente
{
public:
	~Empresa();
	Empresa(int codigo, int CIoNIT, string nombre);

	string toString();

};

