#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> estoque(n);
    for(int i=0; i<n;i++){
        int x;
        cin >> x;
        estoque[i] = x;
    }

    int p;
    cin >> p;

    int vendas = 0;
    while(p--){
        int t;
        cin >> t;

        if(estoque[t-1]>0){
             vendas++;
             estoque[t-1]--;
        }
    }

    cout << vendas << "\n";

    return 0;
}