#include "Procesos.h"
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void Proceso::unir(int* c,int* c2,int* c3, int tam,int t) {

    int contador = 0, contador2 = 0;
    while (tam > contador) { 
        if (contador > t - 1) {  

            //c3[contador] = c2[contador2]; 
            *(c3+contador) = *(c2+contador2);
            contador2++;
        }
        else {

            //c3[contador] = c[contador]; 
            *(c3 + contador) = *(c + contador);
        }
        contador++;
    }
}
void Proceso::ordenar(int n, int* cr)
{
    int i, j, temp;
    for (i = 0; i < n; i++)
        for (j = n - 1; j >= i; j--)
            //if (cr[j - 1] > cr[j])
            if (*(cr+(j-1))> *(cr+j))
            {
                temp = *(cr + (j - 1));
                *(cr + (j - 1)) = *(cr + j);
                *(cr + j) = temp;
            }
}
int Proceso::eliminar(int t, int* cr){

    if (t == 0 || t == 1)
        return t;

    int* temp = (int*)malloc(t * sizeof(int));

    int j = 0;
    for (int i = 0; i < t - 1; i++)

        if (*(cr + i) != *(cr + (i + 1)))
            *(temp + (j++)) = *(cr + i);
   

    *(temp + (j++)) = *(cr+(t-1));

    for (int i = 0; i < j; i++)
        *(cr + i) = *(temp + i);

    return j;
}
int Proceso::intersecar(int t,int* cr) {

    if (t == 0 || t == 1)
        return t;

    int* temp = (int*)malloc(t * sizeof(int));

    int j = 0;
    for (int i = 0; i < t - 1; i++)

        if (*(cr + i) == *(cr + (i + 1))) {
            *(temp + j) = *(cr + i);
            j++;
        }
    *(temp + j) = *(cr + (t - 1));

    for (int i = 0; i < j; i++)
        *(cr + i) = *(temp + i);

    return j;
}
