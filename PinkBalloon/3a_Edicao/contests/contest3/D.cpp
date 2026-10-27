#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    getline(cin,s);

    string frase = "";
    for(int i=0; i< s.size(); i++){
        if(s[i]=='p') {
            i++;
            frase += s[i]; 
        }
        else frase += s[i];
    }

    cout <<  frase << "\n";
    return 0;
}