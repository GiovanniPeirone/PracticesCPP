/*

#Numeros = [1, 2, 3, 4, 100]  for each
b = 2           #Tiene que ser mayor que 1 y no dividirse por 0, para evitar problemas
restoTotal = []
while b > 1:
        resto = a % b
        restoTotal.append(resto)
        print(f"{a} % {b}", resto)
        a = a // b
        print("a es: ", a)
        if a == 0:
            break
        
        print("Resto es ", restoTotal)
*/
#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int a = 13;
    int b = 2;
    vector<int> restos; 

    
    while (b > 1){
        int resto = a % b;
        restos.push_back(resto);
        cout << a << " % " << b << endl;
        int a = a / b;
        cout << resto;
        cout << "a es " << a << endl;
        if (a == 0){
            break;
            cout << restos[1];
        }
    }
    
    return 0;
}