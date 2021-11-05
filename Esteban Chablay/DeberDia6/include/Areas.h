#ifndef AREAS_H
#define AREAS_H
#include "Cuadrado.h"
#include "Triangulo.h"
#include "Circulo.h"

template <class H>
void areaCuadrado(Cuadrado<H> cuad);

template <class H>
void areaTriangulo(Triangulo<H> tri);

template <class H>
void areaCirculo(Circulo<H> circ);

#endif // AREAS_H
