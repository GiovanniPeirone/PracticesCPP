#include <iostream>
#include <cmath>

using namespace std;

/* Para resolver
3               Ciudades
10, 51, 10      Panes en Ciudades
5 6             Peaje Ciudad 1 <-> 2, Peaje Ciudad 2 <-> 3


Xi = Pan en Ciudades
Ci = Pan por Peaje


for (int i = 0; i < ciudades; i++)
    {
        cout << ciudades[i+1];
    }
    
*/

void panes(int ciudades, int peajes){
    cout << "Xi: " << ciudades << endl;
    cout << "Ci: " << peajes << endl;
    //Ahora hay que pasar los panes por i+1 o i-1
    
    cout << ciudades[i+1];
}

int main(){
    
    const int N = 3;        //N ciudades(Constante)
    int ciudades[N] = {10, 51, 10};   //Panes en ciudades
    int peajes[1] = {1};        //Panes por peaje

    int max = ciudades[0];
    int min = ciudades[0];

    for (int m = 0; m < N; m++) //Una lista que se itera hasta que se cumpla la condicion
    {
        if(ciudades[m] > max){
            max = ciudades[m];      //Guarda cuando las ciudades en posicion m son mayor que max y guarda (3>3, 3>1)
        }
        
        if(ciudades[m] < min)       //Lo mismo con min.
        {
            min = ciudades[m];
        }
    }
    
    cout << "El maximo es " << max << endl;
    cout << "El minimo es " << min << endl;
    
    for (int i : ciudades)
    {   //PONER 3 y 1 con un i
        panes(i, 1);
        
    }
    
    
    return 0;
}

