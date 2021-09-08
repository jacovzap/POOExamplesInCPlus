#include "SingletonSocios.h"

SingletonSocios::SingletonSocios()
{

}

SingletonSocios& SingletonSocios::getInst()
{
	static SingletonSocios instancia;
	return instancia;
}


SingletonSocios::~SingletonSocios()
{

}


Socio* SingletonSocios::buscar(int ci)
{
	Socio c(ci);
	return lista.buscar(&c);
}


Lista<Socio>* SingletonSocios::getSocios()
{
	return &lista;
}

string SingletonSocios::toString()
{
	lista.ordenar(Socio::compara);
	stringstream ss;

	ss << "{socios:[";
	for (int i = 0; i < lista.getTam(); i++) {
		ss << lista[i]->toString();
		if (i < lista.getTam() - 1)
			ss << ",";
	}
	ss << "]}";
	return ss.str();
}
