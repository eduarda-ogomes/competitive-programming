#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >>  s;

    int cont = 1;
    for(size_t i = 1; i<s.size(); i++){
        if(s[i] == s[i-1]){
            cont++;
        }else cont = 1;

        if(cont >=7){
            cout << "YES\n";
            return 0;
        } 
    }

    cout << "NO\n";
    return 0;
}
