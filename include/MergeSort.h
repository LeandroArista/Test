#ifndef MERGESORT_H
#define MERGESORT_H
#include<stdlib.h>
#include<stdio.h>
#include<iostream>

template <typename t>
class MergeSort
{
    public:
        MergeSort();
        void ordenar(t arreglo[],int longitud);
    protected:
        void mergeSort(t  arr[], int l, int r);
        void combinar(t  arr[], int l, int m, int r);
    private:
        int tiempo;

};

#endif // MERGESORT_H
