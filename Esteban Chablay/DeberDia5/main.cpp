/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber dia 5
Autor: Esteban Chablay
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include "src\Arreglo.cpp"
#include "src\Procesos.cpp"

using namespace std;

int main()
{
    int numArreglo;

    printf("|---------------  ENTEROS  ---------------|\n");
    int nDato;
    cout<<"Ingrese el numero de datos por ordenar: ";
    cin>>numArreglo;
    cout<<"Usted ingresara "<<numArreglo<<" datos."<<endl;
    Arreglo<int> Datos[numArreglo];

    printf("|- Ingreso de datos -|\n");
    for(int i=0; i<numArreglo; i++){
        cout<<"Ingrese el valor: ";
        cin>>nDato;
        Datos[i].agregarDato(nDato);
    }

    printf("|- Datos ingresados -|\n");
    for(int i=0; i<numArreglo; i++){
        printf("%i )- ", i+1);
        Datos[i].imprimirDatos();
    }

    ordenarNumeros(Datos, numArreglo);

    printf("|- Datos ordenados -|\n");
    for(int i=0; i<numArreglo; i++){
        printf("%i )- ", i+1);
        Datos[i].imprimirDatos();
    }



    printf("|---------------  FLOTANTES  ---------------|\n");
    float fDato;
    cout<<"Ingrese el numero de datos por ordenar: ";
    cin>>numArreglo;
    cout<<"Usted ingresara "<<numArreglo<<" datos."<<endl;
    Arreglo<float> Datosf[numArreglo];

    printf("|- Ingreso de datos -|\n");
    for(int i=0; i<numArreglo; i++){
        fflush(stdin);
        cout<<"Ingrese el valor: ";
        cin>>fDato;
        Datosf[i].agregarDato(fDato);
    }

    printf("|- Datos ingresados -|\n");
    for(int i=0; i<numArreglo; i++){
        printf("%i )- ", i+1);
        Datosf[i].imprimirDatos();
    }

    ordenarNumeros(Datosf, numArreglo);

    printf("|- Datos ordenados -|\n");
    for(int i=0; i<numArreglo; i++){
        printf("%i )- ", i+1);
        Datosf[i].imprimirDatos();
    }

    return 0;
}
