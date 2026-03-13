#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    // Leitura do número de termos
    int N;
    cin >> N;

    long long soma = 0; // Variável para acumular a soma dos termos

    for (int i = 0; i < N; i++) {
        int termo;
        cin >> termo;

        // Separa o termo em base e expoente
        int base = termo / 10; // Todos os dígitos menos o último
        int expoente = termo % 10; // Último dígito

        // Calcula a potenciação e acumula na soma
        soma += pow(base, expoente);
    }

    // Imprime o resultado final
    cout << soma << endl;

    return 0;
}
