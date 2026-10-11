#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    
    while(n--){
        int s = 0, x, mx = -1e9;

        for(int i=0;i<7;i++){
            cin >> x;
            s += x;
            mx = max(mx,x);
        }

        cout << 2*mx - s << '\n';
    }

    return 0;
}