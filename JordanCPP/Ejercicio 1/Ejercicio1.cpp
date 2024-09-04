#include <iostream>
#include <cmath>

using namespace std;

int main(){ //Puedo implementar la funcion Despues(Si hace falta)
    int a;
    cout << "Ingrese la Variable: ";    // como un print
    cin  >> a;                          // como un input

    cout << "\n Ingrese la Base: ";
    int b;
    cin  >> b;
    
    int numeros[100];                   // Una lista con capacidad para 100 numeros
    int index = 0;
    
    while (a > 0){
        int resto = a % b;
        numeros[index] = resto;         // Almacena el resto en la posición correcta
        index++;                        // Hasta que termine incrementa su valor para el numero de iteraciones(100)
        cout << a << " % " << b << " = " << resto << endl;
        a = a / b;                      // No se requiere de una floor division, las divisiones son exactas
        cout << "a es " << a << endl;
        
    }
    // i es Index y este mismo resta su valor para invertir el resto
    for (int i = index - 1; i >= 0; i--){ 
        cout << numeros[i];
    }
    
    return 0;
}