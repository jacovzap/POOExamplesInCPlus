#include "Banco.h"
Banco::Banco()
{

}
Banco::~Banco()
{

}
void Banco::registrarTransaccion(int idCuenta, Transaccion* transaccion)
{
	Cuenta* cuenta = cuentas.buscar(idCuenta);
	cuenta->registrarTransaccion(transaccion);
}
void Banco::registrarCuenta(int id, string titular, int saldo)
{
	Cuenta* cuenta = new Cuenta(id, titular, saldo);
	cuentas.registrar(cuenta);
}


void Banco::registrarTransferencia(int idCuentaOrigen, int idCuentaDestino, int idTranferencia, int monto, int fecha)
{
	Cuenta* cuentaOrigen = cuentas.buscar(idCuentaOrigen);
	Cuenta* cuentaDestino = cuentas.buscar(idCuentaDestino);

	Transferencia* transferencia = new Transferencia(cuentaOrigen, cuentaDestino, idTranferencia, monto, fecha);
	transferencias.registrar(transferencia);
}

string Banco::toString()
{
	stringstream ss;
	ss << "{";
	ss << cuentas.toString();
	ss << ",";
	ss << transferencias.toString();
	ss << "}";
	return ss.str();
}
