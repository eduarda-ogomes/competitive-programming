#include <bits/stdc++.h>
using namespace std;

#define int long long

int32_t main(){
    int n;
    cin >> n;

    map<int, string> lista;
    for(int i=0; i<n; i++){
        int x;
        string comando;
        cin >> x >> comando;
        lista[x] = comando;
    }

    int a;
    while(cin >> a){
        if(lista.count(a)) cout << lista[a] << "\n";
        else cout << "undefined\n";
    }
}