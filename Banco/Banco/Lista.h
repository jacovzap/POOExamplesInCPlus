#pragma once
#include"Nodo.h"
//#include "CuentaInexistenteException.h"
#include <string>
#include<iostream>
using namespace std;

template<class T>
class Lista
{
private:
	Nodo<T>* primer;
	int tam;
public:
	Lista();
	~Lista();
	Nodo<T> getPrimer();
	int getTam();
	void registrar(T* dato);
	void mostrar(void (ptMostrar)(T));
	T* buscar(T* dato);
	void ordenar(bool (ptComp)(T*, T*));
	void eliminar(T* dato);
	T* getPosicion(int i);
	T* operator[](int f);
};
template<class T>
Lista<T>::Lista()
{
	primer = NULL;
	tam = 0;
}
template<class T>
T* Lista<T>::operator[](int f)
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		if (f >= tam)
			return NULL;
		for (int j = 0; j < f; j++)
		{
			aux = aux->getSiguiente();
		}
		return aux->getDato();
	}
}
template<class T>
Lista<T>::~Lista()
{
}
template<class T>
Nodo<T>Lista<T>::getPrimer()
{
	return primer;
}
template<class T>
int Lista<T>::getTam()
{
	return tam;
}
template<class T>
void Lista<T>::registrar(T* dato)
{
	if (primer == NULL)
		primer = new Nodo<T>(dato);
	else
	{
		Nodo<T>* aux = primer;
		while (aux->getSiguiente() != NULL)
		{
			aux = aux->getSiguiente();
		}
		aux->crearSiguiente(dato);
	}
	tam++;
}
template<class T>
void Lista<T>::mostrar(void (ptMostrar)(T))
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		(*ptMostrar)(aux->getDato());
		aux = aux->getSiguiente();
	}
}
template<class T>
T* Lista<T>::buscar(T* dato)
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		if (*aux->getDato() == dato)
		{
			return aux->getDato();
		}
		aux = aux->getSiguiente();
	}
	return NULL;
}
template<class T>
void Lista<T>::ordenar(bool (ptComp)(T*, T*))
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		Nodo<T>* aux2 = aux->getSiguiente();
		while (aux2 != NULL)
		{
			if ((*ptComp)(aux->getDato(), aux2->getDato()))
			{
				T* dato = aux2->getDato();
				aux2->SetDato(aux->getDato());
				aux->SetDato(dato);
			}
			aux2 = aux2->getSiguiente();
		}
		aux = aux->getSiguiente();
	}
}
template<class T>
void Lista<T>::eliminar(T* dato)
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		if (*aux->getDato() == dato)
		{

			aux = aux->getSiguiente();

		}
		aux = aux->getSiguiente();
		cout << "elimino" << endl;
	}
}
template<class T>
T* Lista<T>::getPosicion(int i)
{
	Nodo<T>* aux = primer;
	while (aux != NULL)
	{
		if (i >= tam)
			return NULL;
		for (int j = 0; j < i; j++)
		{
			aux = aux->getSiguiente();
		}
		return aux->getDato();
	}

}