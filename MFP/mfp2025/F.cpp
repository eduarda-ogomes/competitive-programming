#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p,k;
    cin >> n >> p >> k;

    vector<int> sentado;
    for(int i=1; i<=n; i++){
        if(i != p) sentado.push_back(i);
    }

    int start = 0;
    for(int i=0; i < sentado.size(); i++){
        if(sentado[i]>p){
            start = i;
            break;
        }
    }

    cout << sentado[(start+k) % sentado.size()] << "\n";
    
    return 0;
}