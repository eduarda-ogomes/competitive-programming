#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    int espaço = (a-1) * 4;
    int total = espaço + a;

    if(b >= total) cout << 'S' << "\n";
    else cout << 'N' << "\n";

    return 0;
}