#ifndef TRIANGULO_H
#define TRIANGULO_H

template <class H>
class Triangulo
{
    public:
        Triangulo(H a, H b);
        void setBase(H n);
        H getBase();
        void setAltura(H n);
        H getAltura();

    protected:

    private:
        H base;
        H altura;
};

#endif // TRIANGULO_H
