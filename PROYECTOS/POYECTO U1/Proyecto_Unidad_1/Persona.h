/***********************************************************************
 * Module:  Persona.h
 * Author:  Anthony
 * Modified: jueves, 18 de noviembre de 2021 19:00:20
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__PROYECTO2_Persona_h)
#define __PROYECTO2_Persona_h

#include <Vehiculos.h>
#include <Fecha_de_nacimiento.h>
#include <Cedula.h>

class Persona
{
public:
   char getNombre1(void);
   void setNombre1(char newNombre1);
   char getNombre2(void);
   void setNombre2(char newNombre2);
   char getApellido1(void);
   void setApellido1(char newApellido1);
   char getApellido2(void);
   void setApellido2(char newApellido2);
   Vehiculos getVehiculo(void);
   void setVehiculo(Vehiculos newVehiculo);
   Fecha_de_nacimiento getFec_naci(void);
   void setFec_naci(Fecha_de_nacimiento newFec_naci);
   Cedula getCedula(void);
   void setCedula(Cedula newCedula);
   char getCorreo(void);
   void setCorreo(char newCorreo);
   Persona(char n1, char n2, char ap1, char ap2, Vehiculos veh, Fecha_de_nacimiento fnac, Cedula ced, char cor);
   ~Persona();

protected:
private:
   char nombre1;
   char nombre2;
   char apellido1;
   char apellido2;
   Vehiculos vehiculo;
   Fecha_de_nacimiento fec_naci;
   Cedula cedula;
   char correo;


};

#endif