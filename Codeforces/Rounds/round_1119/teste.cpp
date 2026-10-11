#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n,k;
        string s;
        cin >> n >> k >> s;
        int multa=0;
        
        for(int i=0; i<n; i+=k){
            bool constroi = true;

            for(int j=0; j<k; j++){
                if(s[i+j] == '0'){
                    constroi = false;
                    break;
                }
            }
               if (constroi) multa++;
        }
        cout << multa << "\n";
    }
    
    return 0;
}
