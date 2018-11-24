#include "Fila.h"

template<typename t>
Fila<t>::Fila(){
    //ctor
}

template<typename t>
void Fila<t>::agregarFila(const t & elemento){
    fila.agregarf(elemento);
}

template<typename t>
bool Fila<t>::Vacia(){
    return fila.vacia();
}

template<typename t>
const t & Fila<t>::recuperarE(){
    if(!fila.vacia())
        return fila.getElem(1);
}

template<typename t>
void Fila<t>::eliminarE(){
    fila.eliminarPos(1);
}

template<typename t>
Fila<t>::~Fila(){
    //dtor
}
