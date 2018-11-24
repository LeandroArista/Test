#include "Segmento.h"
Segmento::Segmento(){

}

Segmento::Segmento(const Punto & ext1, const Punto & ext2) {
    this->ext1 = ext1;
    this->ext2 = ext2;
}

const Punto & Segmento::extremo1() const {
    return ext1;
}

const Punto & Segmento::extremo2() const {
    return ext2;
}

double Segmento::longitud() const {
    return ext1.distancia(ext2);
}

void Segmento::trasladar(double x, double y) {
    ext1.trasladar(x, y);
    ext2.trasladar(x, y);
}

bool Segmento::operator==(const Segmento & otroSegmento) const {
    return (ext1 == otroSegmento.ext1) && (ext2 == otroSegmento.ext2);
}

Segmento & Segmento::operator = (const Segmento & otroSegmento){
    this->ext1 = otroSegmento.ext1;
    this->ext2 = otroSegmento.ext2;
    return *this;
}
