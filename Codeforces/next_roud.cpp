#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k,r=0;
    cin >> n >> k;

    vector<int>p(n);
    for(int i=0; i<n; i++){
        cin >> p[i];
    }

    int corte = p[k-1];
    for(int i=0; i<n; i++){
        if(p[i]>=corte and p[i]>0)r++;
    }

    cout << r << endl;


}
