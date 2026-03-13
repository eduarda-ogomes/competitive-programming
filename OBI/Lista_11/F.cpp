#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> C(N + 1), S(N + 1);
    vector<vector<int>> subordinates(N + 1);

    for (int i = 1; i <= N; ++i) {
        cin >> C[i] >> S[i];
        if (i != 1) {
            subordinates[C[i]].push_back(i);
        }
    }

    vector<bool> is_unsatisfied(N + 1, false);
    int total_unsatisfied = 0;

    for (int i = 1; i <= N; ++i) {
        for (int sub : subordinates[i]) {
            if (S[sub] > S[i]) {
                is_unsatisfied[i] = true;
                break;
            }
        }
        if (is_unsatisfied[i]) {
            total_unsatisfied++;
        }
    }

    cout << total_unsatisfied << '\n';

    int A;
    cin >> A;
    while (A--) {
        int I, X;
        cin >> I >> X;
        S[I] = X;

        // Check if the boss of I is now unsatisfied
        int boss = C[I];
        if (boss != I) {  // Not the founder
            bool was_unsatisfied = is_unsatisfied[boss];
            bool now_unsatisfied = false;
            for (int sub : subordinates[boss]) {
                if (S[sub] > S[boss]) {
                    now_unsatisfied = true;
                    break;
                }
            }
            if (was_unsatisfied != now_unsatisfied) {
                if (now_unsatisfied) {
                    total_unsatisfied++;
                } else {
                    total_unsatisfied--;
                }
                is_unsatisfied[boss] = now_unsatisfied;
            }
        }

        // Check if I is now unsatisfied
        if (!subordinates[I].empty()) {
            bool was_unsatisfied = is_unsatisfied[I];
            bool now_unsatisfied = false;
            for (int sub : subordinates[I]) {
                if (S[sub] > S[I]) {
                    now_unsatisfied = true;
                    break;
                }
            }
            if (was_unsatisfied != now_unsatisfied) {
                if (now_unsatisfied) {
                    total_unsatisfied++;
                } else {
                    total_unsatisfied--;
                }
                is_unsatisfied[I] = now_unsatisfied;
            }
        }

        cout << total_unsatisfied << '\n';
    }

    return 0;
}