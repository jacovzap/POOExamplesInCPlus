#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;


class Socio
{
private:
	int ci;
	string nombre;
public:
	Socio(int ci);
	~Socio();
	Socio(int ci, string nombre);
	string getNombre();
	int getCi();

	bool operator>(Socio* socio);
	bool operator == (Socio* socio);
	static bool compara(Socio* socio1, Socio* socio2);

	string toString();
};

