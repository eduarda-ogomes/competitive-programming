#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    set<char> letras;

    for(char c : s){
        letras.insert(c);
    }

    if(letras.size() % 2 == 0) cout << "CHAT WITH HER!" << endl;
    else cout << "IGNORE HIM!" << endl;

    return 0;
}
