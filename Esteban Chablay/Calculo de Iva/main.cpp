/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Correccion Conjunta
Autor: Esteban Chablay
Fecha de creacion: 2/12/2021
Fecha de modificacion: 2/12/2021
7167 ESTRUCTURA DE DATOS
*/
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstring>
#include "ListaDobleEnlazada.h"
#include "Calculo.h"
#include "Nodo.h"

using namespace std;
float validacionDecimal(const char* msj) {

    char* dato = new char[5];
    char c;
    int i = 0;
    float valor = 0.0f;
    printf_s("%s", msj);
    while ((c = _getch()) != 13) {
        if ((c >= '0' && c <= '9') || (c == '.')) {
            printf_s("%c", c);
            //*(dato + i++) = c;
            dato[i++]=c;
        }
    }
    *(dato + i) = '\0';
    valor = atof(dato);
    cout<<endl;
    return valor;
}

float calcularIva(float valor){
    float ivaTotal=0;
    ivaTotal = (valor*12)/100;
    return ivaTotal;
}

float calcularTotal(float valIva, float valSub){
    float total=0.0;
    total = valIva+valSub;
    return total;
}

int calcularDescuento(float valTot){
    int descuento=0;
    if(valTot>1 && valTot<=100){
        descuento=5;
        cout<<"Se aplicara un descuento del 5%"<<endl;
    }else if(valTot>100 && valTot<=1000){
        descuento=10;
        cout<<"Se aplicara un descuento del 10%"<<endl;
    }else{
        descuento=15;
        cout<<"Se aplicara un descuento del 15%"<<endl;
    }
    return descuento;
}

//Metodo menu
void menu() {
	cout << "\n\t||---------------------  LISTA  ---------------------||\n\n";
	cout << " 1. INSERTAR               " << endl;
	cout << " 2. CALCULAR DESCUENTO                    " << endl;
	cout << " 3. MOSTRAR                   " << endl;
    cout << " 4. CERRAR                            " << endl;
    cout << "---------------------------------------------------------------------"<<endl;
	cout << "\n INGRESE OPCION: ";
}

int main()
{
    float subtotal=0;
    ListaDobleEnlazada lde;
    Calculo calc3;
    int opc;
	do {
		system("cls");
		menu();
		cin >> opc;
		switch (opc) {
		case 1:
		    /*cout<<"Ingrese el subtotal: "<<endl;
		    cin>>subtotal;*/
		    subtotal=validacionDecimal("Ingrese el subtotal: ");
		    while(subtotal<0){
                cout<<"                    ERROR SOLO NUMEROS POSITIVOS"<<endl;
                cout<<"Ingrese el subtotal: "<<endl;
                cin>>subtotal;
		    }
		    calc3.setSubtotal(subtotal);
		    calc3.setIva(calcularIva(calc3.getSubtotal()));
            calc3.setTotal(calcularTotal(calc3.getIva(), calc3.getSubtotal()));
            calc3.setDescuento(0);
		    lde.agregar(calc3);
			break;
		case 2:
		    lde.agregarDescuento(calcularDescuento(calc3.getTotal()));
			break;
		case 3:
            lde.mostrarInicioFin();
			break;
        case 4:
            return 0;
            break;
		}
		system("pause");
	} while (opc != 4);
    return 0;
}

