#pragma once
#include "Servicio.h"


class Telefonia : public Servicio
{
private:
	
public:
	Telefonia(string codigo);
	~Telefonia();
	Telefonia(string codigo, int velocidad);

	string toString();

};

