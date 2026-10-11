#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        for(int i=0;i<n;i++) cin >> a[i];

        // Construção da base XOR
        vector<long long> basis;
        for(long long x : a){
            for(long long b : basis)
                x = min(x, x^b);
            if(x) basis.push_back(x);
        }

        // Máximo XOR possível
        long long res = 0;
        for(long long b : basis)
            if((res ^ b) > res)
                res ^= b;

        cout << res << "\n";
    }
}