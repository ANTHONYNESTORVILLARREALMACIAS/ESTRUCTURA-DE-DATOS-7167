#ifndef NODO_H
#define NODO_H


class Nodo
{
    public:
        Nodo(int , Nodo *sig);
        int getValor();
        void setValor(int);
        Nodo *getSiguiente();
        void setSiguiente(Nodo *);
    protected:

    private:
        int valor;
        Nodo *siguiente;
};

#endif // NODO_H
