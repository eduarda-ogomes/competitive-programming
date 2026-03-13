#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> bolas(N);
    for (int i = 0; i < N; i++) {
        cin >> bolas[i];
    }

    // Processar fileira por fileira até restar apenas uma bola
    while (bolas.size() > 1) {
        vector<int> novaFileira;
        for (size_t i = 0; i < bolas.size() - 1; i++) {
            if (bolas[i] == bolas[i + 1]) {
                novaFileira.push_back(1); // Duas bolas iguais resultam em uma preta
            } else {
                novaFileira.push_back(-1); // Duas bolas diferentes resultam em uma branca
            }
        }
        bolas = novaFileira; // Substituir a fileira atual pela nova fileira
    }

    // Determinar a cor da última bola
    if (bolas[0] == 1) {
        cout << "preta" << endl;
    } else {
        cout << "branca" << endl;
    }

    return 0;
}
