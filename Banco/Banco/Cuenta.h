#pragma once
#include "ListaTransacciones.h"

using namespace std;

class Cuenta
{
private:
	int id;
	string titular;
	int saldo;
	ListaTransacciones transacciones;
public:
	Cuenta(int id, string titular, int saldo);
	~Cuenta();
	Cuenta(int id);

	bool operator<(Cuenta* cuenta);
	bool operator == (Cuenta* cuenta);
	static bool compara(Cuenta* cuenta1, Cuenta* cuenta2);
	
	void setSaldo(int saldo);
	int getSaldo();

	void registrarTransaccion(Transaccion* transaccion);
	string toString();
	string toStringCuenta();
};

