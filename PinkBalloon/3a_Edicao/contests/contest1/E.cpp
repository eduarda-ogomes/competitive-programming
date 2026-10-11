#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    set<int> fig;
    for(int i=0; i<m; i++){
        int x;
        cin >> x;
        fig.insert(x);
    }

    int semR = fig.size();

    cout << n-semR << "\n";
    
    return 0;
}