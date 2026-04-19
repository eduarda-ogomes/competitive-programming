#include <bits/stdc++.h>
using namespace std;

using ll = long long;

ll verdes(ll x){
    return x - x/3 - x/5 + x/15;
}

int main(){
    ll p;
    cin >> p;

    ll l = 1, r = 2e18, ans;

    while(l <= r){
        ll mid = l + (r-l)/2;

        if(verdes(mid) >= p){
            ans = mid;
            r = mid - 1;
        }else{
            l = mid + 1;
        }
    }

    while(ans % 3 == 0 || ans % 5 == 0)
        ans--;

    cout << ans << '\n';
}