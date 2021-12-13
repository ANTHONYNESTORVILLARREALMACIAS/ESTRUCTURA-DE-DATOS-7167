#ifndef NODO_H
#define NODO_H
#include "Persona.h"
#include<stdlib.h>

class Nodo {
public:
	Nodo(Persona);
	Nodo();
	Persona getDato();
	void setDato(Persona);
	Nodo* getSiguiente();
	void setSiguiente(Nodo*);
	Nodo* getAnterior();
	void setAnterior(Nodo*);
private:
	Persona dato;
	Nodo* siguiente;
	Nodo* anterior;
};
#endif // NODO_H
