#include "../include/Cedula.h"
#include "../include/Fecha_de_nacimiento.h"
#include "../include/Persona.h"
#include "../include/Vehiculos.h"
#include "../include/Menu.h"
#include "../include/IngresoDatos.h"
#include "../include/ListaDobleCircular.h"
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <fstream>

using namespace std;

void crearArchivo(){
    ofstream archivo;
    archivo.open("Documento.txt", ios::out);
    if(archivo.fail()){
        cout<<"No se pudo crear el archivo"<<endl;
    }
    archivo<<"Hola que tal";

    archivo.close();
}

void Menu::menu() {
	long int ced;
	long int cedB;
	long int cedM;
	IngresoDatos ingdatos;
	Persona p;
	ListaDobleCircular l1;
	int opc = 0;
	do {
		system("cls");
		cout << "----------------------WEB PARKING----------------------" << '\n';
		cout << "--------------------------Menu-------------------------";
		cout << "\n1-Insertar Usuario. ";
		cout << "\n2-Modificar Datos. ";
		cout << "\n3-Buscar Usuario. ";
		cout << "\n4-Mostrar Usuarios. ";
		cout << "\n5-Eliminar Datos. ";
		cout << "\n6-Salir. ";
		cout << "\n";
		cout << "\nOpcion  ";
		cin >> opc;
		switch (opc) {
		case 1:
			cout << "Insertar Usuario" << '\n';
			p = ingdatos.ingresarPersona();
			l1.insertar(p);
			cout<<"              |-- Usuario creado --|"<<endl;
			_getch();
			break;
		case 2:
			cout << "Modificar Datos" << '\n';
			cout<<"Ingrese la cedula: "<<endl;
			cin>>cedM;
			l1.modificar(cedM);
			_getch();
			break;
		case 3:
			cout << "Buscar Usuario" << '\n';
			cout<<"Ingrese la cedula: "<<endl;
			cin>>cedB;
			l1.buscarNodo(cedB);
			_getch();
			break;
		case 4:
			cout << "Mostrar Usuarios" << '\n';
			l1.imprimir();
			_getch();
			break;
		case 5:
			cout << "Eliminar Datos" << '\n';
			cout<<"Ingrese la cedula: "<<endl;
			cin>>ced;
			l1.eliminarNodo(ced);
			cout<<"              |-- Usuario eliminado --|"<<endl;
			_getch();
			break;
		case 6:
			cout << "        |-- Gracias por usar el programa --|" << '\n';
			//crearArchivo();
			exit(0);
			break;
		default:
			cout << "opcion no valida" << '\n';
		}
	} while (opc != 6);

	return;
}


