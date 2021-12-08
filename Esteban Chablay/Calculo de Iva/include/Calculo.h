#ifndef CALCULO_H
#define CALCULO_H


class Calculo{
public:
    Calculo(float, float, float, int);
    Calculo();
    void setSubtotal(float);
    float getSubtotal();
    void setIva(float);
    float getIva();
    void setTotal(float);
    float getTotal();
    void setDescuento(int);
    int getDescuento();
private:
    float subtotal;
    float iva;
    float total;
    int descuento;
};

#endif // CALCULO_H
