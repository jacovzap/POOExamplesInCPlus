#include "ListaTransferencias.h"


ListaTransferencias::ListaTransferencias()
{

}
ListaTransferencias::~ListaTransferencias()
{

}
void ListaTransferencias::registrar(Transferencia* transferencia)
{
	lista.registrar(transferencia);
}
string ListaTransferencias::toString()
{
	lista.ordenar(Transferencia::compara);
	stringstream ss;
	ss << "transferencias:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}