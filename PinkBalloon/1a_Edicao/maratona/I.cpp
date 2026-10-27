#include <bits/stdc++.h>
using namespace std;

#define int long long

signed main() {
    int n,m;
    cin >> n;

    vector<int> casas(n);
    for(int i=0; i<n; i++){
        cin >> casas[i];
    }

    cin >> m;

    vector<int> postes(m);
    for(int i=0; i<m; i++){
        cin >> postes[i];
    }

    int r = 0;
    for(int i=0; i<n;i++){
        int x = casas[i];
        auto it = lower_bound(postes.begin(), postes.end(), x);
        
        int dist_prox = LLONG_MAX;
         if(it!= postes.end()){
            dist_prox = min(dist_prox, abs(*it - x));
         }

         if(it!= postes.begin()){
            dist_prox = min(dist_prox, abs(*(it-1) - x));
         }

         r = max(r, dist_prox);
    }

    cout << r << "\n";
    return 0;
}