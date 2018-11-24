#ifndef SEGMENTO_H
#define SEGMENTO_H
#include "Punto.h"

class Segmento{
  public:
        Segmento();
        Segmento(const Punto & ext1, const Punto & ext2);
        const Punto & extremo1() const;
        const Punto & extremo2() const;
        double longitud() const;
        void trasladar(double x, double y);
        bool operator==(const Segmento & otroSegmento) const;
        Segmento & operator = (const Segmento & otroSegmento);
    private:
        Punto ext1, ext2;
};

#endif // SEGMENTO_H
