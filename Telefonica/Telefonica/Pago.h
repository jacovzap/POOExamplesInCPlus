#pragma once
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Pago
{
private:
	int id;
	int monto;
	int fecha;
public:

	~Pago();
	Pago(int id, int monto, int fecha);
	string toString();
};

