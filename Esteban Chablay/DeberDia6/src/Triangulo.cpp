#include "Triangulo.h"
template <class H>
Triangulo<H>::Triangulo(H a, H b){
    this->altura=a;
    this->base=b;
}

template <class H>
void Triangulo<H>::setBase(H n){
    this->base=n;
}

template <class H>
H Triangulo<H>::getBase(){
    return this->base;
}

template <class H>
void Triangulo<H>::setAltura(H n){
    this->altura=n;
}

template <class H>
H Triangulo<H>::getAltura(){
    return this->altura;
}
