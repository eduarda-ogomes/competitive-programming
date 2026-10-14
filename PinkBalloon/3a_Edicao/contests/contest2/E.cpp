#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,r;
    cin >> p >> r;

    if(p == 0) cout << "C\n";
    else if(p == 1 and r==1) cout << "A\n";
    else if(p == 1 and r==0) cout << "B\n";

    return 0;
}