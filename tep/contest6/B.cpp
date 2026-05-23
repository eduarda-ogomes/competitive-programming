#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,a,b;
    cin >> t;

    int ans = 0;
    while(t--){
        cin >> n >> a >> b;

        ans = max(n-a , n-b) + 1; 

        cout << ans << "\n";
    }

    return 0;
}