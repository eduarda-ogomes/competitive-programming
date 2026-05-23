#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    vector<int> a(n), b(m);
    for(auto &x:a) cin >> x;
    for(auto &x:b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i=0,j=0,vitorias = 0;

    while(i<n && j<m){
        if(a[i] > b[j]){
            vitorias++;
            i++;
            j++;
        } else i++;
    }

    cout << vitorias << "\n";
    return 0;
}