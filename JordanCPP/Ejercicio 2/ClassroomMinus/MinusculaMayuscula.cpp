#include <iostream>  // Biblioteca necesaria para entrada/salida estándar.
#include <cctype>    // Biblioteca que contiene funciones para manipular caracteres (como toupper).

using namespace std;  // Para evitar tener que escribir "std::" repetidamente.

int main() {
    const int TAM = 100;  // Tamaño máximo del array.
    char letras[TAM];     // Declaración de un array de caracteres.

    // Solicita al usuario que ingrese una cadena de caracteres.
    cout << "Ingrese una cadena de letras: ";

    cin.getline(letras, TAM);  // Captura la cadena de caracteres ingresada por el usuario.
    // Recorre cada carácter en el array hasta encontrar el carácter nulo ('\0'), que indica el final de la cadena.
    for (int i = 0; letras[i] != '\0'; i++) {
        // Verifica si el carácter actual es una letra minúscula.
        if (islower(letras[i])) {
            // Si es minúscula, la convierte a mayúscula usando `toupper`.
            letras[i] = toupper(letras[i]);
        }
    }

    // Imprime la cadena resultante con todas las letras minúsculas convertidas a mayúsculas.
    cout << "Cadena convertida a mayúsculas: " << letras << endl;

    return 0;  // Fin del programa.
}