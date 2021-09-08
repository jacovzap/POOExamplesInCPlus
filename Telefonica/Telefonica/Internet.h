#pragma once
#include "Servicio.h"
class Internet : public Servicio
{

public:
	Internet(string codigo);
	~Internet();
	Internet(string codigo, int velocidad);

	string toString();

};

