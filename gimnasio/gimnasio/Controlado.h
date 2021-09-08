#pragma once

#include "Grupo.h"
#include "ListaSesion.h"
#include "SocioInexistente.h"

class Controlado :public Grupo
{
private:
	ListaSesion listaSesion;
public:
	Controlado(string id);
	~Controlado();
	void registrarSesion(int idSesion);
	void registrarAsistente(int idSocio, int idSesion);
	string toString();
};

