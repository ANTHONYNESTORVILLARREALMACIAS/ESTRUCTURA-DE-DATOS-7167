#include "Cuadrado.h"

template <class H>
Cuadrado<H>::Cuadrado(H n){
    this->lado=n;
}

template <class H>
void Cuadrado<H>::setLado(H n){
    this->lado=n;
}

template <class H>
H Cuadrado<H>::getLado(){
    return this->lado;
}

