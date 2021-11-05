#ifndef CIRCULO_H
#define CIRCULO_H

template <class H>
class Circulo
{
    public:
        Circulo(H n);
        void setRadio(H n);
        H getRadio();
    protected:

    private:
        H radio;
};

#endif // CIRCULO_H
