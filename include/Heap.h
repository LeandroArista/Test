#ifndef HEAP_H
#define HEAP_H

template<typename t>
class Heap
{
    public:
        Heap(unsigned int capacidad);
        bool agregar(const t & elemento);
        const t & elemento()const;
        bool eliminar();
        bool esvacio()const;
        void mostrar();
        void ordenar();
    private:
        void heapify(int n, int i);
        void heapSort();

        t * arreglo;
        unsigned int cantidad,capacidad;
};

#endif // HEAP_H
