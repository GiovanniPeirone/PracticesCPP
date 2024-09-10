/*  -> Resultado            acerolaCASAlIMONxyzIAG
    ->Proceso
    1   CACEROLAcasaLimonXYZagusiagus 10
    2   INVERTIR
    3   CHAUAGUS
    4   INVERTIR
    6   BORRA-24
    7   BORRAULTI
    8   INVERTIR
    9   BORRAULTI
    10  INTERCAMBIA
    11  INVERTIR
Hacer una Funcion (procesatexto(Para))              */
#include <iostream>
#include <cmath>
#include<string>
#include <algorithm> 
#include <cctype>   //toupper y tolower

using namespace std;

const int TAM = 100;  // Tamaño máximo del array.
char letras[TAM];     // Declaración de un array de caracteres.

void procesatexto(string texto, string comandos) {
    while (true){
        if (comandos == "Imprimir"){
            cout << texto << endl;
        }
        if (comandos == "Invertir")
        if (comandos == "Agrega (Al Ultimo)")
        if (comandos == "Chau agus (Borra el primer Agus)")
        if (comandos == "BorraUlti")
        if (comandos == "Intercambia Mayus Minus - Minud Mayus")
        if (comandos == "DUP (Duplica la cadena)")
        if (comandos == "Rota (Ultimo caracter al final)")
        if (comandos == "Borra I (Posicion)")
        break;
    }
}

int main() {
    string texto = "fdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffCffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdffffffffffffffffffffffffdfffffffffffffffffffffff";
    string textos[] = {texto};
    if  (textos->length() > 1000){
            cout << "MemoryLimitExceeded" << endl;
    } else  {
        int CantidadComandos;
        cout << "Cantidad de Comandos " << endl;
        cin >> CantidadComandos;
        for (int i = 0; i < CantidadComandos; i++){
            string comandos;
            cout << "Ingrese los comandos a aplicar: ";
            cin  >>  comandos;
            procesatexto(texto, comandos);
        }
    }
    return 0;
}