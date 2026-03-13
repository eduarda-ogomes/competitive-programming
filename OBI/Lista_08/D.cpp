#include <bits/stdc++.h>

using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> w(N);
    for (int i = 0; i < N; i++) {
        cin >> w[i];
    }
    if (N == 0 || w[0] > 8) {
        cout << "N" << endl;
        return 0;
    }
    bool ok = true;
    for (int i = 1; i < N; i++) {
        if (w[i] > w[i - 1] + 8) {
            ok = false;
            break;
        }
    }
    cout << (ok ? "S" : "N") << endl;
    return 0;
}
