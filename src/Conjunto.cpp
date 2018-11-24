#include "Conjunto.h"

template <typename t>
Conjunto<t>::Conjunto(){
    //ctor
}

template <typename t>
void Conjunto<t>::agregarC(const t & elemento){
    conjunto.agregarf(elemento);
}

template<typename t>
bool Conjunto<t>::pertenece(const t & elemento)const{
    return conjunto.pertenece(elemento);
}

template<typename t>
const t & Conjunto<t>::recuperarE(const int & pos){
    return conjunto.getElem(pos);
}

template<typename t>
bool Conjunto<t>::Vacio(){
    return conjunto.vacia();
}

template<typename t>
int Conjunto<t>::longitud(){
    return conjunto.longitud();
}

template<typename t>
void Conjunto<t>::Union(const Conjunto & otro){
    int tam=otro.conjunto.longitud();
    for(int i=1;i<=tam;i++){
        const t & dato=otro.conjunto.getElem(i);
        if(!conjunto.pertenece(dato)){
            conjunto.agregarp(dato);
        }
    }
}

template<typename t>
void Conjunto<t>::Interseccion(const Conjunto & otro){
    int tam=conjunto.longitud();
    for(int i=1;i<=tam;i++){
        const t & dato=conjunto.getElem(i);
        if(!otro.pertenece(dato)){
            conjunto.eliminarElem(dato);
        }
    }
}

template<typename t>
void Conjunto<t>::eliminarElem(const t & elemento){
    conjunto.eliminarElem(elemento);
}


template class Conjunto<int>;
//template class Conjunto<char>;
//template class Conjunto<float>;
//template class Conjunto<string>;
//template class Conjunto<Figura2D>;
//template class Conjunto<Punto>;
//template class Conjunto<Segmento>;
