#include <bits/stdc++.h>
using namespace std;

// Tabela para guardar a capacidade de cada K (de 1 a 500)
long long cap[505];

void precalc() {
    for (int K = 1; K <= 500; K++) {
        long long total = 0;
        for (int i = 1; i <= K; i++) {
            total += i * (K / i);
        }
        cap[K] = total;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // Pré-calcula uma única vez antes de rodar os casos
    precalc();

    int t;
    if (!(cin >> t)) return 0;
    
    while(t--){
        int n;
        cin >> n;

        // 1. Acha o menor K que aguenta n laranjas
        int K = 1;
        while(cap[K] < n){
            K++;
        }

        cout << K << "\n";

        // 2. Monta as sacolas de forma gulosa (do maior para o menor)
        int restante = n;
        vector<int> tamanho_sacolas;
        for(int i = K; i >= 1; i--){
            int limite_sacolas = K / i;
            int qtd = min(limite_sacolas, restante / i);
            for(int j = 0; j < qtd; j++){
                tamanho_sacolas.push_back(i);
            }
            restante -= qtd * i;
        }

        // 3. Imprime as sacolas de cada laranja
        int sacola_id = 1;
        bool primeiro = true;
        for(int tam : tamanho_sacolas){
            for(int j = 0; j < tam; j++){
                if(!primeiro) cout << " ";
                cout << sacola_id;
                primeiro = false;
            }
            sacola_id++;
        }
        cout << "\n";
    }

    return 0;
}

/*
  =============================================================================
  Codeforces - C. Lavencia Oranges (2274C)
  =============================================================================

  [O QUE O PROBLEMA PEDE?]
  - Você tem n laranjas e n sacolas.
  - A alfândega escolhe um número 's' e confisca TODAS as sacolas que têm
    exatamente 's' laranjas dentro.
  - O fiscal sempre escolhe o 's' que rouba o maior número total de laranjas.
  - O custo é essa quantidade confiscada: max(i * c_i), onde c_i é quantas
    sacolas têm tamanho i.
  - Objetivo: distribuir as laranjas de forma que esse custo máximo seja o
    MENOR possível.

  -----------------------------------------------------------------------------
  [A LÓGICA / COMO RESOLVER]
  1. Se o custo máximo permitido for K:
     - Para sacolas de tamanho i, o total de laranjas nelas não pode passar de K:
       i * c_i <= K  ==>  c_i <= K / i.
     - A capacidade máxima total de laranjas que um custo K aguenta guardar é:
       capacidade(K) = soma de i * (K / i) para todo i de 1 até K.

  2. Como achar o menor K?
     - Como a capacidade cresce com K^2, para n = 200.000 o valor de K nunca
       passa de 494!
     - Fazemos um pré-cálculo rápido de capacidade(K) até 500 no início.
     - O menor K válido é simplesmente o primeiro onde capacidade(K) >= n.

  3. Como distribuir as laranjas nas sacolas (Gulosa / Greedy):
     - Vamos do maior tamanho i = K até i = 1.
     - Pegamos o máximo de sacolas de tamanho i permitidas (min(K/i, restante/i)).
     - Como temos sacolas de tamanho 1 no final, a conta SEMPRE fecha perfeitamente
       em exatamente n laranjas.
     - Depois, é só numerar as sacolas 1, 2, 3... e imprimir a qual sacola
       cada laranja pertence!
*/