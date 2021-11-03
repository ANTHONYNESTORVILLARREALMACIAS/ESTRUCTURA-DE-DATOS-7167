#include "Arreglo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class H>
void Arreglo<H>::agregarDato(H newDato){
    //cout<<"Dato agregado: "<<newDato<<endl;
    cout<<"Dato agregado."<<endl;
    this->dato=newDato;
}

template <class H>
void Arreglo<H>::imprimirDatos(){
    cout<<this->dato<<endl;
}

template <class H>
H Arreglo<H>::getDato(){
    return this->dato;
}

template <class H>
void Arreglo<H>::setDato(H n){
    this->dato=n;
}


