//2) Tabla de multiplicar desde el 12 al 1. 
#include <iostream>
using namespace std;

int main() {
    int num = 12; // Comenzar con 12

    //ESTE EJERCICIO NO NECESITA DE 2 BUCLES
    
    do {
        cout << "Tabla del " << num << ":" << endl;
        int i = 1;
        do {
            cout << num << " x " << i << " = " << num * i << endl;
            i++;
        } while (i <= 10); // Imprimir la tabla de multiplicar del número actual del 1 al 10
        cout << endl;
        num--; // Decrementar num para la siguiente tabla
    } while (num >= 1); // Repetir hasta que num sea 1

    return 0;
}
