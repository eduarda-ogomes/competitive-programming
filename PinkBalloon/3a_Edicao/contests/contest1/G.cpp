#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<pair<int, string>> lista(n);
    for(int i = 0; i < n; i++){
        cin >> lista[i].first >> lista[i].second;
    }

    sort(lista.begin(), lista.end());

    int a;
    while(cin >> a){
        pair<int, string> par_falso = {a, ""};

        auto it = lower_bound(lista.begin(), lista.end(), par_falso);

        int pos = it - lista.begin();

        if(pos < lista.size() && lista[pos].first == a){
            cout << lista[pos].second << "\n";
        } else cout << "undefined\n";
    }

    return 0;
}