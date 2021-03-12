#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


int main()
{
    vector<string> reservadas = {"for","return","do","while","float","void","string","int","switch","class"};
    vector<string> simboloLenguaje = {"@","#","{","}","[","]","="};
    vector<string> operadoresRelacion = {"<","<=",">",">=","==","!="};
    vector<string> operadoresAritmeticos = {"+","-","*","/"};
    vector<string> operadoresLogicos = {"||","&&"};
    vector<string> selectivaSimple = {"if","else"};

    string ingresado;
    vector<string>::iterator prueba;

    cout << "Ingresa la palabra: ";
    getline(cin,ingresado);

    /*Búsqueda del elemento ingresado*/
    prueba = find(reservadas.begin(),reservadas.end(),ingresado);

    cout << endl;

    if(prueba != reservadas.end()){
        cout << "Elemento encontrado: " << ingresado << endl;
        cout << "Tipo: " << "Palabra Reservada" << endl;
    }else{
        prueba = find(simboloLenguaje.begin(),simboloLenguaje.end(),ingresado);
        if(prueba != simboloLenguaje.end()){
            cout << "Elemento encontrado: " << ingresado << endl;
            cout << "Tipo: " << "Simbolo de lenguaje" << endl;
        }else{
            prueba = find(operadoresRelacion.begin(),operadoresRelacion.end(),ingresado);
            if(prueba != operadoresRelacion.end()){
                cout << "Elemento encontrado: " << ingresado << endl;
                cout << "Tipo: " << "Operador de relacion" << endl;

            }else{
                prueba = find(operadoresAritmeticos.begin(),operadoresAritmeticos.end(),ingresado);
                if(prueba != operadoresAritmeticos.end()){
                    cout << "Elemento encontrado: " << ingresado << endl;
                    cout << "Tipo: " << "Operador aritmetico" << endl;

                }else{
                    prueba = find(operadoresLogicos.begin(),operadoresLogicos.end(),ingresado);
                    if(prueba != operadoresLogicos.end()){
                        cout << "Elemento encontrado: " << ingresado << endl;
                        cout << "Tipo: " << "Operador logico" << endl;

                    }else{
                        prueba = find(selectivaSimple.begin(),selectivaSimple.end(),ingresado);
                        if(prueba != selectivaSimple.end()){
                            cout << "Elemento encontrado: " << ingresado << endl;
                            cout << "Tipo: " << "Selectiva simple" << endl;

                        }else{
                            cout << "Elemento no encontrado: " << ingresado << endl;
                        }
                    }
                }
            }
        }
    }

    cout << endl;
    return 0;
}
