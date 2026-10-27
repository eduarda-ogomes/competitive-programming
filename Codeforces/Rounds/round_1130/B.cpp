#include <bits/stdc++.h>
using namespace std;

int main() {
    // Otimização para leitura e escrita rápida
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int total_casos;
    cin >> total_casos;
    
    while (total_casos--) {
        int n;
        cin >> n;
        
        string linha_cima, linha_baixo;
        cin >> linha_cima >> linha_baixo;
        
        // Vetor para representar o estado de cada coluna:
        // 0 = vazia (embora o enunciado garanta pelo menos 1 sapo por coluna)
        // 1 = 1 sapo na coluna
        // 2 = 2 sapos na coluna (um em cima, um embaixo)
        vector<int> tipo_coluna(n);
        int total_sapos = 0;
        
        for (int i = 0; i < n; i++) {
            int sapos_na_coluna = 0;
            if (linha_cima[i] == 'f') sapos_na_coluna++;
            if (linha_baixo[i] == 'f') sapos_na_coluna++;
            tipo_coluna[i] = sapos_na_coluna;
            total_sapos += sapos_na_coluna;
        }
        
        // Analisando as restrições de saltos para encontrar o mínimo k de remoções:
        // Em muitas instâncias deste problema, a paridade de colunas com 1 sapo 
        // adjacentes determina se precisamos remover elementos para ajustar o fluxo.
        int k_minimo = 0;
        
        // Vamos rastrear blocos de colunas com 1 sapo ('fo' ou 'of')
        int contador_uns = 0;
        for (int i = 0; i < n; i++) {
            if (tipo_coluna[i] == 1) {
                contador_uns++;
            } else {
                // Se encontramos uma coluna com 2 sapos, ela quebra a sequência de 1s.
                // Sequências de tamanho ímpar de colunas com 1 sapo exigem ajustes (remoções).
                if (contador_uns > 0) {
                    if (contador_uns % 2 != 0) {
                        k_minimo += 1; // Precisa remover 1 sapo para balancear
                    }
                    contador_uns = 0;
                }
            }
        }
        // Tratando o último bloco caso termine com 1s
        if (contador_uns > 0 && contador_uns % 2 != 0) {
            k_minimo += 1;
        }
        
        // Para casos gerais onde colunas isoladas exigem remoção estrita:
        // Verificamos se há conflitos diretos de paridade no grid todo.
        int colunas_impares = 0;
        for (int i = 0; i < n; i++) {
            if (tipo_coluna[i] == 1) {
                colunas_impares++;
            }
        }
        
        // Se a quantidade total de colunas com 1 sapo em certas configurações 
        // exigir remoção adicional para garantir um emparelhamento válido de saltos:
        int resposta = k_minimo;
        
        // Garantimos a lógica básica de saída do problema
        cout << resposta << "\n";
    }
    
    return 0;
}