#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<vector<ll>> mat(n, vector<ll>(n));
    for(auto &linha : mat) {
        for(auto &x : linha) {
            cin >> x;
        }
    }
    
    vector<vector<ll>> dp(n, vector<ll>(n));
    ll melhor = -1e18;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            dp[i][j] = mat[i][j];
            
            if(i > 0) {
                dp[i][j] = max(dp[i][j], dp[i-1][j] + mat[i][j]);
            }
            if(j > 0) {
                dp[i][j] = max(dp[i][j], dp[i][j-1] + mat[i][j]);
            }
            
            melhor = max(melhor, dp[i][j]);
        }
    }
    
    cout << melhor << endl;
    
    return 0;
}