/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber_Sobrecarga_Operadores
Autores:  Espinosa Luis
Fecha de creacion: 04/11/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include "pch.h"
#include "CppUnitTest.h"
#include "../DeberSobrecargaOperadores/persona.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebaUnitariaSobrecarga
{
	TEST_CLASS(PruebaUnitariaSobrecarga)
	{
	public:
		
		TEST_METHOD(sobrecargaTestMethod)
		{
			Persona per1 = Persona("Andres", "Rosero", "1004780561", 22, 550.25f);
			Persona per2;
			per2.setNombre("Maria");
			per2.setApellido("Paredes");
			per2.setCedula("1234567891");
			per2.setEdad(44);
			per2.setIngresos(435.22f);


			cout << per1;
			cout << per2;
		}
	};
}
