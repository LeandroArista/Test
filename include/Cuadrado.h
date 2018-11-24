#ifndef CUADRADO_H
#define CUADRADO_H
#include "Figura.h"

class Cuadrado : public Figura{
    public:
        Cuadrado();
        Cuadrado(Punto pos, double lado, string color);
        void setLado(double lado);
        double getLado();
        double getArea();
        double getPerimetro();
        void mostrar();
    private:
        double lado;
};

#endif // CUADRADO_H
