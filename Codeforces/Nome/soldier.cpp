#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w;
    cin >> k >> n >> w;

    long long custo = k*w*(w+1)/2;

    if(custo>n) cout << custo - n << endl;
    else cout << 0 << endl;
    return 0;
}