#include <bits/stdc++.h>
using namespace std;

int main(){
    long long t,n,k;
    cin >> t;
    
    while(t--){
        cin >> n >> k;
        long long passos=0;

        if(n<k)cout << n << '\n';
        else{
            while(n>0){
                if(n%k==0){
                    n = n/k;
                    passos++;
                }
                else{
                    long long r = (n%k);
                    n -=r;
                    passos+=r;
                    if(n>0){
                        n = n/k;
                        passos ++;
                    }
                }         
        }
        cout << passos << '\n';
        }
    }
    return 0;
}