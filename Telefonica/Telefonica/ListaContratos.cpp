#include "ListaContratos.h"


ListaContratos::ListaContratos()
{

}
ListaContratos::~ListaContratos()
{

}
void ListaContratos::registrar(Contrato* contrato)
{
	lista.registrar(contrato);
}

Contrato* ListaContratos::buscar(int id)
{
	Contrato c(id);
	return lista.buscar(&c);

}



string ListaContratos::toString()
{
	//lista.ordenar(Contrato::compara);
	stringstream ss;

	ss << "contratos:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}