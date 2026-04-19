#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,x,y,number;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    reverse(s.begin(), s.end());

    int ans=0;

    for(int i=0;i<x;i++){
        char esperado = (i == y ? '1' : '0');
        if(s[i] != esperado) ans++;
    }

    cout << ans << '\n';

    return 0;
}