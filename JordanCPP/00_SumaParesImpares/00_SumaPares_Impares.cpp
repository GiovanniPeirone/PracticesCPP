/*
1. Suma de Pares e Impares:
    -Descripción: Escribe un programa que tome una lista de números y calcule la 
    suma de todos los números pares y la suma de todos los números impares por separado.
*/

#include <iostream>

using namespace std;

int main(){
    int numeros[10] = {12, 7, 5, 18, 11, 24, 3, 9, 20, 16};
    int sumaPares;
    int sumaImpares;

    for (int n : numeros) {     //Esto es un for each que recorre una lista
        cout << "Número: " << n << "\n";

        if (n % 2 == 0){
            sumaPares += n;
        }
        else{
            sumaImpares += n;
        }
    }

    cout << "Suma de números pares: " << sumaPares << endl;
    cout << "Suma de números impares: " << sumaImpares << endl;
    
    return 0;
}
