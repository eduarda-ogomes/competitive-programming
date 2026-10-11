#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,p;
    cin >> n >> p;
    int bac = 1;
    int dias = 0;
    while(bac<=n){
        bac *=p;
        if(bac>n) break;
        dias++;
    }

    cout << dias <<  "\n";
    return 0;
}