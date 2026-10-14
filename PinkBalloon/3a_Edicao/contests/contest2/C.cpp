#include <bits/stdc++.h>
using namespace std;

int main(){
    int p,a,b;
    cin >> p >> a >> b;

    int soma = a+b;

    if(p==0 and soma%2==0) cout << "0\n";
    else if(p==0 and soma%2 !=0) cout << "1\n";
    else if(p==1 and soma%2==0) cout << "1\n";
    else if(p==1 and soma%2 !=0) cout << "0\n";

    return 0;
}