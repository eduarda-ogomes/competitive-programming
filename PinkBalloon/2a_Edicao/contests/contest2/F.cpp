#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,pessoas,capacidade;
    cin >> n;

    int ans=0;
    while(n--){
        cin >> pessoas >> capacidade;
        if(pessoas+2 <= capacidade) ans++;
    }

    cout << ans << '\n';
}