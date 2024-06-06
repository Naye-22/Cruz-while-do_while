//3) Tabla de multiplica, bucle do while.
#include <iostream>
using namespace std;

int main() {
    int num = 5; // Número para la tabla de multiplicar (puedes cambiar este valor)
    int i = 1; // Iniciar el multiplicador desde 1

    cout << "Tabla del " << num << ":" << endl;

    do {
        cout << num << " x " << i << " = " << num * i << endl;
        i++;
    } while (i <= 10); // Imprimir la tabla de multiplicar del 1 al 10

    return 0;
}