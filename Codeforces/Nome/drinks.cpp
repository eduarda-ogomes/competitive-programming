#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    double soma = 0;

    for(int i =0; i<n; i++){
        double p;
        cin >> p;
        soma += p;
    }

    cout << soma/n << '\n';
}