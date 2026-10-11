#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin >> n >> k;

    long long impares = (n+1)/2;

    if(k <= impares) cout << 2*k - 1 << '\n';
    else cout << 2* (k - impares) << '\n';
}