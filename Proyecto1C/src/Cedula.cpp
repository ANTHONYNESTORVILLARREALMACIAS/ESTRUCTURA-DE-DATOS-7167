#include "../include/Cedula.h"

Cedula::Cedula(long int c) {
	this->numCedula = c;
}

long int Cedula::getNumCedula(void)
{
   return numCedula;
}

void Cedula::setNumCedula(long int newNumCedula)
{
   this->numCedula = newNumCedula;
}

