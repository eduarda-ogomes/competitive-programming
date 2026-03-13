#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> pontuacoes(5);
    for (int i = 0; i < 5; i++) {
        cin >> pontuacoes[i];
    }

    // Conta o número de troféus
    int maior = pontuacoes[0];
    int trofeus = 0;
    for (int i = 0; i < 5; i++) {
        if (pontuacoes[i] == maior) {
            trofeus++;
        } else {
            break; // A ordem é decrescente, podemos parar
        }
    }

    // Conta o número de placas
    int placas = 0;
    int segunda_maior = -1;
    for (int i = trofeus; i < 5; i++) {
        if (segunda_maior == -1) {
            segunda_maior = pontuacoes[i];
        }
        if (pontuacoes[i] == segunda_maior) {
            placas++;
        } else {
            break;
        }
    }

    cout << trofeus << " " << placas << endl;
    return 0;
}
