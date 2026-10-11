#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    int maiscula = 0;
    int minuscula = 0;

    for(char c: s)if(isupper(c))maiscula++;
    else minuscula++;

    if(maiscula>minuscula){
        for(char &c: s){
            c = toupper(c);
        }
    } else{
        for(char &c : s){
            c = tolower(c);
        }
    }

    cout << s;
}
