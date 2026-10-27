#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int soma = 0;

    for(int i=0; i<6; i++){
        int digito = n%10;
        int calculo = digito * (i+2);
        soma += calculo;
        n = n/10;
    }

    int resto = soma%11;
    int ans = 11-resto;

    cout << ans << "\n";
  
    return 0;
}