#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int estacao = (1 << n) - 1;
    
    vector<int> moedas(estacao+2);
    
    for(int i=1; i<= estacao; i++){
        cin >> moedas[i];
    }

    for(int i = estacao/2; i>=1; i--){
        moedas[i] += max(moedas[2*i], moedas[2*i +1]);
    }

    cout << moedas[1] << endl;
}