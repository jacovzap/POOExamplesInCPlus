#pragma once
#include "Servicio.h"
#include "Cliente.h"
#include "ListaPagos.h"

class Contrato
{
private:
	int id;
	Cliente* cliente;
	Servicio* servicio;
	ListaPagos lista;
public:
	Contrato(int id);
	~Contrato();
	Contrato(int id, Cliente* cliente, Servicio* servicio);

	bool operator>(Contrato* contrato);
	bool operator == (Contrato* contrato);
	static bool compara(Contrato* contrato1, Contrato* contrato2);

	void registrarPago(Pago* pago);
	string toString();
};

