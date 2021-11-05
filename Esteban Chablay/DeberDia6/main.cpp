/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Template_Dia6
Autor: Esteban Chablay
Fecha de creacion: 03/11/2021
Fecha de modificacion: 03/11/2021
7167 ESTRUCTURA DE DATOS
*/
#include <iostream>
#include "src\Triangulo.cpp"
#include "src\Cuadrado.cpp"
#include "src\Circulo.cpp"
#include "src\Areas.cpp"

using namespace std;

int main()
{
    //printf("ENTEROS\n");
    Triangulo<int> trianguloI(0, 0);
    Circulo<int> circuloI(0);
    Cuadrado<int> cuadradoI(0);
    /*areaTriangulo(trianguloI);
    areaCuadrado(cuadradoI);
    areaCirculo(circuloI);*/

    //printf("FLOTANTES\n");
    Triangulo<float> triangulof(0, 0);
    Circulo<float> circulof(0);
    Cuadrado<float> cuadradof(0);
    /*areaTriangulo(triangulof);
    areaCuadrado(cuadradof);
    areaCirculo(circulof);*/

    int seleccion;
    cout<<"|-- FIGURAS DISPONIBLES -|\n"<<endl;
    cout<<"1. Cuadrado"<<endl;
    cout<<"2. Triangulo"<<endl;
    cout<<"3. Circulo"<<endl;
    cout<<"4. Salir"<<endl;
    cout<<"Seleccione la figura: ";
    cin>>seleccion;
    while((seleccion<=0)||(seleccion>=12)){
        cout<<"Error, ingrese de nuevo: ";
        cin>>seleccion;
    }
    switch(seleccion)
    {
    case 1:
        int lado;
        cout<<"|----  CUADRADO ----|"<<endl;
        cout<<"Ingrese el valor de un lado: ";
        cin>>lado;
        cuadradoI.setLado(lado);
        areaCuadrado(cuadradoI);
        break;
    case 2:
        cout<<"|----  TRIANGULO ----|"<<endl;
        int base, altura;
        cout<<"Ingrese el valor de su base: ";
        cin>>base;
        cout<<"Ingrese el valor de su altura: ";
        cin>>altura;
        trianguloI.setBase(base);
        trianguloI.setAltura(altura);
        areaTriangulo(trianguloI);
        break;
    case 3:
        cout<<"|----  CIRCULO ----|"<<endl;
        int radio;
        cout<<"Ingrese el radio: ";
        cin>>radio;
        circuloI.setRadio(radio);
        areaCirculo(circuloI);
        break;
    case 4:
        cout<<"|----  SALIR ----|"<<endl;
        exit(0);
        break;
    } while(seleccion <= 4);


    return 0;
}
