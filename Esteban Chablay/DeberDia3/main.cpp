/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Template_Dia3
Autor: Esteban Chablay
Fecha de creacion: 31/10/2021
Fecha de modificacion: 31/10/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include <stdlib.h>
#include "src\Numeros.cpp"
#include "src\Algebra.cpp"

using namespace std;

int main()
{
    Numeros<int> entero;
    Numeros<float> flotante;

    printf("Numeros enteros\n");
    entero.setNum1(8);
    entero.setNum2(4);
    multiplicacion(entero.getNum1(), entero.getNum2());
    division(entero.getNum1(), entero.getNum2());
    suma(entero.getNum1(), entero.getNum2());
    resta(entero.getNum1(), entero.getNum2());

    printf("Numeros flotantes\n");
    flotante.setNum1(5.6);
    flotante.setNum2(7.2);
    multiplicacion(flotante.getNum1(), flotante.getNum2());
    division(flotante.getNum1(), flotante.getNum2());
    suma(flotante.getNum1(), flotante.getNum2());
    resta(flotante.getNum1(), flotante.getNum2());

    return 0;
}
