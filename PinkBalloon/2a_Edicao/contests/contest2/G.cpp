#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> n;
    for(int i=0;i<3;i++){
        int ia;
        cin >> ia;
        n.push_back(ia);
    }
    
    sort(n.begin(), n.end());

    if((n[2] - n[0]) >=10) cout << "check again" << '\n';
    else cout << "final " << n[1] << '\n';
}