#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int K, L;
    cin >> K >> L;

    // Ajustar as posições para índice 0-15 para facilitar os cálculos
    K--;
    L--;

    // Verificar em qual fase se enfrentam
    if ((K / 2) == (L / 2)) {
        cout << "oitavas" << endl;
    } else if ((K / 4) == (L / 4)) {
        cout << "quartas" << endl;
    } else if ((K / 8) == (L / 8)) {
        cout << "semifinal" << endl;
    } else {
        cout << "final" << endl;
    }

    return 0;
}