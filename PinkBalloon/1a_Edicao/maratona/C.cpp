#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=0; i<n; i++){
        int a,b,c;
        cin >> a >> b >> c;
        int ans = 6+5+4+3+2+1 - a -b -c;
        cout << ans << "\n";
    }

    return 0;
}