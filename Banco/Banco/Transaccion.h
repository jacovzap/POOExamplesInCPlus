#pragma once
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Transaccion
{
protected:
	int id;
	int monto;
	int fecha;
public:
	Transaccion();
	~Transaccion();
	Transaccion(int id, int monto, int fecha);

	bool operator>(Transaccion* cuenta);
	bool operator == (Transaccion* cuenta);
	static bool compara(Transaccion* cuenta1, Transaccion* cuenta2);

	virtual int modificarSaldo(int saldoCuenta) = 0;
	virtual string toString() = 0;
};

