#ifndef CUADRADO_H
#define CUADRADO_H

template <class H>
class Cuadrado
{
    public:
        Cuadrado(H n);
        void setLado(H n);
        H getLado();

    protected:

    private:
        H lado;
};

#endif // CUADRADO_H
