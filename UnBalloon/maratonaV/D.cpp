#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    unsigned long long n;
    cin >> n;

    int d[10];
    int total=0;
    for(int i=0; i<10; i++){
        cin >> d[i];
        total += d[i];
    }

    vector<int> digitos;
    for(int i=0; i<10; i++)
        for(int j=0; j<d[i]; j++)  
            digitos.push_back(i);

    sort(digitos.begin(), digitos.end());

    int soma = 0;

    do{
        unsigned long long val=0;
        bool overflow = false;

        for(int i=0; i< total; i++){
            if(val> (unsigned long long)2e18/10){
                overflow = true;
                break;
            }

            val = val * 10 + digitos[i];
            if(val>(unsigned long long)2e18){
                overflow = true;
                break;
            }
        }

        if(!overflow && val <= n) soma++;
    } while(next_permutation(digitos.begin(), digitos.end()));

    cout << soma << '\n';

    return 0;
}