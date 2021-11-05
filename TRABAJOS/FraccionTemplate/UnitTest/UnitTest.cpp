#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            printf("|| TIPO ENTERO ||\n");
            Fraccion<int> enteros1(3, 5);
            Fraccion<int> enteros2(6, 9);
            Operacion<int> op;
            op.multiplicar(enteros1, enteros2);

            printf("|| TIPO FLOTANTE ||\n");
            Fraccion<float> flotante1(3, 5);
            Fraccion<float> flotante2(6, 9);
            Operacion<float> opfloat;
            opfloat.multiplicar(flotante1, flotante2);

            return 0;
		}
	};
}
