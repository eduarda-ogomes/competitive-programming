#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;

        long long p = 0;
        int sinal = 1;

        for(int i = 0; i < n; i++){
            long long a;
            cin >> a;
            p += sinal * a;
            sinal = -sinal;
        }

        cout << p << "\n";
    }

    return 0;
}

/*
  =============================================================================
  Codeforces - The Projections of Paco (2274A)
  =============================================================================

  [O QUE O PROBLEMA PEDE?]
  - Você tem uma ficha que começa na posição 0.
  - Você escolhe um número 'p'.
  - A ficha é refletida pelo ponto 'p', e depois pelos pontos a[0], a[1], ..., a[n-1].
  - No final de todas as reflexões, a ficha PRECISA parar exatamente no 0.
  - Objetivo: descobrir qual deve ser o valor de 'p'.

  -----------------------------------------------------------------------------
  [O QUE É "REFLETIR" UM PONTO?]
  Refletir um número 'x' em torno de um espelho 'c' significa:
  "andar para o outro lado de 'c' com a mesma distância".
  
  A conta é sempre: nova_posicao = 2*c - x.

  -----------------------------------------------------------------------------
  [A INTUIÇÃO / COMO CHEGAR NA RESPOSTA]
  Vamos ver onde a ficha vai parar passo a passo:

  1. A ficha começa em 0.
  2. Reflete em p:
     pos = 2*p - 0 = 2*p
  3. Reflete em a[0]:
     pos = 2*a[0] - 2*p
  4. Reflete em a[1]:
     pos = 2*a[1] - (2*a[0] - 2*p) = 2*a[1] - 2*a[0] + 2*p
  5. Reflete em a[2]:
     pos = 2*a[2] - (pos anterior) = 2*a[2] - 2*a[1] + 2*a[0] - 2*p

  Como a ficha DEVE terminar em 0, igualamos a última posição a 0!
  Veja o que acontece com 'p':
  - Se tem 1 ponto: 2*a[0] - 2*p = 0             ==> p = a[0]
  - Se tem 2 pontos: 2*a[0] - 2*a[1] - 2*p = 0   ==> p = a[0] - a[1]
  - Se tem 3 pontos:                             ==> p = a[0] - a[1] + a[2]
  - Se tem 4 pontos:                             ==> p = a[0] - a[1] + a[2] - a[3]

  O padrão é direto e não muda:
  O 'p' é apenas a SOMA ALTERNADA dos números da entrada!
  p = a[0] - a[1] + a[2] - a[3] + a[4] - ...

  -----------------------------------------------------------------------------
  [COMO O CÓDIGO RESOLVE]
  - Começamos com p = 0 e sinal = 1 (+1).
  - A cada número que lemos:
      * Somamos (sinal * a) no 'p'.
      * Invertemos o sinal (sinal = -sinal) para a próxima volta do loop.
  - Usamos 'long long' para não estourar limite de inteiros se a soma for grande.
*/