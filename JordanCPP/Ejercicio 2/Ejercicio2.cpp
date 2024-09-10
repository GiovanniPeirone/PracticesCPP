/*
CACEROLAcasaLimonXYZagusiagus 10 -> Entrada

-> Opciones
BORRA-i:
AGREGA      (Agrega una secuencia al final de la cadena)
CHAUAGUS    (Borra la cadena agus este como este)
BORRA-24
BORRAULTI
INVERTIR    (Borra el primer caracter)
BORRAULTI   (Borra el ultimo caracter)
INTERCAMBIA (Mayus -> Minus; Minus -> Mayus)
INVERTIR    (Invierte la cadena)
DUP         (Duplica la cadena)
ROTA        (Lleva el primer caracter al final)



-> Resultado
acerolaCASAlIMONxyzIAG
    ->Proceso
    1   CACEROLAcasaLimonXYZagusiagus 10
    2   INVERTIR
    3   CHAUAGUS
    4   INVERTIR
    5   CHAUAGUS
    6   BORRA-24
    7   BORRAULTI
    8   INVERTIR
    9   BORRAULTI
    10  INTERCAMBIA
    11  INVERTIR

Hacer una Funcion
*/
#include <iostream>
#include <cmath>
//toupper y tolower
#include <cctype>

using namespace std;

void procesatexto(string texto, string comandos) {
    string textos[] = {texto};
    
    while (true){
        if (comandos == "Imprimir"){
            cout << texto << endl;
            string textos[] = {texto};
            
        }
        int length = sizeof(textos) / sizeof(textos[0]);
        if (comandos == "minus"){
            reverse(textos, textos + length);      
            cout << textos;  
        }
        break;
    }
}

int main() {
    string texto = "CACEROLAcasaLimonXYZagusiagus";

    int CantidadComandos;
    cout << "Cantidad de Comandos " << endl;
    cin >> CantidadComandos;
    for (int i = 0; i < CantidadComandos; i++){
        string comandos;
        cout << "Ingrese los comandos a aplicar: ";
        cin  >>  comandos;
        procesatexto(texto, comandos);
    }
    return 0;
}