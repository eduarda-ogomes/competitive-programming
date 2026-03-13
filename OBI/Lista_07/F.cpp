#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main() {
    int K, N;
    cin >> K >> N;

    // Ler o alfabeto alienígena
    string alien_alphabet;
    cin >> alien_alphabet;

    // Armazenar os caracteres do alfabeto alienígena em um conjunto
    unordered_set<char> alien_set(alien_alphabet.begin(), alien_alphabet.end());

    // Ler a mensagem
    string message;
    cin >> message;

    // Verificar se todos os caracteres da mensagem pertencem ao alfabeto alienígena
    bool is_alien_message = true;
    for (char c : message) {
        if (alien_set.find(c) == alien_set.end()) {
            is_alien_message = false;
            break;
        }
    }

    // Imprimir o resultado
    cout << (is_alien_message ? 'S' : 'N') << endl;

    return 0;
}
