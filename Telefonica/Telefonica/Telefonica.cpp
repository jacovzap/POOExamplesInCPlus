#include "Telefonica.h"


Telefonica::Telefonica()
{

}
Telefonica::~Telefonica()
{

}
void Telefonica::registrarServicio(Servicio* servicio)
{
	servicios.registrar(servicio);
}

void Telefonica::registrarContrato(int id, string codigo, Cliente* cliente)
{
	Servicio* servicio = servicios.buscar(codigo);
	Contrato* contrato = new Contrato(id, cliente, servicio);
	contratos.registrar(contrato);

}

void Telefonica::registrarPago(int idContrato, int monto, int fecha)
{
	Pago* pago = new Pago(1, monto, fecha);
	Contrato* contrato = contratos.buscar(idContrato);
	if (contrato == NULL)
	{
		throw ContratoInexistente(idContrato);
	}
	else
	{
		contrato->registrarPago(pago);
	}


}

string Telefonica::toString()
{
	stringstream ss;
	ss << "{";
	ss << servicios.toString();
	ss << ",";
	ss << contratos.toString();
	ss << "}";
	return ss.str();
}