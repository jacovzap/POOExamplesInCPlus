#include "ListaServicios.h"


ListaServicios::ListaServicios()
{

}
ListaServicios::~ListaServicios()
{

}
void ListaServicios::registrar(Servicio* servicio)
{
	lista.registrar(servicio);
}


Servicio* ListaServicios::buscar(string codigo)
{
	Servicio* a = new Telefonia(codigo);
	Servicio* b = new Internet(codigo);

	if(lista.buscar(a) != NULL)return lista.buscar(a);
	if (lista.buscar(b) != NULL)return lista.buscar(b);

}


string ListaServicios::toString()
{
	lista.ordenar(Servicio::compara);
	stringstream ss;

	ss << "servicios:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}