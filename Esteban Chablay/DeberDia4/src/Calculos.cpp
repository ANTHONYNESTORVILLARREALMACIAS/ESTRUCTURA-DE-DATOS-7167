#include "Calculos.h"
#include "math.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class H>
void Calculos<H>::modulo(Punto<H>& p1, Punto<H>& p2){
    float resultado;
    printf("\n --- Distancia entre dos puntos --- \n");
    cout<<"Puntos ingresados: p1("<<p1.getPuntoX()<<","<<p1.getPuntoY()<<") y p2("<<p2.getPuntoX()<<","<<p2.getPuntoY()<<")"<<endl;
    resultado= sqrt( pow(p1.getPuntoX()-p2.getPuntoX(),2) + pow(p1.getPuntoY()-p2.getPuntoY(),2));
    cout<<"El modulo es: "<<resultado<<endl;
}

template <class H>
void Calculos<H>::formula(Punto<H>& p1, Punto<H>& p2){
    float media;
    printf("\n --- Ecuacion de la recta con dos puntos --- \n");
    cout<<"Puntos ingresados: p1("<<p1.getPuntoX()<<","<<p1.getPuntoY()<<") y p2("<<p2.getPuntoX()<<","<<p2.getPuntoY()<<")"<<endl;
    media = (p2.getPuntoY()-p1.getPuntoY()) / (p2.getPuntoX()-p1.getPuntoX());
    cout<<"La formula es: y="<<media<<"x-"<<-media*p1.getPuntoX()+p1.getPuntoY()<<endl;
}
