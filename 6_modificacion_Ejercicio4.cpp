#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int a = rand() % 50 + 1; 
    int i = 3; 
    int adi; 
    bool adivinaste = false; 

    do {
        cout << "Adivina el número entre 1 y 50 (solo tienes " << i << " intentos): " << endl;
        cin >> adi;

        if (adi > a) {
            cout << "Ingresa un número menor al que ingresaste." << endl;
        } else if (adi < a) {
            cout << "Ingresa un número mayor al que ingresaste." << endl;
        } else {
            adivinaste = true;
            cout << "¡FELICIDADES GANASTE!" << endl;
        }

        i--;
    } while (i > 0 && !adivinaste);

    if (!adivinaste) {
        cout << "Lo siento, se te acabaron los intentos. El número era " << a << "." << endl;
    }

    return 0;
}