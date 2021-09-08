#pragma once
#include "Contrato.h"
#include "Lista.h"

class ListaContratos
{
private:
	Lista<Contrato> lista;
public:
	ListaContratos();
	~ListaContratos();
	void registrar(Contrato* contrato);
	string toString();
	Contrato* buscar(int id);
};

