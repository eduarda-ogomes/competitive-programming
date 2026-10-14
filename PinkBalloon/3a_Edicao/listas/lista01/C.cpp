#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int t;
        cin >> t;
        int uni = t%10;
        int dez = t/10;
        cout << uni + dez << "\n";
    }
}