#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore(); // Ignorar o caractere de nova linha após o número

    string input;
    getline(cin, input);

    // Inicializa o primeiro caractere e o contador
    char current_char = input[0];
    int count = 1;

    for (int i = 1; i < N; i++) {
        if (input[i] == current_char) {
            count++; 
        } else {
            // Imprime o par atual (contador e caractere)
            cout << count << " " << current_char << " ";
            // Atualiza o caractere atual e reseta o contador
            current_char = input[i];
            count = 1;
        }
    }

    // Imprime o último par
    cout << count << " " << current_char << endl;

    return 0;
}
