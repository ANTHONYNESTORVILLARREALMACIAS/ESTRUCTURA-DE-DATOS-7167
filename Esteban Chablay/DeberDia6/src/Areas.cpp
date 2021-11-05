#include "Areas.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Cuadrado.h"
#include <iostream>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415169

using namespace std;

template <class H>
void areaCuadrado(Cuadrado<H> cuad){
    H area;
    area = cuad.getLado() * cuad.getLado();
    cout<<"El area del cuadrado es: "<<area<<endl;
}

template <class H>
void areaTriangulo(Triangulo<H> tri){
    H area;
    area = (tri.getBase()*tri.getAltura())/2;
    cout<<"El area del triangulo es: "<<area<<endl;
}

template <class H>
void areaCirculo(Circulo<H> circ){
    H area;
    area = (pi*circ.getRadio()*circ.getRadio());
    cout<<"El area de la circunferencia es: "<<area<<endl;
}
