#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;

    int n = s.size();
    vector<int> psum(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        psum[i] = psum[i - 1];
        if (s[i - 1] == s[i - 2]) {
            psum[i]++;
        }
    }

    int m;
    cin >> m;

    while(m--){
        int l,r;
        cin >> l >> r;
        int ans = psum[r] - psum[l];
        cout << ans << "\n";
    }

    return 0;
}

/*
  Codeforces 313B - Ilya and Queries

  [O que o problema pede?]
  Ilya o Leão quer ajudar os amigos no exame de TI.
  Você recebe uma string só com '.' e '#' e várias consultas com intervalo (l, r).
  Para cada intervalo, você precisa contar quantas vezes dois caracteres vizinhos
  são iguais dentro daquele pedaço da string.

  Exemplo: na string "#..###", de 1 a 6 temos 3 pares iguais:
  - os dois pontos ".." (1 par)
  - os três hashtags "###" (2 pares)
  Total = 3. O problema não conta "grupos", conta cada par colado!

  [Como resolver?]
  Se a gente fizesse um 'for' para cada consulta, daria Tempo Limite Excedido (TLE),
  pois são até 100 mil consultas.

  A solução é pré-calcular a soma acumulada (Prefix Sum):
  - Guardamos no vetor psum[i] quantos pares iguais existem até o caractere i.
  - Com 1 caractere só, não existe nenhum par -> psum[1] = 0.
  - A partir do 2º caractere (i = 2 até n), comparamos o atual com o anterior.
    Como em C++ os índices começam no 0:
    * o caractere atual é s[i - 1]
    * o caractere anterior é s[i - 2]
    Se forem iguais, somamos +1 no acumulado!

  Com isso pronto, cada consulta é respondida na hora em uma única conta:
  resposta = psum[r] - psum[l];

  [Cuidado com as pegadinhas!]
  1. C++ começa em 0, mas o problema começa em 1:
     O 1º caractere do problema é s[0], o 2º é s[1], e assim por diante.
  2. Quantidade de pares:
     Em um pedaço de l até r, temos apenas r - l pares.
     A fórmula psum[r] - psum[l] já cuida disso sem você precisar fazer loops.
  3. Entrada rápida:
     Como tem até 100 mil consultas, usar ios_base::sync_with_stdio(false) e
     cin.tie(NULL) evita estourar o tempo por lentidão de leitura.
*/
