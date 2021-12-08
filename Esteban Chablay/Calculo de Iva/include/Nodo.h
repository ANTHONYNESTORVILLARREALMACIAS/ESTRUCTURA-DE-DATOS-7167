#ifndef NODO_H
#define NODO_H
#include "Calculo.h"

class Nodo
{
    public:
        Nodo();
        Calculo getInfo();
        void setInfo(Calculo);
        Nodo *getIzquierdo();
        void setIzquierdo(Nodo *);
        Nodo *getDerecho();
        void setDerecho(Nodo *);
        void setDato(int);
    private:
        Nodo *izq;
        Calculo info;
        Nodo *der;
};

#endif // NODO_H
