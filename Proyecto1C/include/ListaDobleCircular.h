#ifndef LISTADOBLECIRCULAR_H
#define LISTADOBLECIRCULAR_H
#include "Nodo.h"
#include <iostream>
#include <random>
#include <string>
using namespace std;

class ListaDobleCircular {
public:
	ListaDobleCircular();
	void insertar(Persona);
	void insertarCabeza(Persona);
	void insertarCola(Persona);
	void eliminarNodo(long int);
	void eliminarCola();
	void eliminarCabeza();
	void modificar(long int);
	void imprimir();
	bool vacio();
	Nodo* getPrimero();
	Nodo* getUltimo();
	void setPrimero(Nodo*);
	void setUltimo(Nodo*);
	void buscarNodo(long int);
	void generarArchivo();

private:
	Nodo* primero;
	Nodo* ultimo;
};

#endif // LISTADOBLECIRCULAR_H
