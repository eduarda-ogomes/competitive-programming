#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossible(long long days, const vector<int>& cycles, long long F) {
    long long total = 0;
    for (int cycle : cycles) {
        total += days / cycle;
        if (total >= F) {
            return true;
        }
    }
    return total >= F;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    long long F;
    cin >> N >> F;

    vector<int> cycles(N);
    for (int i = 0; i < N; ++i) {
        cin >> cycles[i];
    }

    long long left = 1;
    long long right = 1e18; // Um limite superior seguro
    long long answer = right;

    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (isPossible(mid, cycles, F)) {
            answer = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << answer << endl;

    return 0;
}