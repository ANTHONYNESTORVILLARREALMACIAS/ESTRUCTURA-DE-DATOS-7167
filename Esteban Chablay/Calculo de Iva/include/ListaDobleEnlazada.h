#ifndef LISTADOBLEENLAZADA_H
#define LISTADOBLEENLAZADA_H
#include "Calculo.h"
#include "Nodo.h"


class ListaDobleEnlazada
{
    public:
        ListaDobleEnlazada();
        void agregar(Calculo );
        void mostrarInicioFin();
        void mostrarFinInicio();
        void mostrarInicio();
        void mostrarFin();
        void borrarValor(int);
        void borrarInicio();
        void borrarFin();
        int tamanoLista();
        void insertarInicio(Calculo);
        void insertarPosicion(int, Calculo);
        void agregarDescuento(int);
    protected:

    private:
        Nodo *inicio;
        Nodo *fin;
};

#endif // LISTADOBLEENLAZADA_H
