/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Deber Sobrecarga de Operadores
Autores: Anthony Villarreal
Fecha de creacion: 04/11/2021
Fecha de modificacion: 04/11/2021
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>

using namespace std;

struct Punto
{
    double x, y;
};

Punto operator+(const Punto& p, const Punto& q);
Punto operator-(const Punto& p, const Punto& q);
Punto operator*(const Punto& p, const Punto& q);
Punto operator/(const Punto& p, const Punto& q);

int main()
{
    Punto a, b, n;
    a.x = 1.0;
    a.y = 2.0;
    b.x = 3.0;
    b.y = 4.0;
    n = a + b;
    cout << n.x << ", " << n.y << endl;
    n = a - b;
    cout << n.x << ", " << n.y << endl;
    n = a * b;
    cout << n.x << ", " << n.y << endl;
    n = a / b;
    cout << n.x << ", " << n.y << endl;
    return 0;
}

Punto operator+(const Punto& p, const Punto& q)
{
    Punto n;
    n.x = p.x + q.x;
    n.y = p.y + q.y;
    return n;
}

Punto operator-(const Punto& p, const Punto& q)
{
    Punto n;
    n.x = p.x - q.x;
    n.y = p.y - q.y;
    return n;
}

Punto operator*(const Punto& p, const Punto& q)
{
    Punto n;
    n.x = p.x * q.x;
    n.y = p.y * q.y;
    return n;
}

Punto operator/(const Punto& p, const Punto& q)
{
    Punto n;
    n.x = p.x / q.x;
    n.y = p.y / q.y;
    return n;
}