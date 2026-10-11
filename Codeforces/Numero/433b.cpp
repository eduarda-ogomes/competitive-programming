#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> v1(n+1,0);
    vector<long long> v2(n+1,0);

    for(int i=1; i<=n; i++){
        cin >> v1[i];
        v2[i] = v1[i];
    }

    sort(v2.begin(),v2.end());

    vector<long long> pref1(n+1,0);
    vector<long long> pref2(n+1,0);

    for(int i=1; i<=n; i++){
        pref1[i] = pref1[i-1] + v1[i];
        pref2[i] = pref2[i-1] + v2[i];
    }

    int p;
    cin >> p;

    while(p--){
        int t,l,r;
        cin >> t >> l >> r;

        if(t==1){
            cout << pref1[r] - pref1[l-1] << "\n";
        } else{
            cout << pref2[r] - pref2[l-1] << "\n";
        }
    }

    return 0;
}
