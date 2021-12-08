#include "ListaDobleCircular.h"
#include "Persona.h"
#include "Validaciones.h"
#include "Generador.h"
#include "IngresoDatos.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


ListaDobleCircular::ListaDobleCircular() {
	primero = NULL;
	ultimo = NULL;
}

bool ListaDobleCircular::vacio() {
	if (primero == nullptr)
		return true;
	else
		return false;
}

void ListaDobleCircular::insertar(Persona dato) {
	Nodo* nuevo = new Nodo(dato);
	if (primero == NULL) {
		primero = nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(primero);
	}
	else if (primero->getSiguiente() == primero) {
		ultimo = nuevo;
		ultimo->setSiguiente(primero);
		ultimo->setAnterior(primero);
		primero->setSiguiente(ultimo);
		primero->setAnterior(ultimo);
	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setAnterior(ultimo);
		nuevo->setSiguiente(primero);
		primero->setAnterior(nuevo);
		ultimo = nuevo;
	}
}
void ListaDobleCircular::eliminarNodo(long int ced) {
    if (primero==NULL){
        cout<<"No se puede borrar el elemento "<<ced<<" porque la lista esta vacia."<<endl;
    }else if(primero->getDato().getCedula().getNumCedula()==ced){
        Nodo *borrarInicio = primero;
        //inicio = inicio->der;
        primero = primero->getSiguiente();
        //inicio->izq=NULL;
        primero->setAnterior(ultimo);
        delete borrarInicio;
    }else if(ultimo->getDato().getCedula().getNumCedula()==ced){
        Nodo *borrarFin = ultimo;
        //fin = fin->izq;
        ultimo = ultimo->getAnterior();
        //fin->der=NULL;
        ultimo->setSiguiente(primero);
        delete borrarFin;
    }else{
        Nodo *reco = primero->getSiguiente();
        Nodo *anterior;
        Nodo *siguiente;
        Nodo *borrar;
        while(reco->getSiguiente()!=NULL){
            if(reco->getDato().getCedula().getNumCedula()==ced){
                //anterior=reco->izq;
                anterior=reco->getAnterior();
                //siguiente=reco->der;
                siguiente=reco->getSiguiente();
                borrar=reco;
                //anterior->der=siguiente;
                anterior->setSiguiente(siguiente);
                //siguiente->izq=anterior;
                siguiente->setAnterior(anterior);
                delete borrar;
                break;
            }
            //reco=reco->der;
            reco=reco->getSiguiente();
        }
    }
}

void ListaDobleCircular::modificar(long int ced) {
	if (primero==NULL){
        cout<<"No se puede borrar el elemento "<<ced<<" porque la lista esta vacia."<<endl;
    }else if(primero->getDato().getCedula().getNumCedula()==ced){
        //Nodo *BusquedaIn = primero;
        Persona p1;
        IngresoDatos ingDat;
        cout<<"Cedula encontrada..."<<endl;
        p1 = ingDat.ingresarPersona();
        primero->setDato(p1);

    }else if(ultimo->getDato().getCedula().getNumCedula()==ced){
        //Nodo *BusquedaFi = ultimo;
        Persona p1;
        IngresoDatos ingDat;
        cout<<"Cedula encontrada..."<<endl;
        //BusquedaFi->getDato().mostrarPersona();
        p1 = ingDat.ingresarPersona();
        ultimo->setDato(p1);
    }else{
        Nodo *reco = primero->getSiguiente();
        Persona p1;
        IngresoDatos ingDat;
        while(reco->getSiguiente()!=NULL){
            if(reco->getDato().getCedula().getNumCedula()==ced){
                cout<<"Cedula encontrada..."<<endl;
                //reco->getDato().mostrarPersona();
                p1 = ingDat.ingresarPersona();
                reco->setDato(p1);
                break;
            }
            reco=reco->getSiguiente();
        }
    }
}

void ListaDobleCircular::imprimir() {
	Nodo* aux = primero;
	if (!vacio()) {
		do {
			aux->getDato().mostrarPersona();
			cout << endl;
			aux = aux->getSiguiente();
		} while (aux != primero);
	}
	else {
		cout << "La lista esta vacia" << endl;
	}
}
Nodo* ListaDobleCircular::getPrimero() {
	return primero;
}
Nodo* ListaDobleCircular::getUltimo() {
	return ultimo;
}
void ListaDobleCircular::setPrimero(Nodo* prim) {
	primero = prim;
}
void ListaDobleCircular::setUltimo(Nodo* ulti) {
	ultimo = ulti;
}

void ListaDobleCircular::buscarNodo(long int ced){
    if (primero==NULL){
        cout<<"No se puede borrar el elemento "<<ced<<" porque la lista esta vacia."<<endl;
    }else if(primero->getDato().getCedula().getNumCedula()==ced){
        /*Nodo *borrarInicio = primero;
        primero = primero->getSiguiente();
        primero->setAnterior(ultimo);
        delete borrarInicio;*/
        Nodo *BusquedaIn = primero;
        cout<<"Cedula encontrada..."<<endl;
        BusquedaIn->getDato().mostrarPersona();

    }else if(ultimo->getDato().getCedula().getNumCedula()==ced){
        /*Nodo *borrarFin = ultimo;
        ultimo = ultimo->getAnterior();
        ultimo->setSiguiente(primero);
        delete borrarFin;*/
        Nodo *BusquedaFi = ultimo;
        cout<<"Cedula encontrada..."<<endl;
        BusquedaFi->getDato().mostrarPersona();
    }else{
        Nodo *reco = primero->getSiguiente();
        //Nodo *anterior;
        //Nodo *siguiente;
        //Nodo *borrar;
        while(reco->getSiguiente()!=NULL){
            if(reco->getDato().getCedula().getNumCedula()==ced){
                /*anterior=reco->getAnterior();
                siguiente=reco->getSiguiente();
                borrar=reco;
                anterior->setSiguiente(siguiente);
                siguiente->setAnterior(anterior);
                delete borrar;*/
                cout<<"Cedula encontrada..."<<endl;
                reco->getDato().mostrarPersona();
                break;
            }
            reco=reco->getSiguiente();
        }
    }
}
