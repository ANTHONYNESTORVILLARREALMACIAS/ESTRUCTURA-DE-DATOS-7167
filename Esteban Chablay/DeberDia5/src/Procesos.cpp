#include "Procesos.h"
#include "Arreglo.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class H>
void ordenarNumeros(Arreglo<H> lista[],int numeroD){
    //cout<<"-"<<lista[0].getDato();
    H aux;
    for(int i=0; i<numeroD; i++){
        for (int j=i+1; j<numeroD; j++){
            if(lista[i].getDato() > lista[j].getDato()){
                aux = lista[i].getDato();
                //lista[i]=lista[j];
                lista[i].setDato(lista[j].getDato());
                //lista[j]=aux;
                lista[j].setDato(aux);
            }
        }
    }
}
