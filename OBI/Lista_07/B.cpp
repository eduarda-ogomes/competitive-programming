#include <iostream>
#include <string>
using namespace std;

int main() {
    string horizontal, vertical;
    cin >> horizontal >> vertical;

    int melhorH = -1;  // Melhor índice na palavra horizontal
    int melhorV = -1;  // Melhor índice na palavra vertical

    // Percorre cada letra da palavra horizontal
    for (int i = 0; i < horizontal.size(); i++) {
        // Percorre cada letra da palavra vertical
        for (int j = 0; j < vertical.size(); j++) {
            if (horizontal[i] == vertical[j]) {
                // Atualiza o melhor cruzamento, seguindo as regras
                if (i > melhorH || (i == melhorH && j > melhorV)) {
                    melhorH = i;
                    melhorV = j;
                }
            }
        }
    }

    // Exibe o resultado, ajustando para índices baseados em 1
    if (melhorH == -1 && melhorV == -1) {
        cout << "-1 -1" << endl;
    } else {
        cout << melhorH + 1 << " " << melhorV + 1 << endl;
    }

    return 0;
}
