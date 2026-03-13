#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int E, M, D;
    cin >> E >> M >> D;

    vector<pair<int, int>> same_group(M);
    vector<pair<int, int>> diff_group(D);

    for (int i = 0; i < M; ++i) {
        cin >> same_group[i].first >> same_group[i].second;
    }

    for (int i = 0; i < D; ++i) {
        cin >> diff_group[i].first >> diff_group[i].second;
    }

    vector<int> student_to_group(E + 1);
    for (int i = 0; i < E / 3; ++i) {
        int I, J, K;
        cin >> I >> J >> K;
        student_to_group[I] = i;
        student_to_group[J] = i;
        student_to_group[K] = i;
    }

    int violations = 0;

    for (const auto &pair : same_group) {
        int X = pair.first;
        int Y = pair.second;
        if (student_to_group[X] != student_to_group[Y]) {
            violations++;
        }
    }

    for (const auto &pair : diff_group) {
        int U = pair.first;
        int V = pair.second;
        if (student_to_group[U] == student_to_group[V]) {
            violations++;
        }
    }

    cout << violations << '\n';

    return 0;
}