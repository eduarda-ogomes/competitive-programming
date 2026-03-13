#include <bits/stdc++.h>
using namespace std;

int main(){
    long long k,n,w;
    cin >> k >> n >> w;

    long long custo = k * w * (w+1)/2;
    long long x = max(0LL,custo-n);
    
    cout << x << endl;
}
