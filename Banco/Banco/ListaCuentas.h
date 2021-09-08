#pragma once
#include "Cuenta.h"

class ListaCuentas
{
private:
	Lista<Cuenta> lista;
public:
	ListaCuentas();
	~ListaCuentas();
	void registrar(Cuenta* cuent);
	string toString();
	Cuenta* buscar(int ci);

};

