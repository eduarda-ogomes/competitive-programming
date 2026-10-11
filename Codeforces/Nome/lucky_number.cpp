#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;
    cin >> n;

    int contador=0;

    while(n>0){
        int dig = n % 10;

        if(dig==4 || dig==7)contador++;

        n /= 10;
    }

    if(contador==4 || contador==7) cout << "YES" << endl;
    else cout << "NO" << endl;


}
