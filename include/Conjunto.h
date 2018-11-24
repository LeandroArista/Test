#ifndef CONJUNTO_H
#define CONJUNTO_H
#include "Lista.h"

template <typename t>
class Conjunto{
    public:
        Conjunto();
        void agregarC(const t & elemento);
        bool pertenece(const t & elemento)const;
        bool Vacio();
        const t & recuperarE(const int & pos);
        int longitud();
        void Union(const Conjunto & otro);
        void Interseccion(const Conjunto & otro);
        void eliminarElem(const t & elemento);
    private:
        Lista<t> conjunto;
};

#endif // CONJUNTO_H
