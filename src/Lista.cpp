#include "Lista.h"
#include <cassert>

template <typename t>
Lista<t>::Lista(){
    lista=NULL;
    punterofinal=NULL;
    cursor=NULL;
    cantidadelementos=0;
}

template<typename t>
Lista<t>::~Lista(){
    vaciar();
    delete lista;
}

template<typename t>
void Lista<t>::vaciar(){
    if (!vacia()){
        nodo*cursor;
        while (!vacia()){
            cursor=lista->siguiente;
            delete lista;
            lista=cursor;
        }
    }
}

template<typename t>
int Lista<t>::longitud() const{
    return cantidadelementos;
}

template<typename t>
bool Lista<t>::vacia() const{
    return (lista==NULL);
}

template<typename t>
void Lista<t>::agregar(const int & posicion, const t & elemento){
    if (posicion>0 && posicion<=longitud()+1){
        nodo * nodoagregar=new nodo;
        nodoagregar->dato=elemento;
        nodoagregar->siguiente=NULL;
        if ( vacia() || posicion==1){
            nodoagregar->siguiente=lista;
            lista=nodoagregar;
            if (lista->siguiente==NULL){
                punterofinal=lista;
            }
        }
        else{
            if (posicion==longitud()+1){
                punterofinal->siguiente=nodoagregar;
                punterofinal=nodoagregar;

            }
            else{
                cursor=lista;
                int posicionactual=1;
                while(posicionactual<(posicion-1)){
                    cursor=cursor->siguiente;
                    posicionactual++;
                }
                nodoagregar->siguiente=cursor->siguiente;
                cursor->siguiente=nodoagregar;
            }
        }
        cantidadelementos++;
    }
}

template<typename t>
void Lista<t>::agregarp( const t & elemento){
    agregar(1, elemento);
}

template<typename t>
void Lista<t>::agregarf( const t & elemento){
    agregar(cantidadelementos+1, elemento);
}

template<typename t>
bool Lista<t>::pertenece(const t & elemento) const{
    nodo * cursor = lista;
    while (cursor != NULL){
        if (cursor->dato==elemento){
            return true;
        }
        cursor=cursor->siguiente;
    }
    return false;
}

template<typename t>
void Lista<t>::eliminarPos(const int & posicion){
    if (lista!=NULL){
        if (posicion==1){
            nodo * aeliminar=lista;
            lista=lista->siguiente;
            aeliminar->siguiente=NULL;
            delete aeliminar;
            cantidadelementos--;
        }
        else{
            if (posicion<=longitud()){
                nodo * cursor = lista;
                for (int i=1; i<posicion; i++){
                    cursor=cursor->siguiente;
                }
                nodo * aeliminar=cursor->siguiente;
                cursor->siguiente=aeliminar->siguiente;
                aeliminar=NULL;
                delete aeliminar;
                cantidadelementos--;
            }
        }
    }
}

template<typename t>
const t & Lista<t>::getElem(const int & posicion) const{
//    cout<<"a:"<<posicion<<" b:"<<cantidadelementos<<endl;
    assert(posicion>0 && posicion<=cantidadelementos);
    int posicionactual=1;
    if (posicion == posicionactual){
        return lista->dato;
    }
    else{
        nodo*cursor=lista;
        if (posicion<cantidadelementos){
            while (posicion != posicionactual && cursor->siguiente != NULL){
                cursor=cursor->siguiente;
                posicionactual++;
            }
        }
        else{
            cursor=punterofinal;
        }
        return cursor->dato;
    }
}

template<typename t>
void Lista<t>::eliminarElem(const t & elemento){
    nodo * cursor = lista;
    nodo * anterior= cursor;
    while (cursor != NULL){
        if (cursor->dato==elemento){
            nodo * aeliminar=cursor;
            if (lista==cursor){
                lista=lista->siguiente;
            }else{
                anterior->siguiente=cursor->siguiente;
                if (cursor->siguiente==NULL)
                    punterofinal=anterior;
            }
            aeliminar->siguiente=NULL;
            delete aeliminar;
            cantidadelementos--;
        }else{
            anterior=cursor;
        }
        cursor=cursor->siguiente;
    }
    anterior= NULL;
    cursor=NULL;
    delete cursor;
    delete anterior;

}




template class Lista<int>;
template class Lista<char>;
template class Lista<float>;
template class Lista<string>;
template class Lista<Figura*>;
template class Lista<Punto>;
template class Lista<Segmento>;
