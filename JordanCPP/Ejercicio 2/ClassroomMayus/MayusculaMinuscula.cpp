#include <iostream>  // Biblioteca para entrada/salida estándar.
#include <cctype>    // Biblioteca que contiene funciones para manipular caracteres (como tolower).

using namespace std;  // Evita tener que escribir "std::" repetidamente.

int main() {
    const int TAM = 100;  // Tamaño máximo del array.
    char letras[TAM];     // Declaración de un array de caracteres.

    // Solicita al usuario que ingrese una cadena de caracteres.
    cout << "Ingrese una cadena de letras: ";
    cin.getline(letras, TAM);  // Captura la cadena de caracteres ingresada por el usuario.

    // Recorre cada carácter en el array hasta encontrar el carácter nulo ('\0'), que indica el final de la cadena.
    for (int i = 0; letras[i] != '\0'; i++) {
        // Verifica si el carácter actual es una letra mayúscula.
        if (isupper(letras[i])) {
            // Si es mayúscula, la convierte a minúscula usando `tolower`.
            letras[i] = tolower(letras[i]);
        }
    }

    // Imprime la cadena resultante con todas las letras mayúsculas convertidas a minúsculas.
    cout << "Cadena convertida a minúsculas: " << letras << endl;

    return 0;  // Fin del programa.
}