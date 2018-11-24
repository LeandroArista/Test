#include "Quicksort.h"
#include <stdlib.h>
using namespace std;

template <typename t>
Quicksort<t>::Quicksort(){

}

template <typename t>
void Quicksort<t>::ordenar (t arreglo[],int longitud){
    quick_sort(arreglo, 0, longitud - 1);
}

template<typename t>                    // Funci�n para dividir el array y hacer los intercambios
int Quicksort<t>::dividir(t  arr[], int l,  int r) {
    int izq;
    int der;
    int pivot;
    int aux;
    pivot = arr[l];
    izq = l;
    der = r;

    // Mientras no se cruzen los �ndices
    while (izq < der) {
        while (arr[der] > pivot) {
            der--;
        }

        while ((izq < der) && (arr[izq] <= pivot)) {
            izq++;
        }

        // Si todav�a no se cruzan los indices seguimos intercambiando
        if (izq < der) {
            aux = arr[izq];
            arr[izq] = arr[der];
            arr[der] = aux;
        }
    }

    // Los �ndices ya se han cruzado, ponemos el pivot en el lugar que le corresponde
    aux = arr[der];
    arr[der] = arr[l];
    arr[l] = aux;

    // La nueva posici�n del pivot
    return der;
}

template<typename t>            // Funci�n recursiva para hacer el ordenamiento
void Quicksort<t>::quick_sort(t  arr[], int l, int r)
{
    int pivot;

    if (l < r) {
        pivot = dividir(arr,l,r);

        // Ordeno la lista de los menores
        quick_sort(arr,l, pivot - 1);

        // Ordeno la lista de los mayores
        quick_sort(arr, pivot + 1,r);
    }
}


template class Quicksort<int>;
