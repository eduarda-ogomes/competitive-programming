#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a,b;
    cin >> a >> b;

    long long A=0,B=0,C=0, onesA=0;

    for(int i=0;i<n;i++){
        if(a[i]=='1') onesA++;

        if(a[i]=='0' && b[i]=='0') A++;
        else if(a[i]=='1' && b[i]=='0') B++;
        else if(a[i]=='0' && b[i]=='1') C++;
    }

    cout << A*onesA + C*B << '\n';
}