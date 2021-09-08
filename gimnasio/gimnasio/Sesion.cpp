#include "Sesion.h"


Sesion::Sesion()
{

}
Sesion::~Sesion()
{
	delete[] lista;
}
Sesion::Sesion(int fecha)
{
	this->fecha = fecha;
	asistentes = 0;
	lista = new Socio* [20];
}
void Sesion::registrarAsistente(Socio* socio)
{
	if (asistentes < 20)
		lista[asistentes] = socio;
	asistentes++;
}


string Sesion::toString() {

	stringstream ss;
	ss << "{fecha:" << fecha << ",asistentes:[";
	for (int i = 0; i < asistentes; i++)
	{
		ss << lista[i]->toString();
		if (i < asistentes - 1)
			ss << ",";
	}
	ss << "]}";
	return ss.str();
}


bool Sesion::operator == (Sesion* sesion)
{
	if (fecha == sesion->fecha)
		return fecha == sesion->fecha;
	return false;
}

bool Sesion:: operator>(Sesion* sesion)
{
	if (fecha > sesion->fecha)
		return true;
	return false;
}


bool Sesion::compara(Sesion* sesion1, Sesion* sesion2)
{
	return sesion1->fecha > sesion2->fecha;
}
