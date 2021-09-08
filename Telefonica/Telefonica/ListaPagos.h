#pragma once
#include "Pago.h"
#include "Lista.h"

class ListaPagos
{
private:
	Lista<Pago> lista;
public:
	ListaPagos();
	~ListaPagos();
	void registrar(Pago* pago);
	string toString();

};

