#include "Vector.h"
#include "Punto.h"

template <class H>
Vector<H>::Vector(Punto<H> p1, Punto<H> p2){
    this->punto1=p1;
    this->punto2=p2;
}
