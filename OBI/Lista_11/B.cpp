#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<int> A(N);
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    vector<int> possible(N);
    bool valid = true;

    // Processa de frente para trás para garantir d[i] >= d[i-1]
    possible[0] = min(A[0], M - A[0]);
    for (int i = 1; i < N; ++i) {
        int current = A[i];
        int complement = M - A[i];
        int min_possible = possible[i-1];
        int chosen = -1;
        if (current >= min_possible && complement >= min_possible) {
            chosen = min(current, complement);
        } else if (current >= min_possible) {
            chosen = current;
        } else if (complement >= min_possible) {
            chosen = complement;
        } else {
            valid = false;
            break;
        }
        possible[i] = chosen;
    }

    if (!valid) {
        cout << -1 << endl;
        return 0;
    }

    long long sum = 0;
    for (int num : possible) {
        sum += num;
    }
    cout << sum << endl;

    return 0;
}