#ifndef FECHA_DE_NACIMIENTO_H
#define FECHA_DE_NACIMIENTO_H
#include <iostream>
#include <string>

using namespace std;

class Persona;

class Fecha_de_nacimiento
{
public:
    string getDia(void);
    void setDia(string newDia);
    string getMes(void);
    void setMes(string newMes);
    string getAnio(void);
    void setAnio(string newAnio);
    //Persona* persona;

protected:
private:
	string dia;
	string mes;
	string anio;


};

#endif // FECHA_DE_NACIMIENTO_H
