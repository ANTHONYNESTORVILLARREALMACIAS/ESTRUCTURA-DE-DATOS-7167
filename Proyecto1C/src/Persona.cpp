#include "../include/Persona.h"

Persona::Persona(string n1, string n2, string ap1, string ap2, Vehiculos veh, Fecha_de_nacimiento fnac, Cedula ced, string cor)
{
	this->nombre1 = n1;
	this->nombre2 = n2;
	this->apellido1 = ap1;
	this->apellido2 = ap2;
	this->correo = cor;
	this->vehiculo = veh;
	this->fec_naci = fnac;
	this->cedula = ced;
}

string Persona::getNombre1(void)
{
   return nombre1;
}

void Persona::setNombre1(string newNombre1)
{
   this->nombre1 = newNombre1;
}

string Persona::getNombre2(void)
{
   return nombre2;
}

void Persona::setNombre2(string newNombre2)
{
   this->nombre2 = newNombre2;
}

string Persona::getApellido1(void)
{
   return apellido1;
}

void Persona::setApellido1(string newApellido1)
{
   this->apellido1 = newApellido1;
}

string Persona::getApellido2(void)
{
   return apellido2;
}


void Persona::setApellido2(string newApellido2)
{
   this->apellido2 = newApellido2;
}

Vehiculos Persona::getVehiculo(void)
{
   return vehiculo;
}

void Persona::setVehiculo(Vehiculos newVehiculo)
{
   this->vehiculo = newVehiculo;
}

Fecha_de_nacimiento Persona::getFec_naci(void)
{
   return fec_naci;
}

void Persona::setFec_naci(Fecha_de_nacimiento newFec_naci)
{
   this->fec_naci = newFec_naci;
}

Cedula Persona::getCedula(void)
{
   return cedula;
}

void Persona::setCedula(Cedula newCedula)
{
   this->cedula = newCedula;
}

string Persona::getCorreo()
{
   return correo;
}

void Persona::setCorreo(string newCorreo)
{
   this->correo = newCorreo;
}

void Persona::mostrarPersona() {

	cout<<"============================================================================="<<endl;
	cout << "-| El nombre es: " << this->nombre1 << " " << this->nombre2 << " " << this->apellido1 << " " << this->apellido2 << endl;
	cout << "-| Su actual correo es: " << this->correo << endl;
	cout << "-| Su cedula es: " << this->getCedula().getNumCedula() << endl;
	cout << "-| Su fecha de nacimiento es: " << this->fec_naci.getDia()<<"-"<< this->fec_naci.getMes()<<"-"<< this->fec_naci.getAnio() << endl;
	cout << "-| El color de su vehiculo es: " << this->vehiculo.getColor() << endl;
	cout << "-| La placa de su vehiculo es: " << this->vehiculo.getPlaca() << endl;
	cout << "-| La marca de su vehiculo es: " << this->vehiculo.getMarca() << endl;
	cout << "-| El kilometraje de su vehiculo es: " << this->vehiculo.getKilometraje() << endl;
	cout<<"============================================================================="<<endl;
}
