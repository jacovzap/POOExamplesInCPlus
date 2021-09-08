#include "ListaGrupos.h"


ListaGrupos::ListaGrupos()
{

}
ListaGrupos::~ListaGrupos()
{

}
void ListaGrupos::registrar(Grupo* grupo)
{
	lista.registrar(grupo);
}


string ListaGrupos::toString()
{

	stringstream ss;

	ss << "grupos:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]";
	return ss.str();
}
