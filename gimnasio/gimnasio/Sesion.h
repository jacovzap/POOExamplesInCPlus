#pragma once
#include "Socio.h"

class Sesion
{
private:
	Socio** lista;
	int asistentes;
	int fecha;
public:
	Sesion();
	~Sesion();
	Sesion(int fecha);
	void registrarAsistente(Socio* socio);


	bool operator>(Sesion* sesion);
	bool operator == (Sesion* sesion);
	static bool compara(Sesion* sesion1, Sesion* sesion2);

	string toString();
};

