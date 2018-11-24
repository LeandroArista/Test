#ifndef ADMINISTRADORFIGURAS_H
#define ADMINISTRADORFIGURAS_H
#include "Lista.h"
#include "Figura.h"

class AdministradorFiguras{
    public:
        AdministradorFiguras();
        void agregarFigura(Figura * f);
        Figura * getFigura(int pos);
        int longitud();
        void eliminarFigura(Figura * f);
        void procesar()const;
    private:
        Lista<Figura*> lista;
};

#endif // ADMINISTRADORFIGURAS_H
