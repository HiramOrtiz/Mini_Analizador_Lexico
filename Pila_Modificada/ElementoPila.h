#ifndef ELEMENTOPILA_H
#define ELEMENTOPILA_H
#include <string>
#include <iostream>

using namespace std;

class ElementoPila
{
    public:
        ElementoPila* sig;
        string elemento;
        ElementoPila();
        virtual ~ElementoPila(){};
        ElementoPila(string elemento);
        virtual void mostrar(){}

};


class Terminal: public ElementoPila
{
    public:
        Terminal();
        Terminal(string elemento);
        virtual ~Terminal(){};
        void mostrar();

};


class NoTerminal: public ElementoPila
{
    public:
        NoTerminal();
        NoTerminal(string elemento);
        virtual ~NoTerminal(){};
        void mostrar();

};


class Estado: public ElementoPila
{
    public:
        Estado();
        Estado(string elemento);
        virtual ~Estado(){};
        void mostrar();

};

#endif // ELEMENTOPILA_H
