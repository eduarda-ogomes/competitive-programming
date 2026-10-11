#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m,x;
    cin >> n >> m;

    vector<int> a(n);
    for(auto &x:a) cin >> x;

    vector<int> distinto(n+2,0);
    vector<bool> visto(100005, false);

    for(int i=n-1; i >= 0 ; i--){
        if(!visto[a[i]]){
            visto[a[i]] = true;
            distinto[i+1] = distinto[i+2] +1;
        } else{
            distinto[i+1] = distinto[i+2];
        }
    }

    while(m--){
        int l;
        cin >> l;
        cout << distinto[l] << "\n";
    }
    
    return 0;
}