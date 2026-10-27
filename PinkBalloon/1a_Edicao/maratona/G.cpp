#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin >> n >> p;

    if(p<=n) cout << "Sim\n";
    else if(n*3 >= p) cout << "Sim\n";
    else cout << "Nao\n";

    return 0;
}