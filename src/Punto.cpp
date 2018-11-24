#include "Punto.h"
#include <iostream>
using namespace std;
Punto::Punto() {
    this->x = 0;
    this->y = 0;
}

Punto::Punto(double x, double y) {
    this->x = x;
    this->y = y;
}

double Punto::coordX() const {
    return this->x;
}

double Punto::coordY() const {
    return this->y;
}

void Punto::setcoordX(double x){
    this->x = x;
}
void Punto::setcoordY(double y){
    this->y=y;
}

double Punto::distancia(const Punto & otroPunto) const {
    return sqrt(pow(x-otroPunto.x, 2.0) + pow(y-otroPunto.y, 2.0));
}

void Punto::trasladar(double x, double y) {
    this->x += x;
    this->y += y;
}

bool Punto::operator==(const Punto & otroPunto) const {
    return (x == otroPunto.x) && (y == otroPunto.y);
}

Punto & Punto::operator=(const Punto & otroPunto) {
    this->x = otroPunto.x;
    this->y = otroPunto.y;
    return *this;
}

ostream & operator << (ostream &o,const Punto &p)
{
    o << "(X,Y)= (" << p.x << ", " << p.y << ") ";
    return o;
}
