#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int a,b,c;
        cin >> a >> b >> c;

        int minimo = min(min(a,b),c);  
        int maximo = max(max(a,b),c);  
        
        if(a != minimo and a != maximo) cout << a << "\n";
        else if(b != minimo and b!=maximo) cout << b << "\n";
        else cout << c << "\n";

    }
}