#include "Circulo.h"
#include <string>
#include <iostream>

using namespace std;
Circulo::Circulo(){
    Radio=1;
}

Circulo:: Circulo(Punto pos,double Radio,string color){
    setTipo("circulo");
    setColor(color);
    setPosicion(pos);
    this->Radio=Radio;
}

void Circulo::setRadio(double Radio){
    this->Radio=Radio;
}

double Circulo::getRadio(){
    return Radio;
}

double Circulo::getArea(){
    return pi*Radio*Radio;
}

double Circulo::getPerimetro(){
    return 2*pi*Radio;
}

void Circulo::mostrar(){
    cout<<" tipo= "<<this->tipo<<" Posicion= "<<this->pos<<" Color= "<<this->color<<" radio= "<<this->Radio<<endl;
}
