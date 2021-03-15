#ifndef PILA_H
#define PILA_H
#include "ElementoPila.h"
#include <iostream>

// Elementos de la pila $0a2+3b2
class Pila
{
    private:
        ElementoPila* raiz;
        int contadorElementos;

    public:
        Pila();
        void push(ElementoPila* eleAgregar);
        void pop();
        bool vacia();
        void mostrar();
};

#endif // PILA_H
