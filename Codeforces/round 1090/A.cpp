#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    while(n--){
        int x;
        cin >> x;
        cout << (x<67 ? x+1 : x ) << '\n';
    }

    return 0;
}