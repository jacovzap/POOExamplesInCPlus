#include "Controlado.h"


Controlado::Controlado(string id) : Grupo(id)
{

}


Controlado::~Controlado()
{

}

string Controlado::toString()
{
	
	stringstream ss;
	ss << "{id:" << id << ",inscritos:[";
	for (int i = 0; i < inscritos; i++)
	{
		ss << lista[i]->toString();
		if (i < inscritos - 1)
			ss << ",";
	}
	ss << "]," << listaSesion.toString() << "}";

	
	return ss.str();
}


void Controlado::registrarSesion(int idSesion)
{
	Sesion* sesion = new Sesion(idSesion);
	listaSesion.registrar(sesion);
}



void Controlado::registrarAsistente(int idSocio, int idSesion)
{

	bool existe = false;
	Sesion* sesion = listaSesion.buscar(idSesion);
	Socio* socio = SingletonSocios::getInst().buscar(idSocio);
	for (int i = 0; i < inscritos; i++)
	{
		if (lista[i]->getCi() == socio->getCi())
		{
			sesion->registrarAsistente(socio);
			existe = true;
		}
	}
	if (!existe)
		throw SocioInexistente(socio);
}