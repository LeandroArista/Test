#include "Heap.h"
#include <algorithm>
#include <iostream>

using namespace std;


template<typename t>
Heap<t>::Heap(unsigned int capacidad){
    this->capacidad=capacidad++;
    arreglo=new t[this->capacidad];
    cantidad=0;
}

template<typename t>
bool Heap<t>::agregar(const t & elemento){
    if (cantidad<capacidad){
        cantidad++;
        arreglo[cantidad]=elemento;

        return true;
    }
 return false;
}

template <typename t>
void Heap<t>::ordenar (){
    heapSort();
}

template<typename t>
void Heap<t>::mostrar(){
    for (int i=1; i<=cantidad;i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl;
}


template<typename t>
void Heap<t>::heapify(int n, int i){
    if (2*i+1<=capacidad){
    int largest = i;
    int l = 2*i ;
    int r = 2*i + 1;

    if (l < n && arreglo[l] > arreglo[i]){ ///compara que no se salga de rango y compara que si el hijo izq es mas grande que el padre
        largest = l;
    }

    if (r < n && arreglo[r] > arreglo[largest]) ///hijo der es mas grande que el item mayor
        largest = r;

    if (largest != i){ /// si se movio la raiz
        std::swap(arreglo[i], arreglo[largest]); ///intercambio la raiz por el maximo
        heapify(n, largest); ///voy a modificar /// el nodo que modifique y veo si lo puedo reemplazar por algun hijo
    }
    }
}

template<typename t>
void Heap<t>::heapSort(){
    int n=cantidad;
    for (int i = n / 2 - 1; i >= 1; i--) ///
        heapify( n, i);
    for (int i=n; i>=1; i--){
        std::swap(arreglo[1], arreglo[i]);
        heapify(i, 1);
    }
}
template<typename t>
const t & Heap<t>::elemento()const{
    if(cantidad>0){
        return arreglo[0];
    }
    return 0;
 }
template<typename t>
bool Heap<t>::eliminar(){
    int i,k,r;
    r=arreglo[1];
    arreglo[1]=arreglo[cantidad];
    cantidad--;
    i=1;
    heapSort();
     if (cantidad!=0)
        return true;
    return false;
}
template <typename t>
bool Heap<t>::esvacio()const{
if(cantidad>0){
    return false;
}
return true;
}

template class Heap<int>;
