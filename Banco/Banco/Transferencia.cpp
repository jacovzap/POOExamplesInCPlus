#include "Transferencia.h"

Transferencia::Transferencia()
{

}
Transferencia::~Transferencia()
{

}

Transferencia::Transferencia(Cuenta* cuentaOrigen, Cuenta* cuentaDestino, int idTransferencia, int monto, int fecha)
{
	this->cuentaOrigen = cuentaOrigen;
	this->cuentaDestino = cuentaDestino;
	this->idTransferencia = idTransferencia;
	this->monto = monto;
	this->fecha = fecha;
	tipo = "transferencia";
	realizarTransferencia();
}
void Transferencia::realizarTransferencia()
{
	Transaccion* retiro = new Retiro(idTransferencia, monto, fecha);
	Transaccion* deposito = new Deposito(idTransferencia, monto, fecha);

	cuentaOrigen->registrarTransaccion(retiro);
	cuentaDestino->registrarTransaccion(deposito);
}




bool Transferencia::operator == (Transferencia* cuenta)
{
	if (idTransferencia == cuenta->idTransferencia)
		return idTransferencia == cuenta->idTransferencia;
	return false;
}

bool Transferencia:: operator<(Transferencia* cuenta)
{
	if (idTransferencia < cuenta->idTransferencia)
		return true;
	return false;
}


bool Transferencia::compara(Transferencia* cuenta1, Transferencia* cuenta2)
{
	return cuenta1->idTransferencia < cuenta2->idTransferencia;
}


string Transferencia::toString()
{
	stringstream ss;
	ss << "{tipo:" << tipo << ",id:" << idTransferencia << ",origen:"<<cuentaOrigen->toStringCuenta()<<",destino:"<<cuentaDestino->toStringCuenta()<<",monto:" << monto << ",fecha:" << fecha << "}";
	return ss.str();
}