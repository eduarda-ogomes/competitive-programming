#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s,p;
    cin.ignore();
    getline(cin,s);
    getline(cin,p);

    map<char,int> dic;
    for(char letra:s){
        if (isalpha(letra)){
            dic[letra]++;
        }
    }

    map<char,int> prompt;
    for(char letra:p){
        if (isalpha(letra)){
            prompt[letra]++;
        }
    }

    int igual = true;
    for(char letra:p){
        if(dic[letra]!=prompt[letra]){
            igual = false;
            break;
        }
    }

    if(igual) cout <<  "S\n";
    else cout << "N\n";
    return 0;
}