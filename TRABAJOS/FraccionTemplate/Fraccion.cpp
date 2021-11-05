#include "Fraccion.h"

template <class H>
void Fraccion<H>::setNum(H n){
    this->numerador=n;
}

template <class H>
H Fraccion<H>::getNum(){
    return this->numerador;
}

template <class H>
void Fraccion<H>::setDen(H n){
    this->denominador=n;
}

template <class H>
H Fraccion<H>::getDen(){
    return this->denominador;
}

template <class H>
Fraccion<H>::Fraccion(H num, H den){
    this->numerador = num;
    this->denominador = den;
}
