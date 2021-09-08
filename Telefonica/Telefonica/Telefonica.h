#pragma once
#include "ListaContratos.h"
#include "ListaServicios.h"
#include "ListaClientes.h"
#include "Telefonia.h"
#include "Internet.h"
#include "Persona.h"
#include "ContratoInexistente.h"
#include "Empresa.h"

class Telefonica
{
private:
	ListaClientes clientes;
	ListaContratos contratos;
	ListaServicios servicios;
public:
	Telefonica();
	~Telefonica();
	void registrarServicio(Servicio* servicio);
	void registrarContrato(int id, string codigo, Cliente* cliente);
	void registrarPago(int idContrato, int monto, int fecha);
	string toString();
};

