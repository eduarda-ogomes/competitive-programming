#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i) {
        cin >> P[i];
    }

    vector<bool> is_dark(N);
    for (int i = 0; i < N; ++i) {
        int next = (i + 1) % N;
        is_dark[i] = (P[i] + P[next] < 1000);
    }

    int max_consecutive = 0;
    int current = 0;
    for (int i = 0; i < 2 * N; ++i) {
        int idx = i % N;
        if (is_dark[idx]) {
            current++;
            max_consecutive = max(max_consecutive, current);
        } else {
            current = 0;
        }
    }

    if (max_consecutive > N) {
        max_consecutive = N;
    }

    cout << max_consecutive << '\n';

    return 0;
}