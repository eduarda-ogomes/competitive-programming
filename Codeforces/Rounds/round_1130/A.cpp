#include <bits/stdc++.h>
using namespace std;

int main() {
    // Otimização para leitura rápida de entrada e saída
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_casos;
    cin >> total_casos;
    
    while (total_casos--) {
        int n, k;
        cin >> n >> k;
        
        vector<int> array_a(n);
        for (int i = 0; i < n; i++) {
            cin >> array_a[i];
        }
        
        // Função lambda para calcular o MEX de cada prefixo
        auto calcular_mex_prefixos = [&](const vector<int>& arr) {
            vector<int> f(n);
            set<int> ausentes;
            for (int x = 0; x <= n; x++) {
                ausentes.insert(x);
            }
            
            for (int i = 0; i < n; i++) {
                ausentes.erase(arr[i]);
                f[i] = *ausentes.begin(); // O menor elemento que ainda não apareceu
            }
            return f;
        };
        
        // Avalia o estado original (sem fazer nenhuma troca)
        vector<int> f_original = calcular_mex_prefixos(array_a);
        vector<int> ordenado_original = f_original;
        sort(ordenado_original.rbegin(), ordenado_original.rend()); // Do maior para o menor
        
        int melhor_valor = ordenado_original[k - 1]; // O k-ésimo maior (índice k-1)
        int melhor_i = -1;
        int melhor_j = -1;
        
        // Testa todas as trocas possíveis entre i e j
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                // Faz a troca
                swap(array_a[i], array_a[j]);
                
                vector<int> f_atual = calcular_mex_prefixos(array_a);
                vector<int> ordenado_atual = f_atual;
                sort(ordenado_atual.rbegin(), ordenado_atual.rend());
                
                int valor_atual = ordenado_atual[k - 1];
                
                // Se encontrou um k-ésimo maior valor melhor, guarda a troca
                if (valor_atual > melhor_valor) {
                    melhor_valor = valor_atual;
                    melhor_i = i + 1; // 1-indexed para o padrão de saída do problema
                    melhor_j = j + 1;
                }
                
                // Desfaz a troca para testar a próxima
                swap(array_a[i], array_a[j]);
            }
        }
        
        // Imprime a resposta do caso de teste atual
        if (melhor_i == -1) {
            cout << -1 << "\n";
        } else {
            cout << melhor_i << " " << melhor_j << "\n";
        }
    }
    
    return 0;
}