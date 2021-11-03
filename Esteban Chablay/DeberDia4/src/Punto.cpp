#include "Punto.h"
template <class H>
Punto<H>::Punto(H pX, H pY){
    this->puntoX=pX;
    this->puntoY=pY;
}

template <class H>
void Punto<H>::setPuntoX(H n){
    this->puntoX=n;
}

template <class H>
H Punto<H>::getPuntoX(){
    return this->puntoX;
}

template <class H>
void Punto<H>::setPuntoY(H n){
    this->puntoY=n;
}

template <class H>
H Punto<H>::getPuntoY(){
    return this->puntoY;
}
