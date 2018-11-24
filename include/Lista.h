#ifndef LISTA_H
#define LISTA_H
#include "Figura.h"
#include "Punto.h"
#include "Segmento.h"

using  namespace std;

template<typename t>
class Lista{
    public:
        Lista();
        ~Lista();
        int longitud() const;
        bool vacia() const;
        void agregar(const int & posicion, const t & elemento);
        void agregarp(const t & elemento);
        void agregarf(const t & elemento);
        bool pertenece(const t & elemento) const;
        void eliminarPos(const int & posicion);
        void eliminarElem(const t & elemento);
        const t & getElem(const int & posicion) const;
    private:
        struct nodo{
            t  dato;
            nodo * siguiente;
        };
        nodo * lista;
        nodo * punterofinal;
        nodo * cursor;
        int cantidadelementos;
        void vaciar();
};

#endif // LISTA_H
