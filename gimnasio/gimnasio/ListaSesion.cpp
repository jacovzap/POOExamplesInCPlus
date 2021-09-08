#include "ListaSesion.h"


ListaSesion::ListaSesion()
{

}
ListaSesion::~ListaSesion()
{

}
void ListaSesion::registrar(Sesion* sesion)
{
	lista.registrar(sesion);
}


Sesion* ListaSesion::buscar(int fecha)
{
	Sesion c(fecha);
	return lista.buscar(&c);
}


string ListaSesion::toString()
{
	//lista.ordenar(Socio::compara);
	stringstream ss;

	ss << "sesiones:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}
