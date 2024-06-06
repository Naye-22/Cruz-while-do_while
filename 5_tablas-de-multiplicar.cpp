#include <iostream>
using namespace std;

int main() {
    int num;

    do {
        cout << "Ingresa un número para ver su tabla de multiplicar (ingresa 0 para salir): ";
        cin >> num;

        if (num != 0) {
            cout << "Tabla del " << num << ":" << endl;
            for (int i = 1; i <= 12; ++i) {
                cout << num << " x " << i << " = " << num * i << endl;
            }
            cout << endl;
        }

    } while (num != 0); // Repetir hasta que el usuario ingrese 0

    cout << "Programa terminado." << endl;
    return 0;
}