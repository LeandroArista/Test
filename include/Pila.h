#ifndef PILA_H
#define PILA_H
#include "Lista.h"

template<typename t>
class Pila{
    public:
        Pila();
        void AgregarPila(const t & elemento);
        bool Vacia();
        const t & Tope();
        void eliminarPila();
        virtual ~Pila();
    private:
        Lista<t> pila;
};

#endif // PILA_H
