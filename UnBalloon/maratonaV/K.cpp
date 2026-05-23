#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    int a;
    cin >> a;

    ll total=0;
    for(int i = 1; i<= a; i++) total += a/i;

    cout << total << "\n";

    return 0;
}