
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int pares=0, impar=0,indice=1;

    while(n--){
        int x;
        cin >> x;

        if(indice%2==0) pares += x;
        else impar += x;

        indice++;
    }

    cout << max(pares,impar);
}