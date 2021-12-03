#include "Calculo.h"

Calculo::Calculo(float sub, float iv, float tot, int desc){
    this->subtotal=sub;
    this->iva=iv;
    this->total=tot;
    this->descuento=desc;
}

void Calculo::setSubtotal(float sub){
    this->subtotal=sub;
}

float Calculo::getSubtotal(){
    return this->subtotal;
}

void Calculo::setIva(float iv){
    this->iva=iv;
}

float Calculo::getIva(){
    return this->iva;
}

void Calculo::setTotal(float tot){
    this->total=tot;
}

float Calculo::getTotal(){
    return this->total;
}

void Calculo::setDescuento(int desc){
    this->descuento=desc;
}

int Calculo::getDescuento(){
    return this->descuento;
}
