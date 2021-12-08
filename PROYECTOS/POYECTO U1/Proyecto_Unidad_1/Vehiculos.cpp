/***********************************************************************
 * Module:  Vehiculos.cpp
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:00:31
 * Purpose: Implementation of the class Vehiculos
 ***********************************************************************/

#include "Persona.h"
#include "Vehiculos.h"

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::getPlaca()
// Purpose:    Implementation of Vehiculos::getPlaca()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Vehiculos::getPlaca(void)
{
   return placa;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::setPlaca(char newPlaca)
// Purpose:    Implementation of Vehiculos::setPlaca()
// Parameters:
// - newPlaca
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vehiculos::setPlaca(char newPlaca)
{
   placa = newPlaca;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::getColor()
// Purpose:    Implementation of Vehiculos::getColor()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Vehiculos::getColor(void)
{
   return color;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::setColor(char newColor)
// Purpose:    Implementation of Vehiculos::setColor()
// Parameters:
// - newColor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vehiculos::setColor(char newColor)
{
   color = newColor;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::getMarca()
// Purpose:    Implementation of Vehiculos::getMarca()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Vehiculos::getMarca(void)
{
   return marca;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::setMarca(char newMarca)
// Purpose:    Implementation of Vehiculos::setMarca()
// Parameters:
// - newMarca
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vehiculos::setMarca(char newMarca)
{
   marca = newMarca;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::getKilometraje()
// Purpose:    Implementation of Vehiculos::getKilometraje()
// Return:     char
////////////////////////////////////////////////////////////////////////

char Vehiculos::getKilometraje(void)
{
   return kilometraje;
}

////////////////////////////////////////////////////////////////////////
// Name:       Vehiculos::setKilometraje(char newKilometraje)
// Purpose:    Implementation of Vehiculos::setKilometraje()
// Parameters:
// - newKilometraje
// Return:     void
////////////////////////////////////////////////////////////////////////

void Vehiculos::setKilometraje(char newKilometraje)
{
   kilometraje = newKilometraje;
}