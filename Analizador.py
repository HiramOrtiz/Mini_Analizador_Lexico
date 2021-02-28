"""
Mini analizador léxico de números e identificadores.
Para la clase de Seminario de Traductores II.
Alumno: José Hiram Ortiz Gutiérrez.
Profesor: Michel Emanual López Franco.
"""
class Analizador:
    def __init__(self,palabra):
        self.original = palabra
        self.frase = palabra.lower()
        self.punto = 0
    def estado0(self,caracter):
    #Estado para verificar si la cadena que se ha ingresado puede ser un número
    #real o un identificador, incluso podría ser un número real
        if caracter == '-':
            return 1
        elif caracter.isdigit():
            return 1
        elif caracter.isalpha():
            return 1
        else:
            return 0
    def estado1(self,caracter):
    #Estado para verificar que un número que va a ser real tenga solo un punto
    #y todos los números que se requieran
        if caracter.isdigit():
            return 1
        elif caracter == '.':
            if self.punto == 0:
                self.punto += 1
                return 1
            else:
                return 0
        else:
            return 0
    def estado2(self,caracter):
    #Estado para poder hacer la aceptación de un número real
        if caracter.isdigit():
            return 1
        else:
            return 0
    def estado4(self,caracter):
    #Estado en el que se verifica si es un número o letra (para el ID)
        if caracter.isalpha():
            return 1
        elif caracter.isdigit():
            return 1
        else:
            return 0
    def posibleId(self):
    #Código para recorrer el autómata si es un identidicador
        cont = 0
        temp = 0
        longitud = len(self.frase)
        for i in self.frase:
            if cont == 0:
                temp = self.estado0(i)
                cont += 1
                if temp == 0:
                    return 0
                    break
                else:
                    pass
            elif cont < longitud-1:
                temp = self.estado4(i)
                cont += 1
                if temp == 0:
                    return 0
                    break
                else:
                    pass
            elif cont == longitud-1:
                temp = self.estado4(i)
                cont += 1
                if temp == 1:
                    return 1
                else:
                    return 0
            else:
                pass
    def posibleReal(self):
    #Código para recorrer el autómata si es un número real
        cont = 0
        temp = 0
        longitud = len(self.frase)
        for i in self.frase:
            if cont == 0:
                temp = self.estado0(i)
                cont += 1
                if temp == 0:
                    print ("Es una cadena no válida")
                    break
                else:
                    pass
            elif cont < longitud-1:
                temp = self.estado1(i)
                cont += 1
                if temp == 0:
                    print ("Es una cadena no válida")
                    break
                else:
                    pass
            elif cont == longitud-1:
                temp = self.estado2(i)
                cont += 1
                if temp == 0:
                    print ("Es una cadena no válida")
                    break
                else:
                    print ("La cadena es un número real")
            else:
                pass


frase = str(input("Ingresa una cadena: "))
palabra = Analizador(frase)

resultado = 0
if frase[0].isalpha():
    resultado = palabra.posibleId()
    if resultado == 1:
        print ("La cadena \"%s\" es un identificador" %palabra.original)
elif frase[0].isdigit():
    resultado = palabra.posibleReal()
    if resultado == 1:
        print ("La cadena \"%s\" es un número real" %palabra.original)
elif frase[0] == '-':
    resultado = palabra.posibleReal()
    if resultado == 1:
        print ("La cadena \"%s\" es un número real" %palabra.original)

if resultado == 0:
    print ("La cadena \"%s\" no es válida" %palabra.original)
