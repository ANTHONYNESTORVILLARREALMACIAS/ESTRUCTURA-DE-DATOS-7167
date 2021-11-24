/***********************************************************************
 * Module:  Cedula.h
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:00:12
 * Purpose: Declaration of the class Cedula
 ***********************************************************************/

#if !defined(__PROYECTO2_Cedula_h)
#define __PROYECTO2_Cedula_h

class Persona;

class Cedula
{
public:
   char getNumCedula(void);
   void setNumCedula(char newNumCedula);
   char validarCedula(void);

   Persona* persona;

protected:
private:
   char numCedula;


};

#endif