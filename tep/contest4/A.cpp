#include <bits/stdc++.h>
using namespace std;

int main(){
    int t,n,x;
    cin >> t;
    
    while(t--){
        cin >> n >> x;
        if(n<=2) cout << 1 << '\n';
        else{
            int andar = ((n-3)/x)+2;
            cout << andar << '\n'; 
        }         
    }
    return 0;
}