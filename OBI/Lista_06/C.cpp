#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N, C, S;  
    cin >> N >> C >> S;
    
    vector<int> comandos(C); 
    for (int i = 0; i < C; i++) {
        cin >> comandos[i];
    }

    int estacao_atual = 1;
    int contador = 0;

    if (estacao_atual == S) {
        contador++;
    }

    for (int i = 0; i < C; i++) {
        estacao_atual += comandos[i];

        if (estacao_atual > N) {
            estacao_atual = 1;
        } else if (estacao_atual < 1) {
            estacao_atual = N;
        }

        if (estacao_atual == S) {
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
