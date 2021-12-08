#include "../include/IngresoDatos.h"
#include "../include/Validaciones.h"
#include "../include/Generador.h"
#include <iostream>
#include <cstdlib>
#define dim3 10

Persona IngresoDatos::ingresarPersona() {
	Persona p1;
	Generador g1;
	Validaciones validarn;
	string correo;
	//INGRESO DE NOMBRE
	char daton1[20];
	char* t1 = validarn.ingreson1("|- Ingrese su primer nombre: ");
	strcpy_s(daton1, t1);
	p1.setNombre1(daton1);

	char daton2[20];
	char* n2 = validarn.ingreson2("\n|- Ingrese su segundo nombre: ");
	strcpy_s(daton2, n2);
	p1.setNombre2(daton2);

	char datoa[20];
	char* a1 = validarn.ingresoap1("\n|- Ingrese su primer apellido: ");
	strcpy_s(datoa, a1);
	p1.setApellido1(datoa);

	char datoa2[20];
	char* a2 = validarn.ingresoap2("\n|- Ingrese su segundo apellido: ");
	strcpy_s(datoa2, a2);
	p1.setApellido2(datoa2);

	//INGRESO DE CORREO
	correo=g1.crearCorreo(p1.getApellido1(), p1.getNombre1(), p1.getNombre2());
	cout<<"\nCorreo creado: "<<correo<<endl;
	//cout<<"\nSu correo personal sera: "<<correo<<endl;
	p1.setCorreo(correo);
	//INGRESO VEHICULO
	p1.setVehiculo(ingresarVehiculo());
	//INGRESO FECHA NACIMIENTO
	p1.setFec_naci(ingresarfecha_de_nacimiento());
	//INGRESO CEDULA
	p1.setCedula(ingresarCedula());
	return p1;
}

Vehiculos IngresoDatos::ingresarVehiculo() {
	Vehiculos v;
	Validaciones validar;
	char datoplaca[10];
	char* pla = validar.ingresoplaca("|- Ingrese la placa de su vehiculo: ");
	strcpy_s(datoplaca, pla);
	v.setPlaca(datoplaca);

	int opcC;
	string a1 = "Blanco";
	string a2 = "Negro";
	string a3 = "Rojo";
	string a4 = "Azul";
	string a5 = "Gris";
	string a6 = "Otro color";
	cout<<"\n                 |--- Color ---|"<<endl;
	cout<<"1. Blanco"<<endl;
	cout<<"2. Negro"<<endl;
	cout<<"3. Rojo"<<endl;
	cout<<"4. Azul"<<endl;
	cout<<"5. Gris"<<endl;
	cout<<"6. Otro color"<<endl;
	cout<<"Seleccione la marca: "<<endl;
	cin>>opcC;
	while (opcC<0 || opcC>=7)
    {
        printf("             **Error**\n");
        printf("Ingrese de nuevo: ");
        cin>>opcC;
    }
    switch(opcC){
    case 1:
        v.setColor(a1);
        break;
    case 2:
        v.setColor(a2);
        break;
    case 3:
        v.setColor(a3);
        break;
    case 4:
        v.setColor(a4);
        break;
    case 5:
        v.setColor(a5);
        break;
    case 6:
        v.setColor(a6);
        break;
    }



	int opc;
	string c1 = "Chevrolet";
	string c2 = "Hyundai";
	string c3 = "Ford";
	string c4 = "Mazda";
	string c5 = "Mercedes-Benz";
	string c6 = "Otra marca";
	cout<<"\n                 |--- Marca ---|"<<endl;
	cout<<"1. Chevrolet"<<endl;
	cout<<"2. Hyundai"<<endl;
	cout<<"3. Ford"<<endl;
	cout<<"4. Mazda"<<endl;
	cout<<"5. Mercedes-benz"<<endl;
	cout<<"6. Otra marca"<<endl;
	cout<<"Seleccione la marca: "<<endl;
	cin>>opc;
	while (opc<0 || opc>=7)
    {
        printf("             **Error**\n");
        printf("Ingrese de nuevo: ");
        cin>>opc;
    }
    switch(opc){
    case 1:
        v.setMarca(c1);
        break;
    case 2:
        v.setMarca(c2);
        break;
    case 3:
        v.setMarca(c3);
        break;
    case 4:
        v.setMarca(c4);
        break;
    case 5:
        v.setMarca(c5);
        break;
    case 6:
        v.setMarca(c6);
        break;
    }

	char datokilometraje[10];
	char* kil = validar.ingresokilometraje("\n|- Ingrese el kilometraje que posee su vehiculo: ");
	strcpy_s(datokilometraje, kil);
	v.setKilometraje(datokilometraje);
	return v;
}

Cedula IngresoDatos::ingresarCedula() {
	Cedula c;
	Validaciones validar;
	long int num;
	int B[dim3];
	int y=0;
	cout<<"\n|- Ingrese su cedula: "<<endl;
	cin>>num;
    validar.separar_cifras(num, B);
    y=validar.validar(num, B);
    while((y!=1)){
        cout<<"             **El numero de cedula no es valido**"<<endl;
        cout<<"|- Ingrese su cedula: "<<endl;
        cin>>num;
        validar.separar_cifras(num, B);
        y=validar.validar(num, B);
    }
	c.setNumCedula(num);
	return c;
}

Fecha_de_nacimiento IngresoDatos::ingresarfecha_de_nacimiento() {
	Fecha_de_nacimiento fdn;
	Validaciones validar;

	char datodia[3];
	int diaEnt=0;
	char* d = validar.ingresodia("\n|- Ingrese el dia de su nacimiento: ");
	strcpy_s(datodia, d);
	diaEnt = atoi(datodia);
	while(diaEnt<=0 || diaEnt>30){
        cout<<"\n                   ** Error, ingrese de nuevo **  ";
        char* d = validar.ingresodia("\n|- Ingrese el dia de su nacimiento: ");
        strcpy_s(datodia, d);
        diaEnt = atoi(datodia);
	}
	fdn.setDia(datodia);

	char datomes[3];
	int mesEnt=0;
	char* m = validar.ingresomes("\n|- Ingrese el mes de su nacimiento: ");
	strcpy_s(datomes, m);
	mesEnt = atoi(datomes);
	while(mesEnt<=0 || mesEnt>12){
        cout<<"\n                   ** Error, ingrese de nuevo **  ";
        char* m = validar.ingresomes("\n|- Ingrese el mes de su nacimiento: ");
        strcpy_s(datomes, m);
        mesEnt = atoi(datomes);
	}
	fdn.setMes(datomes);

	char datoanio[5];
	int anioEnt=0;
	char* a = validar.ingresoanio("\n|- Ingrese el año de su nacimiento: ");
	strcpy_s(datoanio,a);
	anioEnt = atoi(datoanio);
	while(anioEnt<1921 || anioEnt>2003){
        cout<<"\n           ** Error, no se encuentra en el rango de edad permitido **  ";
        char* a = validar.ingresoanio("\n|- Ingrese el año de su nacimiento: ");
        strcpy_s(datoanio,a);
        anioEnt = atoi(datoanio);
	}
	fdn.setAnio(datoanio);
	return fdn;
}
