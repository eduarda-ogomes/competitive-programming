#include <bits/stdc++.h>
using namespace std;

const int MAXV = 100001;
int spf[MAXV];

void crivo(){
    for(int i = 0; i < MAXV; i++) spf[i] = i;
    for(int i = 2; i*i < MAXV; i++)
        if(spf[i] == i) // i é primo
            for(int j = i*i; j < MAXV; j += i)
                if(spf[j] == j) spf[j] = i;
}

unordered_map<long long, long long> fatores;

void multiplica(long long x){
    while(x > 1){
        int p = spf[x];
        while(x % p == 0){ fatores[p]++; x /= p; }
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    crivo();
    int q;
    cin >> q;

    while(q--){
        long long t,x;
        cin >> t >> x;

        if(t==1) multiplica(x);
        else if(t == 2){
            for(auto &[p,e] : fatores) e *= x;
        }
        else{
            bool ok = true;
            long long tmp = x;
            while(tmp>1){
                int p = spf[tmp];
                int cnt = 0;
                while(tmp % p == 0){
                    cnt++;
                    tmp /= p;
                }
                if(fatores[p] < cnt){ok = false; break;}
            }
            cout << (ok ? "Yes" : "No") << "\n";  
            }
        }

    return 0;
}