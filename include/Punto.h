#ifndef PUNTO_H
#define PUNTO_H
#include <cmath>
#include <iostream>

using namespace std;
class Punto{
    public:
        Punto();
        Punto(double x, double y);
        double coordX() const;
        double coordY() const;
        void setcoordX(double x);
        void setcoordY(double y);
        double distancia(const Punto & otroPunto) const;
        void trasladar(double x, double y);
        bool operator==(const Punto & otroPunto) const;
        Punto & operator=(const Punto & otroPunto);
        friend ostream & operator << (ostream &o,const Punto &p);
    private:
        double x;
        double y;
};

#endif // PUNTO_H
