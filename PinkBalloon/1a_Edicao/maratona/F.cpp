#include <bits/stdc++.h>
using namespace std;

#define int long long
signed main() {
    int n,m;
    cin >> n;

    vector<int> salarios(n);
    for(int i=0; i<n; i++){
        cin >> salarios[i];
    }

    sort(salarios.begin(), salarios.end());

    cin >> m;
    for(int i=0; i<m; i++){
        int a,b;
        cin >> a >> b;

        auto it1 = lower_bound(salarios.begin(), salarios.end(),a);
        auto it2 = upper_bound(salarios.begin(), salarios.end(), b);

        int quant= distance(it1,it2);

        cout << quant << "\n";
    }


    return 0;
}