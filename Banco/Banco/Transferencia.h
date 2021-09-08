#pragma once
#include "Cuenta.h"
#include "Retiro.h"
#include "Deposito.h"

class Transferencia 
{
private:
	Cuenta* cuentaOrigen;
	Cuenta* cuentaDestino;
	int idTransferencia;
	int monto;
	int fecha;
	string tipo;
public:
	Transferencia();
	~Transferencia();
	Transferencia(Cuenta* cuentaOrigen, Cuenta* cuentaDestino, int idTransferencia, int monto, int fecha);


	bool operator<(Transferencia* cuenta);
	bool operator == (Transferencia* cuenta);
	static bool compara(Transferencia* cuenta1, Transferencia* cuenta2);


	void realizarTransferencia();
	string toString();
};

