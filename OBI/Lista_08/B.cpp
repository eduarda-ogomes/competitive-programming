#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<int> aposta(6);
    vector<int> sorteio(6);

    // Ler a aposta de Flavinho
    for (int i = 0; i < 6; i++) {
        cin >> aposta[i];
    }

    // Ler os números sorteados
    for (int i = 0; i < 6; i++) {
        cin >> sorteio[i];
    }

    // Usar um conjunto para verificar interseção entre os números
    set<int> numerosAposta(aposta.begin(), aposta.end());
    int acertos = 0;

    for (int numero : sorteio) {
        if (numerosAposta.count(numero) > 0) {
            acertos++;
        }
    }

    // Determinar o resultado baseado no número de acertos
    if (acertos == 6) {
        cout << "sena" << endl;
    } else if (acertos == 5) {
        cout << "quina" << endl;
    } else if (acertos == 4) {
        cout << "quadra" << endl;
    } else if (acertos == 3) {
        cout << "terno" << endl;
    } else {
        cout << "azar" << endl;
    }

    return 0;
}
