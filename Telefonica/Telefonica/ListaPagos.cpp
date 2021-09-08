#include "ListaPagos.h"


ListaPagos::ListaPagos()
{

}
ListaPagos::~ListaPagos()
{

}
void ListaPagos::registrar(Pago* pago)
{
	lista.registrar(pago);
}


string ListaPagos::toString()
{

	stringstream ss;

	ss << "pagos:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}