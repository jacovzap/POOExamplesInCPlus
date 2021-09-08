#pragma once
#include "Transaccion.h"
#include "Lista.h"
class ListaTransacciones
{
private:
	Lista<Transaccion> lista;
public:
	ListaTransacciones();
	~ListaTransacciones();
	void registrar(Transaccion* transaccion);
	string toString();
};

