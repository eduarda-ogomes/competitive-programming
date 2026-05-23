// deu timelimit
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    int mdc=0;
    set<int>defesas;

    while(n--){
        int x;
        cin >> x;
        for(int i=1; i<=m; i++){
            mdc = __gcd(i, x);
            if(mdc>1) defesas.insert(i);
        }
    }

    int ans = m - defesas.size();
        
    cout << ans << '\n';
    return 0;
}