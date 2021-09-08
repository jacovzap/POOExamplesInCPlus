#pragma once
#include "Servicio.h"
#include "Lista.h"
#include "Telefonia.h"
#include "Internet.h"

class ListaServicios
{

private:
	Lista<Servicio> lista;
public:
	ListaServicios();
	~ListaServicios();
	void registrar(Servicio* cliente);
	string toString();
	Servicio* buscar(string codigo);
};

