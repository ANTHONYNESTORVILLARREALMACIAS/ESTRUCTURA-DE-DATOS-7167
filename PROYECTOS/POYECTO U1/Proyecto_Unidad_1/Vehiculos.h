/***********************************************************************
 * Module:  Vehiculos.h
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 18:00:31
 * Purpose: Declaration of the class Vehiculos
 ***********************************************************************/

#if !defined(__PROYECTO2_Vehiculos_h)
#define __PROYECTO2_Vehiculos_h

class Persona;

class Vehiculos
{
public:
   char getPlaca(void);
   void setPlaca(char newPlaca);
   char getColor(void);
   void setColor(char newColor);
   char getMarca(void);
   void setMarca(char newMarca);
   char getKilometraje(void);
   void setKilometraje(char newKilometraje);

   Persona* persona;

protected:
private:
   char placa;
   char color;
   char marca;
   char kilometraje;


};

#endif