#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> alturas(N);
    for (int i = 0; i < N; i++) {
        cin >> alturas[i];
    }

    // Verificar se há mais de um pico
    bool maisDeUmPico = false;
    for (int i = 1; i < N - 1; i++) {
        if (alturas[i - 1] > alturas[i] && alturas[i] < alturas[i + 1]) {
            maisDeUmPico = true;
            break;
        }
    }

    // Imprimir o resultado
    if (maisDeUmPico) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}
