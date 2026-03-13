#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<string> tabuleiro(7);
    for (int i = 0; i < 7; ++i) {
        cin >> tabuleiro[i];
    }

    int movimentos_validos = 0;

    for (int i = 0; i < 7; ++i) {
        for (int j = 0; j < 7; ++j) {
            if (tabuleiro[i][j] == 'o') {
                // Verificar movimento para cima
                if (i >= 2 && tabuleiro[i-1][j] == 'o' && tabuleiro[i-2][j] == '.') {
                    movimentos_validos++;
                }
                // Verificar movimento para baixo
                if (i <= 4 && tabuleiro[i+1][j] == 'o' && tabuleiro[i+2][j] == '.') {
                    movimentos_validos++;
                }
                // Verificar movimento para esquerda
                if (j >= 2 && tabuleiro[i][j-1] == 'o' && tabuleiro[i][j-2] == '.') {
                    movimentos_validos++;
                }
                // Verificar movimento para direita
                if (j <= 4 && tabuleiro[i][j+1] == 'o' && tabuleiro[i][j+2] == '.') {
                    movimentos_validos++;
                }
            }
        }
    }

    cout << movimentos_validos << endl;

    return 0;
}