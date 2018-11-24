#include "Triangulo.h"

Triangulo::Triangulo(){
    //ctor
}

Triangulo::Triangulo(Punto p1,Punto p2,Punto p3,Punto pos,string color){
    setTipo("triangulo");
    setColor(color);
    setPosicion(pos);
    this->p1=p1;
    this->p2=p2;
    this->p3=p3;
}

void Triangulo::setP1(Punto p1){
    this->p1=p1;
}

void Triangulo::setP2(Punto p2){
    this->p2=p2;
}

void Triangulo::setP3(Punto p3){
    this->p3=p3;
}
Punto Triangulo::getP1(){
    return p1;
}

Punto Triangulo::getP2(){
    return p2;
}

Punto Triangulo::getP3(){
    return p3;
}

double Triangulo::getSemiperimetro(){
    return getPerimetro()/2;
}

double Triangulo::getArea(){
    double sem=getSemiperimetro();
    return sqrt(sem*(sem-p1.distancia(p2))*(sem-p2.distancia(p3))*(sem-p3.distancia(p1)));
}

double Triangulo::getPerimetro(){
    return p1.distancia(p2)+p2.distancia(p3)+p3.distancia(p1);
}

void Triangulo::mostrar(){
    cout <<" tipo= "<<getTipo()<<" Posicion= "<<getPosicion()<<"Color= "<<getColor()<<" p1"<<this->p1<<" p2"<<this->p2<<" p3"<<this->p3<<endl;
}
