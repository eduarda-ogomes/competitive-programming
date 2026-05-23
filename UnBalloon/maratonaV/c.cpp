#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    // coleta todos os primos das barreiras
    set<int> primos;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        // fatorar b
        for (int p = 2; p * p <= b; p++) {
            if (b % p == 0) {
                primos.insert(p);
                while (b % p == 0) b /= p;
            }
        }
        if (b > 1) primos.insert(b);
    }

    // marca multiplos de cada primo ate m
    vector<bool> bloqueado(m + 1, false);
    for (int p : primos)
        for (int j = p; j <= m; j += p)
            bloqueado[j] = true;

    // conta nao bloqueados (ignora 0)
    int resp = 0;
    for (int i = 1; i <= m; i++)
        if (!bloqueado[i]) resp++;

    cout << resp << "\n";
    return 0;
}