#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, p;
    cin >> n >> p;

    vector<long long> a(n);
    for (auto &x : a) cin >> x;

    long long l = 0, r = 1e18;

    while (l < r) {
        long long m = (l + r) / 2;
        long long pizzas = 0;

        for (long long x : a) {
            pizzas += m / x;
            if (pizzas >= p) break;
        }

        if (pizzas >= p)
            r = m;
        else
            l = m + 1;
    }

    cout << l << "\n";
}