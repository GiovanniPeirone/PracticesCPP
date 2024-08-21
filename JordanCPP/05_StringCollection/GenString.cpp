#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>  // Para std::search
#include <iterator>   // Para std::distance
#include <cmath>      // Para std::min y std::max

using namespace std;

int main() {
    while (true){
            srand(time(nullptr));

        vector<char> letras;

        // Generar 999,999 letras aleatorias
        for (int i = 0; i < 99999999; ++i) {//99 millones
            char letra = (rand() % 2 == 0) ? 'A' + rand() % 26 : 'a' + rand() % 26;
            letras.push_back(letra);
        }

        // Secuencia que queremos encontrar
        vector<char> secuencia = {'j','o','r','d','a','n'};

        // Buscar la secuencia en el vector
        auto it = search(letras.begin(), letras.end(), secuencia.begin(), secuencia.end());
        
        if (it != letras.end()) {
            int posicion = distance(letras.begin(), it);
            int linea = posicion / 100;
            int columna = posicion % 100;

            cout << "Secuencia encontrada en la posición: " << posicion << endl;
            cout << "Secuencia encontrada en la línea: " << linea + 1 << ", columna: " << columna + 1 << endl;

            // Mostrar un fragmento del vector alrededor de la secuencia encontrada
            int start = max(0, posicion - 10);
            int end = min(static_cast<int>(letras.size()), posicion + 10 + static_cast<int>(secuencia.size()));

            cout << "Fragmento del vector alrededor de la secuencia encontrada:" << endl;
            for (int i = start; i < end; ++i) {
                cout << letras[i];
            }
            cout << endl;
            break;
        } else {
            cout << "Secuencia no encontrada." << endl;
        }
        
	}
    return 0;

    
}
