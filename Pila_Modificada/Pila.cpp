#include "Pila.h"

Pila::Pila()
{
    raiz = nullptr;
    contadorElementos = 0;
}

void Pila::push(ElementoPila *eleAgregar)
{
    if(raiz != nullptr) {
        eleAgregar->sig = raiz;
        raiz = eleAgregar;
    } else
        raiz = eleAgregar;

    contadorElementos++;
}

void Pila::pop()
{
    ElementoPila *aux;
    aux = raiz;
    raiz = raiz->sig;
    cout << "Elemento eliminado: ";
    aux->mostrar();
    delete aux;
    contadorElementos--;
}

bool Pila::vacia()
{
    if(contadorElementos == 0)
        return false;
    return true;
}

void Pila::mostrar()
{
    ElementoPila *aux;
    aux = raiz;
    cout << "Elementos en pila: ";
    for(int i=0; i<contadorElementos;i++) {
        aux->mostrar();
        aux = aux->sig;
    }
}

