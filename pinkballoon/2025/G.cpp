#include <bits/stdc++.h>
using namespace std;

int main(){
    int c,a;
    cin >> c >> a;

    int r=0;
    if(c>a) r = c/a+1;
    else r= 2;

    cout << c/2+1 << " " << r << '\n';
}