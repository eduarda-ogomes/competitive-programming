#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;

        int n = s.size();

        // 1. Contamos o total de '0's e '1's na string inteira
        int total0 = 0, total1 = 0;
        for(char c : s){
            if(c == '0') total0++;
            else total1++;
        }

        // Se transformarmos a string toda em '0's ou toda em '1's:
        int ans = min(total0, total1);

        // 2. Testamos cada ponto de corte (divisão entre esquerda e direita)
        int zeros_esq = 0, uns_esq = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0') zeros_esq++;
            else uns_esq++;

            int zeros_dir = total0 - zeros_esq;
            int uns_dir = total1 - uns_esq;

            // Opção A: Esquerda com '0's e Direita com '1's
            // (trocamos os 1s da esquerda e os 0s da direita)
            int custoA = uns_esq + zeros_dir;

            // Opção B: Esquerda com '1's e Direita com '0's
            // (trocamos os 0s da esquerda e os 1s da direita)
            int custoB = zeros_esq + uns_dir;

            ans = min({ans, custoA, custoB});
        }

        cout << ans << "\n";
    }

    return 0;
}