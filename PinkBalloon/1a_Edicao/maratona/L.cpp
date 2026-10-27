#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,a;
    cin >> h >> a;

    int soma = h*2*a*365;

    int anos = soma/ (365*24);
    int resto = soma % (365*24);
    int dias = resto/24;
    int horas = resto % 24;

    cout << anos << " ano(s)\n" << dias << " dia(s)\n" << horas << " hora(s)";
}