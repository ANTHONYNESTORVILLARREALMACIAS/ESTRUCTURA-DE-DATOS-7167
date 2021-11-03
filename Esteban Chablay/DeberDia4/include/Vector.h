#ifndef VECTOR_H
#define VECTOR_H
#include "Punto.h"
template <class H>
class Vector
{
    public:
        Vector(Punto<H> punto1, Punto<H> punto2);

    protected:

    private:
        Punto<H> punto1;
        Punto<H> punto2;
};

#endif // VECTOR_H
