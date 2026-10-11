#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int ans=0;
    while(n--){
        int r;
        cin >> r;
        ans +=r;
    }

    if(ans==0) cout << "EASY" << '\n';
    else cout << "HARD" << '\n';
}