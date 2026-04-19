#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    char letra;

    int anton=0, danik=0;


    while(n--){
        cin >> letra;
        if(letra == 'A') anton++;
        else danik++;
    }

    if(anton>danik) cout << "Anton" << '\n';
    else if(danik>anton) cout << "Danik" << '\n';
    else cout << "Friendship" << '\n';
}