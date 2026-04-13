#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int fx=0,fy=0,fz=0;

    while(n--){
        int x,y,z;
        cin >> x >> y >> z;
        fx +=x;
        fy += y;
        fz += z;
    }

    cout << (fx==0 and fy==0 and fz==0 ? "YES" :  "NO") << '\n';

    return 0;
}