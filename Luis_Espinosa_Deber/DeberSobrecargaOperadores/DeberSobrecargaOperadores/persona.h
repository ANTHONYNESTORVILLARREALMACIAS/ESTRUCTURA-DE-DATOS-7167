/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Sobrecarga_Operadores
Autores:  Espinosa Luis
Fecha de creacion: 04/11/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
using namespace std;

class Persona{
private:
	string nombre, apellido, cedula;
	double edad = 0;
	float ingresos = 0.0f;

public:
	Persona();
	Persona(const string &nom,const string &ape, const string &ced, double ed, float ing );

	void setNombre(const string& n);
	string getNombre();
	void setApellido(const string& a);
	string getApellido();
	void setCedula(const string& c);
	string getCedula();
	void setEdad(double e);
	double getEdad();
	void setIngresos(float i);
	float getIngresos();

	friend ostream& operator << (ostream& out, const Persona& p) {
		out << "Nombre: " << p.nombre << endl;
		out << "Apellido: " << p.apellido << endl;
		out << "Cedula: " << p.cedula << endl;
		out << "Edad: " << p.edad << endl;
		out << "Ingresos: " << p.ingresos << endl;

		return out;
	}
};
