#pragma once


#pragma once
#include <string>
#include<iostream>
#include<sstream>
using namespace std;

class ContratoInexistente : public exception
{
private:
	string message;
	int id;
public:
	ContratoInexistente(int  id)
	{
		stringstream ss;
		ss << "Contrato " << id << " inexistente";
		message = ss.str();
	}
	const char* what() const throw()
	{
		return message.c_str();
	}
};

