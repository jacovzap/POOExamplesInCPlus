#include "Contrato.h"


Contrato::Contrato(int id)
{
	this->id = id;
}


Contrato::~Contrato()
{

}
Contrato::Contrato(int id, Cliente* cliente, Servicio* servicio)
{
	this->id = id;
	this->cliente = cliente;
	this->servicio = servicio;
	
}

bool Contrato::operator>(Contrato* contrato)
{
	if (id < contrato->id)
		return true;
	return false;
}
bool Contrato::operator == (Contrato* contrato)
{
	if (id == contrato->id)
		return id == contrato->id;
	return false;
}
bool Contrato::compara(Contrato* contrato1, Contrato* contrato2)
{
	return contrato1->id < contrato2->id;
}


void Contrato::registrarPago(Pago* pago)
{
	lista.registrar(pago);
}

string Contrato::toString()
{
	stringstream ss;
	ss << "{id:" << id << ",cliente:" << cliente->toString() << ",servicio:" << servicio->toString() <<"," << lista.toString()<<"}";
	return ss.str();
}