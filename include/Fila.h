#ifndef FILA_H
#define FILA_H
#include"Lista.h"

template<typename t>
class Fila{
    public:
        Fila();
        void agregarFila(const t & elemento);
        bool Vacia();
        const t & recuperarE();
        void eliminarE();
        virtual ~Fila();
    private:
        Lista<t> fila;
};

#endif // FILA_H
