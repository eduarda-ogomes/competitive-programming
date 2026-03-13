#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r=0;
    cin >> n;

    for(int i=0; i<n; i++){
        int p,v,t;
        cin >> p >> v >> t;
        if((p+v+t) >=2) r++;
    }

    cout << r << endl;
}
