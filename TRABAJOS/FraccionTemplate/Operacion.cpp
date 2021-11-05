#include "Operacion.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class H>
void Operacion<H>::multiplicar(Fraccion<H>& fraccion1,Fraccion<H>& fraccion2 ){
    cout<<"El resultado es: "<<((fraccion1.getNum()*fraccion2.getDen())+(fraccion2.getNum()*fraccion1.getDen()))/(fraccion1.getDen()+fraccion2.getDen())<<endl;
}

