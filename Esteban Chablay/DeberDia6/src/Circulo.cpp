#include "Circulo.h"

template <class H>
Circulo<H>::Circulo(H n){
    this->radio=n;
}

template <class H>
void Circulo<H>::setRadio(H n){
    this->radio=n;
}

template <class H>
H Circulo<H>::getRadio(){
    return this->radio;
}
