#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b;
    cin >> n >> a >> b;

    while(b>0){
        a++;
        if(a>n)a=1;
        b--;
    }        
    while(b<0){
        a--;
        if(a==0)a=n;  
        b++;  
    }
    cout << a << '\n';
}