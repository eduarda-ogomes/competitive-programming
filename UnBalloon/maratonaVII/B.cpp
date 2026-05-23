#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<long long> a(n+1);
    for(int i = 1; i <= n; i++) cin >> a[i];

    while(q--){
    int op;
    cin >> op;

    if(op == 1){
        int l,r,x;
        cin >> l >> r >> x;
        for(int i=l; i <= r; i++) a[i] = a[i]%x;
    }
    else if(op == 2){
        int l,r;
        long long x;
        cin >> l >> r >> x;
        for(int i=l; i <= r; i++) a[i] = max(a[i],x);
    }
    else{
        int l,r;
        cin >> l >> r;
        long long soma = 0;
        for(int i=l; i <= r; i++) soma += a[i];   
        cout <<  soma << "\n";    
    }
}
}