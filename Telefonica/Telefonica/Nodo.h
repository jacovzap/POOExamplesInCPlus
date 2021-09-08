#pragma once
#include<string>
#include <iostream>
using namespace std;

template<class T>

class Nodo
{
private:
	T* dato;
	Nodo<T>* siguiente;
public:
	Nodo(T* dato);
	~Nodo();
	T* getDato();
	Nodo<T>* getSiguiente();
	void crearSiguiente(T* dato);
	void SetDato(T* dato);
};

template<class T>
Nodo<T>::Nodo(T* dato)
{
	this->dato = dato;
	siguiente = NULL;
}
template<class T>
Nodo<T>::~Nodo()
{
}
template<class T>
T* Nodo<T>::getDato()
{
	return dato;
}
template<class T>
Nodo<T>* Nodo<T>::getSiguiente()
{
	return siguiente;
}
template<class T>
void Nodo<T>::crearSiguiente(T* dato)
{
	siguiente = new Nodo(dato);
}
template<class T>
void Nodo<T>::SetDato(T* dato)
{
	this->dato = dato;
}