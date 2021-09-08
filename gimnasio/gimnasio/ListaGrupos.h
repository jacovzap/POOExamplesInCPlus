#pragma once
#include "Grupo.h"
#include "Lista.h"


class ListaGrupos
{
private:
	Lista<Grupo> lista;
public:
	ListaGrupos();
	~ListaGrupos();
	void registrar(Grupo* grupo);
	string toString();

};

