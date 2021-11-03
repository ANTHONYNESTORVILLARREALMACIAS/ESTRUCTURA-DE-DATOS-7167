/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Template_Dia4
Autor: Esteban Chablay
Fecha de creacion: 01/11/2021
Fecha de modificacion: 01/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include <stdlib.h>
#include "src\Vector.cpp"
#include "src\Punto.cpp"
#include "src\Calculos.cpp"

using namespace std;

int main()
{
    printf("                    |-- NUMEROS ENTEROS --|");
    Punto<int> p1(5,7);
    Punto<int> p2(6,8);
    Calculos<int> calc;
    calc.modulo(p1, p2);
    calc.formula(p1, p2);

    printf("\n                  |-- NUMEROS FLOTANTES --|");
    Punto<float> p3(7.9, 8.3);
    Punto<float> p4(2.3, 4.5);
    Calculos<float> calcF;
    calcF.modulo(p3, p4);
    calcF.formula(p3, p4);

    return 0;
}
