#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,passos=0;
    cin >> n;

    while(n>0){
        if(n>=5){
            passos++;
            n -= 5;
        }else if(n>=4){
            passos++;
            n -= 4;
        }else if(n>=3){
            passos++;
            n -= 3;
        }else if(n>=2){
            passos++;
            n -= 2;
        }else if(n>=1){
            passos++;
            n -= 1;
        }
    }

    cout << passos << endl;
    return 0;
}
