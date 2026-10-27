#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,c,v;
    cin >> n >> c >> v;

    vector<int> lista(n);
    for(int i=0; i<n; i++){
        cin >> lista[i];
    }

    sort(lista.rbegin(), lista.rend());

    int aprovados=0;

    for(int i=0; i<n; i++){
        if(lista[i]>=c) aprovados++;
    }

    int corte = lista[v-1];

    cout << aprovados << " " << corte << "\n";
    return 0;
}