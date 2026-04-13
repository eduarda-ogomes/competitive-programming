#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int jogos = 0;

    if(n>=8){
        n -= 8;
        jogos++;
    }
    if(n>=4){
        n -=4;
        jogos++;
    }
    if(n>=2){
        n -= 2;
        jogos++;
    }
    if(n>=1){
        n -= 1;
        jogos++;
    }

    cout << jogos << endl;

    return 0;
}