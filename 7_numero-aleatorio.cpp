#include <iostream>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); 
    int count = 0; 

    while (count < 100) {
        int num = rand() % 106 + 15; 
        cout << num << " ";
        count++;
    }

    cout << endl;
    return 0;
}