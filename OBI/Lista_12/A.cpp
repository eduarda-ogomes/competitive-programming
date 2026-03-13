#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N, S;
    cin >> N >> S;

    int min_balance = S; // Inicializa o menor saldo com o saldo inicial

    for (int i = 0; i < N; ++i) {
        int movimentacao;
        cin >> movimentacao;
        S += movimentacao; // Atualiza o saldo com a movimentação do dia
        if (S < min_balance) {
            min_balance = S; // Atualiza o menor saldo se necessário
        }
    }

    cout << min_balance << endl;

    return 0;
};