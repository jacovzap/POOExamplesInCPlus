#include "Grupo.h"



Grupo::Grupo(string id)
{
	this->id = id;
	inscritos = 0;
	lista = new Socio* [20];
}
Grupo::~Grupo()
{
	delete[] lista;
}


void Grupo::inscribir(int ci)
{

	Socio* socio = SingletonSocios::getInst().buscar(ci);
	if(inscritos < 20)
	lista[inscritos] = socio;
	inscritos++;
}


string Grupo::toString(){
	stringstream ss;
	ss << "{id:" << id << ",inscritos:[";
	for (int i = 0; i < inscritos; i++)
	{
		ss << lista[i]->toString();
		if (i < inscritos - 1)
			ss << ",";
	}
	ss << "]}";
	return ss.str();
}