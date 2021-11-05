/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber Sobrecarga de Operadores
Autores: Ariel Pozo
Fecha de creacion: 04/11/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>

using namespace std;

struct Centro
{
	double x, y;
};

Centro operator*(const Centro &p, const Centro &q);

int main()
{
	Centro b, h, t;
		b.x = 5.3;
		b.y = -2, 4;
		h.x = 3, 6;
		h.y = 4, 7;

		t = b * h;
		cout << "El centro es: " << t.x << "," << t.y << endl;

		return 0;




}
Centro operator*(const Centro &p, const Centro &q)
{
	Centro t;
	t.x = p.x * q.x;
	t.y = p.y * q.y;
	return t;


}
