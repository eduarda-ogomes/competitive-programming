#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,r,p;
    cin >> n >> r >> p;

    int dias = 0;
    int infectadoOntem = n;
    int somaInfectado = n;
    while (somaInfectado < p){
        int infectadoHoje = infectadoOntem * r;
        somaInfectado += infectadoHoje;
        dias++;
        infectadoOntem = infectadoHoje;
    }

    cout << dias << "\n";


    return 0;
}