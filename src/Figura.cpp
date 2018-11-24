#include "Figura.h"

Figura::Figura(){

}

Figura::Figura(Punto pos, string tipo,string color){
    this->pos=pos;
    this->tipo=tipo;
    this->color=color;
}

void Figura::setPosicion(Punto p){
    this->pos=p;
}

void Figura::setTipo(string tipo){
    this->tipo=tipo;
}
void Figura::setColor(string color){
    this->color=color;
}

string Figura::getTipo(){
    return tipo;
}

string Figura::getColor(){
    return color;
}

Punto Figura::getPosicion(){
    return pos;
}

bool Figura::operator==(const Figura & otro){
    if ( (this->tipo==otro.tipo) && (this->pos==otro.pos))
        return true;
    return false;
}


