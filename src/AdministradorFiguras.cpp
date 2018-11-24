#include "AdministradorFiguras.h"

AdministradorFiguras::AdministradorFiguras(){

}
void AdministradorFiguras::agregarFigura(Figura * f){
    lista.agregarp(f);
}
Figura * AdministradorFiguras::getFigura(int pos){
    return lista.getElem(pos);
}
void AdministradorFiguras::eliminarFigura(Figura * f){
    lista.eliminarElem(f);
}
void AdministradorFiguras::procesar()const{

}
int AdministradorFiguras::longitud(){
    return lista.longitud();
}

