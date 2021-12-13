#ifndef VEHICULOS_H
#define VEHICULOS_H
#include <iostream>
#include <string>

using namespace std;

class Vehiculos
{
public:
	Vehiculos(string);
	Vehiculos() = default;
	string getPlaca(void);
	void setPlaca(string newPlaca);
	string getColor(void);
	void setColor(string newColor);
	string getMarca(void);
	void setMarca(string newMarca);
	string getKilometraje(void);
	void setKilometraje(string newKilometraje);

protected:
private:
	string placa;
	string color;
	string marca;
	string kilometraje;
};

#endif // VEHICULOS_H
