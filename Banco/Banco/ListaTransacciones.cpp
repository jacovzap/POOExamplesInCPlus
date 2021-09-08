#include "ListaTransacciones.h"

ListaTransacciones::ListaTransacciones()
{

}
ListaTransacciones::~ListaTransacciones()
{

}
void ListaTransacciones::registrar(Transaccion* transaccion)
{
	lista.registrar(transaccion);
}


string ListaTransacciones::toString()
{
	//lista.ordenar(Transaccion::compara);
	stringstream ss;
	ss << "[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}