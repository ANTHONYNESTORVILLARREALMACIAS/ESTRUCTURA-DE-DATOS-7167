#include "Funciones.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

template <class H>
void ingresar(H *p, int t){
    int i;
	for(i=0;i<t;i++){
		printf("Ingrese el valor entero: ");
		cin>>*p++;
	}
}

template <class H>
void imprimir(H *p, int t){
    int i;
	for(i=0;i<t;i++){
		printf("\nValor ingresado: ");
		cout<<*(&(*p));
		*(p++)	;
	}
	printf("\n");
}

template <class H>
void procesar(H *p, int t){
    int i,e;
	printf("\nIngrese el escalar: ")	;
	scanf("%d",&e);
	for(i=0;i<t;i++){
		*p=(*(&(*p)))*e;
		*(p++);
	}
}
