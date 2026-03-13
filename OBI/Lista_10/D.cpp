#include <iostream>
using namespace std;

int main() {
    int N, I, P;
    cin >> N >> I >> P;

    // Calcula a posição final usando aritmética modular
    int posicao_final = (I + P - 1) % N + 1;

    cout << posicao_final << endl;

    return 0;
}