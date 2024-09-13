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

void procesatexto(string texto, string comandos) {
    while (true){
        if (comandos == "Imprimir"){  //Deberia de recorrer un rango para invertir
            cout << texto << endl;
        }
        if (comandos == "Invertir"){
            reverse(texto.begin(), texto.end());
            cout << texto << endl;
        }
        if (comandos == "Agrega"){
            cout << texto + texto;
        }
        if (comandos == "Chau agus (Borra el primer Agus)"){
            cout << texto + texto;
        }
        if (comandos == "BorraPri"){
            if (!texto.empty()) {
                texto.erase(texto.begin());
            }
            cout << texto << endl;
        }
        if (comandos == "BorraUlti"){
            if (!texto.empty()) {
                texto.pop_back();
            }
            cout << texto << endl;
        }
        if (comandos == "MayusMinus"){
            for (char c : texto) {   //Esto recorre la cadena viendo si:
                if (islower(c)) {   //Es minuscula la pasa a mayus
                    c = toupper(c);
                } 
                else if (isupper(c)) { //Es mayuscula la pasa a minus
                    c = tolower(c);
                }
            }
            cout << texto;
        }
        if (comandos == "DUP"){ // (Duplica la cadena, deberia de ir con un for con i y con j)
            cout << texto + texto;
        }
        if (comandos == "Rota "){ //(Primer caracter al final)
            cout << texto << endl;
        }
        if (comandos == "Borra I"){
            cout << texto << endl;
            
        }
        break;
    }
}

int main() {
    string texto = "CACEROLAcasaLimonXYZagusiagus";
    string textos[] = {texto};

    if  (textos->length() > 1000){          //Si el texto se excede de los 1.000 Caracteres
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