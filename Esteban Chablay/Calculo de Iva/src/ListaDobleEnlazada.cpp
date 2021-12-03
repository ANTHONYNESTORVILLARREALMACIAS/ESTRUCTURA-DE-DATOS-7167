#include "ListaDobleEnlazada.h"
#include "Nodo.h"
#include "Calculo.h"
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

ListaDobleEnlazada::ListaDobleEnlazada(){
    inicio = NULL;
    fin = NULL;
}

void ListaDobleEnlazada::agregar(Calculo val){
    Nodo *nuevo = new Nodo();
    nuevo->setInfo(val);
    if(inicio==NULL){
        inicio = nuevo;
        fin = nuevo;
        nuevo->setIzquierdo(NULL);
        nuevo->setDerecho(NULL);
    } else{
        nuevo->setIzquierdo(fin);
        fin->setDerecho(nuevo);
        fin=fin->getDerecho();
        nuevo->setDerecho(NULL);
    }

}

void ListaDobleEnlazada::mostrarInicioFin(){
    Nodo* reco = inicio;
    while(reco!=NULL){
        cout<<"\nCalculando..."<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        cout<<"| -  Subtotal  - |                                 "<<reco->getInfo().getSubtotal()<<"$"<<endl;
        cout<<"| -     Iva    - |                                 "<<reco->getInfo().getIva()<<"$"<<endl;
        cout<<"| -    Total   - |                                 "<<reco->getInfo().getTotal()<<"$"<<endl;
        cout<<"---------------------------------------------------------------------"<<endl;
        if(reco->getInfo().getDescuento()==0){
            cout<<"---------------| No se ha aplicado ningun descuento |---------------"<<endl;
            cout<<"| - TOTAL A PAGAR - |                              "<<reco->getInfo().getTotal()<<"$"<<endl;
            cout<<"---------------------------------------------------------------------"<<endl;
            reco = reco->getDerecho();
        }else{
            cout<<" -------------| FELICIDADES! tiene un descuento del "<<reco->getInfo().getDescuento()<<"% |------------ "<<endl;
            cout<<"El descuento es de: "<<(reco->getInfo().getTotal()*reco->getInfo().getDescuento())/100<<"$"<<endl;
            cout<<"| - TOTAL A PAGAR - |                              "<<reco->getInfo().getTotal()-(reco->getInfo().getTotal()*reco->getInfo().getDescuento())/100<<"$"<<endl;
            cout<<"---------------------------------------------------------------------"<<endl;
            reco = reco->getDerecho();
        }

    }
}

void ListaDobleEnlazada::mostrarFinInicio(){
    Nodo *reco = fin;
    while(reco!=NULL){
        cout<<"Calculando..."<<endl;
        cout<<"- Subtotal - "<<reco->getInfo().getSubtotal()<<endl;
        cout<<"- Iva - "<<reco->getInfo().getIva()<<endl;
        cout<<"- Total - "<<reco->getInfo().getTotal()<<endl;
        reco=reco->getIzquierdo();
    }
}

void ListaDobleEnlazada::mostrarInicio(){
    cout<<"Primer Elemento: "<<inicio->getInfo().getIva()<<endl;
}

void ListaDobleEnlazada::mostrarFin(){
    cout<<"Ultimo Elemento: "<<fin->getInfo().getIva()<<endl;
}

int ListaDobleEnlazada::tamanoLista(){
    Nodo *tmp = this->inicio;
    int contador=0;
    while(tmp){
        tmp=tmp->getDerecho();
        contador++;
    }
    return contador;
}

void ListaDobleEnlazada::insertarInicio(Calculo val){
    Nodo *nuevo = new Nodo();
    nuevo->setInfo(val);
    Nodo *tmp=this->inicio;
    this->inicio=nuevo;
    nuevo->setDerecho(tmp);
    nuevo->setIzquierdo(NULL);
}

void ListaDobleEnlazada::insertarPosicion(int pos, Calculo val){
    Nodo *tmp = this->inicio;
    Nodo *nuevo = new Nodo();
    nuevo->setInfo(val);
    int contador=1;
    if(pos==0){
            insertarInicio(val);
    }else if(pos==tamanoLista()){
        agregar(val);
    }else{
        while(pos!=contador){
            contador++;
            tmp = tmp->getDerecho();
        }
        nuevo->setDerecho(tmp->getDerecho());
        nuevo->setIzquierdo(tmp);
        tmp->setDerecho(nuevo);
    }
}

void ListaDobleEnlazada::agregarDescuento(int descuento){
    fin->setDato(descuento);
}



