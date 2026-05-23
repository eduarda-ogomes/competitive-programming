#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,m,x;
    cin >> t;

    while(t--){
        cin >> n >> m;
        int soma = 0;
        while(n--){
            cin >> x;
            soma += x;
        }

        if(soma == m)cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}