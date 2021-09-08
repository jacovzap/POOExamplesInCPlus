#pragma once
#include "Sesion.h"
#include "Lista.h"

class ListaSesion
{
private:
	Lista<Sesion> lista;
public:
	ListaSesion();
	~ListaSesion();
	void registrar(Sesion* sesion);
	Sesion* buscar(int fecha);
	string toString();
};

