#include <iostream>
#include <string>
#include <set>
using namespace std;

int main() {
    string frase;
    getline(cin, frase);

    set<char> letras; // Conjunto para armazenar letras únicas

    // Adiciona cada letra válida ao conjunto
    for (char c : frase) {
        if (c >= 'a' && c <= 'z') {
            letras.insert(c);
        }
    }

    // Verifica se todas as letras do alfabeto estão presentes
    if (letras.size() == 23) {
        cout << "S" << endl; // É um pangrama
    } else {
        cout << "N" << endl; // Não é um pangrama
    }

    return 0;
}
