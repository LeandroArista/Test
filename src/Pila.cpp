#include "Pila.h"

template<typename t>
Pila<t>::Pila(){

}

template<typename t>
void Pila<t>::AgregarPila(const t & elemento){
    pila.agregarp(elemento);
}

template<typename t>
bool Pila<t>::Vacia(){
    return pila.vacia();
}

template<typename t>
const t & Pila<t>::Tope(){
    if(!pila.vacia()){
        return pila.getElem(1);
    }
}

template<typename t>
void Pila<t>::eliminarPila(){
    pila.eliminarPos(1);
}

template<typename t>
Pila<t>::~Pila(){
    //dtor
}
