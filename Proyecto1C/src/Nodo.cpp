#include "../include/Nodo.h"

Nodo::Nodo(Persona _dato)
{
	dato = _dato;
	siguiente = NULL;
	anterior = NULL;
}

Persona Nodo::getDato() {
	return dato;
}

void Nodo::setDato(Persona _dato) {
	dato = _dato;
}

Nodo* Nodo::getSiguiente() {
	return siguiente;
}

void Nodo::setSiguiente(Nodo* _siguiente) {
	siguiente = _siguiente;
}

Nodo* Nodo::getAnterior() {
	return anterior;
}

void Nodo::setAnterior(Nodo* _anterior) {
	anterior = _anterior;
}

Nodo::Nodo() {}
