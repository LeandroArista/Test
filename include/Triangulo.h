#ifndef TRIANGULO_H
#define TRIANGULO_H
#include "Figura.h"


class Triangulo : public Figura{
    public:
        Triangulo();
        Triangulo(Punto p1,Punto p2,Punto p3,Punto pos,string color);
        void setP1(Punto p1);
        void setP2(Punto p2);
        void setP3(Punto p3);
        Punto getP1();
        Punto getP2();
        Punto getP3();
        double getArea();
        double getPerimetro();
        void mostrar ();
    private:
        Punto p1,p2,p3;
        double getSemiperimetro();
};

#endif // TRIANGULO_H
