#include "Disciplina.h"


Disciplina::Disciplina(string nombre)
{
	this->nombre = nombre;
}
Disciplina::~Disciplina()
{

}
void Disciplina::crearGrupo(Grupo* grupo)
{
	listaGrupos.registrar(grupo);
}

ListaGrupos* Disciplina::getGrupos()
{
	return &listaGrupos;
}

string Disciplina::toString()
{
	stringstream ss;
	ss << "{nombre:" << nombre << ","<<listaGrupos.toString() << "}";
	return ss.str();
}

