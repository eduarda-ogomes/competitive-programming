#include <bits/stdc++.h>
using namespace std;

int main(){
    int k,n,w,custo=0;
    cin >> k >> n >> w;

    for(int i=1; i<=w;i++){
        custo += k*i;
    }
    int x = custo - n;

    if(x<0)cout << 0;
    else cout << x << endl;
}
