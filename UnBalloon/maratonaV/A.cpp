#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--){
        int k;
        string l;
        cin >> k >> l;

        char letra = l.back();

        int p = letra - 'A' + 1;

        if(k&1 && p==(k+1)/2) cout << "S\n";
        else cout << "N\n";
    }

    return 0;
}