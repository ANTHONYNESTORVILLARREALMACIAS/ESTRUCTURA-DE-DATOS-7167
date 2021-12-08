#include "pch.h"
#include "CppUnitTest.h"
#include "/PROYECTOS/VISUAL STUDIO CODE PROJECTS/Proyecto_Unidad_1/Proyecto_Unidad_1/Menu.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace PruebaUnitaria
{
	TEST_CLASS(PruebaUnitaria)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Menu men;
			men.menu();
		}
	};
}