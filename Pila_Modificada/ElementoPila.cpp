#include "ElementoPila.h"

ElementoPila::ElementoPila()
{
    sig = nullptr;
}

ElementoPila::ElementoPila(string elemento)
{
    this->elemento = elemento;
    sig = nullptr;
}

Terminal::Terminal(string elemento)
{
    this->elemento = elemento;
}

void Terminal::mostrar()
{
    cout << elemento;
}

NoTerminal::NoTerminal(string elemento)
{
    this->elemento = elemento;
}

void NoTerminal::mostrar()
{
    cout << elemento;
}

Estado::Estado(string elemento)
{
    this->elemento = elemento;
}

void Estado::mostrar()
{
    cout << elemento;
}
