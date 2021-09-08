#pragma once
#include "Cliente.h"
#include "Lista.h"

class ListaClientes
{
private:
	Lista<Cliente> lista;
public:
	ListaClientes();
	~ListaClientes();
	void registrar(Cliente* cliente);
	string toString();
	Cliente* buscar(int codigo);
};

