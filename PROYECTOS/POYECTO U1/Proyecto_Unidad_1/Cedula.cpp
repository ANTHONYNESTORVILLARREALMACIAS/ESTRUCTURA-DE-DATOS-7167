/***********************************************************************
 * Module:  Cedula.cpp
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:00:12
 * Purpose: Implementation of the class Cedula
 ***********************************************************************/

#include "Persona.h"
#include "Cedula.h"

////////////////////////////////////////////////////////////////////////
// Name:       Cedula::getNumCedula()
// Purpose:    Implementation of Cedula::getNumCedula()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Cedula::getNumCedula(void)
{
   return numCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cedula::setNumCedula(char newNumCedula)
// Purpose:    Implementation of Cedula::setNumCedula()
// Parameters:
// - newNumCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Cedula::setNumCedula(char newNumCedula)
{
   numCedula = newNumCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Cedula::validarCedula()
// Purpose:    Implementation of Cedula::validarCedula()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Cedula::validarCedula(void)
{
   // TODO : implement
}