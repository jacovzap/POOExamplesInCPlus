#pragma once
#include <iostream>
#include <string>
#include <sstream>

using namespace std;


class Cliente
{
protected:
	int codigo;
	int CIoNIT;
	string nombre;
public:
	Cliente(int codigo, int CIoNIT, string nombre);
	Cliente(int codigo);
	~Cliente();

	bool operator>(Cliente* cliente);
	bool operator == (Cliente* cliente);
	static bool compara(Cliente* cliente1, Cliente* cliente2);

	virtual string toString() = 0;
};

