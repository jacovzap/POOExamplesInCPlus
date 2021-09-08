#include "ListaCuentas.h"

ListaCuentas::ListaCuentas()
{

}
ListaCuentas::~ListaCuentas()
{

}
void ListaCuentas::registrar(Cuenta* cuenta)
{
	lista.registrar(cuenta);
}

Cuenta* ListaCuentas::buscar(int ci)
{
	Cuenta c(ci);
	return lista.buscar(&c);
}

string ListaCuentas::toString()
{
	lista.ordenar(Cuenta::compara);
	stringstream ss;

	ss << "cuentas:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}