#include <iostream>
#include "ListaDobleEnlazada.h"

using namespace std;

int main()
{
    ListaDobleEnlazada lde;
    lde.agregar(6);
    lde.agregar(7);
    lde.agregar(3);
    lde.agregar(10);
    printf("Impresion de inicio a fin\n");
    lde.mostrarInicioFin();
    printf("\nImpresion de final a inicio\n");
    lde.mostrarFinInicio();
    printf("\n");
    lde.mostrarInicio();
    lde.mostrarFin();
    printf("\nBorrar valores. \n");
    lde.borrarValor(3);
    lde.mostrarInicioFin();
    printf("\n");
    lde.mostrarInicio();
    lde.mostrarFin();


    return 0;
}
