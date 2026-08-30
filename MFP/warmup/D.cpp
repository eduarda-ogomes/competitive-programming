#include <bits/stdc++.h>
using namespace std;

int main(){
    long long p,b,n;
    cin >> p >> b >> n;

    long long meio = n/2;
    long long sobra = n-meio;

    long long soma = max(p,b) * meio *min(p,b) * sobra;

    cout << soma << "\n";

    return 0;
}