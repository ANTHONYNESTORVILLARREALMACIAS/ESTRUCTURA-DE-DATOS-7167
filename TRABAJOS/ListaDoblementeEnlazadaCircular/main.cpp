/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Lista Circular Doblemente Enlazada
Autores: Anthony Villarreal, Ariel Pozo, Esteban Chablay, Espinoza Luis
Fecha de creacion: 24/11/2021
Fecha de modificacion: 24/11/2021
7167 ESTRUCTURA DE DATOS
*/
#include <iostream>
#include "ListaDobleEnlazada.h"

using namespace std;

int main()
{
    ListaDobleEnlazada lde;
    cout<<"-----| LISTAS CIRCULARES DOBLEMENTE ENLAZADAS |-----"<<endl;
    lde.agregar(6);
    lde.agregar(7);
    lde.agregar(3);
    lde.agregar(10);
    lde.agregar(4);
    lde.agregar(8);
    printf("Impresion de inicio a fin\n");
    lde.mostrarInicioFin();
    printf("\nImpresion de final a inicio\n");
    lde.mostrarFinInicio();
    printf("\n");
    lde.mostrarInicio();
    lde.mostrarFin();
    printf("\nBorrar un valor. \n");
    lde.borrarValor(10);
    lde.mostrarInicioFin();
    printf("\n");
    lde.mostrarInicio();
    lde.mostrarFin();


    return 0;
}
