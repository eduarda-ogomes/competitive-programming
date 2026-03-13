#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    
    vector<vector<int>> matriz(N, vector<int>(N));
    vector<int> soma_linha(N, 0);
    vector<int> soma_coluna(N, 0);
    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matriz[i][j];
            soma_linha[i] += matriz[i][j];
            soma_coluna[j] += matriz[i][j];
        }
    }
    
    int max_peso = 0;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            int peso = soma_linha[i] + soma_coluna[j] - 2 * matriz[i][j];
            if (peso > max_peso) {
                max_peso = peso;
            }
        }
    }
    
    cout << max_peso << endl;
    
    return 0;
}