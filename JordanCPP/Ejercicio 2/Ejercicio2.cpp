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

using namespace std;

void procesatexto(string texto, string comandos) {
    cout << texto << "\n";
    cout << comandos << "\n";
    string textos[1] = {texto};
    while (true){
        //No se pueden usar switch :(

        switch (comandos)
        {
        case 1:
            cout << "Funciona el Switch"
            break;
        
        default:
            break;
        }
        /*
        for (int i = 1; i <= 10; i++){ // Quiza deberia de recorrer un array :/
            if (comandos == "hola"){
                cout << textos[1];
            }
        }
        */
        
    }
}

int main() {
    string texto;
    cout << "Ingrese el texto deseado: ";
    cin  >> texto;

    string comandos;
    cout << "Ingrese los comandos a aplicar: ";
    cin  >>  comandos;

    procesatexto(texto, comandos);

    return 0;
}