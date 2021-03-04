#include <iostream>
#include <string>
#include <regex>

using namespace std;

/*Prototipo de funcion*/
bool validaCadena(string cadena);

int main()
{
    system("COLOR A"); //Linea para cambiar el color de la fuente, solo funciona en windows

    string palabra;
    char continuar='s';

    while (continuar != 'n')
    {
        system("CLS"); //Linea para limpiar pantalla, solo funciona en windows

        /*Se le pide al usuario ingresar la cadena para validar que es un id*/
        cout << "Ingrese la cadena: ";
        getline(cin, palabra);

        /*Valida que sea un id*/
        if(validaCadena(palabra))
            cout << "Cadena valida" << endl;
        else
            cout << "Cadena invalida" << endl;

        /*Pregunta para que continue con otra palabra el usuario*/
        cout << "Desea ingresar otra cadena? [s/n]: ";
        cin>>continuar;
        cin.get();
        if(continuar != 's')
            break;
    }

    cout << endl << endl;
    return 0;
}

/*Funcion que valida que la cadena que se ha ingresado sea un id*/
bool validaCadena(string cadena)
{
    /*Variable con nuestra expresión regular*/
    regex expReg("([A-Za-z]\\w*)(\\+[A-Za-z]\\w*)*");
    return regex_match(cadena,expReg);
}
