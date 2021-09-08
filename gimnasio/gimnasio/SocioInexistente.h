#pragma once

#include "Socio.h"
#include<sstream>
using namespace std;

class SocioInexistente : public exception
{
private:
	string message;
	int id;
public:
	SocioInexistente(Socio* socio)
	{
		stringstream ss;
		ss << "El socio " << socio->getNombre() << " no esta inscrito";
		message = ss.str();
	}
	const char* what() const throw()
	{
		return message.c_str();
	}
};

