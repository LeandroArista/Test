#ifndef CIRCULO_H
#define CIRCULO_H
#include"Punto.h"
#include"Figura.h"
#define pi 3.14159265358979323846

using namespace std;

class Circulo : public Figura{
    public:
        Circulo();
        Circulo(Punto pos,double Radio,string color);
        void setRadio(double Radio);
        double getRadio();
        double getArea();
        double getPerimetro();
        void mostrar();
    private:
        double Radio;
};

#endif // CIRCULO_H
