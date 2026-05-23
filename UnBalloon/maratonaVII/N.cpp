#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    vector<long long> freq(m+2,0);
    for(int i=0; i<n; i++){
        int r;
        cin >> r;
        freq[r] += r;
    }

    for(int i=m-1; i>=1; i--){
        freq[i] += freq[i+1];
    }

    for(int i=1; i<=m; i++){
        cout << freq[i] <<  " ";
    }

    return 0;
}