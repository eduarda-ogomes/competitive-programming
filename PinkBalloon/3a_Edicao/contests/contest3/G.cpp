#include <bits/stdc++.h>
using namespace std;

#define int long long
int32_t main() {
    int n,m;
    cin >> n >> m;

    int ans;
    for(int i=m; i>0; i--){
        int gdm = __gcd(n,i);
        if(gdm == 1) {
            ans = i;
            break;
        }
    }
    
    cout << ans << "\n";
    return 0;
}


// acertei a resolução mas barrou nos testes
// pq valor passava de int, mudei pra long long