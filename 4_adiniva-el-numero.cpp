#include <iostream>
#include <cstdlib> 
#include <ctime>   

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int numeroCorrecto = rand() % 100 + 1; 
    int intento; 
    cout << "¡Bienvenido al juego de adivinar el número!" << endl;
    cout << "Estoy pensando en un número entre 1 y 100." << endl;

    do {
        cout << "Ingresa tu intento: ";
        cin >> intento;

        if (intento > numeroCorrecto) {
            cout << "Demasiado alto. Intenta nuevamente." << endl;
        } else if (intento < numeroCorrecto) {
            cout << "Demasiado bajo. Intenta nuevamente." << endl;
        } else {
            cout << "¡Felicidades! Adivinaste el número correcto." << endl;
        }
    } while (intento != numeroCorrecto); 

    return 0;
}