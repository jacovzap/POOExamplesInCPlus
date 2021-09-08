#pragma once
#include "Socio.h"
#include "Lista.h"

class SingletonSocios
{
private:
	Lista<Socio> lista;
public:
	static SingletonSocios& getInst();
	~SingletonSocios();
	string toString();
	Socio* buscar(int ci);
	Lista<Socio>* getSocios();
private:
	SingletonSocios();
};

