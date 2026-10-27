#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (!(cin >> t)) return 0;
    while(t--){
        int n;
        cin >> n;

        vector<long long> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        long long ans = a[0];
        long long min_s = a[0];
        long long max_s = a[0];

        for(int i = 1; i < n; i++){
            long long x = a[i];

            // 1. O melhor valor que a[i] pode atingir neste passo
            long long melhor_ai = max({
                x,
                x + max_s,
                x - min_s,
                x + min_s,
                x - max_s
            });
            ans = max(ans, melhor_ai);

            // 2. Os novos limites para a soma acumulada s
            long long s1 = x;
            long long s2_max = max_s + x;
            long long s3_max = 2 * max_s + x;
            long long s2_min = min_s + x;
            long long s3_min = 2 * min_s + x;

            min_s = min({s1, s2_max, s3_max, s2_min, s3_min});
            max_s = max({s1, s2_max, s3_max, s2_min, s3_min});
        }

        cout << ans << "\n";
    }

    return 0;
}

/*
  =============================================================================
  Codeforces - B. Prefix (2274B)
  =============================================================================

  [O QUE O PROBLEMA PEDE?]
  - Você tem um array de n inteiros.
  - Para cada i de 2 até n, você calcula s = soma dos elementos anteriores.
  - Você pode substituir a[i] por: (a[i] - s), (a[i]) ou (a[i] + s).
  - Objetivo: encontrar o MAIOR valor possível que qualquer elemento do array
    pode atingir ao final.

  [A LÓGICA / COMO RESOLVER]
  - Para deixar um elemento o maior possível:
      * Se s for muito positivo: escolhemos a[i] + max_s.
      * Se s for muito negativo: escolhemos a[i] - min_s (subtrair negativo = somar!).
  - As novas opções para a soma s a cada passo são:
      * a[i]            (quando escolhemos a[i] - s, a soma reseta para a[i])
      * s + a[i]        (quando mantemos a[i])
      * 2*s + a[i]      (quando escolhemos a[i] + s, a soma dobra!)
  - Como todas essas opções são crescentes em relação a s:
      * O maior novo s sempre vem do maior s anterior (max_s).
      * O menor novo s sempre vem do menor s anterior (min_s).
  - Basta manter min_s e max_s a cada passo em O(n)!
*/
