#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> minhoca(n);
    int acumulado = 0;
    for(int i=0; i<n; i++){
        int qtd;
        cin >> qtd;
        acumulado += qtd;
        minhoca[i] = acumulado;
    }

    int m;
    cin >> m;

    for(int i=0; i<m; i++){
        int suculenta;
        cin >> suculenta;
        auto it = lower_bound(minhoca.begin(), minhoca.end(), suculenta);

        int indice = it - minhoca.begin();
        cout << indice+1 << "\n";

    }

    return 0;
}
