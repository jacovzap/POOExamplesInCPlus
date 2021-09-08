#include "ListaClientes.h"


ListaClientes::ListaClientes()
{

}
ListaClientes::~ListaClientes()
{

}
void ListaClientes::registrar(Cliente* cliente)
{
	lista.registrar(cliente);
}


string ListaClientes::toString()
{
	lista.ordenar(Cliente::compara);
	stringstream ss;

	ss << "clientes:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}