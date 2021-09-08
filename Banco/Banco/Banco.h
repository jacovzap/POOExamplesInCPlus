#pragma once
#include "ListaCuentas.h"
#include "Retiro.h"
#include "Deposito.h"
#include "ListaTransferencias.h"

class Banco
{
private:
	ListaCuentas cuentas;
	ListaTransferencias transferencias;
public:
	Banco();
	~Banco();
	void registrarTransaccion(int idCuenta, Transaccion* transaccion);
	void registrarCuenta(int id, string titular, int saldo);
	void registrarTransferencia(int idCuentaOrigen, int idCuentaDestino, int idTranferencia, int monto, int fecha);
	string toString();

};

