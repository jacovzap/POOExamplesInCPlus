#pragma once
#include "Lista.h"
#include "Transferencia.h"
class ListaTransferencias
{
private:
	Lista<Transferencia> lista;
public:
	ListaTransferencias();
	~ListaTransferencias();
	void registrar(Transferencia* transferencia);
	string toString();
};

