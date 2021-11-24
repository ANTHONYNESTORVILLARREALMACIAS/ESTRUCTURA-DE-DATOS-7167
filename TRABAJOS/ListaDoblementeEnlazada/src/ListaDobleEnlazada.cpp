#include "ListaDobleEnlazada.h"
#include "Nodo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;


ListaDobleEnlazada::ListaDobleEnlazada(){
    inicio = NULL;
    fin = NULL;
}

void ListaDobleEnlazada::agregar(int val){
    Nodo *nuevo = new Nodo();
    nuevo->info=val;
    if(inicio==NULL){
        inicio = nuevo;
        fin = nuevo;
        nuevo->izq=NULL;
        nuevo->der=NULL;
    } else{
        nuevo->izq=fin;
        fin->der=nuevo;
        fin=fin->der;
        nuevo->der=NULL;
    }

}

void ListaDobleEnlazada::mostrarInicioFin(){
    Nodo* reco = inicio;
    while(reco!=NULL){
        cout<<"- "<<reco->info <<endl;
        reco=reco->der;
    }
}

void ListaDobleEnlazada::mostrarFinInicio(){
    Nodo *reco = fin;
    while(reco!=NULL){
        cout<<"- "<<reco->info<<endl;
        reco=reco->izq;
    }
}

void ListaDobleEnlazada::mostrarInicio(){
    cout<<"Primer Elemento: "<<inicio->info<<endl;
}

void ListaDobleEnlazada::mostrarFin(){
    cout<<"Ultimo Elemento: "<<fin->info<<endl;
}

void ListaDobleEnlazada::borrarValor(int valor){
    if (inicio==NULL){
        cout<<"No se puede borrar el elemento "<<valor<<" porque la lista esta vacia."<<endl;
    }if(inicio->info==valor){
        Nodo *borrarInicio = inicio;
        inicio = inicio->der;
        inicio->izq=NULL;
        delete borrarInicio;
    }else if(fin->info==valor){
        Nodo *borrarFin = fin;
        fin = fin->izq;
        fin->der=NULL;
        delete borrarFin;
    }else{
        Nodo *reco = inicio->der;
        Nodo *anterior;
        Nodo *siguiente;
        Nodo *borrar;
        while(reco->der!=NULL){
            if(reco->info==valor){
                anterior=reco->izq;
                siguiente=reco->der;
                borrar=reco;
                anterior->der=siguiente;
                siguiente->izq=anterior;
                delete borrar;
                break;
            }
            reco=reco->der;
        }
    }

}
