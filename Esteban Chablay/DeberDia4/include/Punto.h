#ifndef PUNTO_H
#define PUNTO_H

template <class H>
class Punto
{
    public:
        Punto(H puntoX, H puntoY);
        void setPuntoX(H n);
        H getPuntoX();
        void setPuntoY(H n);
        H getPuntoY();
    protected:

    private:
        H puntoX;
        H puntoY;
};

#endif // PUNTO_H
