#pragma once
#include "ListaGrupos.h"


class Disciplina
{
private:
	ListaGrupos listaGrupos;
	string nombre;
public:
	Disciplina(string nombre);
	~Disciplina();
	void crearGrupo(Grupo* grupo);
	ListaGrupos* getGrupos();
	string toString();
};

