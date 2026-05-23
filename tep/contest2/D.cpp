#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,num;
    cin >> n;

    int maior=0, ans=0,atual=0;
    vector<int>x;
    for(int i=0; i<n; i++){
        cin >> num;
        x.push_back(num);

        maior = max(x[i],maior);
    }
    for(int i=0; i<n; i++){
        if(x[i]==maior){
            atual++;
            ans=max(ans,atual);
        }
        else atual=0;
    }

    cout << ans << '\n';
}