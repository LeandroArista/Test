#ifndef QUICKSORT_H
#define QUICKSORT_H

template<typename t>
class Quicksort
{
    public:
        Quicksort();
        void ordenar(t arreglo[],int longitud);
    protected:
        void quick_sort(t  arr[], int l, int r);
        int dividir(t  arr[], int l,  int r);
    private:

};


#endif // QUICKSORT_H
