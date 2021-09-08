#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Servicio
{
protected:
	string tipo;
	string codigo;
	int velocidad_minutos;
public:
	Servicio(string codigo);
	~Servicio();
	Servicio(string codigo, int velocidad_minutos);

	bool operator>(Servicio* servicio);
	bool operator == (Servicio* servicio);
	static bool compara(Servicio* servicio1, Servicio* servicio2);


	virtual string toString() = 0;

};

