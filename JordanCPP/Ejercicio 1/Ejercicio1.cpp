#include <iostream>
#include <cmath>

using namespace std;

int main(){ //Puedo implementar la funcion Despues(Si hace falta)
    int a = 13;
    int b = 2;
    int numeros[100];
    int index = 0;
    
    while (a > 0){
        int resto = a % b;
        numeros[index] = resto;  // Almacena el resto en la posición correcta
        index++; //Hasta que termine
        cout << a << " % " << b << " = " << resto << endl;
        a = a / b; //No se requiere de una floor division
        cout << "a es " << a << endl;
        
    }
    // i es Index y este mismo resta su valor para invertir el resto
    for (int i = index - 1; i >= 0; i--){ 
        cout << numeros[i];
    }
    
    return 0;
}