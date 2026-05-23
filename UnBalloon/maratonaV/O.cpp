#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    
    vector<long long> v(n);
    for(auto &x : v) cin >> x;
    
    long long total = 0;
    for(auto x : v) total += x;
    
    vector<long long> pref(n+1, 0);
    for(int i = 0; i < n; i++) {
        pref[i+1] = pref[i] + v[i];
    }
    
    vector<long long> suf(n+1, 0);
    for(int i = n-1; i >= 0; i--) {
        suf[n-i] = suf[n-i-1] + v[i];
    }
    
    long long L = 0, R = total, resposta = total;
    
    while(L <= R) {
        long long T = (L + R) / 2;
        bool possivel = false;
        
        // Pré-processar sufixos válidos (suf[j] ≤ T)
        // Mas para simplificar, vamos fazer a busca direta com dois ponteiros
        
        int j = 1;  // ponteiro para o sufixo
        for(int i = 0; i <= n; i++) {
            if(pref[i] > T) break;
            
            // Ajustar j para o maior possível
            while(j <= n - i && suf[j] <= T) {
                j++;
            }
            j--;  // último válido
            
            // Agora verificar se algum sufixo válido atende a condição
            // Precisamos de suf[j] ≥ total - T - pref[i]
            // Vamos procurar no range [1, j]
            
            long long precisa = total - T - pref[i];
            
            // Busca binária no sufixo
            int lo = 1, hi = j, best = -1;
            while(lo <= hi) {
                int mid = (lo + hi) / 2;
                if(suf[mid] >= precisa) {
                    best = mid;
                    hi = mid - 1;
                } else {
                    lo = mid + 1;
                }
            }
            
            if(best != -1 && best <= n - i) {
                possivel = true;
                break;
            }
        }
        
        if(possivel) {
            resposta = T;
            R = T - 1;
        } else {
            L = T + 1;
        }
    }
    
    cout << resposta << endl;
    
    return 0;
}