#include "Lista.h"
#include "Nodo.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

void Lista::insertar(int val){
    Nodo *nuevo = new Nodo(val, NULL);
    if(ListaVacia()){
        this->primero=nuevo;
    }
    else{
        this->actual->setSiguiente(nuevo);
    }
    this->actual=nuevo;
}

void Lista::mostrar(){
    Nodo *tmp=this->primero;
    while(tmp){
        cout<<tmp->getValor()<<"-->";
        tmp=tmp->getSiguiente();
    }
    cout<<"NULL"<<endl;
}
