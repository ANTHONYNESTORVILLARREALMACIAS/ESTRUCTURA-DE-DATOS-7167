/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ejercicio Deber Fraccion con Templates
Autores: Anthony Villarreal, Esteban Chablay, Luis Espinosa, Ariel Pozo
Fecha de creacion: 30/10/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include <stdlib.h>
#include "Fraccion.cpp"
#include "Operacion.cpp"

using namespace std;

int main()
{
    printf("|| TIPO ENTERO ||\n");
    Fraccion<int> enteros1(3,5);
    Fraccion<int> enteros2(6,9);
    Operacion<int> op;
    op.multiplicar(enteros1, enteros2);

    printf("|| TIPO FLOTANTE ||\n");
    Fraccion<float> flotante1(3,5);
    Fraccion<float> flotante2(6,9);
    Operacion<float> opfloat;
    opfloat.multiplicar(flotante1, flotante2);

    return 0;
}

