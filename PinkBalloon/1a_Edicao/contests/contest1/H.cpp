#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n,m,k;
    cin >> n >> m >> k;

    vector<pair<long long,long long>> pares;

    for(int i=0;i<m;i++){
        long long x,y;
        cin >> x >> y;
        pares.push_back({x, x+y-1});
    }

    sort(pares.begin(), pares.end());

    if(m==0){
        cout << (n>=k ? "SIM\n" : "NAO\n");
        return 0;
    }

    if(pares[0].first - 1 >= k){
        cout << "SIM\n";
        return 0;
    }

    for(int i=0;i<m-1;i++){
        long long livre = pares[i+1].first - pares[i].second - 1;

        if(livre >= k){
            cout << "SIM\n";
            return 0;
        }
    }

    if(n - pares[m-1].second >= k){
        cout << "SIM\n";
        return 0;
    }

    cout << "NAO\n";
}