#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> ordem(N);
    vector<int> posicao(N);

    // Leitura da ordem de chegada
    for (int i = 0; i < N; i++) {
        cin >> ordem[i];
    }

    // Determinar a posição de cada atleta
    for (int i = 0; i < N; i++) {
        posicao[ordem[i] - 1] = i + 1;
    }

    // Impressão das posições
    for (int i = 0; i < N; i++) {
        cout << posicao[i] << endl;
    }

    return 0;
}
