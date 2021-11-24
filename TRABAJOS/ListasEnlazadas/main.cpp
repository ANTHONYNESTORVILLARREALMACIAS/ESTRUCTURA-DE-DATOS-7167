#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include "Lista.h"
#include "Nodo.h"

using namespace std;

int main()
{
    Lista list;
    list.insertar(3);
    list.insertar(13);
    list.insertar(23);
    list.insertar(33);
    list.insertar(43);
    list.mostrar();
    return 0;
}
