#pragma once

#include "SingletonSocios.h"

using namespace std;

class Grupo
{
protected:
	
	Socio** lista;
	string id;
	int inscritos;
public:
	Grupo(string id);
	~Grupo();
	void inscribir(int ci);
	virtual string toString();
};

