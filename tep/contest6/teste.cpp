#include <iostream>
using namespace std;

int main() {
    int numeros[5] = {10, 20, 30, 40, 50};
    
    for(int i = 0; i <= 5; i++) {  // ERRO: i <= 5 (vai até 5, mas array vai 0-4)
        cout << numeros[i] << endl;  // i=5 acessa fora do array
    }
    
    return 0;
}