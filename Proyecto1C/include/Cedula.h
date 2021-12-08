#ifndef CEDULA_H
#define CEDULA_H
#include <iostream>
#include <string>

using namespace std;

class Cedula
{
public:
	Cedula(long int);
	Cedula() = default;
	long int getNumCedula(void);
	void setNumCedula(long int newNumCedula);
protected:
private:
	long int numCedula;
};

#endif // CEDULA_H
