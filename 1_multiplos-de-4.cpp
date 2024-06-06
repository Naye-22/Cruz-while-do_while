//1) Múltiplos de 4 comprendidos entre 1 y 50. 
#include <iostream>
using namespace std;

int main() {
    int num = 4; // El primer múltiplo de 4

    while (num <= 50) {
        cout << num << " ";
        num += 4; // Incrementar num en 4 para obtener el siguiente múltiplo de 4
    }

    cout << endl;
    return 0;
}