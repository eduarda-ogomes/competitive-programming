#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;

    string alfabeto;
    string mensagem;

    cin >> alfabeto >> mensagem;

    int q = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n ;j++){
            if(mensagem[i] == alfabeto[j]) {
                q++;
            }
        }
    }

    if(q==m) cout << "S\n";
    else cout << "N\n";

    return 0;
}