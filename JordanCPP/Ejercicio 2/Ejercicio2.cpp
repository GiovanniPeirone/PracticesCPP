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
#include<string>      
#include <algorithm> 
#include <cctype>   //toupper y tolower

using namespace std;

void procesatexto(string texto, string comandos) {
    while (true){
        if (comandos == "Imprimir"){  //Imprime el texto
            cout << texto << endl;
        }
        if (comandos == "Invertir"){  //Invierte usando reverse de inicio a fin
            reverse(texto.begin(), texto.end());
            cout << texto << endl;
        }
        if (comandos == "BorraPri"){       //Borra el primer caracter
            if (!texto.empty()) {
                texto.erase(texto.end());
            }
            cout << texto << endl;
        }
        if (comandos == "BorraUlti"){       //Borra el ultimo caracter
            if (!texto.empty()) {
                texto.pop_back();
            }
            cout << texto << endl;
        }
        if (comandos == "Intercambia"){
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
        if (comandos == "DUP"){ // Duplica la cadena, falta duplicar subcadena
            cout << texto + texto;
        }
        if (comandos == "Rota"){       // Falta funcionalidad
            cout << texto << endl;
        }
        if (comandos == "BorraI"){     //Falta funcionalidad
            cout << texto << endl;
        }
        if (comandos == "Agrega"){
            texto.push_back('h');
            cout << texto;
        }
        if (comandos == "Chau_agus"){     //Falta Funcionalidad
            cout << texto + texto;
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
