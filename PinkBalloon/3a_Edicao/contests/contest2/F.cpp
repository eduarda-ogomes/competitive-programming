#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        int interacao = i;
        while(interacao--){
            cout << setfill('0') << setw(2) <<  i << " ";
        }
        cout << "\n";
    }

    cout << "\n";

    for(int i=1; i<=n; i++){
        int interacao = i;
        for(int j=1; j<=i; j++){
            cout << setfill('0') << setw(2) <<  j << " ";
        }
        cout << "\n";
    }

    return 0;
}