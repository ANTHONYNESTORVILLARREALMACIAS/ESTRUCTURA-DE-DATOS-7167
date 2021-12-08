/***********************************************************************
 * Module:  Fecha_de_nacimiento.cpp
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:47:33
 * Purpose: Implementation of the class Fecha_de_nacimiento
 ***********************************************************************/

#include "Persona.h"
#include "Fecha_de_nacimiento.h"

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::getDia()
// Purpose:    Implementation of Fecha_de_nacimiento::getDia()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Fecha_de_nacimiento::getDia(void)
{
   return dia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::setDia(char newDia)
// Purpose:    Implementation of Fecha_de_nacimiento::setDia()
// Parameters:
// - newDia
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha_de_nacimiento::setDia(char newDia)
{
   dia = newDia;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::getMes()
// Purpose:    Implementation of Fecha_de_nacimiento::getMes()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Fecha_de_nacimiento::getMes(void)
{
   return mes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::setMes(char newMes)
// Purpose:    Implementation of Fecha_de_nacimiento::setMes()
// Parameters:
// - newMes
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha_de_nacimiento::setMes(char newMes)
{
   mes = newMes;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::getAno()
// Purpose:    Implementation of Fecha_de_nacimiento::getAno()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Fecha_de_nacimiento::getAno(void)
{
   return ano;
}

////////////////////////////////////////////////////////////////////////
// Name:       Fecha_de_nacimiento::setAno(char newAno)
// Purpose:    Implementation of Fecha_de_nacimiento::setAno()
// Parameters:
// - newAno
// Return:     void
////////////////////////////////////////////////////////////////////////

void Fecha_de_nacimiento::setAno(char newAno)
{
   ano = newAno;
}