#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
#include "Punto.h"

using namespace std;

class Figura{
    public:
        Figura();
        Figura(Punto pos,string tipo,string color);
        void setPosicion(Punto p);
        void setTipo(string tipo);
        void setColor(string color);
        string getTipo();
        string getColor();
        Punto getPosicion();
        bool operator==(const Figura & otro);
        ///Abstracto
        virtual double getArea(){return 0;};
        virtual double getPerimetro(){return 0;};
        virtual void mostrar()=0;
    protected:
        string tipo;
        string color;
        Punto pos;
};

#endif // FIGURA2D_H
