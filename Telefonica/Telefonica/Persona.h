#pragma once
#include "Cliente.h"
class Persona:public Cliente
{
public:

	~Persona();
	Persona(int codigo, int CIoNIT, string nombre);

	string toString();
};

