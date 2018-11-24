#include "Cuadrado.h"

Cuadrado::Cuadrado(){
   lado=1;
}

Cuadrado::Cuadrado(Punto pos, double lado, string color){
    setTipo("cuadrado");
    setColor(color);
    setPosicion(pos);
    this->lado=lado;
}

void Cuadrado::setLado(double lado){
    this->lado=lado;
}

double Cuadrado::getLado(){
    return lado;
}

double Cuadrado::getArea(){
    return lado*lado;
}

double Cuadrado::getPerimetro(){
    return 4*lado;
}
void Cuadrado::mostrar()
{
    cout <<" tipo= "<<getTipo()<<" Posicion= "<<getPosicion()<<"Color= "<<getColor()<<" lado= "<<this->lado<<endl;
}

