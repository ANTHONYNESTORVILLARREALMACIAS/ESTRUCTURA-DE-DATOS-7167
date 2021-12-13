#include "../include/ListaDobleCircular.h"
#include "../include/Persona.h"
#include "../include/Validaciones.h"
#include "../include/Generador.h"
#include "../include/IngresoDatos.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <fstream>

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
void ListaDobleCircular::insertarCabeza(Persona dato) {
	Nodo* nuevo = new Nodo(dato);

	if (vacio()) {
		primero = nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(primero);
		ultimo = primero;

	}
	else {
		ultimo = primero->getAnterior();
		nuevo->setSiguiente(primero);
		nuevo->setAnterior(ultimo);
		primero->setAnterior(nuevo);
		ultimo->setSiguiente(nuevo);
		primero = nuevo;
	}
}
void ListaDobleCircular::insertarCola(Persona valor) {
	Nodo* nuevo = new Nodo(valor);

	if (vacio()) {
		primero = nuevo;
		primero->setSiguiente(primero);
		primero->setAnterior(primero);
		ultimo = primero;

	}
	else {
		ultimo->setSiguiente(nuevo);
		nuevo->setSiguiente(primero);
		nuevo->setAnterior(ultimo);
		ultimo = nuevo;
		primero->setAnterior(ultimo);
	}
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
        primero = primero->getSiguiente();
        primero->setAnterior(ultimo);
        delete borrarInicio;
    }else if(ultimo->getDato().getCedula().getNumCedula()==ced){
        Nodo *borrarFin = ultimo;
        ultimo = ultimo->getAnterior();
        ultimo->setSiguiente(primero);
        delete borrarFin;
    }else{
        Nodo *reco = primero->getSiguiente();
        Nodo *anterior;
        Nodo *siguiente;
        Nodo *borrar;
        while(reco->getSiguiente()!=NULL){
            if(reco->getDato().getCedula().getNumCedula()==ced){
                anterior=reco->getAnterior();
                siguiente=reco->getSiguiente();
                borrar=reco;
                anterior->setSiguiente(siguiente);
                siguiente->setAnterior(anterior);
                delete borrar;
                break;
            }
            reco=reco->getSiguiente();
        }
    }
}


void ListaDobleCircular::eliminarCola() {
	Nodo* actual = new Nodo();
	actual = primero;
	Nodo* anterior = new Nodo();
	anterior = NULL;
	bool encontrado = false;
	Persona nodoBuscado = ultimo->getDato();
	if (primero != NULL) {
		do {
			if (actual->getDato().getCedula().getNumCedula() == nodoBuscado.getCedula().getNumCedula()) {
				cout << "\n Nodo con el dato ( " << nodoBuscado.getCedula().getNumCedula() << " ) Encontrado";
				if (actual == primero) {
					primero = primero->getSiguiente();
					primero->setAnterior(ultimo);
					ultimo->setSiguiente(primero);
				}
				else if (actual == ultimo) {
					ultimo = anterior;
					ultimo->setSiguiente(primero);
					primero->setAnterior(ultimo);
				}
				else {
					anterior->setSiguiente(actual->getSiguiente());
					actual->getSiguiente()->setAnterior(anterior);
				}

				cout << "\n Nodo Eliminado\n\n";
				encontrado = true;
			}

			anterior = actual;
			actual = actual->getSiguiente();
		} while (actual != primero && encontrado != true);

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}

	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
	}
}
void ListaDobleCircular::eliminarCabeza() {
	Nodo* actual = new Nodo();
	actual = primero;
	Nodo* anterior = new Nodo();
	anterior = NULL;
	bool encontrado = false;
	Persona nodoBuscado = primero->getDato();
	if (primero != NULL) {
		do {

			if (actual->getDato().getCedula().getNumCedula() == nodoBuscado.getCedula().getNumCedula()) {
				cout << "\n Nodo con el dato ( " << nodoBuscado.getCedula().getNumCedula() << " ) Encontrado";
				if (actual == primero) {
					primero = primero->getSiguiente();
					primero->setAnterior(ultimo);
					ultimo->setSiguiente(primero);
				}
				else if (actual == ultimo) {
					ultimo = anterior;
					ultimo->setSiguiente(primero);
					primero->setAnterior(ultimo);
				}
				else {
					anterior->setSiguiente(actual->getSiguiente());
					actual->getSiguiente()->setAnterior(anterior);
				}

				cout << "\n Nodo Eliminado\n\n";
				encontrado = true;
			}

			anterior = actual;
			actual = actual->getSiguiente();
		} while (actual != primero && encontrado != true);

		if (!encontrado) {
			cout << "\n Nodo no Encontrado\n\n";
		}
	}
	else {
		cout << "\n La lista se Encuentra Vacia\n\n";
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
        Nodo *BusquedaIn = primero;
        cout<<"Cedula encontrada..."<<endl;
        BusquedaIn->getDato().mostrarPersona();

    }else if(ultimo->getDato().getCedula().getNumCedula()==ced){
        Nodo *BusquedaFi = ultimo;
        cout<<"Cedula encontrada..."<<endl;
        BusquedaFi->getDato().mostrarPersona();
    }else{
        Nodo *reco = primero->getSiguiente();
        while(reco->getSiguiente()!=NULL){
            if(reco->getDato().getCedula().getNumCedula()==ced){
                cout<<"Cedula encontrada..."<<endl;
                reco->getDato().mostrarPersona();
                break;
            }
            reco=reco->getSiguiente();
        }
    }
}

void ListaDobleCircular::generarArchivo(){
    ofstream archivo;
    archivo.open("ejemplo.txt", ios::out);
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
    }
    archivo<<"Hola que tal";

    archivo.close();
}
