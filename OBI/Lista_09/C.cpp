#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<vector<int>> tabuleiro(N, vector<int>(N));
    
    // Leitura do tabuleiro
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> tabuleiro[i][j];
        }
    }
    
    // Preenchimento do tabuleiro
    for (int i = 1; i < N; ++i) {
        for (int j = 1; j < N; ++j) {
            if (tabuleiro[i][j] == 9) {
                int brancas = 0;
                int pretas = 0;
                // Verifica a célula (i, j-1)
                if (tabuleiro[i][j-1] == 0) brancas++;
                else pretas++;
                // Verifica a célula (i-1, j-1)
                if (tabuleiro[i-1][j-1] == 0) brancas++;
                else pretas++;
                // Verifica a célula (i-1, j)
                if (tabuleiro[i-1][j] == 0) brancas++;
                else pretas++;
                
                // Decide a cor da célula (i, j)
                if (brancas > pretas) tabuleiro[i][j] = 1;
                else tabuleiro[i][j] = 0;
            }
        }
    }
    
    // Imprime o resultado da célula (N-1, N-1) pois a indexação começa em 0
    cout << tabuleiro[N-1][N-1] << endl;
    
    return 0;
}