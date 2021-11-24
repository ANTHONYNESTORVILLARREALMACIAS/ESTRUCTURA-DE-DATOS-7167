/***********************************************************************
 * Module:  Fecha_de_nacimiento.h
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:47:33
 * Purpose: Declaration of the class Fecha_de_nacimiento
 ***********************************************************************/

#if !defined(__PROYECTO2_Fecha_de_nacimiento_h)
#define __PROYECTO2_Fecha_de_nacimiento_h

class Persona;

class Fecha_de_nacimiento
{
public:
   char getDia(void);
   void setDia(char newDia);
   char getMes(void);
   void setMes(char newMes);
   char getAno(void);
   void setAno(char newAno);

   Persona* persona;

protected:
private:
   char dia;
   char mes;
   char ano;


};

#endif