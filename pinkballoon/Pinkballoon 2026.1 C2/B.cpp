#include <bits/stdc++.h>
using namespace std;

int main(){
    int amigos,altura;
    cin >> amigos >> altura;

    int ans=0;

    while(amigos--){
        int p;
        cin >> p;

        if(p>altura)ans+=2;
        else ans++;
    }

    cout << ans << '\n';
}