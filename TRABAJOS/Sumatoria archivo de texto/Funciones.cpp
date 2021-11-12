#include "Funciones.h"
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

template<class... Args>
auto Funciones::sumar(Args... args){
	auto suma=0;
	for(auto &num:{args...}){
		suma+=num;
	}
	return suma;
}

void Funciones::leerArchivo(){
	string texto,linea;
	auto num=0;
	ifstream archivo;
	archivo.open("numeros.txt",ios::in);
	if(archivo.fail()){
		cout << "ERROR. No se pudo escribir en el archivo." << endl;
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout << "\n" << texto;
		num += stoi(texto);
	}
	cout << "\nla suma es: " << Funciones::sumar(num);
	cout << "\n";
	archivo.close();
}
