#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long maxV = (N / 2) + 1;
    long long minV;

    if (K > N) {
        minV = 2;
    } else {
        minV = (N / K) + 1;
    }

    cout << maxV << " " << minV << endl;
    return 0;
} // nao consegui passar do teste 4