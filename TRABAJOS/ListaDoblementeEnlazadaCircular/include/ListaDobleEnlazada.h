#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include <iostream>
#include "Nodo.h"

using namespace std;

class ListaDobleEnlazada
{
    public:
        ListaDobleEnlazada();
        void agregar(int );
        void mostrarInicioFin();
        void mostrarFinInicio();
        void mostrarInicio();
        void mostrarFin();
        void borrarValor(int);
        bool buscarValor(int);
    protected:

    private:
        Nodo *inicio;
        Nodo *fin;
};

#endif // LISTADOBLEENLAZADA_H
