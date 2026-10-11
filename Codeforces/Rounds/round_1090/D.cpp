#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long> a(n);
        a[0] = 1;

        for(int i=1; i<n; i++){
            a[i] = a[i-1] + i;

        for(int i=0; i<n; i++) cout << a[i] << " ";
        cout << "\n";
    }
}
}