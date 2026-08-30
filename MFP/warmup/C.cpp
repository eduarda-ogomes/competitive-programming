#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n;

    while(n--){
        cin >> s;
        int l=0,d=0;
        vector<char>digitos, letras;

        if(s.size() <= 10) {
            cout << "N\n";
            continue;
        }

        bool achou_letra = false;
        bool regra3ok = true;
        
        for(char c : s){
            if(isalpha(c)) {
                achou_letra = true;
            }
            if(achou_letra && isdigit(c)){
                regra3ok = false;
                break;
            }
        }

        if(!regra3ok){
            cout << "N\n";
            continue;
        }

        for(char c : s){
            if(isalpha(c)) {
                l++;
                letras.push_back(c);
            }
            if(isdigit(c)){
                d++;
                digitos.push_back(c);
            }
        }


        if(l==0 || d==0){
            cout << "N\n";
            continue;
        }

        if(!is_sorted(letras.begin(), letras.end()) || !is_sorted(digitos.begin(), digitos.end())){
            cout << "N\n";
            continue;
        }

        cout << "S\n";
    }

    return 0;
}