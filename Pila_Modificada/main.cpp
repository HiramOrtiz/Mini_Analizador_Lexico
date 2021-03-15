#include <iostream>
#include "Pila.h"

/* Prototipo de funcion */
void llenar();

int main()
{
    llenar();
    return 0;
}

/* Funcion */
void llenar()
{
    Pila pila;
    ElementoPila *elemento = new Terminal("$");
    pila.push(elemento);

    pila.push(new Terminal("a"));
    pila.push((new Estado("2")));
    pila.mostrar();

    cout << endl << endl << "=====================" << endl << endl;

    pila.pop();
    cout << endl;
    pila.mostrar();
    cout << endl << endl;
}
