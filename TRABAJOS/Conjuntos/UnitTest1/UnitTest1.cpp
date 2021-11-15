#include "pch.h"
#include "CppUnitTest.h"
#include "../Conjuntos/Conjuntos.h"
#include "../Conjuntos/Procesos.h"
#include <iostream>
using namespace std;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            Conjunto c;
            Proceso p;
            int t1, t2, tr, opcion;

            cout << "Ingrese el tamanio del conjunto 1: ";
            cin >> t1;
            int* conj1 = (int*)malloc(t1 * sizeof(int));
            c.ingresar(conj1, t1);

            cout << "Ingrese el tamanio del conjunto 2: ";
            cin >> t2;
            int* conj2 = (int*)malloc(t2 * sizeof(int));
            c.ingresar(conj2, t2);

            tr = t1 + t2;
            int* conjr = (int*)malloc(tr * sizeof(int));
            cout << "\n";
            cout << "1. Union" << endl;
            cout << "2. Interseccion" << endl;
            cout << "Elija la operacion que desea realizar: "; cin >> opcion;
            cout << "\n";

            if (opcion == 1) {
                p.unir(conj1, conj2, conjr, tr, t1);
                p.ordenar(tr, conjr);
                tr = p.eliminar(tr, conjr);
                c.imprimir(conjr, tr);

            }
            else if (opcion == 2) {
                p.unir(conj1, conj2, conjr, tr, t1);
                p.ordenar(tr, conjr);
                tr = p.intersecar(tr, conjr);
                c.imprimir(conjr, tr);
            }
            else {
                cout << "Elija una opcion correcta: ";
            }


            cout << endl;

		}
	};
}
