#include "../include/Nodo.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

Nodo::Nodo(int val, Nodo *sig=NULL){
    this->valor=val;
    this->siguiente=sig;
}

int Nodo::getValor(){
    return this->valor;
}

void Nodo::setValor(int val){
    this->valor=val;
}

Nodo *Nodo::getSiguiente(){
    return this->siguiente;
}

void Nodo::setSiguiente(Nodo *sig){
    this->siguiente=sig;
}
