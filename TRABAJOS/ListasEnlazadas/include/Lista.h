#ifndef LISTA_H
#define LISTA_H
#include "Nodo.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

class Lista
{
    public:
        Lista(){
            this->primero=NULL;
            this->actual=NULL;
        }
        void insertar(int);
        void mostrar();

    protected:

    private:
        Nodo *primero;
        Nodo *actual;
        bool ListaVacia(){
            return (this->primero==NULL);
        }
};

#endif // LISTA_H
