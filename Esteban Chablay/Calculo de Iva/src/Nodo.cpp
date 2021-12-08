#include "Nodo.h"
#include "Calculo.h"

Nodo::Nodo(){
}

Calculo::Calculo(){
}


Calculo Nodo::getInfo(){
    return this->info;
}

void Nodo::setInfo(Calculo val){
    this->info=val;
}

Nodo *Nodo::getIzquierdo(){
   return this->izq;
}

void Nodo::setIzquierdo(Nodo *iz){
    this->izq=iz;
}

Nodo *Nodo::getDerecho(){
    return this->der;
}

void Nodo::setDerecho(Nodo *de){
    this->der=de;
}

void Nodo::setDato(int dato){
    this->info.setDescuento(dato);
}

