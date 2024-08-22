#include <iostream>
#include <vector>
#include <algorithm> // Para std::search
#include <cstdlib>   // Para std::rand, std::srand
#include <ctime>     // Para std::time

int main() {
    const int ARRAY_SIZE = 100000;  // Tamaño del array de letras aleatorias
    std::vector<char> letters(ARRAY_SIZE);
    std::string targetWord;

    // Semilla para el generador de números aleatorios
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    // Generar letras aleatorias (de 'a' a 'z')
    for (int i = 0; i < ARRAY_SIZE; ++i) {
        letters[i] = 'a' + std::rand() % 26;
    }

    // Mostrar el array de letras aleatorias
    std::cout << "Array de letras aleatorias:\n";
    for (char letter : letters) {
        std::cout << letter << " ";
    }
    std::cout << "\n\n";

    // Pedir al usuario que introduzca la palabra a buscar
    std::cout << "Introduce la palabra que quieres buscar: ";
    std::cin >> targetWord;

    // Buscar la palabra en el array
    auto it = std::search(letters.begin(), letters.end(), targetWord.begin(), targetWord.end());

    int64_t posicion = distance(letters.begin(), it);


    if (it != letters.end()) {
        std::cout << "La palabra '" << targetWord << "' fue encontrada en " << posicion << "\n";
    }
    else {
        std::cout << "La palabra '" << targetWord << "' no fue encontrada en el array.\n";
    }

    return 0;
}