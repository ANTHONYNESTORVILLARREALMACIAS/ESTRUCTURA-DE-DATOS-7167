#ifndef ARREGLO_H
#define ARREGLO_H
#include <stdlib.h>

template <class H>
class Arreglo
{
    public:
        void agregarDato(H n);
        void imprimirDatos();
        H getDato();
        void setDato(H n);

    protected:

    private:
        H dato;
};

#endif // ARREGLO_H
