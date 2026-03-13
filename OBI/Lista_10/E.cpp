#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<pair<int, int>> eventos;

    for (int i = 0; i < N; ++i) {
        int C, P;
        cin >> C >> P;
        eventos.emplace_back(C, 1);   // Evento de chegada (+1)
        eventos.emplace_back(P, -1);  // Evento de partida (-1)
    }

    // Ordena os eventos: primeiro por tempo, depois partidas antes de chegadas
    sort(eventos.begin(), eventos.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.first != b.first) return a.first < b.first;
        return a.second < b.second;
    });

    int max_onibus = 0;
    int atual = 0;

    for (const auto& evento : eventos) {
        atual += evento.second;
        if (atual > max_onibus) {
            max_onibus = atual;
        }
    }

    cout << max_onibus * 20 << endl;

    return 0;
}